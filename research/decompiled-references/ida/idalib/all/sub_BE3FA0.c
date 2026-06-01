__int64 __fastcall sub_BE3FA0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rax
  __int64 result; // rax
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rbp
  _QWORD *v9; // rbx
  _QWORD *v10; // [rsp+8h] [rbp-20h] BYREF

  v2 = *a1;
  v10 = a1;
  v3 = *(unsigned __int8 (**)(void))(v2 + 216);
  if ( (char *)v3 != (char *)sub_BC58E0 )
  {
    if ( !v3() )
      return 0;
    a1 = v10;
    v2 = *v10;
  }
  v4 = *(__int64 (**)())(v2 + 1032);
  if ( v4 != sub_BC5960 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v4)(a1, a2)
    || a2 && !(unsigned __int8)sub_BCF900(&v10, a2 + 40) )
  {
    return 0;
  }
  v6 = sub_9C8850(a2);
  v8 = v7;
  v9 = (_QWORD *)v6;
  if ( (_QWORD *)v6 == v7 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v10 + 32LL))(v10, *v9);
    if ( !(_BYTE)result )
      break;
    if ( v8 == ++v9 )
      return 1;
  }
  return result;
}
