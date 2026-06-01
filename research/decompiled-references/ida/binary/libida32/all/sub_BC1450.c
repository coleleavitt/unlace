__int64 __fastcall sub_BC1450(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rax
  __int64 result; // rax
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rbp
  _QWORD *v10; // rbx
  _QWORD *v11; // [rsp+8h] [rbp-20h] BYREF

  v2 = (_QWORD *)*a1;
  v11 = a1;
  v3 = (unsigned __int8 (*)(void))v2[27];
  if ( (char *)v3 != (char *)sub_BA1BA0 )
  {
    if ( !v3() )
      return 0;
    a1 = v11;
    v2 = (_QWORD *)*v11;
  }
  v4 = (__int64 (*)())v2[145];
  if ( v4 == sub_BA1D20 )
    goto LABEL_3;
  if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v4)(a1, a2) )
    return 0;
  a1 = v11;
  v2 = (_QWORD *)*v11;
LABEL_3:
  v5 = (__int64 (*)())v2[154];
  if ( v5 != sub_BA1DB0 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2)
    || a2 && !(unsigned __int8)sub_BABBC0(&v11, a2 + 48) )
  {
    return 0;
  }
  v7 = sub_9A4B10(a2);
  v9 = v8;
  v10 = (_QWORD *)v7;
  if ( (_QWORD *)v7 == v8 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v11 + 32LL))(v11, *v10);
    if ( !(_BYTE)result )
      break;
    if ( v9 == ++v10 )
      return 1;
  }
  return result;
}

