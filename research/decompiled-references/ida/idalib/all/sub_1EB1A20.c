__int64 __fastcall sub_1EB1A20(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4, __int64 a5, unsigned __int8 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // r12d
  unsigned int v10; // edx
  __int64 v11; // rax
  int i; // r12d
  unsigned int v13; // r12d
  char *v14; // rdi
  char *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r13
  _QWORD *v18; // rax
  __int64 v20; // rbx
  __int64 v21; // r13
  _QWORD *v22; // rax
  unsigned int v27; // [rsp+2Ch] [rbp-27Ch] BYREF
  __m128i v28; // [rsp+30h] [rbp-278h] BYREF
  _BYTE v29[16]; // [rsp+40h] [rbp-268h] BYREF
  void *v30[2]; // [rsp+50h] [rbp-258h] BYREF
  _BYTE v31[16]; // [rsp+60h] [rbp-248h] BYREF
  void *v32; // [rsp+70h] [rbp-238h]
  __int64 v33; // [rsp+78h] [rbp-230h]
  _BYTE v34[16]; // [rsp+80h] [rbp-228h] BYREF
  void *v35[2]; // [rsp+90h] [rbp-218h] BYREF
  _BYTE v36[16]; // [rsp+A0h] [rbp-208h] BYREF
  void *v37[2]; // [rsp+B0h] [rbp-1F8h] BYREF
  _BYTE v38[16]; // [rsp+C0h] [rbp-1E8h] BYREF
  void *v39; // [rsp+D0h] [rbp-1D8h]
  __int64 v40; // [rsp+D8h] [rbp-1D0h]
  _BYTE v41[16]; // [rsp+E0h] [rbp-1C8h] BYREF
  void *v42[2]; // [rsp+F0h] [rbp-1B8h] BYREF
  _BYTE v43[16]; // [rsp+100h] [rbp-1A8h] BYREF
  int v44; // [rsp+110h] [rbp-198h]
  void *v45; // [rsp+118h] [rbp-190h]
  __int64 v46; // [rsp+120h] [rbp-188h]
  _BYTE v47[16]; // [rsp+128h] [rbp-180h] BYREF
  void **v48[3]; // [rsp+138h] [rbp-170h] BYREF
  void **v49[3]; // [rsp+150h] [rbp-158h] BYREF
  void *v50; // [rsp+168h] [rbp-140h]
  __m128i si128; // [rsp+170h] [rbp-138h]
  void *ptr; // [rsp+180h] [rbp-128h]
  __m128i v53; // [rsp+188h] [rbp-120h]
  __int128 v54; // [rsp+198h] [rbp-110h] BYREF
  __int64 v55; // [rsp+1A8h] [rbp-100h]
  __int16 v56; // [rsp+1B0h] [rbp-F8h]
  __int64 v57; // [rsp+1B4h] [rbp-F4h]
  void *v58; // [rsp+1C0h] [rbp-E8h]
  __int64 v59; // [rsp+1C8h] [rbp-E0h]
  _BYTE v60[24]; // [rsp+1D0h] [rbp-D8h] BYREF
  __int64 v61; // [rsp+1E8h] [rbp-C0h]
  __int64 v62; // [rsp+1F0h] [rbp-B8h]
  void *v63; // [rsp+1F8h] [rbp-B0h]
  __int64 v64; // [rsp+200h] [rbp-A8h]
  _BYTE v65[16]; // [rsp+208h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+218h] [rbp-90h]
  __int64 v67; // [rsp+220h] [rbp-88h]
  void *v68; // [rsp+228h] [rbp-80h]
  __int64 v69; // [rsp+230h] [rbp-78h]
  _BYTE v70[16]; // [rsp+238h] [rbp-70h] BYREF
  void *v71; // [rsp+248h] [rbp-60h]
  __int64 v72; // [rsp+250h] [rbp-58h]
  _BYTE v73[80]; // [rsp+258h] [rbp-50h] BYREF

  v30[0] = v31;
  v32 = v34;
  v35[0] = v36;
  v37[0] = v38;
  v39 = v41;
  v42[0] = v43;
  v27 = 0;
  v30[1] = nullptr;
  v31[0] = 0;
  v33 = 0;
  v34[0] = 0;
  v35[1] = nullptr;
  v36[0] = 0;
  v37[1] = nullptr;
  v38[0] = 0;
  v40 = 0;
  v41[0] = 0;
  v42[1] = nullptr;
  v43[0] = 0;
  v44 = 1;
  v45 = v47;
  v58 = v60;
  v63 = v65;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  v53 = si128;
  v68 = v70;
  v54 = 0;
  v56 = 0;
  v71 = v73;
  v46 = 0;
  v47[0] = 0;
  memset(v48, 0, sizeof(v48));
  memset(v49, 0, sizeof(v49));
  v50 = nullptr;
  ptr = nullptr;
  v55 = 0;
  v57 = 0;
  v59 = 0;
  v60[0] = 0;
  v61 = 0;
  v62 = 0;
  v64 = 0;
  v65[0] = 0;
  v66 = 0;
  v67 = 0;
  v69 = 0;
  v70[0] = 0;
  v72 = 0;
  v73[0] = 0;
  sub_1EAC540((__m128i **)&v28, a1, &v27);
  sub_A0AAD0((__int64)v30, &v28);
  if ( (_BYTE *)v28.m128i_i64[0] != v29 )
    operator delete((void *)v28.m128i_i64[0]);
  sub_1EAC540((__m128i **)&v28, a1, &v27);
  sub_A0AAD0((__int64)v35, &v28);
  if ( (_BYTE *)v28.m128i_i64[0] != v29 )
    operator delete((void *)v28.m128i_i64[0]);
  sub_1EAC540((__m128i **)&v28, a1, &v27);
  sub_A0AAD0((__int64)v37, &v28);
  if ( (_BYTE *)v28.m128i_i64[0] != v29 )
    operator delete((void *)v28.m128i_i64[0]);
  sub_1EAC540((__m128i **)&v28, a1, &v27);
  sub_A0AAD0((__int64)v42, &v28);
  if ( (_BYTE *)v28.m128i_i64[0] != v29 )
    operator delete((void *)v28.m128i_i64[0]);
  v6 = *a1;
  v7 = v27 + 1;
  v8 = *(_QWORD *)(*a1 + 8LL * v27++);
  v9 = v8;
  if ( (_DWORD)v8 )
  {
    do
    {
      while ( 1 )
      {
        sub_1EAC540((__m128i **)&v28, a1, &v27);
        sub_A82C60((__int64)v48, &v28);
        if ( (_BYTE *)v28.m128i_i64[0] == v29 )
          break;
        operator delete((void *)v28.m128i_i64[0]);
        if ( !--v9 )
          goto LABEL_12;
      }
      --v9;
    }
    while ( v9 );
LABEL_12:
    v7 = v27;
    v6 = *a1;
  }
  v10 = v7 + 1;
  v11 = *(_QWORD *)(v6 + 8 * v7);
  v27 = v10;
  for ( i = v11; i; --i )
  {
    while ( 1 )
    {
      sub_1EAC540((__m128i **)&v28, a1, &v27);
      sub_A82C60((__int64)v49, &v28);
      if ( (_BYTE *)v28.m128i_i64[0] == v29 )
        break;
      operator delete((void *)v28.m128i_i64[0]);
      if ( !--i )
        goto LABEL_16;
    }
  }
LABEL_16:
  v13 = (*(__int64 (__fastcall **)(__int64, void **, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a5 + 48LL))(
          a5,
          v30,
          a2,
          a3,
          a4,
          a6);
  if ( v71 != v73 )
    operator delete(v71);
  if ( v68 != v70 )
    operator delete(v68);
  if ( v63 != v65 )
    operator delete(v63);
  if ( v58 != v60 )
    operator delete(v58);
  sub_9B4A30((void ***)&v54);
  if ( v53.m128i_i32[1] )
  {
    v14 = (char *)ptr;
    if ( v53.m128i_i32[0] )
    {
      v20 = 0;
      v21 = 8LL * (unsigned int)(v53.m128i_i32[0] - 1) + 8;
      do
      {
        v22 = *(_QWORD **)&v14[v20];
        if ( v22 && v22 != (_QWORD *)-8LL )
        {
          operator delete(*(_QWORD *)&v14[v20], *v22 + 17LL, 8);
          v14 = (char *)ptr;
        }
        v20 += 8;
      }
      while ( v20 != v21 );
      free(v14);
      if ( si128.m128i_i32[1] )
        goto LABEL_27;
LABEL_59:
      v15 = (char *)v50;
      goto LABEL_33;
    }
  }
  else
  {
    v14 = (char *)ptr;
  }
  free(v14);
  if ( !si128.m128i_i32[1] )
    goto LABEL_59;
LABEL_27:
  v15 = (char *)v50;
  if ( si128.m128i_i32[0] )
  {
    v16 = 0;
    v17 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    do
    {
      v18 = *(_QWORD **)&v15[v16];
      if ( v18 && v18 != (_QWORD *)-8LL )
      {
        operator delete(*(_QWORD *)&v15[v16], *v18 + 17LL, 8);
        v15 = (char *)v50;
      }
      v16 += 8;
    }
    while ( v17 != v16 );
  }
LABEL_33:
  free(v15);
  sub_9B4A30(v49);
  sub_9B4A30(v48);
  if ( v45 != v47 )
    operator delete(v45);
  if ( v42[0] != v43 )
    operator delete(v42[0]);
  if ( v39 != v41 )
    operator delete(v39);
  if ( v37[0] != v38 )
    operator delete(v37[0]);
  if ( v35[0] != v36 )
    operator delete(v35[0]);
  if ( v32 != v34 )
    operator delete(v32);
  if ( v30[0] != v31 )
    operator delete(v30[0]);
  return v13;
}
