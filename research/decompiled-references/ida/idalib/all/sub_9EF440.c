_QWORD *__fastcall sub_9EF440(_QWORD *a1, __int64 a2)
{
  _WORD *v2; // rdx
  _QWORD *result; // rax
  __int16 v4; // cx
  _QWORD *v5; // rsi
  _QWORD *v6; // rdx
  _QWORD *v7; // rsi
  _WORD *v8; // rcx
  _WORD *v9; // [rsp+10h] [rbp-10h] BYREF
  _BYTE v10[8]; // [rsp+18h] [rbp-8h] BYREF

  v2 = *(_WORD **)(a2 + 16);
  result = a1;
  v4 = *v2;
  v5 = v2 + 24;
  v6 = v2 + 20;
  if ( (v4 & 0x1FF) == 0x72 )
    v6 = v5;
  v7 = a1 + 2;
  v8 = (_WORD *)*v6;
  if ( (*(_WORD *)*v6 & 0x1FF) == 0x47 && (*(_BYTE *)(*((_QWORD *)v8 + 2) + 28LL) & 0x7Fu) - 40 <= 6 )
  {
    *a1 = v7;
    a1[1] = 0x100000000LL;
    v9 = v8;
    sub_9EF3C0((__int64)a1, &v9, v10);
    return a1;
  }
  else
  {
    *a1 = v7;
    a1[1] = 0x100000000LL;
  }
  return result;
}
