__int64 __fastcall Z3_mk_list_sort(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  _QWORD *v33; // [rsp+8h] [rbp-F8h]
  _QWORD *v34; // [rsp+10h] [rbp-F0h]
  _QWORD *v35; // [rsp+18h] [rbp-E8h]
  _QWORD *v36; // [rsp+20h] [rbp-E0h]
  _QWORD *v37; // [rsp+28h] [rbp-D8h]
  _QWORD *v38; // [rsp+30h] [rbp-D0h]
  int v39; // [rsp+38h] [rbp-C8h]
  int v40; // [rsp+40h] [rbp-C0h]
  char v41; // [rsp+4Fh] [rbp-B1h]
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h]
  __int64 v47; // [rsp+80h] [rbp-80h] BYREF
  __int64 v48; // [rsp+88h] [rbp-78h]
  __int64 v49; // [rsp+90h] [rbp-70h] BYREF
  __int64 v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-58h]
  __int64 v53; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-48h]
  _QWORD v55[8]; // [rsp+C0h] [rbp-40h] BYREF

  v40 = a3;
  v13 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v41 = v13;
  if ( v13 )
  {
    sub_295500(a1, a2, a3, a4, a5, a6, a7, a8, a9);
    v36 = a6;
    v37 = a5;
    v33 = a9;
    v38 = a4;
    v34 = a8;
    v35 = a7;
  }
  else
  {
    v33 = nullptr;
    v34 = nullptr;
    v35 = nullptr;
    v36 = nullptr;
    v37 = nullptr;
    v38 = nullptr;
  }
  v14 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  v15 = *(_QWORD *)(a1 + 1480);
  v47 = 0;
  v43 = 0;
  v44 = v14;
  v45 = 0;
  v46 = v14;
  v48 = v14;
  v49 = 0;
  v50 = v14;
  v51 = 0;
  v52 = v14;
  v53 = 0;
  v54 = v14;
  v39 = sub_15F0110(v15);
  sub_24FC40(a1);
  v42 = a2;
  sub_15FBF30(
    (unsigned int)v55,
    v39,
    v40,
    (unsigned int)&v42,
    (unsigned int)&v47,
    (unsigned int)&v49,
    (__int64)&v51,
    (__int64)&v53,
    (__int64)&v43,
    (__int64)&v45);
  v16 = v55[0];
  if ( v55[0] )
  {
    sub_251EF0(a1, v55[0]);
    if ( a4 )
    {
      sub_251EF0(a1, v43);
      *a4 = v43;
    }
    if ( a5 )
    {
      sub_251EF0(a1, v45);
      *a5 = v45;
    }
    if ( a6 )
    {
      sub_251EF0(a1, v47);
      *a6 = v47;
    }
    if ( a7 )
    {
      sub_251EF0(a1, v49);
      *a7 = v49;
    }
    if ( a8 )
    {
      sub_251EF0(a1, v51);
      *a8 = v51;
    }
    if ( a9 )
    {
      sub_251EF0(a1, v53);
      *a9 = v53;
    }
    if ( v41 )
    {
      sub_2BB620(v55[0]);
      if ( v38 )
        v38 = (_QWORD *)*v38;
      sub_2BB6A0(v38, 3);
      if ( v37 )
        v37 = (_QWORD *)*v37;
      sub_2BB6A0(v37, 4);
      if ( v36 )
        v36 = (_QWORD *)*v36;
      sub_2BB6A0(v36, 5);
      if ( v35 )
        v35 = (_QWORD *)*v35;
      sub_2BB6A0(v35, 6);
      if ( v34 )
        v34 = (_QWORD *)*v34;
      sub_2BB6A0(v34, 7);
      if ( v33 )
        v33 = (_QWORD *)*v33;
      sub_2BB6A0(v33, 8);
    }
    v16 = v55[0];
    v17 = v55[0];
  }
  else
  {
    sub_24EA30(a1, 3, 0);
    if ( v41 )
      sub_2BB620(0);
    v17 = v55[0];
  }
  if ( v17 )
  {
    v18 = v55[1];
    v19 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v18, v17);
  }
  v20 = v53;
  if ( v53 )
  {
    v21 = v54;
    v19 = (*(_DWORD *)(v53 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v21, v20);
  }
  v22 = v51;
  if ( v51 )
  {
    v23 = v52;
    v19 = (*(_DWORD *)(v51 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v23, v22);
  }
  v24 = v49;
  if ( v49 )
  {
    v25 = v50;
    v19 = (*(_DWORD *)(v49 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v25, v24);
  }
  v26 = v47;
  if ( v47 )
  {
    v27 = v48;
    v19 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v27, v26);
  }
  v28 = v45;
  if ( v45 )
  {
    v29 = v46;
    v19 = (*(_DWORD *)(v45 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v29, v28);
  }
  v30 = v43;
  if ( v43 )
  {
    v31 = v44;
    v19 = (*(_DWORD *)(v43 + 8))-- == 1;
    if ( v19 )
    {
      sub_15D7BC0(v31, v30);
      if ( !v41 )
        return v16;
LABEL_42:
      byte_1C7EBA0 = 1;
      return v16;
    }
  }
  if ( v41 )
    goto LABEL_42;
  return v16;
}

