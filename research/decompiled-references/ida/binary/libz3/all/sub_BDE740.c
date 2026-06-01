__m128i *__fastcall sub_BDE740(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  int v7; // r12d
  int v8; // eax
  int v9; // r9d
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  int v21[2]; // [rsp+0h] [rbp-288h]
  __int64 v22; // [rsp+8h] [rbp-280h]
  int v23[2]; // [rsp+10h] [rbp-278h] BYREF
  __int64 v24; // [rsp+18h] [rbp-270h]
  int v25[2]; // [rsp+20h] [rbp-268h] BYREF
  int v26; // [rsp+28h] [rbp-260h]
  __int64 v27; // [rsp+30h] [rbp-258h]
  void *v28; // [rsp+38h] [rbp-250h]
  _BYTE *v29; // [rsp+B0h] [rbp-1D8h]
  int v30; // [rsp+B8h] [rbp-1D0h]
  __int64 v31; // [rsp+C0h] [rbp-1C8h]
  int v32[2]; // [rsp+C8h] [rbp-1C0h] BYREF
  __int64 v33; // [rsp+158h] [rbp-130h]
  int v34; // [rsp+160h] [rbp-128h]
  __int64 v35[18]; // [rsp+168h] [rbp-120h] BYREF
  int v36; // [rsp+1F8h] [rbp-90h]
  __int64 v37; // [rsp+200h] [rbp-88h]
  unsigned __int64 v38; // [rsp+208h] [rbp-80h]
  __int64 v39; // [rsp+210h] [rbp-78h]
  unsigned __int64 v40; // [rsp+218h] [rbp-70h]
  __int64 v41; // [rsp+220h] [rbp-68h]
  unsigned __int64 v42; // [rsp+228h] [rbp-60h]
  __int64 v43; // [rsp+230h] [rbp-58h]
  _BYTE v44[80]; // [rsp+238h] [rbp-50h] BYREF

  v5 = sub_15D2BD0(*(_QWORD *)(a2 + 24), *(_QWORD *)(a3 + 16));
  v6 = *(_QWORD *)(a2 + 24);
  ++*(_DWORD *)(a3 + 8);
  *a1 = _mm_unpacklo_epi64((__m128i)a3, (__m128i)v6);
  if ( !v5 )
    return a1;
  v7 = v5;
  sub_1584DD0(v25, v6, 0);
  v29 = v44;
  *(_QWORD *)v25 = &off_1C4CA60;
  v30 = 0;
  v31 = 0;
  sub_1584DD0(v32, v6, 0);
  v33 = 0;
  v34 = 0;
  *(_QWORD *)v32 = &off_1C61DB8;
  sub_1584DD0(v35, v6, 0);
  v38 = v6;
  v40 = v6;
  v42 = v6;
  v35[0] = (__int64)&off_1C61DE0;
  v8 = *(_DWORD *)(a3 + 24);
  v36 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v44[8] = 0;
  sub_157BE40(
    (int)v23,
    (int)v25,
    v7,
    v8,
    a3 + 32,
    v9,
    (int)v32,
    (__int64)v35,
    v23[0],
    v24,
    (int)&off_1C4CA80,
    v26,
    v27,
    v28);
  v11 = *(_QWORD *)v23;
  *(_QWORD *)v23 = a1->m128i_i64[0];
  v10 = *(_QWORD *)v23;
  a1->m128i_i64[0] = v11;
  if ( v10 )
  {
    v12 = v24;
    v13 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v12, v10);
  }
  *(_QWORD *)v25 = &off_1C4CA60;
  if ( v43 )
    sub_186B220((void *)(v43 - 8));
  v14 = v41;
  if ( v41 && (v15 = v42, v13 = *(_DWORD *)(v41 + 8) == 1, --*(_DWORD *)(v41 + 8), v13) )
  {
    sub_15D7BC0(v15, v14);
    v16 = v39;
    if ( !v39 )
    {
LABEL_11:
      v18 = v37;
      if ( v37 )
        goto LABEL_12;
      goto LABEL_14;
    }
  }
  else
  {
    v16 = v39;
    if ( !v39 )
      goto LABEL_11;
  }
  v17 = v40;
  v13 = (*(_DWORD *)(v16 + 8))-- == 1;
  if ( !v13 )
    goto LABEL_11;
  sub_15D7BC0(v17, v16);
  v18 = v37;
  if ( v37 )
  {
LABEL_12:
    v19 = v38;
    v13 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v19, v18);
  }
LABEL_14:
  v35[0] = (__int64)&qword_1C637E8;
  sub_15841B0(v22);
  *(_QWORD *)v32 = &qword_1C637E8;
  sub_15841B0(*(_QWORD *)v21);
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  sub_15841B0(v25);
  return a1;
}

