_QWORD *__fastcall sub_C16EA0(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // r12
  _QWORD *v8; // r14
  _QWORD *v9; // rdi
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  _QWORD *v13; // rax
  char v14; // cl
  __int64 v15; // rsi
  _QWORD *v16; // rsi
  char v17; // si
  _QWORD *v18; // r14
  int v19; // eax
  _QWORD *v20; // rsi
  _QWORD *v21; // rdi
  bool v22; // zf
  int v23; // ecx

  v5 = a2;
  v6 = a2;
  v7 = sub_21F90D0();
  if ( *a2 == v7 )
    v6 = (_QWORD *)a2[1];
  v8 = a1;
  if ( (unsigned __int8)sub_21FB4A0(v6) )
  {
    v9 = a1;
    if ( v7 != *a2 )
    {
LABEL_5:
      sub_21F97A0(v9, a2);
LABEL_6:
      if ( v7 == *a1 )
        v8 = (_QWORD *)a1[1];
      sub_21FD230(v8);
      return a1;
    }
LABEL_28:
    sub_21FFE60(v9, a2);
    goto LABEL_6;
  }
  v11 = a3;
  if ( v7 == *a3 )
    v11 = (_QWORD *)a3[1];
  if ( (unsigned __int8)sub_21FB4A0(v11) )
  {
    a2 = a3;
    v9 = a1;
    if ( v7 != *a3 )
      goto LABEL_5;
    goto LABEL_28;
  }
  v12 = *a2;
  v13 = a2;
  if ( *a2 == v7 )
    v13 = (_QWORD *)a2[1];
  v14 = *((_BYTE *)v13 + 20);
  v15 = *a3;
  if ( (v14 & 7) == 1 )
  {
    v22 = v7 == v15;
    v21 = a1;
    v20 = a3;
    if ( !v22 )
      goto LABEL_26;
    goto LABEL_31;
  }
  if ( v7 == v15 )
    v16 = (_QWORD *)a3[1];
  else
    v16 = a3;
  v17 = *((_BYTE *)v16 + 20);
  if ( (v17 & 7) == 1 )
  {
    sub_995620((__int64)a1, v5);
    return a1;
  }
  if ( (v14 & 7) == 3 && (v17 & 7) == 3 )
  {
    v23 = v14 & 8;
    if ( ((v17 & 8) != 0) != (v23 != 0) )
    {
      if ( !(_BYTE)v23 )
        a3 = v5;
      sub_995620((__int64)a1, a3);
      return a1;
    }
  }
  v18 = a3;
  if ( v12 == v7 )
    v19 = sub_2201020(v5, a3);
  else
    v19 = sub_21FA440(v5, a3);
  if ( v19 )
  {
    v18 = v5;
    a3 = v5;
  }
  v20 = v18;
  v21 = a1;
  if ( v7 == *a3 )
  {
LABEL_31:
    sub_21FFE60(v21, v20);
    return a1;
  }
LABEL_26:
  sub_21F97A0(v21, v20);
  return a1;
}
