void __fastcall sub_525E40(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)a1 = &stylable_widget_mixin_t___vtable;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = a4;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  sub_525C80((_QWORD *)a1, a2, a3, a4, 0.0);
}
