__int64 __fastcall sub_BC08F0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rbp
  _QWORD *v10; // rbx
  __int64 result; // rax
  _QWORD *v12; // [rsp+8h] [rbp-20h] BYREF

  v3 = *a1;
  v12 = a1;
  v4 = *(unsigned __int8 (**)(void))(v3 + 216);
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = v12;
    v3 = *v12;
  }
  v5 = *(__int64 (**)())(v3 + 1104);
  if ( v5 != sub_BA1CB0 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
    return 0;
  if ( sub_B6A370(a2) )
  {
    v6 = sub_B69600(a2);
    if ( v6 )
    {
      if ( !(unsigned __int8)sub_BABBC0(&v12, v6) )
        return 0;
    }
  }
  v7 = sub_9A4B10(a2);
  v9 = v8;
  v10 = (_QWORD *)v7;
  if ( (_QWORD *)v7 == v8 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v12 + 32LL))(v12, *v10);
    if ( !(_BYTE)result )
      break;
    if ( v9 == ++v10 )
      return 1;
  }
  return result;
}

