__int64 __fastcall sub_1D55320(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v4; // rax
  __int64 *v5; // rbp
  __int64 result; // rax
  int v7; // ebx
  int v8; // eax
  __int64 v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = sub_1D51480(a1, *(_QWORD *)(a2 + 16), a3, a4);
  if ( !v4 )
    return 1;
  v5 = v4;
  if ( *(_DWORD *)(*a1 + 12632) || (result = a2, v5 != *(__int64 **)(a2 + 16)) )
  {
    v7 = *(_DWORD *)(a2 + 4);
    v9[0] = *v5;
    v9[1] = (__int64)(v5 + 1);
    v8 = sub_F6CE20(v9);
    return sub_19AB130(*a1, v5, v8, nullptr, 0, v7, a3, (__m128i)a4, 0);
  }
  return result;
}
