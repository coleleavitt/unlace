__int64 __fastcall sub_D73A50(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // r12
  __int64 v8; // rdx
  void *v9; // rax
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // r13
  __int64 v15; // rdx
  void *v16; // rax
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __m128i v30; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v31; // [rsp+10h] [rbp-98h] BYREF
  __m128i v32; // [rsp+20h] [rbp-88h] BYREF
  __m128i v33; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v34[4]; // [rsp+40h] [rbp-68h] BYREF
  void *v35; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v36; // [rsp+68h] [rbp-40h]
  char v37; // [rsp+6Ch] [rbp-3Ch]

  v5 = a1[22];
  v30 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v5, 16));
  sub_DFDA50(v5, 16);
  v6 = a1[22];
  v32 = _mm_load_si128(&v30);
  v30 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v6, 16));
  sub_DFDA50(v6, 16);
  v7 = *(_QWORD *)(a2 + 8);
  v31 = _mm_load_si128(&v30);
  switch ( a3 )
  {
    case 806:
      v33 = _mm_load_si128(&v32);
      sub_CDADA0((__int64)&v35, (__int64)&v33);
      sub_CDADA0((__int64)v34, (__int64)&v31);
      v19 = sub_21D5390(v34, &v31, v18);
      if ( v34[0] == v19 )
        v20 = sub_21DD2E0(v34, &v35);
      else
        v20 = sub_21D6700(v34, &v35);
      v21 = v20 == 2;
      goto LABEL_15;
    case 807:
      v33 = _mm_load_si128(&v32);
      sub_CDADA0((__int64)&v35, (__int64)&v33);
      sub_CDADA0((__int64)v34, (__int64)&v31);
      v23 = sub_21D5390(v34, &v31, v22);
      if ( v34[0] == v23 )
        v24 = sub_21DD2E0(v34, &v35);
      else
        v24 = sub_21D6700(v34, &v35);
      v25 = v24 - 1;
      goto LABEL_19;
    case 808:
    case 809:
    case 813:
    case 814:
    case 815:
    case 816:
    case 817:
    case 818:
    case 819:
    case 820:
    case 821:
      sub_CDADA0((__int64)&v35, (__int64)&v31);
      sub_CDADA0((__int64)v34, (__int64)&v32);
      v16 = (void *)sub_21D5390(v34, &v32, v15);
      if ( v35 == v16 )
        v17 = (unsigned int)sub_21DD2E0(&v35, v34);
      else
        v17 = (unsigned int)sub_21D6700(&v35, v34);
      sub_971860(v34);
      sub_971860(&v35);
      v13 = byte_23CCB0C[v17] == 4;
      break;
    case 810:
      v33 = _mm_load_si128(&v32);
      sub_CDADA0((__int64)&v35, (__int64)&v33);
      sub_CDADA0((__int64)v34, (__int64)&v31);
      v27 = sub_21D5390(v34, &v31, v26);
      if ( v34[0] == v27 )
        v21 = (unsigned int)sub_21DD2E0(v34, &v35) == 0;
      else
        v21 = (unsigned int)sub_21D6700(v34, &v35) == 0;
LABEL_15:
      v13 = v21;
      sub_971860(v34);
      sub_971860(&v35);
      break;
    case 811:
      v33 = _mm_load_si128(&v32);
      sub_CDADA0((__int64)&v35, (__int64)&v33);
      sub_CDADA0((__int64)v34, (__int64)&v31);
      v29 = sub_21D5390(v34, &v31, v28);
      if ( v34[0] == v29 )
        v25 = sub_21DD2E0(v34, &v35);
      else
        v25 = sub_21D6700(v34, &v35);
LABEL_19:
      v13 = v25 <= 1;
      sub_971860(v34);
      sub_971860(&v35);
      break;
    case 812:
      sub_CDADA0((__int64)&v35, (__int64)&v31);
      sub_CDADA0((__int64)v34, (__int64)&v32);
      v9 = (void *)sub_21D5390(v34, &v32, v8);
      if ( v35 == v9 )
        v10 = (unsigned int)sub_21DD2E0(&v35, v34);
      else
        v10 = (unsigned int)sub_21D6700(&v35, v34);
      sub_971860(v34);
      sub_971860(&v35);
      v13 = (unsigned __int8)(byte_23CCB0C[v10] - 2) <= 1u;
      break;
  }
  v36 = 8;
  v35 = (void *)v13;
  v37 = 1;
  sub_D6C2A0(a1, (__int64)&v35, v7, v11, v12);
  if ( v36 > 0x40 && v35 )
    operator delete[](v35);
  return 1;
}

