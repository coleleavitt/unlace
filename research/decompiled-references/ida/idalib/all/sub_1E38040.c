char __fastcall sub_1E38040(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r8
  unsigned __int8 v5; // al
  __int64 v6; // rcx
  bool v7; // bp
  __int64 v8; // rax
  bool v10; // bp
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(_QWORD *); // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 (__fastcall *v18)(unsigned __int64); // rax
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 (__fastcall *v23)(__int64); // rax
  __int64 v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64); // rax
  bool v29; // al
  __int64 v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rbp
  _QWORD *v33; // rdi
  __int64 (__fastcall *v34)(__int64); // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 (__fastcall *v39)(unsigned __int64); // rax
  __int64 v40; // rax
  _QWORD *v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // [rsp+8h] [rbp-20h]
  _QWORD *v46; // [rsp+8h] [rbp-20h]
  _QWORD *v47; // [rsp+8h] [rbp-20h]
  _QWORD *v48; // [rsp+8h] [rbp-20h]
  _QWORD *v49; // [rsp+8h] [rbp-20h]
  unsigned __int64 v50; // [rsp+8h] [rbp-20h]

  v3 = a1;
  v5 = *((_BYTE *)a2 + 28) & 0x7F;
  v6 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( v5 == 63 )
  {
    switch ( (_BYTE)v6 )
    {
      case '?':
        v7 = *(_DWORD *)(a3 + 64) != 0;
        v8 = sub_A62AD0(a1, a3);
        break;
      case '7':
        v8 = *(_QWORD *)(a3 + 48);
        v7 = 1;
        break;
      case 'Q':
        v7 = 0;
        v8 = sub_A62AD0(a1, a3);
        break;
      default:
        return 0;
    }
    if ( (*((_DWORD *)a2 + 16) != 0) != v7 )
      return 0;
    goto LABEL_5;
  }
  if ( v5 == 28 )
  {
    switch ( (_BYTE)v6 )
    {
      case 0x1C:
        v10 = *(_DWORD *)(a3 + 60) != 0;
        v8 = sub_A62AD0(a1, a3);
        break;
      case 0x37:
        v8 = *(_QWORD *)(a3 + 48);
        v10 = 1;
        break;
      case 0x51:
        v10 = 0;
        v8 = sub_A62AD0(a1, a3);
        break;
      default:
        return 0;
    }
    if ( (*((_DWORD *)a2 + 15) != 0) != v10 || !v8 )
      return 0;
    goto LABEL_14;
  }
  if ( v5 != (_BYTE)v6 )
    return 0;
  v12 = v5;
  if ( (unsigned int)v5 - 59 <= 2 )
  {
    v45 = a3;
    v13 = *(__int64 (__fastcall **)(_QWORD *))(*a2 + 32LL);
    if ( (char *)v13 == (char *)sub_A01140 )
      v14 = sub_B70A60((__int64)a2);
    else
      v14 = v13(a2);
    v15 = v45;
    v16 = v14;
    while ( 1 )
    {
      v18 = *(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 32LL);
      v17 = v18 == sub_A01140 ? sub_B70A60(v15) : v18(v15);
      if ( v16 == v17 )
        break;
      v15 = sub_B971E0(v17);
      if ( !v15 )
        return 0;
    }
    return 1;
  }
  if ( (unsigned int)v5 - 34 <= 5 )
  {
    v46 = (_QWORD *)a3;
    v19 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64))(*a2 + 32LL))(a2, v5, a3, v6, a1);
    v20 = v46;
    v21 = v19;
    while ( 1 )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 32LL))(v20);
      if ( v21 == v22 )
        break;
      v20 = sub_B77970(v22);
      if ( !v20 )
        return 0;
    }
    return 1;
  }
  if ( v5 == 62 )
  {
    v47 = (_QWORD *)a3;
    v23 = *(__int64 (__fastcall **)(__int64))(*a2 + 32LL);
    if ( v23 == sub_B708E0 )
      v24 = sub_B70A60((__int64)a2);
    else
      v24 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64))v23)(a2, v12, a3, v6, a1);
    v25 = v47;
    v26 = v24;
    while ( 1 )
    {
      v28 = *(__int64 (__fastcall **)(__int64))(*v25 + 32LL);
      v27 = v28 == sub_B708E0 ? sub_B70A60((__int64)v25) : v28((__int64)v25);
      if ( v26 == v27 )
        break;
      v25 = sub_B78820(v27);
      if ( !v25 )
        return 0;
    }
    return 1;
  }
  if ( (unsigned int)v5 - 40 <= 6 && v5 != 43 )
  {
    v48 = (_QWORD *)a3;
    v29 = sub_1DFE740(a3);
    a3 = (__int64)v48;
    if ( v29 )
    {
      v40 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD *))(*a2 + 32LL))(a2, v12, v48);
      v41 = v48;
      v42 = v40;
      while ( 1 )
      {
        v43 = (*(__int64 (__fastcall **)(_QWORD *))(*v41 + 32LL))(v41);
        if ( v42 == v43 )
          break;
        v41 = sub_B73FE0(v43);
        if ( !v41 )
          return 0;
      }
      return 1;
    }
  }
  switch ( (_BYTE)v6 )
  {
    case 'H':
      return sub_1DFE9F0(a2, (_QWORD *)a3);
    case 'G':
      v49 = (_QWORD *)a3;
      v30 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(*a2 + 32LL))(a2, v12, a3, v6, v3);
      v31 = v49;
      v32 = (_QWORD *)v30;
      while ( 1 )
      {
        v34 = *(__int64 (__fastcall **)(__int64))(*v31 + 32LL);
        v33 = (_QWORD *)(v34 == sub_6EE8E0 ? v31[9] : v34((__int64)v31));
        if ( v32 == v33 )
          break;
        v31 = (_QWORD *)(*(_QWORD *)sub_BC3640(v33) & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v31 )
          return 0;
      }
      return 1;
    case '=':
      v50 = a3;
      v35 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(*a2 + 32LL))(a2, v12, a3, v6, v3);
      v36 = v50;
      v37 = v35;
      while ( 1 )
      {
        v39 = *(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v36 + 32LL);
        v38 = v39 == sub_A01140 ? sub_B70A60(v36) : v39(v36);
        if ( v37 == v38 )
          break;
        v36 = *(_QWORD *)(*(_QWORD *)(v38 + 104) + 192LL) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v36 )
          return 0;
      }
      return 1;
  }
  if ( (unsigned int)(v12 - 49) > 2 )
  {
    if ( (_BYTE)v6 == 81 )
    {
LABEL_77:
      v8 = sub_A62AD0(v3, a3);
      goto LABEL_5;
    }
    if ( (unsigned int)(v12 - 53) <= 1 )
    {
      v8 = sub_A62BD0(v3, a3);
LABEL_5:
      if ( !v8 )
        return 0;
LABEL_14:
      if ( a2 != (_QWORD *)v8 )
      {
LABEL_15:
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
        return v11 == (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 32LL))(a2);
      }
      return 1;
    }
  }
  else
  {
    if ( !*(_QWORD *)(a3 + 40) )
    {
      v8 = sub_A62C50(v3, a3);
      if ( !v8 )
        return 0;
      if ( (_QWORD *)v8 != a2 )
        goto LABEL_15;
      return 1;
    }
    if ( (_BYTE)v6 == 81 )
      goto LABEL_77;
  }
  v44 = a2[5];
  if ( !v44 )
    return 0;
  return *(_QWORD *)(a3 + 40) == v44;
}
