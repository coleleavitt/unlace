unsigned __int64 __fastcall sub_16A920(__int64 a1, const __m128i *a2, unsigned __int8 a3)
{
  __int64 *v4; // rdi
  __int64 v7; // rax

  v4 = (__int64 *)qword_2532F8;
  if ( !qword_2532F8 )
  {
    v7 = operator new(0x18u);
    *(_QWORD *)v7 = 0;
    v4 = (__int64 *)v7;
    qword_2532F8 = v7;
    *(_OWORD *)(v7 + 8) = 0;
  }
  return sub_16A0D0(v4, *(_QWORD *)(a1 + 96), a2, 0, 0, a3);
}

