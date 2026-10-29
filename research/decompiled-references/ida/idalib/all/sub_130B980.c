void __fastcall sub_130B980(char *a1, void (__fastcall *a2)(__int64, void **), __int64 a3)
{
  char v5; // al
  char v6; // al
  void **v7; // rbx
  void **v8; // rax
  void **v9; // rax
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  __m128i *v12; // rsi
  __int64 v13; // rdx
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  __m128i *v16; // rsi
  __int64 v17; // rdx
  _BYTE *v18; // rsi
  __int64 v19; // rdx
  __m128i *v20; // rsi
  __int64 v21; // rdx
  char v22; // al
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  __m128i *v25; // rsi
  __int64 v26; // rdx
  int v27; // r8d
  int v28; // r8d
  _DWORD *v29; // rbx
  _DWORD *v30; // rbp
  void **v31; // rax
  void **v32; // [rsp+0h] [rbp-118h]
  void **v33; // [rsp+0h] [rbp-118h]
  void **v34; // [rsp+8h] [rbp-110h]
  void **v35; // [rsp+8h] [rbp-110h]
  void **v36; // [rsp+8h] [rbp-110h]
  char v37; // [rsp+10h] [rbp-108h]
  void **v38; // [rsp+10h] [rbp-108h]
  void **v39; // [rsp+18h] [rbp-100h]
  void *v40[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v41; // [rsp+30h] [rbp-E8h]
  __int64 v42[4]; // [rsp+40h] [rbp-D8h] BYREF
  void *v43; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-B0h]
  __m128i v45; // [rsp+70h] [rbp-A8h] BYREF
  __m128i *v46; // [rsp+80h] [rbp-98h] BYREF
  __int64 v47; // [rsp+88h] [rbp-90h]
  __m128i v48; // [rsp+90h] [rbp-88h] BYREF
  __int16 v49; // [rsp+A0h] [rbp-78h]
  void *v50[2]; // [rsp+B0h] [rbp-68h] BYREF
  _QWORD v51[2]; // [rsp+C0h] [rbp-58h] BYREF
  __int16 v52; // [rsp+D0h] [rbp-48h]

  v5 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    v50[1] = &dword_0 + 2;
    v52 = 261;
    v50[0] = "-H";
    a2(a3, v50);
    v5 = *a1;
  }
  if ( (v5 & 0x20) != 0 )
  {
    v50[0] = "-fshow-skipped-includes";
    v52 = 261;
    v50[1] = &dword_14 + 3;
    a2(a3, v50);
    v5 = *a1;
  }
  if ( (v5 & 8) != 0 )
  {
    v50[0] = "-MG";
    v52 = 261;
    v50[1] = &dword_0 + 3;
    a2(a3, v50);
    v5 = *a1;
  }
  if ( (v5 & 4) != 0 )
  {
    v52 = 261;
    v50[0] = "-MP";
    v50[1] = &dword_0 + 3;
    a2(a3, v50);
  }
  sub_C23620((__int64)v40, (__int64 *)a1 + 11);
  *(_OWORD *)v50 = 0;
  v39 = (void **)v40[0];
  v42[0] = (__int64)v40[0];
  v51[0] = 0;
  v32 = (void **)v40[1];
  v42[1] = (__int64)v40[1];
  *(_OWORD *)v40 = 0;
  v42[2] = v41;
  v41 = 0;
  sub_12FD200((unsigned __int64 **)v50, (__int64)&v46, (__int64)&v46);
  v6 = sub_130B900(v42, (__int64 *)v50);
  v7 = (void **)v50[0];
  v37 = v6;
  v34 = (void **)v50[1];
  if ( v50[1] != v50[0] )
  {
    do
    {
      while ( *v7 != v7 + 2 )
      {
        operator delete(*v7);
        v7 += 4;
        if ( v7 == v34 )
          goto LABEL_12;
      }
      v7 += 4;
    }
    while ( v34 != v7 );
LABEL_12:
    v7 = (void **)v50[0];
  }
  if ( v7 )
    operator delete(v7);
  if ( v37 )
  {
    if ( v39 == v32 )
      goto LABEL_20;
  }
  else
  {
    if ( v39 == v32 )
      goto LABEL_20;
    v31 = v39;
    do
    {
      while ( 1 )
      {
        v38 = v31;
        v43 = &v45;
        sub_12FAA20(&v43, *v31, (__int64)v31[1] + (_QWORD)*v31);
        v50[0] = "-MT";
        v49 = 260;
        v52 = 261;
        v46 = (__m128i *)&v43;
        v50[1] = &dword_0 + 3;
        a2(a3, v50);
        a2(a3, (void **)&v46);
        if ( v43 == &v45 )
          break;
        operator delete(v43);
        v31 = v38 + 4;
        if ( v32 == v38 + 4 )
          goto LABEL_17;
      }
      v31 = v38 + 4;
    }
    while ( v32 != v38 + 4 );
  }
LABEL_17:
  v8 = v39;
  do
  {
    while ( *v8 != v8 + 2 )
    {
      v35 = v8;
      operator delete(*v8);
      v8 = v35 + 4;
      if ( v32 == v35 + 4 )
        goto LABEL_20;
    }
    v8 += 4;
  }
  while ( v32 != v8 );
LABEL_20:
  if ( v39 )
    operator delete(v39);
  v33 = (void **)v40[1];
  v9 = (void **)v40[0];
  if ( v40[1] != v40[0] )
  {
    do
    {
      while ( *v9 != v9 + 2 )
      {
        v36 = v9;
        operator delete(*v9);
        v9 = v36 + 4;
        if ( v33 == v36 + 4 )
          goto LABEL_25;
      }
      v9 += 4;
    }
    while ( v33 != v9 );
LABEL_25:
    v9 = (void **)v40[0];
  }
  if ( v9 )
    operator delete(v9);
  if ( *((_DWORD *)a1 + 4) )
  {
    v50[1] = &dword_0 + 3;
    v52 = 261;
    v50[0] = "-MV";
    a2(a3, v50);
  }
  v10 = *((_BYTE **)a1 + 3);
  v11 = *((_QWORD *)a1 + 4);
  v43 = &v45;
  sub_12FAA20(&v43, v10, (__int64)&v10[v11]);
  v12 = (__m128i *)v43;
  v46 = &v48;
  if ( v43 == &v45 )
  {
    v12 = &v48;
    v48 = _mm_load_si128(&v45);
  }
  else
  {
    v46 = (__m128i *)v43;
    v48.m128i_i64[0] = v45.m128i_i64[0];
  }
  v13 = v44;
  v44 = 0;
  v43 = &v45;
  v47 = v13;
  v45.m128i_i8[0] = 0;
  v50[0] = v51;
  v50[1] = nullptr;
  LOBYTE(v51[0]) = 0;
  if ( v13 )
  {
    sub_12FAA20(v50, v12, (__int64)v12->m128i_i64 + v13);
    sub_12FD520((void (__fastcall *)(__int64, _QWORD *))a2, a3, 4735, (__int64)v50);
    if ( v50[0] != v51 )
      operator delete(v50[0]);
    v12 = v46;
  }
  if ( v12 != &v48 )
    operator delete(v12);
  if ( v43 != &v45 )
    operator delete(v43);
  v14 = *((_BYTE **)a1 + 17);
  v15 = *((_QWORD *)a1 + 18);
  v43 = &v45;
  sub_12FAA20(&v43, v14, (__int64)&v14[v15]);
  v16 = (__m128i *)v43;
  v46 = &v48;
  if ( v43 == &v45 )
  {
    v16 = &v48;
    v48 = _mm_load_si128(&v45);
  }
  else
  {
    v46 = (__m128i *)v43;
    v48.m128i_i64[0] = v45.m128i_i64[0];
  }
  v17 = v44;
  v44 = 0;
  v43 = &v45;
  v47 = v17;
  v45.m128i_i8[0] = 0;
  v50[0] = v51;
  v50[1] = nullptr;
  LOBYTE(v51[0]) = 0;
  if ( v17 )
  {
    sub_12FAA20(v50, v16, (__int64)v16->m128i_i64 + v17);
    sub_12FD520((void (__fastcall *)(__int64, _QWORD *))a2, a3, 4719, (__int64)v50);
    if ( v50[0] != v51 )
      operator delete(v50[0]);
    v16 = v46;
  }
  if ( v16 != &v48 )
    operator delete(v16);
  if ( v43 != &v45 )
    operator delete(v43);
  v18 = *((_BYTE **)a1 + 21);
  v19 = *((_QWORD *)a1 + 22);
  v43 = &v45;
  sub_12FAA20(&v43, v18, (__int64)&v18[v19]);
  v20 = (__m128i *)v43;
  v46 = &v48;
  if ( v43 == &v45 )
  {
    v20 = &v48;
    v48 = _mm_load_si128(&v45);
  }
  else
  {
    v46 = (__m128i *)v43;
    v48.m128i_i64[0] = v45.m128i_i64[0];
  }
  v21 = v44;
  v44 = 0;
  v43 = &v45;
  v47 = v21;
  v45.m128i_i8[0] = 0;
  v50[0] = v51;
  v50[1] = nullptr;
  LOBYTE(v51[0]) = 0;
  if ( v21 )
  {
    sub_12FAA20(v50, v20, (__int64)v20->m128i_i64 + v21);
    sub_12FD520((void (__fastcall *)(__int64, _QWORD *))a2, a3, 52057, (__int64)v50);
    if ( v50[0] != v51 )
      operator delete(v50[0]);
    v20 = v46;
  }
  if ( v20 != &v48 )
    operator delete(v20);
  if ( v43 != &v45 )
    operator delete(v43);
  v22 = *a1;
  if ( (*a1 & 1) != 0 )
  {
    v50[1] = &word_10;
    v52 = 261;
    v50[0] = "-sys-header-deps";
    a2(a3, v50);
    v22 = *a1;
  }
  if ( (v22 & 0x10) != 0 )
  {
    v52 = 261;
    v50[0] = "-module-file-deps";
    v50[1] = &word_10 + 1;
    a2(a3, v50);
  }
  v23 = *((_BYTE **)a1 + 7);
  v24 = *((_QWORD *)a1 + 8);
  v43 = &v45;
  sub_12FAA20(&v43, v23, (__int64)&v23[v24]);
  v25 = (__m128i *)v43;
  v46 = &v48;
  if ( v43 == &v45 )
  {
    v25 = &v48;
    v48 = _mm_load_si128(&v45);
  }
  else
  {
    v46 = (__m128i *)v43;
    v48.m128i_i64[0] = v45.m128i_i64[0];
  }
  v26 = v44;
  v44 = 0;
  v43 = &v45;
  v47 = v26;
  v45.m128i_i8[0] = 0;
  v50[0] = v51;
  v50[1] = nullptr;
  LOBYTE(v51[0]) = 0;
  if ( v26 )
  {
    sub_12FAA20(v50, v25, (__int64)v25->m128i_i64 + v26);
    sub_12FD520((void (__fastcall *)(__int64, _QWORD *))a2, a3, 42376, (__int64)v50);
    if ( v50[0] != v51 )
      operator delete(v50[0]);
    v25 = v46;
  }
  if ( v25 != &v48 )
    operator delete(v25);
  if ( v43 != &v45 )
    operator delete(v43);
  v27 = *((_DWORD *)a1 + 1);
  if ( v27 != 1 )
    sub_12FD720((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 42424, 0x2Eu, v27);
  v28 = *((_DWORD *)a1 + 2);
  if ( v28 )
    sub_12FD720((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 42397, 0x2Fu, v28);
  if ( *((_DWORD *)a1 + 3) )
    sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0xCC2u);
  v29 = *((_DWORD **)a1 + 14);
  v30 = *((_DWORD **)a1 + 15);
  while ( v30 != v29 )
  {
    while ( v29[8] != 3 )
    {
      v29 += 10;
      if ( v30 == v29 )
        return;
    }
    v50[0] = v29;
    v29 += 10;
    v52 = 260;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x253u, (const __m128i *)v50);
  }
}
