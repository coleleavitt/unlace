__int64 __fastcall sub_AAFD80(__int64 *a1, double a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // r13
  unsigned int *v6; // rbp
  unsigned int *v7; // rbp
  __int64 v8; // rbp
  unsigned int *v9; // rax
  __int64 v10; // r13
  unsigned int *v11; // rbp
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r13
  unsigned int *v17; // rbp
  __int64 v18; // rdx
  void *v19; // rbx
  __int64 result; // rax
  __int64 *v21; // rbx
  unsigned __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rbp
  __m128i v29; // xmm1
  _OWORD *v30; // rax
  _OWORD *v31; // rax
  _OWORD *v32; // rax
  _OWORD *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // [rsp+8h] [rbp-380h] BYREF
  __int64 v37; // [rsp+10h] [rbp-378h]
  __int64 v38; // [rsp+18h] [rbp-370h]
  __int64 v39; // [rsp+28h] [rbp-360h] BYREF
  _BYTE v40[208]; // [rsp+30h] [rbp-358h] BYREF
  __int64 v41; // [rsp+100h] [rbp-288h]
  __int64 v42; // [rsp+108h] [rbp-280h]
  __int64 *v43; // [rsp+110h] [rbp-278h]
  __int64 (__fastcall **v44)(); // [rsp+150h] [rbp-238h]
  void *v45; // [rsp+168h] [rbp-220h]
  void *v46; // [rsp+180h] [rbp-208h]
  __int64 (__fastcall **v47)(); // [rsp+188h] [rbp-200h]
  void *v48; // [rsp+1A0h] [rbp-1E8h]
  void *v49; // [rsp+1B8h] [rbp-1D0h]
  int v50; // [rsp+1D0h] [rbp-1B8h]
  char v51; // [rsp+237h] [rbp-151h]
  char v52; // [rsp+238h] [rbp-150h]
  char v53[16]; // [rsp+240h] [rbp-148h] BYREF
  char v54[56]; // [rsp+250h] [rbp-138h] BYREF
  __int64 v55; // [rsp+288h] [rbp-100h]
  __int64 v56; // [rsp+290h] [rbp-F8h]
  __int64 v57; // [rsp+298h] [rbp-F0h]
  __int64 v58; // [rsp+2A0h] [rbp-E8h]
  __int64 v59; // [rsp+2A8h] [rbp-E0h]
  __int64 v60; // [rsp+2B8h] [rbp-D0h]
  __int64 v61; // [rsp+2C0h] [rbp-C8h]
  void *v62; // [rsp+2D0h] [rbp-B8h]
  void *v63; // [rsp+2E8h] [rbp-A0h]
  void *ptr; // [rsp+300h] [rbp-88h]
  __int64 v65; // [rsp+320h] [rbp-68h]
  __int64 v66; // [rsp+340h] [rbp-48h]

  sub_15BAB00(v40, a1[1]);
  v3 = *a1;
  v39 = 0;
  sub_C0FF90(v3 + 216, &v39);
  if ( v39 )
    v4 = *(unsigned int *)(v39 - 4);
  else
    v4 = 0;
  sub_15C0810(v40, v4);
  sub_AADFB0(a1, a2);
  sub_AAF350(a1);
  sub_AAE7F0(a1);
  v5 = *a1;
  v6 = (unsigned int *)sub_186B270(0x1D0u);
  sub_B45410(v6, *a1);
  sub_8F1E10(v5, v6);
  v7 = (unsigned int *)sub_186B270(0xD8u);
  sub_B23630(v7, *a1);
  sub_8F1E10(*a1, v7);
  v8 = *a1;
  v9 = (unsigned int *)sub_BAD3F0(*a1);
  sub_8F1E10(v8, v9);
  sub_AAFA70(a1, v40);
  sub_AAE7F0(a1);
  v10 = *a1;
  v11 = (unsigned int *)sub_186B270(0x5B8u);
  sub_B52730((_DWORD)v11, *a1, v12, v13, v14, v15);
  sub_8F1E10(v10, v11);
  v16 = *a1;
  v17 = (unsigned int *)sub_186B270(0x98u);
  sub_AEE160(v17, *a1, a1[1]);
  sub_8F1E10(v16, v17);
  if ( *(_BYTE *)(a1[1] + 921) )
  {
    v37 = *a1;
    v26 = sub_186B270(0x190u);
    v27 = *a1;
    v28 = v26;
    sub_966710(v26, *a1, 6);
    *(_QWORD *)v28 = off_1C6F538;
    *(_OWORD *)(v28 + 56) = 0;
    v36 = v28 + 56;
    sub_180C0A0(v28 + 72);
    v29 = _mm_loadl_epi64((const __m128i *)(v27 + 104));
    *(_QWORD *)(v28 + 144) = 0;
    v38 = v29.m128i_i64[0];
    *(__m128 *)(v28 + 112) = _mm_loadh_ps((const double *)&v36);
    *(__m128i *)(v28 + 128) = _mm_unpacklo_epi64(v29, v29);
    v30 = (_OWORD *)sub_186B270(0x80u);
    v29.m128i_i64[0] = v38;
    *(_QWORD *)(v28 + 152) = v30;
    *(_DWORD *)(v28 + 168) = 0;
    *(_QWORD *)(v28 + 160) = 8;
    *(_DWORD *)(v28 + 176) = 0;
    *(_QWORD *)(v28 + 192) = 0;
    *v30 = 0;
    v30[1] = 0;
    v30[2] = 0;
    v30[3] = 0;
    v30[4] = 0;
    v30[5] = 0;
    v30[6] = 0;
    v30[7] = 0;
    *(_QWORD *)(v28 + 184) = v29.m128i_i64[0];
    v31 = (_OWORD *)sub_186B270(0x80u);
    *(_QWORD *)(v28 + 200) = v31;
    *(_QWORD *)(v28 + 208) = 8;
    *(_DWORD *)(v28 + 216) = 0;
    *v31 = 0;
    v31[1] = 0;
    v31[2] = 0;
    v31[3] = 0;
    v31[4] = 0;
    v31[5] = 0;
    v31[6] = 0;
    v31[7] = 0;
    v32 = (_OWORD *)sub_186B270(0x100u);
    *(_QWORD *)(v28 + 224) = v32;
    *v32 = 0;
    v29.m128i_i64[0] = v38;
    v32[1] = 0;
    v32[2] = 0;
    v32[3] = 0;
    v32[4] = 0;
    v32[5] = 0;
    v32[6] = 0;
    v32[7] = 0;
    v32[8] = 0;
    v32[9] = 0;
    v32[10] = 0;
    v32[11] = 0;
    v32[12] = 0;
    v32[13] = 0;
    v32[14] = 0;
    v32[15] = 0;
    *(_QWORD *)(v28 + 232) = 8;
    *(_DWORD *)(v28 + 240) = 0;
    *(_QWORD *)(v28 + 256) = 0;
    *(_DWORD *)(v28 + 264) = 0;
    *(_QWORD *)(v28 + 272) = &off_1C62200;
    *(_QWORD *)(v28 + 288) = 0;
    *(_QWORD *)(v28 + 296) = 0;
    *(_QWORD *)(v28 + 312) = 0;
    *(_QWORD *)(v28 + 320) = 0;
    *(_QWORD *)(v28 + 336) = 0;
    *(_DWORD *)(v28 + 344) = 0;
    *(_QWORD *)(v28 + 248) = v29.m128i_i64[0];
    *(_QWORD *)(v28 + 328) = v29.m128i_i64[0];
    v33 = (_OWORD *)sub_186B270(0x40u);
    v34 = v37;
    *(_QWORD *)(v28 + 352) = v33;
    *v33 = 0;
    v33[1] = 0;
    v33[2] = 0;
    v33[3] = 0;
    v35 = *(_QWORD *)(v27 + 104);
    *(_QWORD *)(v28 + 360) = 8;
    *(_DWORD *)(v28 + 368) = 0;
    *(_QWORD *)(v28 + 376) = 0;
    *(_QWORD *)(v28 + 384) = v35;
    *(_DWORD *)(v28 + 392) = 0;
    *(_BYTE *)(v28 + 396) = 1;
    sub_8F1E10(v34, (unsigned int *)v28);
  }
  v18 = a1[2];
  if ( (unsigned int)(*(_DWORD *)(v18 + 580) - 3) > 2 && v51 && !v52 && !v50 )
    *(_DWORD *)(v18 + 476) = 0;
  if ( v39 )
    sub_186B220((void *)(v39 - 8));
  if ( v66 )
    sub_186B220((void *)(v66 - 8));
  if ( v65 )
    sub_186B220((void *)(v65 - 8));
  if ( ptr )
    sub_186B220(ptr);
  if ( v63 )
    sub_186B220(v63);
  if ( v62 )
    sub_186B220(v62);
  if ( v61 )
    sub_186B220((void *)(v61 - 8));
  if ( v60 )
    sub_186B220((void *)(v60 - 8));
  if ( v59 )
    sub_186B220((void *)(v59 - 8));
  if ( v58 )
    sub_186B220((void *)(v58 - 8));
  if ( v57 )
    sub_186B220((void *)(v57 - 8));
  if ( v56 )
    sub_186B220((void *)(v56 - 8));
  if ( v55 )
    sub_186B220((void *)(v55 - 8));
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v53);
  sub_182CBA0(v19, v54);
  v47 = &off_1C62200;
  if ( v49 )
    sub_186B220(v49);
  if ( v48 )
    sub_186B220(v48);
  result = (__int64)&off_1C62200;
  v44 = &off_1C62200;
  if ( v46 )
    result = sub_186B220(v46);
  if ( v45 )
    result = sub_186B220(v45);
  v21 = v43;
  if ( v43 )
  {
    result = *((unsigned int *)v43 - 1);
    v22 = (unsigned __int64)&v43[result];
    if ( (unsigned __int64)v43 >= v22 )
      goto LABEL_49;
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = v42;
          if ( (*(_DWORD *)(v23 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v21 >= v22 )
          goto LABEL_48;
      }
      result = sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( (unsigned __int64)v21 < v22 );
LABEL_48:
    v21 = v43;
    if ( v43 )
LABEL_49:
      result = sub_186B220(v21 - 1);
  }
  if ( v41 )
    return sub_186B220((void *)(v41 - 8));
  return result;
}

