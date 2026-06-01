__int64 __fastcall sub_D77E60(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rbx
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  unsigned __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r8
  char v18; // r10
  size_t v19; // r15
  _BYTE *v20; // rax
  size_t v21; // r9
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // r14
  __int32 v35; // eax
  __int64 v36; // rdi
  __int64 v37; // r14
  __int64 v38; // rsi
  unsigned int v40; // [rsp+10h] [rbp-F8h]
  __int64 (*v41)(); // [rsp+10h] [rbp-F8h]
  size_t v42; // [rsp+10h] [rbp-F8h]
  __int64 v43; // [rsp+18h] [rbp-F0h]
  char v44; // [rsp+18h] [rbp-F0h]
  void *v47; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v48; // [rsp+38h] [rbp-D0h]
  __m128i v49; // [rsp+40h] [rbp-C8h] BYREF
  void *v50; // [rsp+50h] [rbp-B8h] BYREF
  size_t v51; // [rsp+58h] [rbp-B0h]
  _QWORD v52[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE *v53; // [rsp+70h] [rbp-98h] BYREF
  __int128 v54; // [rsp+78h] [rbp-90h]
  unsigned int v55; // [rsp+88h] [rbp-80h]
  __int64 v56; // [rsp+90h] [rbp-78h]
  __int64 v57; // [rsp+98h] [rbp-70h]
  _BYTE v58[24]; // [rsp+A0h] [rbp-68h] BYREF
  int v59; // [rsp+B8h] [rbp-50h]
  __int64 v60; // [rsp+C0h] [rbp-48h]
  __int64 v61; // [rsp+C8h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v6, 48);
  sub_DFF520(v58);
  sub_DFDA50(v6, 48);
  v7 = sub_DA8420(a1, a2, v58, 0);
  if ( !(_BYTE)v7 )
    goto LABEL_60;
  v8 = 0;
  v48 = 1;
  LOBYTE(v52[0]) = 0;
  v9 = 0;
  v50 = v52;
  v10 = v59;
  v47 = nullptr;
  v51 = 0;
  if ( v59 == 1 )
    goto LABEL_27;
LABEL_3:
  if ( v10 == 2 )
  {
    v53 = (_BYTE *)v9;
    v54 = 0;
    v55 = 2;
    v56 = v60;
  }
  else if ( (_DWORD)v61 == -1 )
  {
    if ( v10 == 3 )
      BUG();
    sub_DFF4E0(&v53, v60, (unsigned int)v61, *(unsigned int *)(*(_QWORD *)(v60 + 32) + 20LL));
  }
  else
  {
    v40 = v61;
    v11 = sub_CDA220((__int64)v58);
    v12 = *(unsigned int *)(v11 + 16) * v9;
    v13 = v12 + 32;
    if ( *(_QWORD *)(v11 + 40) )
      v13 = v12 + 16;
    sub_DFF4E0(&v53, v60, v40, v13 + v40);
  }
  while ( 1 )
  {
    v14 = sub_DA8420(a1, a2, &v53, 0);
    if ( !(_BYTE)v14 )
    {
      v7 = v14;
      sub_DFF560(&v53);
      goto LABEL_55;
    }
    v15 = v55;
    if ( !v55 )
      break;
    v18 = v53[v56 + 40];
    if ( !v18 )
      goto LABEL_30;
LABEL_22:
    v19 = v51;
    v20 = v50;
    v21 = v51 + 1;
    if ( v50 == v52 )
      v22 = 15;
    else
      v22 = v52[0];
    if ( v21 > v22 )
    {
      v44 = v18;
      v42 = v51 + 1;
      sub_974DF0((__int64)&v50, v51, 0, nullptr, 1u);
      v20 = v50;
      v18 = v44;
      v21 = v42;
    }
    v20[v19] = v18;
    ++v8;
    v51 = v21;
    *((_BYTE *)v50 + v19 + 1) = 0;
    v9 = v8;
    sub_DFF560(&v53);
    v10 = v59;
    if ( v59 != 1 )
      goto LABEL_3;
LABEL_27:
    v53 = (_BYTE *)v9;
    v54 = 0;
    v57 = v61;
    v55 = 1;
    v56 = v60;
  }
  v16 = *(_QWORD *)(v56 + 32);
  v15 = (unsigned int)v57;
  if ( *(_DWORD *)(v16 + 24) != (_DWORD)v57 && (_DWORD)v57 )
    v17 = *(_QWORD *)(v56 + (unsigned int)v57 + 32);
  else
    v17 = *(_QWORD *)(v56 + 32);
  if ( !*(_BYTE *)(v17 + 60) || (_BYTE *)(unsigned int)v57 != v53 )
  {
    if ( !v53[v56 + 40] )
      goto LABEL_30;
    goto LABEL_16;
  }
  if ( v53[v56 + 72] )
  {
LABEL_16:
    if ( *(_DWORD *)(v16 + 24) != (_DWORD)v57 && (_DWORD)v57 )
      v16 = *(_QWORD *)(v56 + (unsigned int)v57 + 32);
    if ( *(_BYTE *)(v16 + 60) && (_BYTE *)(unsigned int)v57 == v53 )
      v18 = v53[v56 + 72];
    else
      v18 = v53[v56 + 40];
    goto LABEL_22;
  }
LABEL_30:
  v7 = v14;
  sub_DFF560(&v53);
  if ( !v51 )
  {
    if ( v48 > 0x40 && v47 )
      operator delete[](v47);
    v47 = nullptr;
    v48 = 32;
LABEL_33:
    v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v24 = sub_BD7F30(*(_QWORD *)(a3 + 32));
    if ( !v24 || (*(_BYTE *)(v24 + 28) & 0x7Fu) - 34 > 5 )
      BUG();
    v26 = *(_QWORD *)(*(_QWORD *)(v24 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v27 = (unsigned int)*(unsigned __int8 *)(v26 + 16) - 25;
    if ( (unsigned int)v27 > 1 )
      v26 = sub_F3F310(v26, v15, v27, v25);
    v28 = *(_QWORD *)(v26 + 24);
    v29 = sub_A3EFE0(v23, v28);
    if ( ((unsigned __int64)(unsigned int)sub_21D53F0(v29) + 63) >> 6 == 1 )
    {
      v35 = sub_21D5100(v29);
      v34 = 0;
    }
    else
    {
      v30 = (unsigned int)sub_21D53F0(v29);
      v33 = *(_QWORD *)(a1 + 568);
      v28 = 8 * ((unsigned __int64)(v30 + 63) >> 6);
      v34 = (v33 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)(a1 + 648) += v28;
      if ( *(_QWORD *)(a1 + 576) >= (unsigned __int64)(v28 + v34) && v33 )
        *(_QWORD *)(a1 + 568) = v28 + v34;
      else
        v34 = sub_962430(a1 + 568, v28, v28, 3, v31, v32);
      v35 = sub_21D5100(v29);
    }
    v36 = *(_QWORD *)(a1 + 24);
    v49.m128i_i32[2] = v35;
    v49.m128i_i64[0] = v34;
    v43 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 104LL))(v36) + 17448);
    v41 = *(__int64 (**)())(*(_QWORD *)v43 + 392LL);
    v37 = sub_21D5390(v43, v28, v41);
    if ( v41 == sub_BEB8D0 || ((unsigned __int8 (__fastcall *)(__int64))v41)(v43) )
    {
      if ( !a4 )
      {
        if ( v29 == v37 )
          goto LABEL_75;
LABEL_71:
        sub_21D94B0(&v53, v29, 0);
LABEL_72:
        v38 = 0;
        if ( (_BYTE *)v37 != v53 )
          goto LABEL_47;
        goto LABEL_73;
      }
      if ( v29 == v37 )
        goto LABEL_77;
    }
    else
    {
      if ( a4 )
      {
        if ( v29 != v37 )
          goto LABEL_71;
LABEL_75:
        sub_21DBF00(&v53, v37, 0);
        goto LABEL_72;
      }
      if ( v29 == v37 )
      {
LABEL_77:
        sub_21DBF00(&v53, v37, 0);
LABEL_46:
        v38 = 1;
        if ( (_BYTE *)v37 != v53 )
        {
LABEL_47:
          sub_21D5530(&v53, v38, 0, &v47);
LABEL_48:
          sub_CDAFD0((__int64)&v49, &v53);
          sub_971860(&v53);
          *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 176), 16) = _mm_load_si128(&v49);
          goto LABEL_55;
        }
LABEL_73:
        sub_21DC910(&v53, v38, 0, &v47);
        goto LABEL_48;
      }
    }
    sub_21D94B0(&v53, v29, 0);
    goto LABEL_46;
  }
  v15 = 0;
  *(_QWORD *)&v54 = v51;
  v53 = v50;
  if ( !(unsigned __int8)sub_2224320(&v53, 0) )
    goto LABEL_33;
  v7 = 0;
LABEL_55:
  if ( v50 != v52 )
    operator delete(v50);
  if ( v48 > 0x40 && v47 )
    operator delete[](v47);
LABEL_60:
  sub_DFF560(v58);
  return v7;
}

