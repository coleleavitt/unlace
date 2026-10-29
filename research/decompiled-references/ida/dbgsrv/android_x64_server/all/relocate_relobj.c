/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: relocate_relobj
// Address: 0x00000000000CB700

//----- (00000000000CB700) ----------------------------------------------------
__int64 __fastcall relocate_relobj(_QWORD *a1, __int64 a2, char a3)
{
  unsigned int v3; // r15d
  __int64 v4; // rbp
  char *v5; // rax
  int v6; // r12d
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  unsigned int v10; // eax
  unsigned __int64 v12[8]; // [rsp+8h] [rbp-40h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v4 = a1[5];
  LOBYTE(v3) = 1;
  if ( v4 )
  {
    v5 = (char *)a1[4];
    if ( *v5 >= 0 )
    {
      v6 = 1 << (*v5 & 0xF);
      if ( v6 <= 8 && !__CFADD__(a2, a1[1]) )
      {
        v8 = a2 - a1[3];
        if ( a2 == a1[3] )
          return v3;
        v12[0] = (unsigned __int64)(v5 + 1);
        v9 = (unsigned __int64)&v5[v4];
        if ( (unsigned __int64)(v5 + 1) >= v9 )
        {
LABEL_13:
          a1[3] = a2;
          return v3;
        }
        while ( 1 )
        {
          v10 = unpack_dd(v12, v9);
          if ( v10 + v6 <= v10 || a1[1] <= (unsigned __int64)(v10 + v6) )
            break;
          reloc_value((__int64 *)(*a1 + v10), v6, v8, a3);
          if ( v12[0] >= v9 )
            goto LABEL_13;
        }
      }
    }
    return 0;
  }
  return v3;
}
// CB76C: variable 'v3' is possibly undefined
