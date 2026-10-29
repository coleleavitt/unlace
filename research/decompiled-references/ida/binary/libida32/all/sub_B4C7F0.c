__int64 __fastcall sub_B4C7F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (*v4)(void); // rax
  __int64 v5; // r14
  __int64 (*v6)(); // rax
  __int64 (*v7)(); // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( v4 == sub_9DD400 )
    v5 = sub_B4CD20(a1);
  else
    v5 = v4();
  v6 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
  if ( v6 != sub_9DD400 )
  {
    if ( ((__int64 (__fastcall *)(__int64))v6)(a2) != v5 )
      goto LABEL_5;
    return 0;
  }
  if ( sub_B4CD20(a2) == v5 )
    return 0;
LABEL_5:
  *(_QWORD *)a3 = a1;
  v7 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
  if ( v7 == sub_9DD400 )
    v8 = sub_B4CD20(a2);
  else
    v8 = ((__int64 (__fastcall *)(__int64))v7)(a2);
  v14[0] = v8;
  v9 = sub_B685F0(a1);
  result = sub_B44540(a3, v9, a1, (__int64 *)sub_B4C720, (__int64)v14, 0);
  if ( (_BYTE)result )
  {
    v13 = *(unsigned __int8 *)(a3 + 361);
    if ( (_BYTE)v13 )
    {
      result = *(unsigned __int8 *)(a3 + 361);
      if ( *(_BYTE *)(a3 + 360) )
        return sub_B4AFD0(a3, v9, v13, v11, v12);
    }
  }
  return result;
}

