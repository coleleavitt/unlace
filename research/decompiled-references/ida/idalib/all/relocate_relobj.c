__int64 __fastcall relocate_relobj(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rax
  char *v4; // r13
  int v5; // r12d
  __int64 v6; // r14
  char *v7; // rcx
  char *v8; // r13
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned int v12; // [rsp+Ch] [rbp-4Ch]
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

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
      v7 = v4 + 1;
      v8 = &v4[v3];
      v13[0] = v7;
      v12 = a3;
      if ( v7 >= v8 )
      {
LABEL_13:
        a1[3] = a2;
        return 1;
      }
      while ( 1 )
      {
        v9 = unpack_dd(v13);
        v10 = v5 + v9;
        if ( v9 >= (unsigned int)v10 || v10 >= a1[1] )
          return 0;
        reloc_value(*a1 + v9, (unsigned int)v5, v6, v12);
        if ( v13[0] >= (unsigned __int64)v8 )
          goto LABEL_13;
      }
    }
  }
  return 1;
}
