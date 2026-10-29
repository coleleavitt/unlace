__int64 __fastcall sub_BF45F0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rax
  unsigned int *v6; // rbx
  __int64 v7; // r12
  __int64 *v8; // rbx
  __int64 result; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rbp
  _QWORD *v14; // rbx
  _QWORD v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *a1;
  v15[0] = a1;
  v4 = *(unsigned __int8 (**)(void))(v3 + 216);
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = (__int64 *)v15[0];
    v3 = *(_QWORD *)v15[0];
  }
  v5 = *(__int64 (**)())(v3 + 1144);
  if ( v5 != sub_BC5A40 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
    return 0;
  v6 = *(unsigned int **)(a2 + 40);
  v7 = (__int64)&v6[2 * *v6 + 4];
  v8 = (__int64 *)(v6 + 4);
  if ( (__int64 *)v7 != v8 )
  {
    while ( (unsigned __int8)sub_BEC930(v15, *v8) )
    {
      if ( (__int64 *)v7 == ++v8 )
        goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  if ( sub_B8E0B0(a2) )
  {
    v10 = sub_B8D340(a2);
    if ( v10 )
    {
      if ( !(unsigned __int8)sub_BCF900(v15, v10) )
        return 0;
    }
  }
  v11 = sub_9C8850(a2);
  v13 = v12;
  v14 = (_QWORD *)v11;
  if ( (_QWORD *)v11 == v12 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v15[0] + 32LL))(v15[0], *v14);
    if ( !(_BYTE)result )
      break;
    if ( v13 == ++v14 )
      return 1;
  }
  return result;
}
