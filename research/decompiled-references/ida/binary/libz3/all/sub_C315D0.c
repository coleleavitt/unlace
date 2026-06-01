__int64 __fastcall sub_C315D0(__int64 **a1, __int64 ***a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 **v13; // rax
  __int64 v14; // r15
  __int64 v15; // rsi
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v39; // [rsp+18h] [rbp-290h]
  __int64 v40; // [rsp+20h] [rbp-288h]
  __int64 v41; // [rsp+28h] [rbp-280h]
  __int64 v42; // [rsp+28h] [rbp-280h]
  __int64 v43; // [rsp+30h] [rbp-278h] BYREF
  __int64 v44; // [rsp+38h] [rbp-270h]
  __int64 v45; // [rsp+40h] [rbp-268h] BYREF
  __int64 v46; // [rsp+48h] [rbp-260h]
  _QWORD v47[19]; // [rsp+50h] [rbp-258h] BYREF
  int v48; // [rsp+E8h] [rbp-1C0h]
  __int64 v49; // [rsp+F0h] [rbp-1B8h]
  _QWORD v50[19]; // [rsp+F8h] [rbp-1B0h] BYREF
  int v51; // [rsp+190h] [rbp-118h]
  _QWORD v52[18]; // [rsp+198h] [rbp-110h] BYREF
  int v53; // [rsp+228h] [rbp-80h]
  __int64 v54; // [rsp+230h] [rbp-78h]
  __int64 v55; // [rsp+238h] [rbp-70h]
  __int64 v56; // [rsp+240h] [rbp-68h]
  __int64 v57; // [rsp+248h] [rbp-60h]
  __int64 v58; // [rsp+250h] [rbp-58h]
  __int64 v59; // [rsp+258h] [rbp-50h]
  __int64 v60; // [rsp+260h] [rbp-48h]
  __int64 ***v61; // [rsp+268h] [rbp-40h]

  v10 = *a5;
  if ( *a5 )
  {
    v11 = a5[1];
    v12 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v11, v10);
  }
  v13 = *a2;
  *a5 = 0;
  v14 = **v13;
  sub_1584DD0(v47, v14, *((unsigned __int8 *)v13 + 16));
  v47[0] = &off_1C584C0;
  v47[18] = a2;
  v48 = 0;
  v49 = 0;
  sub_1584DD0(v50, v14, 0);
  v50[18] = 0;
  v50[0] = &off_1C61DB8;
  v51 = 0;
  sub_1584DD0(v52, v14, 0);
  v15 = *(_QWORD *)(a3 + 24);
  v47[0] = &off_1C58500;
  v55 = v14;
  v52[0] = &off_1C61DE0;
  v16 = *a1;
  v53 = 0;
  v17 = *v16;
  v57 = v14;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  v59 = v14;
  v60 = 0;
  v61 = a2;
  v43 = 0;
  v44 = v17;
  v45 = 0;
  v46 = v17;
  sub_C31440((__int64)v47, v15, &v43, &v45);
  v18 = v43;
  v19 = v45;
  v39 = v46;
  v40 = v44;
  v20 = sub_15DBB60(**a1, a3, v43);
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v21 = *a4;
  if ( *a4 )
  {
    v22 = a4[1];
    v12 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v12 )
    {
      v41 = v20;
      sub_15D7BC0(v22, v21);
      v20 = v41;
    }
  }
  v12 = *((_BYTE *)a1 + 16) == 0;
  *a4 = v20;
  if ( !v12 )
  {
    v23 = sub_15DE370(**a1);
    v24 = v23;
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    v25 = *a5;
    if ( *a5 )
    {
      v26 = a5[1];
      v12 = (*(_DWORD *)(v25 + 8))-- == 1;
      if ( v12 )
      {
        v42 = v23;
        sub_15D7BC0(v26, v25);
        v24 = v42;
      }
    }
    v27 = *a1;
    *a5 = v24;
    v28 = sub_15DE750(*v27);
    v29 = v28;
    if ( v28 )
      ++*(_DWORD *)(v28 + 8);
    v30 = *a5;
    if ( *a5 )
    {
      v31 = a5[1];
      v12 = (*(_DWORD *)(v30 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v31, v30);
    }
    *a5 = v29;
  }
  if ( v19 )
  {
    v12 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v39, v19);
  }
  if ( v18 )
  {
    v12 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v40, v18);
  }
  v47[0] = &off_1C584C0;
  if ( v60 )
    sub_186B220((void *)(v60 - 8));
  v32 = v58;
  if ( v58 )
  {
    v33 = v59;
    v12 = (*(_DWORD *)(v58 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v33, v32);
  }
  v34 = v56;
  if ( v56 )
  {
    v35 = v57;
    v12 = (*(_DWORD *)(v56 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v35, v34);
  }
  v36 = v54;
  if ( v54 )
  {
    v37 = v55;
    v12 = (*(_DWORD *)(v54 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v37, v36);
  }
  v52[0] = &qword_1C637E8;
  sub_15841B0(v52);
  v50[0] = &qword_1C637E8;
  sub_15841B0(v50);
  if ( v49 )
    sub_186B220((void *)(v49 - 8));
  return sub_15841B0(v47);
}

