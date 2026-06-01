__int64 __fastcall sub_38D2F0(__int64 a1, __int64 a2, __int64 a3, char *a4)
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
  unsigned __int64 v19; // r15
  bool v20; // cc
  __int64 v21; // rbx
  char *v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rbx
  char *v25; // rax
  void *v26; // rdi
  __int64 v28; // rdx
  char *v29; // rsi
  char *v30; // rax
  void *v31; // rsi
  void *v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // [rsp+10h] [rbp-88h]
  unsigned __int64 v35; // [rsp+10h] [rbp-88h]
  __int64 v36; // [rsp+18h] [rbp-80h]
  __int64 v37; // [rsp+18h] [rbp-80h]
  void *v38; // [rsp+20h] [rbp-78h] BYREF
  __int128 v39; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v41; // [rsp+48h] [rbp-50h]
  unsigned __int64 v42; // [rsp+58h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( !a4 )
    return sub_38CDA0();
  v4 = *a4;
  v5 = a4;
  if ( !*a4 )
    return sub_38CDA0();
  v38 = nullptr;
  ptr = nullptr;
  v39 = 0;
  v41 = 0;
  do
  {
    ++v5;
    if ( v4 == 92 || v4 == 34 )
    {
      v16 = v41;
      v17 = 2;
      if ( (_QWORD)v41 )
      {
        v17 = v41 + 1;
        v16 = v41 - 1;
      }
      v18 = ptr;
      if ( *((_QWORD *)&v41 + 1) < v17 )
      {
        v37 = v16;
        v35 = v17;
        ptr = (void *)qvector_reserve(&ptr, ptr, v17, 1);
        v16 = v37;
        v18 = ptr;
        v17 = v35;
      }
      *(_QWORD *)&v41 = v17;
      v8 = 2;
      v18[v16] = 92;
      *((_BYTE *)ptr + v16 + 1) = 0;
      v7 = v41;
      if ( !(_QWORD)v41 )
      {
        v9 = ptr;
        if ( *((_QWORD *)&v41 + 1) >= 2u )
          goto LABEL_7;
        goto LABEL_23;
      }
LABEL_5:
      v8 = v7-- + 1;
LABEL_6:
      v9 = ptr;
      if ( *((_QWORD *)&v41 + 1) >= v8 )
      {
LABEL_7:
        *(_QWORD *)&v41 = v8;
        v9[v7] = v4;
        *((_BYTE *)ptr + v7 + 1) = 0;
        goto LABEL_8;
      }
LABEL_23:
      v36 = v7;
      v34 = v8;
      ptr = (void *)qvector_reserve(&ptr, v9, v8, 1);
      v7 = v36;
      v9 = ptr;
      v8 = v34;
      goto LABEL_7;
    }
    if ( (unsigned __int8)(v4 - 32) <= 0x5Eu )
    {
      v7 = v41;
      v8 = 2;
      if ( !(_QWORD)v41 )
        goto LABEL_6;
      goto LABEL_5;
    }
    sub_357520((__int64 *)&ptr);
LABEL_8:
    if ( (unsigned __int64)v41 > 0x46 )
    {
      v10 = v39;
      v11 = (char *)v38;
      if ( *((_QWORD *)&v39 + 1) < (unsigned __int64)(v39 + 1) )
      {
        v38 = (void *)qvector_reserve(&v38, v38, v39 + 1, 24);
        v10 = v39;
        v11 = (char *)v38;
      }
      v12 = &v11[24 * v10];
      *(_QWORD *)v12 = 0;
      v13 = ptr;
      *(_OWORD *)(v12 + 8) = 0;
      *(_QWORD *)&v39 = v39 + 1;
      v14 = *(void **)v12;
      *(_QWORD *)v12 = v13;
      v15 = *((_QWORD *)v12 + 1);
      ptr = v14;
      *((_QWORD *)v12 + 1) = v41;
      *(_QWORD *)&v41 = v15;
      *((_QWORD *)v12 + 2) = *((_QWORD *)&v41 + 1);
      *((_QWORD *)&v41 + 1) = 0;
    }
    v4 = *v5;
  }
  while ( *v5 );
  if ( (unsigned __int64)v41 > 1 )
  {
    v28 = v39;
    v29 = (char *)v38;
    if ( *((_QWORD *)&v39 + 1) < (unsigned __int64)(v39 + 1) )
    {
      v38 = (void *)qvector_reserve(&v38, v38, v39 + 1, 24);
      v28 = v39;
      v29 = (char *)v38;
    }
    v30 = &v29[24 * v28];
    *(_QWORD *)v30 = 0;
    v31 = ptr;
    *(_OWORD *)(v30 + 8) = 0;
    *(_QWORD *)&v39 = v39 + 1;
    v32 = *(void **)v30;
    *(_QWORD *)v30 = v31;
    v33 = *((_QWORD *)v30 + 1);
    ptr = v32;
    *((_QWORD *)v30 + 1) = v41;
    *(_QWORD *)&v41 = v33;
    *((_QWORD *)v30 + 2) = *((_QWORD *)&v41 + 1);
    *((_QWORD *)&v41 + 1) = 0;
  }
  sub_38CDA0();
  v19 = 1;
  v20 = (unsigned __int64)v39 <= 1;
  *(_QWORD *)(a2 + 8) += (*((_QWORD *)v38 + 1) == 0) + *((_QWORD *)v38 + 1) - 1LL + 13;
  if ( !v20 )
  {
    do
    {
      v21 = 24 * v19;
      sub_38CDA0();
      ++v19;
      *(_QWORD *)(a2 + 8) += (*(_QWORD *)((char *)v38 + v21 + 8) == 0) + *(_QWORD *)((char *)v38 + v21 + 8) - 1LL + 13;
    }
    while ( v19 < (unsigned __int64)v39 );
  }
  sub_38CDA0();
  if ( ptr )
  {
    *(_QWORD *)&v41 = 0;
    qfree(ptr);
  }
  v22 = (char *)v38;
  if ( v38 )
  {
    v23 = v39;
    if ( (_QWORD)v39 )
    {
      v24 = 0;
      do
      {
        v25 = &v22[24 * v24];
        v26 = *(void **)v25;
        if ( *(_QWORD *)v25 )
        {
          *((_QWORD *)v25 + 1) = 0;
          qfree(v26);
          v22 = (char *)v38;
        }
        ++v24;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v39 = 0;
    qfree(v22);
  }
  return v42 - __readfsqword(0x28u);
}

