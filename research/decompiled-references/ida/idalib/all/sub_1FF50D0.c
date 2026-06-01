__int64 __fastcall sub_1FF50D0(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, _QWORD, __int64, _QWORD),
        __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *i; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 result; // rax

  v3 = *(__int64 **)(a1 + 144);
  for ( i = *(__int64 **)(a1 + 136); v3 != i; result = a2(a3, v7, *(i - 3), v8, *(i - 1)) )
  {
    v7 = *i;
    v8 = i[2];
    i += 4;
  }
  return result;
}
