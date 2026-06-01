__int64 __fastcall sub_453E50(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  const char *v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  const char *v9; // rdx
  __int64 v10; // rax
  const char *v11; // rdx
  const char *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi
  const char *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 *v23; // rax
  __int64 v24; // rdi
  __int64 v26; // [rsp+10h] [rbp-78h] BYREF
  __int128 v27; // [rsp+18h] [rbp-70h]
  const char *v28; // [rsp+30h] [rbp-58h] BYREF
  __int128 v29; // [rsp+38h] [rbp-50h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a3 + 8);
  if ( !v5 )
  {
LABEL_32:
    sub_42D280((__int64)a1, a2, 0x8000000000000000LL, 4);
    return 2;
  }
  v26 = 0;
  v27 = 0;
  v6 = (const char *)&v26;
  v26 = qvector_reserve(&v26, 0, v5, 48);
  if ( !(unsigned __int8)sub_4297C0(a1, &v26, a3) )
  {
LABEL_25:
    v20 = v26;
    if ( v26 )
    {
      v21 = v27;
      if ( (_QWORD)v27 )
      {
        v22 = 0;
        do
        {
          v23 = (__int64 *)(v20 + 48 * v22);
          v24 = *v23;
          if ( *v23 )
          {
            v23[1] = 0;
            qfree(v24, v6);
            v20 = v26;
          }
          ++v22;
        }
        while ( v21 != v22 );
      }
      *(_QWORD *)&v27 = 0;
      qfree(v20, v6);
    }
    goto LABEL_32;
  }
  v7 = v27;
  v8 = 0;
  v28 = nullptr;
  v29 = 0;
  if ( !(_QWORD)v27 )
    goto LABEL_33;
  do
  {
    v9 = &s1;
    v10 = v26 + 48 * v8;
    if ( *(_QWORD *)(v10 + 8) )
      v9 = *(const char **)v10;
    sub_16FAA0((__int64 *)&v28, (__int64)"%s\n", v9);
    ++v8;
  }
  while ( v8 < v7 && v8 != 30 );
  if ( v7 > 0x1E )
    sub_16FAA0((__int64 *)&v28, (__int64)"... + %zu more\n", v7 - 30);
  if ( (_QWORD)v29 )
    v11 = v28;
  else
LABEL_33:
    v11 = &s1;
  v6 = "HIDECANCEL\nDo you really want to delete these files?\n%s";
  if ( (unsigned int)sub_1698A0(1, (int)"HIDECANCEL\nDo you really want to delete these files?\n%s", v11) == 1 )
  {
    sub_435730(&v26, "HIDECANCEL\nDo you really want to delete these files?\n%s");
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28, "HIDECANCEL\nDo you really want to delete these files?\n%s", v19);
    }
    goto LABEL_25;
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28, "HIDECANCEL\nDo you really want to delete these files?\n%s", v12);
  }
  v13 = v26;
  if ( v26 )
  {
    v14 = v27;
    if ( (_QWORD)v27 )
    {
      v15 = 0;
      do
      {
        v16 = (__int64 *)(v13 + 48 * v15);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17, "HIDECANCEL\nDo you really want to delete these files?\n%s");
          v13 = v26;
        }
        ++v15;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v27 = 0;
    qfree(v13, "HIDECANCEL\nDo you really want to delete these files?\n%s");
  }
  return 1;
}
