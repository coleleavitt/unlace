unsigned __int64 __fastcall sub_2523C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *exception; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  _QWORD *v7; // r12
  __int64 v8; // rax
  size_t v9; // rbx
  void *v10; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbp
  int v16; // r9d
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  int v20; // ebp
  __int64 v21; // rsi
  unsigned int i; // r13d
  __m128i *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r8d
  int v27; // r9d
  int v28; // r8d
  int v29; // r9d
  bool v30; // zf
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // r15
  _QWORD *v37; // rbp
  __int64 v38; // r12
  __int64 v39; // rdi
  __int64 v40; // rdi
  int v41; // r8d
  int v42; // r9d
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  unsigned int v48; // eax
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // [rsp-8h] [rbp-1E8h]
  _QWORD v53[5]; // [rsp+8h] [rbp-1D8h] BYREF
  char v54; // [rsp+30h] [rbp-1B0h]
  _QWORD v55[2]; // [rsp+38h] [rbp-1A8h] BYREF
  __int128 v56; // [rsp+48h] [rbp-198h]
  char v57; // [rsp+58h] [rbp-188h]
  unsigned __int64 v58; // [rsp+5Ch] [rbp-184h]
  __int64 v59; // [rsp+68h] [rbp-178h]
  __int128 v60; // [rsp+70h] [rbp-170h]
  __int64 v61; // [rsp+80h] [rbp-160h]
  __int128 v62; // [rsp+88h] [rbp-158h]
  __int64 v63; // [rsp+98h] [rbp-148h]
  __int128 v64; // [rsp+A0h] [rbp-140h]
  __int64 v65; // [rsp+B0h] [rbp-130h]
  __int128 v66; // [rsp+B8h] [rbp-128h]
  int v67; // [rsp+C8h] [rbp-118h]
  __int64 v68; // [rsp+D0h] [rbp-110h]
  __int128 v69; // [rsp+D8h] [rbp-108h]
  __int64 v70; // [rsp+E8h] [rbp-F8h]
  __int64 v71; // [rsp+F0h] [rbp-F0h]
  __int64 v72; // [rsp+F8h] [rbp-E8h]
  __int64 v73; // [rsp+100h] [rbp-E0h]
  __int128 v74; // [rsp+108h] [rbp-D8h]
  __int64 v75; // [rsp+118h] [rbp-C8h]
  __int64 v76; // [rsp+120h] [rbp-C0h]
  __int64 v77; // [rsp+128h] [rbp-B8h]
  __int64 v78; // [rsp+130h] [rbp-B0h]
  __int64 v79; // [rsp+138h] [rbp-A8h]
  __int128 v80; // [rsp+140h] [rbp-A0h]
  __int64 v81; // [rsp+150h] [rbp-90h]
  __int128 v82; // [rsp+158h] [rbp-88h]
  __int64 v83; // [rsp+168h] [rbp-78h]
  __int128 v84; // [rsp+170h] [rbp-70h]
  __int64 v85; // [rsp+180h] [rbp-60h]
  __int64 v86; // [rsp+188h] [rbp-58h]
  int v87; // [rsp+190h] [rbp-50h]
  unsigned __int64 v88; // [rsp+1A0h] [rbp-40h]

  v88 = __readfsqword(0x28u);
  v57 = 0;
  v58 = 0xFFFFFFFF00000000LL;
  v55[1] = 0;
  v59 = 0;
  v61 = 0;
  v63 = 0;
  v12 = *(_QWORD *)(a1 + 216);
  v65 = 0;
  v67 = 0;
  v68 = 0;
  v56 = 0;
  v60 = 0;
  v62 = 0;
  v64 = 0;
  v66 = 0;
  v69 = 0;
  v13 = *(_QWORD **)(a1 + 8);
  v70 = a1;
  v71 = 0;
  v55[0] = off_4EBD58;
  v72 = 0;
  v73 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v81 = 0;
  v83 = 0;
  v85 = v12;
  v86 = 0;
  v87 = 0;
  v74 = 0;
  v80 = 0;
  v82 = 0;
  v84 = 0;
  v14 = sub_670E0(v13, a2, (__int64)off_4EBD58, a4);
  *(_BYTE *)(v14 + 248) = 0;
  v15 = v14;
  if ( (unsigned int)sub_33E140(*(_QWORD *)(a1 + 216), 8, (unsigned int)v55, a1, v14, v16) != 1 )
  {
    v20 = sub_3120C0(v15, v55);
    if ( v20 )
    {
      exception = __cxa_allocate_exception(0x30u);
      v6 = *(_QWORD *)(a1 + 8);
      v7 = exception;
      v8 = *(_QWORD *)a1;
      *v7 = off_4DBCD0;
      v7[2] = v8;
      *((_DWORD *)v7 + 2) = v20;
      v7[3] = 0;
      *((_OWORD *)v7 + 2) = 0;
      v9 = *(_QWORD *)(v6 + 504);
      if ( v9 )
      {
        v10 = (void *)qalloc_or_throw(*(_QWORD *)(v6 + 504), (__int64)v55, v5, (__int64)off_4DBCD0);
        v7[3] = v10;
        v7[5] = v9;
        memcpy(v10, *(const void **)(v6 + 496), v9);
        v7[4] = v9;
      }
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
    }
  }
  v21 = 9;
  sub_33E140(*(_QWORD *)(a1 + 216), 9, (unsigned int)v55, v17, v18, v19);
  *(_QWORD *)(a1 + 168) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 896LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 900LL) = 0;
  sub_2799E0(*(_QWORD *)(a1 + 216));
  for ( i = 0; i != 10; ++i )
  {
    sub_138440(*(_QWORD *)(a1 + 8));
    if ( *(_DWORD *)(a1 + 24) != 71 )
    {
      *(_DWORD *)(a1 + 24) = 71;
      v23 = (__m128i *)qalloc_or_throw(24, v21, v24, v25);
      v23[1].m128i_i64[0] = 0;
      *v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
      *(_QWORD *)(a1 + 40) = v23;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
LABEL_5:
      if ( i != 3 )
        goto LABEL_6;
LABEL_17:
      sub_29E310(a1, v21, v24, v25, v26, v27, v52);
      goto LABEL_6;
    }
    v36 = *(_QWORD **)(a1 + 40);
    v37 = (_QWORD *)*v36;
    if ( v36 == (_QWORD *)*v36 )
      goto LABEL_5;
    do
    {
      v38 = (__int64)v37;
      v37 = (_QWORD *)*v37;
      **(_QWORD **)(v38 + 8) = v37;
      v37[1] = *(_QWORD *)(v38 + 8);
      sub_255050(v38 + 16);
      qfree(v38);
      --v36[2];
    }
    while ( v36 != v37 );
    if ( i == 3 )
      goto LABEL_17;
LABEL_6:
    sub_33E140(*(_QWORD *)(a1 + 216), 10, a1, 0, v26, v27);
    *(_DWORD *)(a1 + 56) = 0;
    v87 = 0;
    sub_250510(v55, (unsigned int)v58, a1 + 16, 0);
    sub_33E140(*(_QWORD *)(a1 + 216), 10, a1, 1, v28, v29);
    v30 = v78 == 0;
    *(_DWORD *)(a1 + 56) = 1;
    if ( !v30 )
      sub_2585C0(a1);
    v21 = 0;
    sub_3252D0(a1, 0, 1);
    sub_241D00(a1, 0, v31, v32, v33);
    v34 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v34 + 3) & 2) == 0 )
      goto LABEL_24;
    v35 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 824LL);
    *(_DWORD *)(v35 + 8) = *(_DWORD *)(v34 + 64);
    *(_QWORD *)v35 = 0;
    if ( (unsigned __int8)sub_256040(a1) )
    {
      v21 = i;
      if ( !(unsigned __int8)sub_2AC820(a1, i) && !(unsigned __int8)sub_27D2C0(*(_QWORD *)(a1 + 216)) )
      {
        v21 = 0xFFFFFFFFLL;
        if ( !(unsigned __int8)sub_2AC820(a1, 0xFFFFFFFFLL)
          && !(unsigned int)sub_29E310(a1, -1, v44, v45, v46, v47, v52) )
        {
          break;
        }
      }
    }
  }
  v48 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 72LL) & 0xFFFFFFF0;
  if ( v48 == 64 || v48 == 208 )
    sub_F3CA0((_QWORD *)a1, v21);
  sub_284DF0(a1, 1);
  if ( i == 10 )
  {
    sub_3311F0(*(_QWORD *)(a1 + 8), -1, 13, v49, v50, v51);
    sub_23FE40(a1);
    sub_255F70(a1);
  }
  else if ( (int)sub_23FE40(a1) > 0 )
  {
    sub_255F70(a1);
  }
  sub_23FF10(a1);
  if ( *(char *)(*(_QWORD *)(a1 + 216) + 604LL) < 0 )
    sub_23FFE0(a1);
  v39 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(v39 + 320) )
  {
    sub_37C180(a1);
    v39 = *(_QWORD *)(a1 + 8);
  }
  sub_3770B0(v39);
  sub_2112D0(*(_QWORD *)(a1 + 8), a1);
  sub_1F1860(*(_QWORD *)(a1 + 8));
  v40 = *(_QWORD *)(a1 + 8);
  memset(&v53[1], 0, 32);
  v54 = 0;
  v53[0] = &off_4DF970;
  sub_11FBB0(v40, (__int64)v53);
  sub_251FC0(a1);
  sub_23FD80(a1);
  sub_376950(a1);
  sub_33E140(*(_QWORD *)(a1 + 216), 10, a1, 8, v41, v42);
  *(_DWORD *)(a1 + 56) = 8;
  sub_3252D0(a1, 0, 1);
  *(_DWORD *)(a1 + 108) &= 0xFFFFFFF4;
LABEL_24:
  sub_6C480(v55);
  return v88 - __readfsqword(0x28u);
}
