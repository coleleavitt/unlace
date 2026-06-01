_QWORD *__fastcall sub_1F8BC90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *result; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+8h] [rbp-10h] BYREF

  result = *(_QWORD **)(a1 + 48);
  v8 = a2;
  if ( !result || !*((_BYTE *)result + 9267) )
  {
    result = (_QWORD *)v8;
    if ( *(char *)(v8 + 29) < 0 )
    {
      v7 = sub_1F8B440(a1 + 1288, &v8, a3, a4, a5, a6);
      return sub_1F705B0(v7, 14, 0);
    }
  }
  return result;
}
