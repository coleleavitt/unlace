__int64 __fastcall sub_1ECAD50(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  bool v12; // r13
  __m128i *v13; // rsi
  void *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // r14d
  unsigned int v19; // ecx
  __int64 v20; // rdx
  int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // ebp
  void **v25; // r12
  void **v26; // rbx
  _QWORD *v27; // r12
  _QWORD *v28; // rbx
  char *v29; // rdi
  char *v30; // rbx
  char *v31; // rdi
  char *v32; // r12
  const __m128i *v33; // r12
  void **v34; // rbx
  int v36; // [rsp+4h] [rbp-22Ch]
  bool v39; // [rsp+20h] [rbp-210h]
  unsigned int v43; // [rsp+44h] [rbp-1ECh] BYREF
  void *v44[2]; // [rsp+48h] [rbp-1E8h] BYREF
  _BYTE v45[16]; // [rsp+58h] [rbp-1D8h] BYREF
  __m128i v46; // [rsp+68h] [rbp-1C8h] BYREF
  __m128i v47; // [rsp+78h] [rbp-1B8h] BYREF
  bool v48; // [rsp+88h] [rbp-1A8h]
  void *v49; // [rsp+98h] [rbp-198h] BYREF
  __m128i *v50; // [rsp+A0h] [rbp-190h]
  const __m128i *v51; // [rsp+A8h] [rbp-188h]
  void **v52[3]; // [rsp+B0h] [rbp-180h] BYREF
  void **v53[3]; // [rsp+C8h] [rbp-168h] BYREF
  int v54; // [rsp+E0h] [rbp-150h]
  __int16 v55; // [rsp+E4h] [rbp-14Ch]
  void *v56; // [rsp+E8h] [rbp-148h]
  __int64 v57; // [rsp+F0h] [rbp-140h]
  _BYTE v58[16]; // [rsp+F8h] [rbp-138h] BYREF
  void *v59[2]; // [rsp+108h] [rbp-128h] BYREF
  _BYTE v60[16]; // [rsp+118h] [rbp-118h] BYREF
  __int128 v61; // [rsp+128h] [rbp-108h] BYREF
  __int64 v62; // [rsp+138h] [rbp-F8h]
  int v63; // [rsp+140h] [rbp-F0h]
  __int16 v64; // [rsp+144h] [rbp-ECh]
  char v65; // [rsp+146h] [rbp-EAh]
  __int64 v66; // [rsp+148h] [rbp-E8h] BYREF
  int v67; // [rsp+150h] [rbp-E0h] BYREF
  void *v68; // [rsp+158h] [rbp-D8h]
  int *v69; // [rsp+160h] [rbp-D0h]
  int *v70; // [rsp+168h] [rbp-C8h]
  __int64 v71; // [rsp+170h] [rbp-C0h]
  int v72; // [rsp+178h] [rbp-B8h]
  char v73; // [rsp+17Ch] [rbp-B4h]
  int v74; // [rsp+180h] [rbp-B0h]
  char v75; // [rsp+184h] [rbp-ACh]
  void *v76; // [rsp+188h] [rbp-A8h]
  _QWORD *v77; // [rsp+190h] [rbp-A0h]
  __int64 v78; // [rsp+198h] [rbp-98h]
  void *v79; // [rsp+1A0h] [rbp-90h]
  void **v80; // [rsp+1A8h] [rbp-88h]
  __int64 v81; // [rsp+1B0h] [rbp-80h]
  void **v82[3]; // [rsp+1B8h] [rbp-78h] BYREF
  __int16 v83; // [rsp+1D0h] [rbp-60h]
  int v84; // [rsp+1D4h] [rbp-5Ch]
  __int16 v85; // [rsp+1D8h] [rbp-58h]
  char v86; // [rsp+1E8h] [rbp-48h]

  v56 = v58;
  v59[0] = v60;
  v49 = nullptr;
  v50 = nullptr;
  v51 = nullptr;
  memset(v52, 0, sizeof(v52));
  memset(v53, 0, sizeof(v53));
  v54 = 257;
  v55 = 0;
  v57 = 0;
  v58[0] = 0;
  v59[1] = nullptr;
  v60[0] = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v69 = &v67;
  v70 = &v67;
  v7 = (__int64 *)*a1;
  v71 = 0;
  v8 = *v7;
  v65 = 0;
  v67 = 0;
  v73 = 0;
  v68 = nullptr;
  v72 = 0;
  v74 = 16777472;
  v75 = 1;
  v76 = nullptr;
  v77 = nullptr;
  v78 = 0;
  v79 = nullptr;
  v80 = nullptr;
  v81 = 0;
  memset(v82, 0, sizeof(v82));
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v43 = 1;
  v39 = v8 != 0;
  if ( v8 )
  {
    v9 = v7[1];
    v43 = 2;
    v36 = v9;
    if ( (_DWORD)v9 )
    {
      while ( 1 )
      {
        sub_1EAC540((__m128i **)v44, a1, &v43);
        v10 = v43++;
        v11 = *(_QWORD *)(*a1 + 8 * v10) == 0;
        v46.m128i_i64[0] = (__int64)&v47;
        v12 = !v11;
        sub_1EA9CC0(&v46, (_BYTE *)v44[0], (__int64)v44[0] + (unsigned __int64)v44[1]);
        v48 = v12;
        v13 = v50;
        if ( v50 == v51 )
        {
          sub_1ECAAD0((void ***)&v49, v50, &v46);
          if ( (__m128i *)v46.m128i_i64[0] == &v47 )
            goto LABEL_7;
          operator delete((void *)v46.m128i_i64[0]);
          v14 = v44[0];
          if ( v44[0] != v45 )
            goto LABEL_8;
LABEL_63:
          if ( !--v36 )
          {
LABEL_9:
            v7 = (__int64 *)*a1;
            v15 = v43 + 1;
            v16 = v43;
            goto LABEL_11;
          }
        }
        else
        {
          v50->m128i_i64[0] = (__int64)v50[1].m128i_i64;
          if ( (__m128i *)v46.m128i_i64[0] == &v47 )
          {
            v13[1] = _mm_load_si128(&v47);
          }
          else
          {
            v13->m128i_i64[0] = v46.m128i_i64[0];
            v13[1].m128i_i64[0] = v47.m128i_i64[0];
          }
          v13->m128i_i64[1] = v46.m128i_i64[1];
          v50 = (__m128i *)((char *)v50 + 40);
          v13[2].m128i_i8[0] = v48;
LABEL_7:
          v14 = v44[0];
          if ( v44[0] == v45 )
            goto LABEL_63;
LABEL_8:
          operator delete(v14);
          if ( !--v36 )
            goto LABEL_9;
        }
      }
    }
    v16 = 2;
    v15 = 3;
  }
  else
  {
    v16 = 1;
    v15 = 2;
  }
LABEL_11:
  v17 = v7[v16];
  v43 = v15;
  v18 = v17;
  if ( (_DWORD)v17 )
  {
    do
    {
      while ( 1 )
      {
        sub_1EAC540((__m128i **)&v46, a1, &v43);
        sub_A82C60((__int64)v52, &v46);
        if ( (__m128i *)v46.m128i_i64[0] == &v47 )
          break;
        operator delete((void *)v46.m128i_i64[0]);
        if ( !--v18 )
          goto LABEL_14;
      }
      --v18;
    }
    while ( v18 );
LABEL_14:
    v15 = v43;
    v7 = (__int64 *)*a1;
  }
  v19 = v15 + 1;
  v20 = v7[v15];
  v43 = v19;
  v21 = v20;
  if ( (_DWORD)v20 )
  {
    do
    {
      while ( 1 )
      {
        sub_1EAC540((__m128i **)&v46, a1, &v43);
        sub_A82C60((__int64)v53, &v46);
        if ( (__m128i *)v46.m128i_i64[0] == &v47 )
          break;
        operator delete((void *)v46.m128i_i64[0]);
        if ( !--v21 )
          goto LABEL_18;
      }
      --v21;
    }
    while ( v21 );
LABEL_18:
    v19 = v43;
    v7 = (__int64 *)*a1;
  }
  v11 = v7[v19] == 0;
  v43 = v19 + 2;
  BYTE1(v54) = !v11;
  HIBYTE(v54) = v7[v19 + 1] != 0;
  sub_1EAC540((__m128i **)&v46, a1, &v43);
  sub_A0AAD0((__int64)v59, &v46);
  if ( (__m128i *)v46.m128i_i64[0] != &v47 )
    operator delete((void *)v46.m128i_i64[0]);
  v22 = v43++;
  v23 = *(_QWORD *)(*a1 + 8 * v22);
  *(_QWORD *)(a6 + 8) = 0;
  v84 = v23;
  **(_BYTE **)a6 = 0;
  v24 = (*(__int64 (__fastcall **)(__int64, void **, __int64, __int64, bool, _QWORD, __int64))(*(_QWORD *)a5 + 88LL))(
          a5,
          &v49,
          a2,
          a3,
          v39,
          a4,
          a6);
  sub_9B4A30(v82);
  v25 = v80;
  v26 = (void **)v79;
  if ( v80 != v79 )
  {
    do
    {
      while ( *v26 != v26 + 2 )
      {
        operator delete(*v26);
        v26 += 5;
        if ( v25 == v26 )
          goto LABEL_24;
      }
      v26 += 5;
    }
    while ( v25 != v26 );
LABEL_24:
    v26 = (void **)v79;
  }
  if ( v26 )
    operator delete(v26);
  v27 = v77;
  v28 = v76;
  if ( v77 != v76 )
  {
    do
    {
      while ( 1 )
      {
        v29 = (char *)v28[4];
        if ( v29 != (char *)(v28 + 6) )
          operator delete(v29);
        if ( (_QWORD *)*v28 == v28 + 2 )
          break;
        operator delete((void *)*v28);
        v28 += 8;
        if ( v27 == v28 )
          goto LABEL_32;
      }
      v28 += 8;
    }
    while ( v27 != v28 );
LABEL_32:
    v28 = v76;
  }
  if ( v28 )
    operator delete(v28);
  v30 = (char *)v68;
  if ( v68 )
  {
    while ( 1 )
    {
      sub_F7EAE0((__int64)&v66, *((_QWORD **)v30 + 3));
      v31 = *((char **)v30 + 4);
      v32 = *((char **)v30 + 2);
      if ( v31 == v30 + 48 )
      {
        operator delete(v30);
        if ( !v32 )
          break;
      }
      else
      {
        operator delete(v31);
        operator delete(v30);
        if ( !v32 )
          break;
      }
      v30 = v32;
    }
  }
  sub_9B4A30((void ***)&v61);
  if ( v59[0] != v60 )
    operator delete(v59[0]);
  if ( v56 != v58 )
    operator delete(v56);
  sub_9B4A30(v53);
  sub_9B4A30(v52);
  v33 = v50;
  v34 = (void **)v49;
  if ( v50 != v49 )
  {
    do
    {
      while ( *v34 != v34 + 2 )
      {
        operator delete(*v34);
        v34 += 5;
        if ( v34 == (void **)v33 )
          goto LABEL_55;
      }
      v34 += 5;
    }
    while ( v33 != (const __m128i *)v34 );
LABEL_55:
    v34 = (void **)v49;
  }
  if ( v34 )
    operator delete(v34);
  return v24;
}
