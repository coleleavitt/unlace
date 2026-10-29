__int64 __fastcall sub_1E04AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v9; // r14
  int v10; // eax
  unsigned __int64 v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // rax

  v9 = *(_QWORD *)(a3 + 40);
  v10 = sub_B72FF0(a3);
  v11 = *(_QWORD *)(a3 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a3 + 56) & 4) != 0 )
    v11 = *(_QWORD *)(v11 + 32);
  v12 = (__int64 *)sub_1DD4AE0(a1, (void **)v11, a4, v10, v9, 0, a5, a6);
  if ( !v12 )
    return 0;
  v13 = *v12;
  *(_BYTE *)(a2 + 140) |= 8u;
  *(_QWORD *)(a2 + 48) = v13;
  sub_1E046E0(a1, (__int64 *)a2, a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 47LL) & 0x20) != 0 )
    sub_17A40B0(a1, a2);
  return a2;
}
