__int64 __fastcall sub_12EA240(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rbp
  void *v7; // r12
  __int64 v8; // rsi
  __int64 result; // rax

  v3 = a1[12];
  v4 = a1[14];
  v5 = a1[16];
  v6 = operator new(0x4420u);
  sub_15F4E50(v6, v3, v4, v5, a2, a3);
  v7 = (void *)a1[18];
  a1[18] = v6;
  if ( v7 )
  {
    sub_1602330(v7);
    operator delete(v7, 0x4420u);
    v6 = a1[18];
  }
  v8 = a1[15];
  *(__m128i *)(v6 + 292) = _mm_loadu_si128((const __m128i *)*(_QWORD *)(a1[2] + 112LL));
  if ( v8 )
  {
    sub_15F1150(v6);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[15] + 240LL))(a1[15], a1[18]);
  }
  result = sub_145C8F0(a1[12]);
  if ( result )
    return sub_A071B0(
             a1[18] + 280LL,
             result,
             (*(_BYTE *)(*(_QWORD *)a1[2] + 156LL) & 0x10) != 0,
             *(_QWORD **)(*(_QWORD *)(a1[2] + 112LL) + 16LL),
             (__int64)(*(_QWORD *)(*(_QWORD *)(a1[2] + 112LL) + 24LL) - *(_QWORD *)(*(_QWORD *)(a1[2] + 112LL) + 16LL)) >> 5);
  return result;
}
