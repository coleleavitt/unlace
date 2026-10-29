__int64 __fastcall sub_14972B0(
        __m128i *a1,
        int a2,
        _DWORD *a3,
        __int64 a4,
        __int64 *a5,
        int a6,
        __m128i a7,
        __m128 a8,
        __int64 a9,
        int *a10)
{
  char *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  char *v20; // rdx
  int v21; // r10d
  __int64 v22; // r13
  _BYTE *v23; // r14
  _BYTE *v24; // rbp
  _BYTE *v25; // rdi
  __int64 v27; // rdi
  bool v28; // zf
  __int64 v29; // r14
  __int64 v30; // r13
  __int64 v31; // rdi
  __int64 *v32; // rdi
  _QWORD *v33; // [rsp+8h] [rbp-360h] BYREF
  _DWORD *v34; // [rsp+10h] [rbp-358h]
  int v35; // [rsp+1Ch] [rbp-34Ch]
  __int64 v36; // [rsp+28h] [rbp-340h] BYREF
  __m128 v37; // [rsp+30h] [rbp-338h] BYREF
  int v38; // [rsp+40h] [rbp-328h] BYREF
  __int64 v39; // [rsp+48h] [rbp-320h]
  __int64 v40; // [rsp+50h] [rbp-318h]
  __int64 v41; // [rsp+60h] [rbp-308h]
  void *v42[2]; // [rsp+68h] [rbp-300h] BYREF
  char v43[24]; // [rsp+78h] [rbp-2F0h] BYREF
  char v44[8]; // [rsp+90h] [rbp-2D8h] BYREF
  __int64 v45; // [rsp+98h] [rbp-2D0h]
  void *v46; // [rsp+B8h] [rbp-2B0h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-2A0h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-290h] BYREF
  void *ptr; // [rsp+E0h] [rbp-288h]
  __int64 v50; // [rsp+F0h] [rbp-278h] BYREF
  void *v51; // [rsp+110h] [rbp-258h]
  int v52; // [rsp+11Ch] [rbp-24Ch]
  int v53; // [rsp+130h] [rbp-238h]
  __int64 v54; // [rsp+1B8h] [rbp-1B0h]
  __int64 v55; // [rsp+1C0h] [rbp-1A8h] BYREF
  _BYTE *v56; // [rsp+1C8h] [rbp-1A0h]
  __int64 v57; // [rsp+1D0h] [rbp-198h]
  _BYTE v58[320]; // [rsp+1D8h] [rbp-190h] BYREF
  __int64 v59; // [rsp+318h] [rbp-50h]
  char v60; // [rsp+320h] [rbp-48h]

  v34 = a3;
  v14 = (char *)a5[1];
  v42[1] = (void *)0x200000000LL;
  v15 = *((unsigned int *)a5 + 4);
  v35 = a6;
  v42[0] = v43;
  v41 = 0;
  sub_147F500((__int64 *)v42, v43, v14, &v14[8 * v15]);
  v41 = *a5;
  sub_147A4A0((__int64)v44, (__int64)&a1[31].m128i_i64[1]);
  v16 = a1[6].m128i_i64[0];
  v59 = 0;
  v56 = v58;
  v17 = (char *)v46;
  v18 = *(_QWORD *)(v16 + 512);
  v57 = 0x400000000LL;
  v54 = v16;
  *(_QWORD *)(v16 + 512) = &v55;
  v19 = *((unsigned int *)a5 + 4);
  v59 = v18;
  v20 = (char *)a5[1];
  v55 = 0;
  v60 = 0;
  sub_147F500((__int64 *)&v46, v17, v20, &v20[8 * v19]);
  *((_DWORD *)a5 + 4) = 0;
  sub_15D8C50(&v48, a5 + 5);
  v38 = 0;
  v21 = dword_2617040[a2];
  v39 = 0;
  v40 = 0;
  *((_DWORD *)a5 + 14) = 0;
  LODWORD(v33) = v21;
  sub_1487580((__int64)a1, (__int64)v44, (__int64)&v38, 3u, v21, 0, a7, a8, ((1LL << v21) & 0x22DE) != 0);
  if ( (unsigned __int8)sub_15AC7C0(v44)
    && (unsigned __int8)sub_1496E50((__int64)a1, (__int64)v44, 3u, (int)v33, 0, a7, a8) )
  {
    v22 = 0;
    if ( v60 )
      goto LABEL_8;
    goto LABEL_24;
  }
  if ( a1[2].m128i_i16[0] != 63 )
  {
    if ( (unsigned __int8)sub_15AC7C0(v44) )
    {
      sub_17A3F10(a1[6].m128i_i64[0], v45);
      if ( !a10 )
        goto LABEL_6;
    }
    else if ( !a10 )
    {
LABEL_6:
      v22 = sub_14922F0(a1, (__int64)v44, a2, a4, &v38, v34, a7, a8, a9);
      goto LABEL_7;
    }
    v53 = *a10;
    goto LABEL_6;
  }
  if ( *(_DWORD *)a4 && *(_DWORD *)(a4 + 4) )
  {
    sub_1481BE0((__int64)a1, (unsigned int *)a4, 0);
    v27 = *(_QWORD *)(a4 + 40);
    *(_DWORD *)(a4 + 16) = 0;
    sub_15DCED0(v27, a4 + 40);
    *(_DWORD *)(a4 + 56) = 0;
    *(_QWORD *)a4 = 0;
  }
  v28 = (_BYTE)v35 == 0;
  *v34 = a1[1].m128i_i32[0];
  if ( !v28 )
  {
    v32 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v32, a1[1].m128i_i32);
  }
  v29 = a1[6].m128i_i64[0];
  v36 = 0;
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    v33 = qword_2CD8AE0;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v30 = sub_17D91F0(v29, *(_QWORD *)(a1[6].m128i_i64[0] + 608), 3, v44, qword_2CD8AE0, &v36);
  sub_17A3F10(a1[6].m128i_i64[0], v30);
  if ( !v60 )
  {
    sub_1818070(v54, v59, v30);
    v60 = 1;
  }
  v31 = a1[6].m128i_i64[0];
  if ( v36 )
  {
    v33 = (_QWORD *)v30;
    v37 = _mm_loadh_ps((const double *)&v33);
    v22 = sub_17B2ED0(v31, &v37);
  }
  else
  {
    v22 = sub_17A2530(v31, v30, 0);
  }
LABEL_7:
  if ( v60 )
    goto LABEL_8;
LABEL_24:
  sub_1818070(v54, v59, 0);
  v60 = 1;
LABEL_8:
  v23 = v56;
  v24 = &v56[80 * (unsigned int)v57];
  if ( v56 != v24 )
  {
    do
    {
      v25 = v23;
      v23 += 80;
      sub_15B6850(v25);
    }
    while ( v24 != v23 );
    v24 = v56;
  }
  if ( v24 != v58 )
    free(v24);
  if ( v52 )
    free(v51);
  sub_15DCED0(v48, &v48);
  if ( ptr != &v50 )
    free(ptr);
  if ( v46 != &v47 )
    free(v46);
  if ( v42[0] != v43 )
    free(v42[0]);
  return v22;
}
