__int64 __fastcall sub_392040(__int64 a1, __int64 a2, const char *a3, char *a4)
{
  char v4; // bl
  char *v5; // r13
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  char *v11; // rsi
  char *v12; // rax
  void *v13; // rsi
  void *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  _BYTE *v18; // rsi
  const char *v19; // rcx
  char *v20; // rax
  unsigned __int64 v21; // r15
  bool v22; // cc
  const char *v23; // rdx
  __int64 v24; // rbx
  char *v25; // rax
  char *v26; // rdx
  __int64 v27; // rbp
  __int64 v28; // rbx
  char *v29; // rax
  void *v30; // rdi
  __int64 v32; // rdx
  char *v33; // rsi
  char *v34; // rax
  void *v35; // rsi
  void *v36; // rcx
  __int64 v37; // rdx
  unsigned __int64 v39; // [rsp+10h] [rbp-88h]
  unsigned __int64 v40; // [rsp+10h] [rbp-88h]
  __int64 v41; // [rsp+18h] [rbp-80h]
  __int64 v42; // [rsp+18h] [rbp-80h]
  void *v43; // [rsp+20h] [rbp-78h] BYREF
  __int128 v44; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v46; // [rsp+48h] [rbp-50h]
  unsigned __int64 v47; // [rsp+58h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( !a4 )
    return sub_391AE0(a1, (__int64)"\t%s = \"\";\n", a3);
  v4 = *a4;
  v5 = a4;
  if ( !*a4 )
    return sub_391AE0(a1, (__int64)"\t%s = \"\";\n", a3);
  v43 = nullptr;
  ptr = nullptr;
  v44 = 0;
  v46 = 0;
  do
  {
    ++v5;
    if ( v4 == 92 || v4 == 34 )
    {
      v16 = v46;
      v17 = 2;
      if ( (_QWORD)v46 )
      {
        v17 = v46 + 1;
        v16 = v46 - 1;
      }
      v18 = ptr;
      if ( *((_QWORD *)&v46 + 1) < v17 )
      {
        v42 = v16;
        v40 = v17;
        ptr = (void *)qvector_reserve(&ptr, ptr, v17, 1);
        v16 = v42;
        v18 = ptr;
        v17 = v40;
      }
      *(_QWORD *)&v46 = v17;
      v8 = 2;
      v18[v16] = 92;
      *((_BYTE *)ptr + v16 + 1) = 0;
      v7 = v46;
      if ( !(_QWORD)v46 )
      {
        v9 = ptr;
        if ( *((_QWORD *)&v46 + 1) >= 2u )
          goto LABEL_7;
        goto LABEL_23;
      }
LABEL_5:
      v8 = v7-- + 1;
LABEL_6:
      v9 = ptr;
      if ( *((_QWORD *)&v46 + 1) >= v8 )
      {
LABEL_7:
        *(_QWORD *)&v46 = v8;
        v9[v7] = v4;
        *((_BYTE *)ptr + v7 + 1) = 0;
        goto LABEL_8;
      }
LABEL_23:
      v41 = v7;
      v39 = v8;
      ptr = (void *)qvector_reserve(&ptr, v9, v8, 1);
      v7 = v41;
      v9 = ptr;
      v8 = v39;
      goto LABEL_7;
    }
    if ( (unsigned __int8)(v4 - 32) <= 0x5Eu )
    {
      v7 = v46;
      v8 = 2;
      if ( !(_QWORD)v46 )
        goto LABEL_6;
      goto LABEL_5;
    }
    sub_35A910((__int64 *)&ptr);
LABEL_8:
    if ( (unsigned __int64)v46 > 0x46 )
    {
      v10 = v44;
      v11 = (char *)v43;
      if ( *((_QWORD *)&v44 + 1) < (unsigned __int64)(v44 + 1) )
      {
        v43 = (void *)qvector_reserve(&v43, v43, v44 + 1, 24);
        v10 = v44;
        v11 = (char *)v43;
      }
      v12 = &v11[24 * v10];
      *(_QWORD *)v12 = 0;
      v13 = ptr;
      *(_OWORD *)(v12 + 8) = 0;
      *(_QWORD *)&v44 = v44 + 1;
      v14 = *(void **)v12;
      *(_QWORD *)v12 = v13;
      v15 = *((_QWORD *)v12 + 1);
      ptr = v14;
      *((_QWORD *)v12 + 1) = v46;
      *(_QWORD *)&v46 = v15;
      *((_QWORD *)v12 + 2) = *((_QWORD *)&v46 + 1);
      *((_QWORD *)&v46 + 1) = 0;
    }
    v4 = *v5;
  }
  while ( *v5 );
  if ( (unsigned __int64)v46 > 1 )
  {
    v32 = v44;
    v33 = (char *)v43;
    if ( *((_QWORD *)&v44 + 1) < (unsigned __int64)(v44 + 1) )
    {
      v43 = (void *)qvector_reserve(&v43, v43, v44 + 1, 24);
      v32 = v44;
      v33 = (char *)v43;
    }
    v34 = &v33[24 * v32];
    *(_QWORD *)v34 = 0;
    v35 = ptr;
    *(_OWORD *)(v34 + 8) = 0;
    *(_QWORD *)&v44 = v44 + 1;
    v36 = *(void **)v34;
    *(_QWORD *)v34 = v35;
    v37 = *((_QWORD *)v34 + 1);
    ptr = v36;
    *((_QWORD *)v34 + 1) = v46;
    *(_QWORD *)&v46 = v37;
    *((_QWORD *)v34 + 2) = *((_QWORD *)&v46 + 1);
    *((_QWORD *)&v46 + 1) = 0;
  }
  v19 = haystack;
  if ( *((_QWORD *)v43 + 1) )
    v19 = *(const char **)v43;
  sub_391AE0(a1, (__int64)"  %s = \"%s\"", a3, v19);
  v20 = (char *)v43;
  v21 = 1;
  v22 = (unsigned __int64)v44 <= 1;
  *(_QWORD *)(a2 + 8) += (*((_QWORD *)v43 + 1) == 0) + *((_QWORD *)v43 + 1) - 1LL + 13;
  if ( !v22 )
  {
    do
    {
      v23 = haystack;
      v24 = 24 * v21;
      v25 = &v20[24 * v21];
      if ( *((_QWORD *)v25 + 1) )
        v23 = *(const char **)v25;
      sub_391AE0(a1, (__int64)"\n    \"%s\"", v23);
      v20 = (char *)v43;
      ++v21;
      *(_QWORD *)(a2 + 8) += (*(_QWORD *)((char *)v43 + v24 + 8) == 0) + *(_QWORD *)((char *)v43 + v24 + 8) - 1LL + 13;
    }
    while ( v21 < (unsigned __int64)v44 );
  }
  sub_391AE0(a1, (__int64)";\n");
  if ( ptr )
  {
    *(_QWORD *)&v46 = 0;
    qfree(ptr);
  }
  v26 = (char *)v43;
  if ( v43 )
  {
    v27 = v44;
    if ( (_QWORD)v44 )
    {
      v28 = 0;
      do
      {
        v29 = &v26[24 * v28];
        v30 = *(void **)v29;
        if ( *(_QWORD *)v29 )
        {
          *((_QWORD *)v29 + 1) = 0;
          qfree(v30);
          v26 = (char *)v43;
        }
        ++v28;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v44 = 0;
    qfree(v26);
  }
  return v47 - __readfsqword(0x28u);
}
