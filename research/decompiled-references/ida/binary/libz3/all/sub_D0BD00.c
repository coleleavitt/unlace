__int64 __fastcall sub_D0BD00(__int64 *a1, __int32 a2)
{
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // eax
  unsigned __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  int v23; // [rsp+0h] [rbp-2C8h]
  void *v24; // [rsp+8h] [rbp-2C0h]
  int *v25; // [rsp+10h] [rbp-2B8h]
  __int64 v26; // [rsp+18h] [rbp-2B0h]
  __int64 v27; // [rsp+38h] [rbp-290h] BYREF
  __int64 *v28; // [rsp+40h] [rbp-288h] BYREF
  __int64 v29; // [rsp+48h] [rbp-280h] BYREF
  _QWORD v30[19]; // [rsp+50h] [rbp-278h] BYREF
  int v31; // [rsp+E8h] [rbp-1E0h]
  __int64 v32; // [rsp+F0h] [rbp-1D8h]
  int v33[2]; // [rsp+F8h] [rbp-1D0h] BYREF
  __int64 v34; // [rsp+188h] [rbp-140h]
  int v35; // [rsp+190h] [rbp-138h]
  _QWORD v36[18]; // [rsp+198h] [rbp-130h] BYREF
  int v37; // [rsp+228h] [rbp-A0h]
  __int64 v38; // [rsp+230h] [rbp-98h]
  __int64 v39; // [rsp+238h] [rbp-90h]
  __int64 v40; // [rsp+240h] [rbp-88h] BYREF
  __int64 v41; // [rsp+248h] [rbp-80h]
  __int64 v42; // [rsp+250h] [rbp-78h]
  __int64 v43; // [rsp+258h] [rbp-70h]
  __int64 v44; // [rsp+260h] [rbp-68h]
  _QWORD v45[2]; // [rsp+268h] [rbp-60h] BYREF
  __m128i si128; // [rsp+278h] [rbp-50h]

  v3 = a1[1];
  v4 = *(_DWORD *)(v3 + 712);
  *(_DWORD *)(v3 + 712) = 0;
  v27 = 0;
  HIDWORD(v24) = v4;
  sub_1584DD0(v30, v3, 0);
  v30[18] = v45;
  v30[0] = &off_1C59FA0;
  v31 = 0;
  v32 = 0;
  v25 = v33;
  sub_1584DD0(v33, v3, 0);
  v34 = 0;
  v35 = 0;
  *(_QWORD *)v33 = &off_1C61DB8;
  sub_1584DD0(v36, v3, 0);
  v37 = 0;
  v38 = 0;
  v36[0] = &off_1C61DE0;
  v39 = v3;
  v40 = 0;
  v41 = v3;
  v42 = 0;
  v43 = v3;
  v44 = 0;
  v30[0] = &off_1C59FC0;
  v45[0] = v3;
  v28 = &v27;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B6840);
  sub_17F9A60(&v29, "tactic");
  v5 = sub_1859960(&v27, "max_memory", 0xFFFFFFFFLL);
  v6 = (unsigned __int64)v5 << 20;
  v7 = v5 == -1;
  v8 = -1;
  if ( !v7 )
    v8 = v6;
  v45[1] = v8;
  v9 = sub_1859980(v28, "blast_term_ite.max_steps", &v29, 0xFFFFFFFFLL);
  si128.m128i_i32[1] = sub_1859960(&v27, "max_steps", v9);
  v10 = sub_1859980(v28, "blast_term_ite.max_inflation", &v29, 0xFFFFFFFFLL);
  si128.m128i_i32[2] = sub_1859960(&v27, "max_inflation", v10);
  sub_18572D0(&v29);
  si128.m128i_i32[2] = a2;
  if ( a2 != -1 )
    si128.m128i_i32[3] = sub_167E610(*a1, v23, v24, (int)v33);
  v11 = *a1;
  v29 = v3;
  v28 = nullptr;
  sub_D06900((__int64)v30, v11, (__int64 *)&v28, &v40);
  v12 = (__int64)v28;
  v13 = *a1;
  v26 = v29;
  if ( (__int64 *)*a1 == v28 )
  {
    if ( !v28 )
      goto LABEL_12;
    v15 = *((_DWORD *)v28 + 2) - 1;
  }
  else
  {
    if ( v13 && (v14 = a1[1], v7 = *(_DWORD *)(v13 + 8) == 1, --*(_DWORD *)(v13 + 8), v7) )
    {
      sub_15D7BC0(v14, v13);
      *a1 = v12;
      if ( !v12 )
        goto LABEL_12;
    }
    else
    {
      *a1 = v12;
      if ( !v12 )
        goto LABEL_12;
    }
    v15 = *(_DWORD *)(v12 + 8);
  }
  *(_DWORD *)(v12 + 8) = v15;
  if ( !v15 )
    sub_15D7BC0(v26, v12);
LABEL_12:
  v30[0] = &off_1C59FA0;
  if ( v44 )
    sub_186B220((void *)(v44 - 8));
  v16 = v42;
  if ( v42 )
  {
    v17 = v43;
    v7 = (*(_DWORD *)(v42 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v17, v16);
  }
  v18 = v40;
  if ( v40 )
  {
    v19 = v41;
    v7 = (*(_DWORD *)(v40 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v19, v18);
  }
  v20 = v38;
  if ( v38 )
  {
    v21 = v39;
    v7 = (*(_DWORD *)(v38 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v21, v20);
  }
  v36[0] = &qword_1C637E8;
  sub_15841B0(v36);
  *(_QWORD *)v33 = &qword_1C637E8;
  sub_15841B0(v25);
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  sub_15841B0(v30);
  sub_18572D0(&v27);
  *(_DWORD *)(v3 + 712) = HIDWORD(v24);
  return HIDWORD(v24);
}

