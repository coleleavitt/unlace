__int64 __fastcall sub_BC3590(_BYTE *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rbp
  _QWORD *v13; // rbx
  __int64 result; // rax
  _BYTE *v15; // [rsp+8h] [rbp-20h] BYREF

  v3 = *(_QWORD **)a1;
  v15 = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = v15;
    v3 = *(_QWORD **)v15;
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v15;
    v3 = *(_QWORD **)v15;
  }
  v6 = (__int64 (*)())v3[156];
  if ( v6 != sub_BA1DD0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v15;
    v3 = *(_QWORD **)v15;
  }
  v7 = (__int64 (*)())v3[184];
  if ( v7 == sub_BA1F90 )
    goto LABEL_5;
  if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v7)(a1, a2) )
    return 0;
  a1 = v15;
LABEL_5:
  if ( a1[10] )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, *(_QWORD *)(a2 + 64)) )
      return 0;
    v8 = sub_B770E0(a2);
    if ( v8 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v15 + 56LL))(v15, v8) )
        return 0;
    }
  }
  if ( sub_B6A370(a2) )
  {
    v9 = sub_B69600(a2);
    if ( v9 )
    {
      if ( !(unsigned __int8)sub_BABBC0(&v15, v9) )
        return 0;
    }
  }
  v10 = sub_9A4B10(a2);
  v12 = v11;
  v13 = (_QWORD *)v10;
  if ( (_QWORD *)v10 == v11 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v15 + 32LL))(v15, *v13);
    if ( !(_BYTE)result )
      break;
    if ( v12 == ++v13 )
      return 1;
  }
  return result;
}

