_QWORD *__fastcall sub_1E495F0(__int64 a1, __int64 a2, __m128 a3, __m128 a4, __m128i a5)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 *v12; // rax
  _QWORD *result; // rax

  v5 = sub_BBFE00(a2);
  v10 = sub_B94670(*(_QWORD *)(a1 + 24), *(_QWORD *)(v5 + 40), v6, v7, v8, v9);
  v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v10 & 4) != 0 )
  {
    v12 = (unsigned __int64 *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    v11 = 0;
    if ( v12 )
      v11 = *v12;
  }
  if ( (*(_BYTE *)(v11 + 28) & 0x7F) != 0x45 )
    v11 = 0;
  result = sub_BC4110((_QWORD *)v11, a2);
  if ( !result )
    return (_QWORD *)sub_1E48F80((__int64 *)a1, (_QWORD *)v11, a2, a3, a4, a5);
  return result;
}
