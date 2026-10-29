_QWORD *__fastcall sub_204B0A0(_QWORD *a1, __int64 *a2, int a3, void *a4, size_t a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  size_t v10; // rax

  v6 = *a2;
  if ( *a2
    && (v7 = (unsigned int)(a3 + 1), (unsigned int)v7 < *(_DWORD *)(v6 + 8))
    && (v8 = *(_QWORD *)(v6 + 8 * v7 + 48)) != 0 )
  {
    sub_204AEB0((__int64)a1, v8, (char)a4, a4, a5, a6);
    return a1;
  }
  else
  {
    *a1 = a1 + 2;
    v10 = j__strlen(&byte_22F0C30);
    sub_20485A0(a1, &byte_22F0C30, (__int64)(&byte_22F0C30 + v10));
    return a1;
  }
}
