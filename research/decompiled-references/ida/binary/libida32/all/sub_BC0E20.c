__int64 __fastcall sub_BC0E20(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rbp
  _QWORD *v8; // r13
  __int64 v9; // rax
  bool (__fastcall *v10)(__int64); // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r12
  _QWORD *v15; // rbp
  __int64 result; // rax

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 216);
  if ( (char *)v3 != (char *)sub_BA1BA0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 1160);
  if ( v4 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v5 = *(__int64 (**)())(v2 + 1168);
  if ( v5 != sub_BA1D30 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
    return 0;
  v6 = *(_QWORD **)(a2 + 88);
  if ( v6 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(*a1 + 136))(a1, *v6, v6 + 1) )
      return 0;
  }
  v7 = *(_QWORD **)(a2 + 96);
  v8 = &v7[*(unsigned int *)(a2 + 104)];
  if ( v7 != v8 )
  {
    while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 56))(a1, *v7) )
    {
      if ( v8 == ++v7 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v9 = *(_QWORD *)a2;
  v10 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL);
  if ( v10 != sub_6CE2D0 )
  {
    if ( !v10(a2) )
      goto LABEL_10;
    v9 = *(_QWORD *)a2;
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(a2 + 112) & 1) != 0 || *(_QWORD *)(a2 + 112) )
  {
LABEL_9:
    v11 = (*(__int64 (__fastcall **)(__int64))(v9 + 64))(a2);
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a1 + 96))(a1, v11) )
      goto LABEL_10;
    return 0;
  }
LABEL_10:
  v12 = sub_9A4B10(a2);
  v14 = v13;
  v15 = (_QWORD *)v12;
  if ( (_QWORD *)v12 == v13 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 32))(a1, *v15);
    if ( !(_BYTE)result )
      break;
    if ( v14 == ++v15 )
      return 1;
  }
  return result;
}

