__int64 __fastcall sub_BE9DE0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rax
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 result; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rbp
  _QWORD *v13; // rbx
  _QWORD *v14; // [rsp+8h] [rbp-20h] BYREF

  v3 = *a1;
  v14 = a1;
  v4 = *(unsigned __int8 (**)(void))(v3 + 216);
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = v14;
    v3 = *v14;
  }
  v5 = *(__int64 (**)())(v3 + 1776);
  if ( v5 != sub_BC5F30 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
    return 0;
  v6 = a2 + 40;
  v7 = a2 + 40 + 24LL * *(unsigned int *)(a2 + 36);
  if ( a2 + 40 != v7 )
  {
    while ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v14 + 104LL))(v14, v6) )
    {
      v6 += 24;
      if ( v7 == v6 )
        goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  if ( sub_B8E0B0(a2) )
  {
    v9 = sub_B8D340(a2);
    if ( v9 )
    {
      if ( !(unsigned __int8)sub_BCF900(&v14, v9) )
        return 0;
    }
  }
  v10 = sub_9C8850(a2);
  v12 = v11;
  v13 = (_QWORD *)v10;
  if ( (_QWORD *)v10 == v11 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v14 + 32LL))(v14, *v13);
    if ( !(_BYTE)result )
      break;
    if ( v12 == ++v13 )
      return 1;
  }
  return result;
}
