_QWORD *__fastcall sub_1F8BD50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *result; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+8h] [rbp-10h] BYREF

  result = *(_QWORD **)(a1 + 48);
  v9 = a2;
  if ( !result || !*((_BYTE *)result + 9267) )
  {
    result = (_QWORD *)v9;
    if ( *(char *)(v9 + 29) < 0 )
    {
      v8 = sub_1F8B440(a1 + 1288, &v9, a3, a4, a5, a6);
      return sub_1F705B0(v8, 16, a3);
    }
  }
  return result;
}
