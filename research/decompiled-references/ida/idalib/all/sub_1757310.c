unsigned int *__fastcall sub_1757310(
        unsigned int *a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int *result; // rax
  char v23; // dl
  char v24; // dl
  bool v25; // zf
  unsigned __int64 v26; // [rsp+0h] [rbp-58h]
  unsigned __int64 v27; // [rsp+8h] [rbp-50h]
  unsigned int *v28; // [rsp+10h] [rbp-48h]

  v10 = ((char *)a2 - (char *)a1) >> 4;
  v11 = a2 - a1;
  v12 = a1;
  if ( v10 <= 0 )
  {
LABEL_11:
    if ( v11 != 2 )
    {
      if ( v11 != 3 )
      {
        if ( v11 != 1 )
          return a2;
LABEL_19:
        v25 = sub_1757190(a3, a4, *v12, a4, a5, a6) == 0;
        result = a2;
        if ( !v25 )
          return v12;
        return result;
      }
      v23 = sub_1757190(a3, a4, *v12, a4, a5, a6);
      result = v12;
      if ( v23 )
        return result;
      ++v12;
    }
    v24 = sub_1757190(a3, a4, *v12, a4, a5, a6);
    result = v12;
    if ( v24 )
      return result;
    ++v12;
    goto LABEL_19;
  }
  v28 = &a1[4 * v10];
  while ( 1 )
  {
    v6 = *v12 | v6 & 0xFFFFFFFF00000000LL;
    if ( sub_1757190(a3, a4, v6, a4, a5, a6) )
      return v12;
    v7 = v12[1] | v7 & 0xFFFFFFFF00000000LL;
    if ( sub_1757190(a3, a4, v7, v19, v20, v21) )
      return v12 + 1;
    v26 = v12[2] | v26 & 0xFFFFFFFF00000000LL;
    if ( sub_1757190(a3, a4, v12[2], v13, v14, v15) )
      return v12 + 2;
    v27 = v12[3] | v27 & 0xFFFFFFFF00000000LL;
    if ( sub_1757190(a3, a4, v12[3], v16, v17, v18) )
      return v12 + 3;
    v12 += 4;
    if ( v12 == v28 )
    {
      v11 = a2 - v12;
      goto LABEL_11;
    }
  }
}
