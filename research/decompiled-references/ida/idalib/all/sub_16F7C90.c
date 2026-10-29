void __fastcall sub_16F7C90(__int64 a1, unsigned __int64 a2, unsigned int a3, __m128i a4, double a5)
{
  __int64 v6; // r13
  unsigned __int64 v7; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_BFBAE0(a2) + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 7 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18640LL);
    v7 = sub_BFBAE0(a2);
    sub_16F1980(a1, v7, v6, a3, nullptr, 0, a4, a5);
  }
}
