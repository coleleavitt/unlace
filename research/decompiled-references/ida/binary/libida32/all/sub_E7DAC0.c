__int64 __fastcall sub_E7DAC0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  unsigned __int64 i; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r13d
  __int64 v12; // rcx
  char *v13; // rcx
  unsigned __int64 j; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r13d
  __int64 v20; // rax
  char *v21; // rax
  _QWORD *v22; // r10
  __int64 v23; // rbx
  unsigned int *v24; // r14
  unsigned int *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v29; // r13
  unsigned __int64 *v30; // rax
  unsigned __int64 v31; // r13
  unsigned __int64 *v32; // rcx
  __int64 v33; // [rsp+0h] [rbp-2D8h]
  __int64 v34; // [rsp+8h] [rbp-2D0h]
  __int64 **v35; // [rsp+10h] [rbp-2C8h]
  unsigned __int64 v37; // [rsp+40h] [rbp-298h]
  unsigned __int64 v38; // [rsp+48h] [rbp-290h]
  __int64 v39; // [rsp+54h] [rbp-284h] BYREF
  char v40; // [rsp+5Ch] [rbp-27Ch]
  unsigned int *v41; // [rsp+60h] [rbp-278h] BYREF
  unsigned int *v42; // [rsp+68h] [rbp-270h]
  int v43; // [rsp+70h] [rbp-268h]
  int v44; // [rsp+74h] [rbp-264h]
  void *v45; // [rsp+80h] [rbp-258h] BYREF
  __int64 v46; // [rsp+88h] [rbp-250h]
  __int64 v47; // [rsp+90h] [rbp-248h] BYREF
  void *v48; // [rsp+A0h] [rbp-238h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-230h]
  __int64 v50; // [rsp+B0h] [rbp-228h] BYREF
  void *v51; // [rsp+C0h] [rbp-218h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-210h]
  _BYTE v53[64]; // [rsp+D0h] [rbp-208h] BYREF
  void *v54; // [rsp+110h] [rbp-1C8h] BYREF
  __int64 v55; // [rsp+118h] [rbp-1C0h]
  char v56; // [rsp+120h] [rbp-1B8h] BYREF
  unsigned __int8 *v57; // [rsp+160h] [rbp-178h] BYREF
  __int64 v58; // [rsp+168h] [rbp-170h]
  int v59; // [rsp+170h] [rbp-168h]
  void *v60; // [rsp+178h] [rbp-160h]
  __m128i si128; // [rsp+180h] [rbp-158h]
  _BYTE v62[128]; // [rsp+190h] [rbp-148h] BYREF
  void *ptr; // [rsp+210h] [rbp-C8h]
  __int64 v64; // [rsp+218h] [rbp-C0h]
  _BYTE v65[184]; // [rsp+220h] [rbp-B8h] BYREF

  v3 = 0;
  if ( a3 == a2 )
    return v3;
  sub_E78530((__int64)&v45, a2);
  sub_E78530((__int64)&v48, a3);
  v51 = v53;
  v52 = 0x400000000LL;
  v55 = 0x400000000LL;
  v5 = 0;
  if ( a2 )
    v5 = a2 + 64;
  v35 = (__int64 **)&v54;
  v54 = &v56;
  v34 = v5;
  for ( i = sub_B6AC30(a2 + 64); i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
  {
    if ( (unsigned __int8)sub_E80DD0(i, v34) )
    {
      v64 = 0x2000000000LL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
      v57 = nullptr;
      v58 = 0;
      v59 = 0;
      v60 = v62;
      ptr = v65;
      sub_E853B0(&v57, i, v7, v8, v9, v10, v33, v34, (_DWORD)v35);
      v11 = sub_E80C50(&v57);
      if ( ptr != v65 )
        free(ptr);
      if ( v60 != v62 )
        free(v60);
      operator delete();
      v12 = (unsigned int)v52;
      if ( (unsigned int)v52 >= (unsigned __int64)HIDWORD(v52) )
      {
        v31 = v11 | v38 & 0xFFFFFFFF00000000LL;
        v38 = v31;
        if ( HIDWORD(v52) < (unsigned __int64)(unsigned int)v52 + 1 )
        {
          sub_22134E0(&v51, v53, (unsigned int)v52 + 1LL, 16);
          v12 = (unsigned int)v52;
        }
        v32 = (unsigned __int64 *)((char *)v51 + 16 * v12);
        *v32 = i;
        v32[1] = v31;
        LODWORD(v52) = v52 + 1;
      }
      else
      {
        v13 = (char *)v51 + 16 * (unsigned int)v52;
        *(_QWORD *)v13 = i;
        *((_DWORD *)v13 + 2) = v11;
        LODWORD(v52) = v52 + 1;
      }
    }
  }
  for ( j = sub_B6AC30(a3 + 64); j; j = *(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF8LL )
  {
    if ( (unsigned __int8)sub_E80DD0(j, v34) )
    {
      v64 = 0x2000000000LL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
      v57 = nullptr;
      v58 = 0;
      v59 = 0;
      v60 = v62;
      ptr = v65;
      sub_E853B0(&v57, j, v15, v16, v17, v18, v33, v34, (_DWORD)v35);
      v19 = sub_E80C50(&v57);
      if ( ptr != v65 )
        free(ptr);
      if ( v60 != v62 )
        free(v60);
      operator delete();
      v20 = (unsigned int)v55;
      if ( (unsigned int)v55 >= (unsigned __int64)HIDWORD(v55) )
      {
        v29 = v19 | v37 & 0xFFFFFFFF00000000LL;
        v37 = v29;
        if ( HIDWORD(v55) < (unsigned __int64)(unsigned int)v55 + 1 )
        {
          sub_22134E0(v35, v35 + 2, (unsigned int)v55 + 1LL, 16);
          v20 = (unsigned int)v55;
        }
        v30 = (unsigned __int64 *)((char *)v54 + 16 * v20);
        *v30 = j;
        v30[1] = v29;
        LODWORD(v55) = v55 + 1;
      }
      else
      {
        v21 = (char *)v54 + 16 * (unsigned int)v55;
        *(_QWORD *)v21 = j;
        *((_DWORD *)v21 + 2) = v19;
        LODWORD(v55) = v55 + 1;
      }
    }
  }
  sub_E7A630((__int64)&v41, (__int64 **)&v51, v35);
  v23 = v43;
  if ( v44 == 15 || v43 == 15 )
  {
    sub_E7A970(a1, v22, a2, v45, v46, a3, v48, v49);
  }
  else if ( v43 == v44 )
  {
    v24 = v41;
    v25 = v42;
    if ( v43 == 8 )
    {
      if ( (unsigned __int8)sub_E78BB0(a1, a2, v45, v46, v48, v49, (__int64)v41, (__int64)v42, 0) )
        goto LABEL_29;
    }
    else if ( v43 == 9 )
    {
      if ( (unsigned __int8)sub_E79020(
                              (__int64)a1,
                              a2,
                              (__int64)v45,
                              v46,
                              (__int64)v48,
                              v49,
                              (__int64)v41,
                              (__int64)v42) )
        goto LABEL_29;
    }
    else if ( v43 == 5
           && (unsigned __int8)sub_E78580(
                                 (__int64)a1,
                                 a2,
                                 (__int64)v45,
                                 v46,
                                 (__int64)v48,
                                 v49,
                                 (__int64)v41,
                                 (__int64)v42) )
    {
      goto LABEL_29;
    }
    sub_FA3370(&v57, *a1, v24[6], 2335);
    sub_E74340(&v57, a2);
    sub_E74100(&v57, v46 == 0);
    sub_AC84E0(&v57, v45, v46);
    sub_E74100(&v57, v23);
    v26 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v24 + 16LL))(v24);
    v40 = 1;
    v39 = v26;
    sub_AC88D0((__int64 *)&v57, &v39);
    sub_AC6300((__int64)&v57);
    sub_FA3370(&v57, *a1, v25[6], 2517);
    sub_E74100(&v57, v49 == 0);
    sub_AC84E0(&v57, v48, v49);
    sub_E74100(&v57, v23);
    v27 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v25 + 16LL))(v25);
    v40 = 1;
    v39 = v27;
    sub_AC88D0((__int64 *)&v57, &v39);
    sub_AC6300((__int64)&v57);
  }
  else
  {
    sub_E7AAD0(a1, v22, a2, v45, v46, a3, v48, v49);
  }
LABEL_29:
  if ( v54 != v35 + 2 )
    free(v54);
  if ( v51 != v53 )
    free(v51);
  if ( v48 != &v50 )
    operator delete(v48);
  v3 = 1;
  if ( v45 != &v47 )
    operator delete(v45);
  return v3;
}

