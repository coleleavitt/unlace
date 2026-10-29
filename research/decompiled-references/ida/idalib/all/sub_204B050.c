_QWORD *__fastcall sub_204B050(_QWORD *a1, __int64 *a2, char a3, void *a4, size_t a5, __int64 a6)
{
  __int64 v6; // rsi
  size_t v8; // rax

  v6 = *a2;
  if ( v6 )
  {
    sub_204AEB0((__int64)a1, v6, a3, a4, a5, a6);
  }
  else
  {
    *a1 = a1 + 2;
    v8 = j__strlen(&byte_22F0C30);
    sub_20485A0(a1, &byte_22F0C30, (__int64)(&byte_22F0C30 + v8));
  }
  return a1;
}
