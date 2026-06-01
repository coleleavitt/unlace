unsigned __int64 __fastcall sub_15AB760(__m128i **a1, _QWORD *a2, __int64 a3, __int64 a4, __int32 a5, __m128 a6)
{
  unsigned __int64 result; // rax
  __int64 v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[0] = a3;
  v8[1] = a4;
  sub_E90D10(a1 + 1, a2, a3, a4, a5);
  result = *(unsigned int *)a1;
  if ( (_DWORD)result )
  {
    *((_DWORD *)a1 + 1) = a5;
  }
  else
  {
    result = sub_F6CCB0(v8, a6);
    *((_DWORD *)a1 + 1) = a5;
    *(_DWORD *)a1 = result;
  }
  return result;
}
