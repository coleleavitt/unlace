__int64 __fastcall sub_BE4D10(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rax
  __int64 result; // rax
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rbp
  _QWORD *v12; // rbx
  _QWORD *v13; // [rsp+8h] [rbp-20h] BYREF

  v2 = (_QWORD *)*a1;
  v13 = a1;
  v3 = (unsigned __int8 (*)(void))v2[27];
  if ( (char *)v3 != (char *)sub_BC58E0 )
  {
    if ( !v3() )
      return 0;
    a1 = v13;
    v2 = (_QWORD *)*v13;
  }
  v4 = (__int64 (*)())v2[145];
  if ( v4 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v4)(a1, a2) )
      return 0;
    a1 = v13;
    v2 = (_QWORD *)*v13;
  }
  v5 = (__int64 (*)())v2[147];
  if ( v5 != sub_BC5A80 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v13;
    v2 = (_QWORD *)*v13;
  }
  v6 = (__int64 (*)())v2[150];
  if ( v6 == sub_BC5AB0 )
    goto LABEL_5;
  if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
    return 0;
  a1 = v13;
  v2 = (_QWORD *)*v13;
LABEL_5:
  v7 = (__int64 (*)())v2[151];
  if ( v7 != sub_BC5AC0 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v7)(a1, a2)
    || a2 && !(unsigned __int8)sub_BCF900(&v13, a2 + 48) )
  {
    return 0;
  }
  v9 = sub_9C8850(a2);
  v11 = v10;
  v12 = (_QWORD *)v9;
  if ( (_QWORD *)v9 == v10 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v13 + 32LL))(v13, *v12);
    if ( !(_BYTE)result )
      break;
    if ( v11 == ++v12 )
      return 1;
  }
  return result;
}
