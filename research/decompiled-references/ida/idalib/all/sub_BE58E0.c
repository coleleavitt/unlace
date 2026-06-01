__int64 __fastcall sub_BE58E0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rbp
  _QWORD *v12; // rbx
  __int64 result; // rax
  _QWORD *v14; // [rsp+8h] [rbp-20h] BYREF

  v3 = (_QWORD *)*a1;
  v14 = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = v14;
    v3 = (_QWORD *)*v14;
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v14;
    v3 = (_QWORD *)*v14;
  }
  v6 = (__int64 (*)())v3[156];
  if ( v6 != sub_BC5B10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v14;
    v3 = (_QWORD *)*v14;
  }
  v7 = (__int64 (*)())v3[163];
  if ( v7 != sub_BC5B80 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v7)(a1, a2) )
    return 0;
  if ( sub_B8E0B0(a2) )
  {
    v8 = sub_B8D340(a2);
    if ( v8 )
    {
      if ( !(unsigned __int8)sub_BCF900(&v14, v8) )
        return 0;
    }
  }
  v9 = sub_9C8850(a2);
  v11 = v10;
  v12 = (_QWORD *)v9;
  if ( (_QWORD *)v9 == v10 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v14 + 32LL))(v14, *v12);
    if ( !(_BYTE)result )
      break;
    if ( v11 == ++v12 )
      return 1;
  }
  return result;
}
