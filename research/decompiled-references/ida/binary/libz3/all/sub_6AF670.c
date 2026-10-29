__int64 __fastcall sub_6AF670(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rbx
  __m128 v7; // xmm1
  _OWORD *v8; // rax
  _OWORD *v9; // rax
  __m128i si128; // xmm2
  _OWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  void *v14; // rbx
  void *v16[2]; // [rsp+0h] [rbp-288h] BYREF
  void *v17; // [rsp+10h] [rbp-278h] BYREF
  __int64 v18; // [rsp+18h] [rbp-270h]
  __int64 v19; // [rsp+20h] [rbp-268h]
  __int64 v20; // [rsp+28h] [rbp-260h]
  int v21[2]; // [rsp+38h] [rbp-250h] BYREF
  _OWORD v22[2]; // [rsp+40h] [rbp-248h] BYREF
  int v23[4]; // [rsp+60h] [rbp-228h] BYREF
  void *v24; // [rsp+70h] [rbp-218h]
  void *v25; // [rsp+78h] [rbp-210h]
  __int64 v26; // [rsp+80h] [rbp-208h]
  int v27; // [rsp+88h] [rbp-200h]
  void *v28; // [rsp+90h] [rbp-1F8h]
  __int64 v29; // [rsp+98h] [rbp-1F0h]
  int v30; // [rsp+A0h] [rbp-1E8h]
  __int64 v31[2]; // [rsp+A8h] [rbp-1E0h] BYREF
  __int64 v32[2]; // [rsp+B8h] [rbp-1D0h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-1C0h]
  __int64 v34; // [rsp+D0h] [rbp-1B8h]
  __int64 v35; // [rsp+D8h] [rbp-1B0h] BYREF
  int v36; // [rsp+E0h] [rbp-1A8h]
  __int16 v37; // [rsp+E4h] [rbp-1A4h]
  int v38; // [rsp+F4h] [rbp-194h]
  __int128 v39; // [rsp+100h] [rbp-188h]
  __int128 v40; // [rsp+110h] [rbp-178h]
  char *v41; // [rsp+120h] [rbp-168h]
  __int64 v42; // [rsp+128h] [rbp-160h]
  char v43; // [rsp+130h] [rbp-158h] BYREF
  __m128i v44; // [rsp+1B0h] [rbp-D8h]
  __int64 v45; // [rsp+1C0h] [rbp-C8h]
  __int64 (__fastcall **v46)(); // [rsp+1C8h] [rbp-C0h]
  __int64 v47; // [rsp+1D8h] [rbp-B0h]
  void *v48; // [rsp+1E0h] [rbp-A8h]
  __int64 v49; // [rsp+1F0h] [rbp-98h]
  void *v50; // [rsp+1F8h] [rbp-90h]
  __int64 v51; // [rsp+200h] [rbp-88h]
  void *v52; // [rsp+208h] [rbp-80h]
  __int64 v53; // [rsp+210h] [rbp-78h]
  void *v54; // [rsp+218h] [rbp-70h]
  __int64 v55; // [rsp+220h] [rbp-68h]
  int v56; // [rsp+228h] [rbp-60h]
  __int64 v57; // [rsp+230h] [rbp-58h]
  __int64 v58[2]; // [rsp+238h] [rbp-50h] BYREF
  __int64 v59; // [rsp+248h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 8);
  v17 = a2;
  v18 = a3;
  v19 = a4;
  v7 = _mm_loadh_ps((const double *)&v17);
  v20 = a5;
  *(_QWORD *)v21 = 0;
  v16[1] = (void *)v7.m128_u64[1];
  v22[0] = v7;
  v22[1] = v7;
  sub_14B7810((int)v23, v6, (int)v21, a4, a5, a6, (void *)v7.m128_u64[0]);
  sub_18572D0(v21);
  v24 = (void *)sub_1434DE0(v6, 0);
  v8 = (_OWORD *)sub_186B270(0x80u);
  v25 = v8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v26 = 8;
  v27 = 0;
  v9 = (_OWORD *)sub_186B270(0x80u);
  v28 = v9;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v37 = 0;
  v41 = &v43;
  v29 = 8;
  v30 = 0;
  v31[0] = v6;
  v31[1] = 0;
  v32[0] = v6;
  v32[1] = 0;
  v33 = 0;
  v34 = 0;
  *(_QWORD *)v21 = 0;
  v35 = v6;
  v36 = 256;
  v38 = 0;
  v42 = 0x1000000000LL;
  v39 = 0;
  v40 = 0;
  sub_14DC230(&v35, v21);
  sub_18572D0(v21);
  si128 = _mm_load_si128((const __m128i *)v16);
  v45 = 0;
  v47 = 0;
  v46 = &off_1C62200;
  v48 = nullptr;
  v52 = v17;
  v49 = 0;
  v50 = nullptr;
  v51 = v6;
  v53 = v18;
  v44 = si128;
  v11 = (_OWORD *)sub_186B270(0x80u);
  v58[0] = v6;
  v12 = v20;
  v13 = v19;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  v11[4] = 0;
  v11[5] = 0;
  v11[6] = 0;
  v11[7] = 0;
  v54 = v11;
  v55 = 8;
  v56 = 0;
  v57 = 0;
  v58[1] = 0;
  v59 = 0;
  sub_6BB860(v22, a1, v13, v12);
  if ( v59 )
    sub_186B220((void *)(v59 - 8));
  sub_2334C0(v58);
  if ( v57 )
    sub_186B220((void *)(v57 - 8));
  if ( v54 )
    sub_186B220(v54);
  v46 = &off_1C62200;
  if ( v50 )
    sub_186B220(v50);
  if ( v48 )
    sub_186B220(v48);
  if ( v45 )
    sub_186B220((void *)(v45 - 8));
  sub_39A7A0((__int64)&v35);
  if ( v34 )
    sub_186B220((void *)(v34 - 8));
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  sub_2334C0(v32);
  sub_2334C0(v31);
  if ( v28 )
    sub_186B220(v28);
  if ( v25 )
    sub_186B220(v25);
  v14 = v24;
  if ( v24 )
  {
    (**(void (__fastcall ***)(void *))v24)(v24);
    sub_186B220(v14);
  }
  return sub_14B63F0(v23);
}

