/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: relocate_relobj
// Address: 0x00000001000811F0

//----- (00000001000811F0) ----------------------------------------------------
__int64 __fastcall relocate_relobj(_QWORD *a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  char *v5; // rax
  unsigned __int8 v6; // cl
  int v7; // r15d
  __int64 v9; // r12
  unsigned __int64 v10; // r14
  unsigned int v11; // eax
  _BYTE *v13; // [rsp+18h] [rbp-38h] BYREF

  if ( !a1 )
    return 0;
  v4 = a1[5];
  LOBYTE(v3) = 1;
  if ( v4 )
  {
    v5 = (char *)a1[4];
    if ( *v5 >= 0 )
    {
      v6 = *v5 & 0xF;
      v7 = 1 << v6;
      if ( v6 <= 3u && !__CFADD__(a2, a1[1]) )
      {
        v9 = a2 - a1[3];
        if ( a2 == a1[3] )
          return v3;
        v13 = v5 + 1;
        v10 = (unsigned __int64)&v5[v4];
        if ( (unsigned __int64)(v5 + 1) >= v10 )
        {
LABEL_13:
          a1[3] = a2;
          return v3;
        }
        while ( 1 )
        {
          v11 = unpack_dd((unsigned __int64 *)&v13, v10);
          if ( v11 + v7 <= v11 || a1[1] <= (unsigned __int64)(v11 + v7) )
            break;
          reloc_value((__int64 *)(*a1 + v11), v7, v9, a3);
          if ( (unsigned __int64)v13 >= v10 )
            goto LABEL_13;
        }
      }
    }
    return 0;
  }
  return v3;
}
// 100081256: variable 'v3' is possibly undefined
