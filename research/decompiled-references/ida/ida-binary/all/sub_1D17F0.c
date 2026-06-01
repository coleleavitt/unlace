unsigned __int64 __fastcall sub_1D17F0(__int64 a1)
{
  const char *v1; // rsi
  bool v2; // zf
  __int64 v4; // rbp
  __int64 v5; // r14
  const char *v6; // rcx
  const char *v7; // rdx
  const char *v8; // rdx
  const char *v9; // rcx
  const char *v10; // rsi
  char v11; // al
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // r13
  const char *v16; // r8
  const char *v17; // rdi
  const char *v18; // r8
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v29; // [rsp+10h] [rbp-98h] BYREF
  __int128 v30; // [rsp+18h] [rbp-90h]
  __int64 v31; // [rsp+30h] [rbp-78h] BYREF
  __int128 v32; // [rsp+38h] [rbp-70h]
  __int64 v33; // [rsp+50h] [rbp-58h] BYREF
  __int128 v34; // [rsp+58h] [rbp-50h]
  unsigned __int64 v35; // [rsp+68h] [rbp-40h]

  v1 = &s1;
  v2 = *(_QWORD *)(a1 + 8) == 0;
  v35 = __readfsqword(0x28u);
  v30 = 0;
  v29 = 0;
  if ( !v2 )
    v1 = *(const char **)a1;
  if ( (unsigned __int8)reg_subkey_children(&v29, v1, 1) && (int)v30 > 0 )
  {
    v4 = 0;
    v5 = 8 * (3LL * (unsigned int)(v30 - 1) + 3);
    do
    {
      v6 = &s1;
      v33 = 0;
      v34 = 0;
      if ( *(_QWORD *)(v4 + v29 + 8) )
        v6 = *(const char **)(v4 + v29);
      v7 = &s1;
      if ( *(_QWORD *)(a1 + 8) )
        v7 = *(const char **)a1;
      sub_169A50(&v33, (__int64)"%s\\%s", v7, v6);
      sub_1D17F0(&v33);
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v33, "%s\\%s", v8, v9);
      }
      v4 += 24;
    }
    while ( v4 != v5 );
  }
  v2 = *(_QWORD *)(a1 + 8) == 0;
  v31 = 0;
  v10 = &s1;
  v32 = 0;
  if ( !v2 )
    v10 = *(const char **)a1;
  v11 = reg_subkey_children(&v31, v10, 0);
  v12 = v31;
  if ( v11 && (int)v32 > 0 )
  {
    v13 = 0;
    v14 = 8 * (3LL * (unsigned int)(v32 - 1) + 3);
    do
    {
      v15 = v12 + v13;
      if ( *(_QWORD *)(v12 + v13 + 8) )
      {
        v10 = "Geometry";
        if ( !strcmp(*(const char **)v15, "Geometry") )
        {
          v2 = *(_QWORD *)(a1 + 8) == 0;
          v16 = &s1;
          v33 = 0;
          v34 = 0;
          if ( !v2 )
            v16 = *(const char **)a1;
          v17 = &s1;
          if ( *(_QWORD *)(v15 + 8) )
            v17 = *(const char **)v15;
          v10 = nullptr;
          if ( (unsigned __int8)reg_bin_op(v17, 0, &v33, 0, v16, 2) )
          {
            v18 = &s1;
            if ( *(_QWORD *)(a1 + 8) )
              v18 = *(const char **)a1;
            v10 = (_BYTE *)(&dword_0 + 1);
            reg_bin_op("Geom", 1, v33, v34, v18, 0);
          }
          if ( v33 )
          {
            *(_QWORD *)&v34 = 0;
            qfree(v33, v10);
          }
          v12 = v31;
        }
      }
      v13 += 24;
    }
    while ( v14 != v13 );
  }
  if ( v12 )
  {
    v19 = v32;
    if ( (_QWORD)v32 )
    {
      v20 = 0;
      do
      {
        v21 = (__int64 *)(v12 + 24 * v20);
        v22 = *v21;
        if ( *v21 )
        {
          v21[1] = 0;
          qfree(v22, v10);
          v12 = v31;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v32 = 0;
    qfree(v12, v10);
  }
  v23 = v29;
  if ( v29 )
  {
    v24 = v30;
    if ( (_QWORD)v30 )
    {
      v25 = 0;
      do
      {
        v26 = (__int64 *)(v23 + 24 * v25);
        v27 = *v26;
        if ( *v26 )
        {
          v26[1] = 0;
          qfree(v27, v10);
          v23 = v29;
        }
        ++v25;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v30 = 0;
    qfree(v23, v10);
  }
  return v35 - __readfsqword(0x28u);
}
