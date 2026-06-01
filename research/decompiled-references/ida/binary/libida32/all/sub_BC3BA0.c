__int64 __fastcall sub_BC3BA0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rbp
  _QWORD *v11; // rbx
  __int64 result; // rax
  _QWORD *v13; // [rsp+8h] [rbp-20h] BYREF

  v3 = (_QWORD *)*a1;
  v13 = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = v13;
    v3 = (_QWORD *)*v13;
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v13;
    v3 = (_QWORD *)*v13;
  }
  v6 = (__int64 (*)())v3[189];
  if ( v6 != sub_BA1FE0 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
    return 0;
  if ( sub_B6A370(a2) )
  {
    v7 = sub_B69600(a2);
    if ( v7 )
    {
      if ( !(unsigned __int8)sub_BABBC0(&v13, v7) )
        return 0;
    }
  }
  v8 = sub_9A4B10(a2);
  v10 = v9;
  v11 = (_QWORD *)v8;
  if ( (_QWORD *)v8 == v9 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v13 + 32LL))(v13, *v11);
    if ( !(_BYTE)result )
      break;
    if ( v10 == ++v11 )
      return 1;
  }
  return result;
}

