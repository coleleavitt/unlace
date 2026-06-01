__m128i *__fastcall sub_803F90(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v6; // r14
  void *v7; // r14

  v4 = *(_QWORD *)(a2 + 16);
  if ( !v4 )
  {
    v6 = *(_QWORD *)a2;
    v4 = operator new(0x30u);
    sub_803DB0(v4, v6);
    v7 = *(void **)(a2 + 16);
    *(_QWORD *)(a2 + 16) = v4;
    if ( v7 )
    {
      sub_7DB220((__int64)v7);
      operator delete(v7, 0x30u);
      v4 = *(_QWORD *)(a2 + 16);
    }
  }
  sub_7DBF50(a1, v4, *(_DWORD *)(a2 + 8), a3);
  return a1;
}

