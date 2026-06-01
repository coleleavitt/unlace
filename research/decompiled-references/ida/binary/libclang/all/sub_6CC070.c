void __fastcall sub_6CC070(__int64 a1, char a2, _QWORD *a3)
{
  __int64 v4; // r12
  _QWORD *v5; // rax
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // r12
  _QWORD *v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // r12
  _QWORD *v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // r12
  _QWORD *v20; // rax
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // r12
  _QWORD *v25; // rax
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rbp
  _QWORD *v30; // rax
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rdx
  _QWORD *v33; // rax

  if ( (a2 & 1) != 0 )
  {
    v4 = a3[1];
    v5 = (_QWORD *)*a3;
    v6 = v4 + 1;
    if ( (_QWORD *)*a3 == a3 + 2 )
      v7 = 15;
    else
      v7 = a3[2];
    if ( v7 < v6 )
    {
      std::string::_M_mutate();
      v5 = (_QWORD *)*a3;
    }
    *((_BYTE *)v5 + v4) = 110;
    v8 = (_QWORD *)*a3;
    a3[1] = v6;
    *((_BYTE *)v8 + v4 + 1) = 0;
    if ( (a2 & 2) == 0 )
    {
LABEL_3:
      if ( (a2 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_18;
    }
  }
  else if ( (a2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  v9 = a3[1];
  v10 = (_QWORD *)*a3;
  v11 = v9 + 1;
  if ( (_QWORD *)*a3 == a3 + 2 )
    v12 = 15;
  else
    v12 = a3[2];
  if ( v12 < v11 )
  {
    std::string::_M_mutate();
    v10 = (_QWORD *)*a3;
  }
  *((_BYTE *)v10 + v9) = 78;
  v13 = (_QWORD *)*a3;
  a3[1] = v11;
  *((_BYTE *)v13 + v9 + 1) = 0;
  if ( (a2 & 4) == 0 )
  {
LABEL_4:
    if ( (a2 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_23;
  }
LABEL_18:
  v14 = a3[1];
  v15 = (_QWORD *)*a3;
  v16 = v14 + 1;
  if ( (_QWORD *)*a3 == a3 + 2 )
    v17 = 15;
  else
    v17 = a3[2];
  if ( v17 < v16 )
  {
    std::string::_M_mutate();
    v15 = (_QWORD *)*a3;
  }
  *((_BYTE *)v15 + v14) = 111;
  v18 = (_QWORD *)*a3;
  a3[1] = v16;
  *((_BYTE *)v18 + v14 + 1) = 0;
  if ( (a2 & 8) == 0 )
  {
LABEL_5:
    if ( (a2 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_28;
  }
LABEL_23:
  v19 = a3[1];
  v20 = (_QWORD *)*a3;
  v21 = v19 + 1;
  if ( (_QWORD *)*a3 == a3 + 2 )
    v22 = 15;
  else
    v22 = a3[2];
  if ( v22 < v21 )
  {
    std::string::_M_mutate();
    v20 = (_QWORD *)*a3;
  }
  *((_BYTE *)v20 + v19) = 79;
  v23 = (_QWORD *)*a3;
  a3[1] = v21;
  *((_BYTE *)v23 + v19 + 1) = 0;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_6:
    if ( (a2 & 0x20) == 0 )
      return;
    goto LABEL_33;
  }
LABEL_28:
  v24 = a3[1];
  v25 = (_QWORD *)*a3;
  v26 = v24 + 1;
  if ( (_QWORD *)*a3 == a3 + 2 )
    v27 = 15;
  else
    v27 = a3[2];
  if ( v27 < v26 )
  {
    std::string::_M_mutate();
    v25 = (_QWORD *)*a3;
  }
  *((_BYTE *)v25 + v24) = 82;
  v28 = (_QWORD *)*a3;
  a3[1] = v26;
  *((_BYTE *)v28 + v24 + 1) = 0;
  if ( (a2 & 0x20) != 0 )
  {
LABEL_33:
    v29 = a3[1];
    v30 = (_QWORD *)*a3;
    v31 = v29 + 1;
    if ( (_QWORD *)*a3 == a3 + 2 )
      v32 = 15;
    else
      v32 = a3[2];
    if ( v32 < v31 )
    {
      std::string::_M_mutate();
      v30 = (_QWORD *)*a3;
    }
    *((_BYTE *)v30 + v29) = 86;
    v33 = (_QWORD *)*a3;
    a3[1] = v31;
    *((_BYTE *)v33 + v29 + 1) = 0;
  }
}

