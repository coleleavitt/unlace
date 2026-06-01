/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_484BB0
// Address: 0x0000000000484BB0

//----- (0000000000484BB0) ----------------------------------------------------
__int64 __fastcall sub_484BB0(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  char *v4; // r13
  signed int v5; // r12d
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r13
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned __int64 v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v3 = a1[5];
  if ( v3 )
  {
    v4 = (char *)a1[4];
    if ( *v4 < 0 )
      return 0;
    v5 = 1 << (*v4 & 0xF);
    if ( v5 > 8 || __CFADD__(a1[1], a2) )
      return 0;
    v6 = a2 - a1[3];
    if ( a2 != a1[3] )
    {
      v7 = (unsigned __int64)(v4 + 1);
      v8 = (unsigned __int64)&v4[v3];
      v13[0] = v7;
      if ( v7 >= v8 )
      {
LABEL_13:
        a1[3] = a2;
        return 1;
      }
      while ( 1 )
      {
        v9 = sub_47FD50(v13, v8);
        v10 = v5 + v9;
        if ( v9 >= (unsigned int)v10 || v10 >= a1[1] )
          return 0;
        sub_484A90((__m128i *)(*a1 + v9), v5, v6, a3);
        if ( v13[0] >= v8 )
          goto LABEL_13;
      }
    }
  }
  return 1;
}
