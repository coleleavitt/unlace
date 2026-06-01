__int64 __fastcall sub_EA1800(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  unsigned __int64 i; // rbx
  unsigned int v7; // r13d
  __int64 v8; // rcx
  char *v9; // rcx
  unsigned __int64 j; // rbx
  unsigned int v11; // r13d
  __int64 v12; // rax
  char *v13; // rax
  _QWORD *v14; // r10
  __int64 v15; // rbx
  unsigned int *v16; // r14
  unsigned int *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v21; // r13
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // r13
  unsigned __int64 *v24; // rcx
  __int64 v25; // [rsp+8h] [rbp-2D0h]
  unsigned __int64 v27; // [rsp+40h] [rbp-298h]
  unsigned __int64 v28; // [rsp+48h] [rbp-290h]
  __int64 v29; // [rsp+54h] [rbp-284h] BYREF
  char v30; // [rsp+5Ch] [rbp-27Ch]
  unsigned int *v31; // [rsp+60h] [rbp-278h] BYREF
  unsigned int *v32; // [rsp+68h] [rbp-270h]
  int v33; // [rsp+70h] [rbp-268h]
  int v34; // [rsp+74h] [rbp-264h]
  void *v35; // [rsp+80h] [rbp-258h] BYREF
  __int64 v36; // [rsp+88h] [rbp-250h]
  __int64 v37; // [rsp+90h] [rbp-248h] BYREF
  void *v38; // [rsp+A0h] [rbp-238h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-230h]
  __int64 v40; // [rsp+B0h] [rbp-228h] BYREF
  void *v41; // [rsp+C0h] [rbp-218h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-210h]
  _BYTE v43[64]; // [rsp+D0h] [rbp-208h] BYREF
  void *v44; // [rsp+110h] [rbp-1C8h] BYREF
  __int64 v45; // [rsp+118h] [rbp-1C0h]
  _BYTE v46[64]; // [rsp+120h] [rbp-1B8h] BYREF
  unsigned __int8 *v47; // [rsp+160h] [rbp-178h] BYREF
  __int64 v48; // [rsp+168h] [rbp-170h]
  unsigned int v49; // [rsp+170h] [rbp-168h]
  void *v50; // [rsp+178h] [rbp-160h]
  __m128i si128; // [rsp+180h] [rbp-158h]
  _BYTE v52[128]; // [rsp+190h] [rbp-148h] BYREF
  void *ptr; // [rsp+210h] [rbp-C8h]
  __int64 v54; // [rsp+218h] [rbp-C0h]
  _BYTE v55[184]; // [rsp+220h] [rbp-B8h] BYREF

  v3 = 0;
  if ( a3 == a2 )
    return v3;
  sub_E9C270((__int64)&v35, a2);
  sub_E9C270((__int64)&v38, a3);
  v41 = v43;
  v42 = 0x400000000LL;
  v45 = 0x400000000LL;
  v5 = 0;
  if ( a2 )
    v5 = a2 + 64;
  v44 = v46;
  v25 = v5;
  for ( i = sub_B8E970(a2 + 64); i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
  {
    if ( (unsigned __int8)sub_EA4B10(i, v25) )
    {
      v54 = 0x2000000000LL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v47 = nullptr;
      v48 = 0;
      v49 = 0;
      v50 = v52;
      ptr = v55;
      sub_EA90F0(&v47, i);
      v7 = sub_EA4990(&v47);
      if ( ptr != v55 )
        free(ptr);
      if ( v50 != v52 )
        free(v50);
      operator delete(v47, 16LL * v49, 8);
      v8 = (unsigned int)v42;
      if ( (unsigned int)v42 >= (unsigned __int64)HIDWORD(v42) )
      {
        v23 = v7 | v28 & 0xFFFFFFFF00000000LL;
        v28 = v23;
        if ( HIDWORD(v42) < (unsigned __int64)(unsigned int)v42 + 1 )
        {
          sub_2237220(&v41, v43, (unsigned int)v42 + 1LL, 16);
          v8 = (unsigned int)v42;
        }
        v24 = (unsigned __int64 *)((char *)v41 + 16 * v8);
        *v24 = i;
        v24[1] = v23;
        LODWORD(v42) = v42 + 1;
      }
      else
      {
        v9 = (char *)v41 + 16 * (unsigned int)v42;
        *(_QWORD *)v9 = i;
        *((_DWORD *)v9 + 2) = v7;
        LODWORD(v42) = v42 + 1;
      }
    }
  }
  for ( j = sub_B8E970(a3 + 64); j; j = *(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF8LL )
  {
    if ( (unsigned __int8)sub_EA4B10(j, v25) )
    {
      v54 = 0x2000000000LL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v47 = nullptr;
      v48 = 0;
      v49 = 0;
      v50 = v52;
      ptr = v55;
      sub_EA90F0(&v47, j);
      v11 = sub_EA4990(&v47);
      if ( ptr != v55 )
        free(ptr);
      if ( v50 != v52 )
        free(v50);
      operator delete(v47, 16LL * v49, 8);
      v12 = (unsigned int)v45;
      if ( (unsigned int)v45 >= (unsigned __int64)HIDWORD(v45) )
      {
        v21 = v11 | v27 & 0xFFFFFFFF00000000LL;
        v27 = v21;
        if ( HIDWORD(v45) < (unsigned __int64)(unsigned int)v45 + 1 )
        {
          sub_2237220(&v44, v46, (unsigned int)v45 + 1LL, 16);
          v12 = (unsigned int)v45;
        }
        v22 = (unsigned __int64 *)((char *)v44 + 16 * v12);
        *v22 = j;
        v22[1] = v21;
        LODWORD(v45) = v45 + 1;
      }
      else
      {
        v13 = (char *)v44 + 16 * (unsigned int)v45;
        *(_QWORD *)v13 = j;
        *((_DWORD *)v13 + 2) = v11;
        LODWORD(v45) = v45 + 1;
      }
    }
  }
  sub_E9E370((__int64)&v31, (__int64 **)&v41, (__int64 **)&v44);
  v15 = v33;
  if ( v34 == 15 || v33 == 15 )
  {
    sub_E9E6B0(a1, v14, a2, v35, v36, a3, v38, v39);
  }
  else if ( v33 == v34 )
  {
    v16 = v31;
    v17 = v32;
    if ( v33 == 8 )
    {
      if ( (unsigned __int8)sub_E9C8F0(a1, a2, v35, v36, v38, v39, (__int64)v31, (__int64)v32, 0) )
        goto LABEL_29;
    }
    else if ( v33 == 9 )
    {
      if ( (unsigned __int8)sub_E9CD60(
                              (__int64)a1,
                              a2,
                              (__int64)v35,
                              v36,
                              (__int64)v38,
                              v39,
                              (__int64)v31,
                              (__int64)v32) )
        goto LABEL_29;
    }
    else if ( v33 == 5
           && (unsigned __int8)sub_E9C2C0(
                                 (__int64)a1,
                                 a2,
                                 (__int64)v35,
                                 v36,
                                 (__int64)v38,
                                 v39,
                                 (__int64)v31,
                                 (__int64)v32) )
    {
      goto LABEL_29;
    }
    sub_FC70B0(&v47, *a1, v16[6], 2335);
    sub_E98080(&v47, a2);
    sub_E97E40(&v47, v36 == 0);
    sub_AEC220(&v47, v35, v36);
    sub_E97E40(&v47, v15);
    v18 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v16 + 16LL))(v16);
    v30 = 1;
    v29 = v18;
    sub_AEC610((__int64 *)&v47, &v29);
    sub_AEA040((__int64)&v47);
    sub_FC70B0(&v47, *a1, v17[6], 2517);
    sub_E97E40(&v47, v39 == 0);
    sub_AEC220(&v47, v38, v39);
    sub_E97E40(&v47, v15);
    v19 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v17 + 16LL))(v17);
    v30 = 1;
    v29 = v19;
    sub_AEC610((__int64 *)&v47, &v29);
    sub_AEA040((__int64)&v47);
  }
  else
  {
    sub_E9E810(a1, v14, a2, v35, v36, a3, v38, v39);
  }
LABEL_29:
  if ( v44 != v46 )
    free(v44);
  if ( v41 != v43 )
    free(v41);
  if ( v38 != &v40 )
    operator delete(v38);
  v3 = 1;
  if ( v35 != &v37 )
    operator delete(v35);
  return v3;
}
