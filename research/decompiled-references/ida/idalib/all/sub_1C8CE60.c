__int64 __fastcall sub_1C8CE60(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  int v6; // r12d
  int v7; // eax
  __int64 v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = sub_1C8AA80(a1, *(_QWORD *)(a2 + 16), a3, a4);
  if ( !v4 )
    return 1;
  v5 = v4;
  v6 = *(_DWORD *)(a2 + 4);
  v9[0] = *v4;
  v9[1] = (__int64)(v4 + 1);
  v7 = sub_F6CE20(v9);
  return sub_19AB130(*a1, v5, v7, nullptr, 0, v6, a3, (__m128i)a4, 0);
}
