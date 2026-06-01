void __fastcall sub_17E24D0(
        __int64 a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, _QWORD, _BYTE *),
        __int64 a4,
        __m128i a5,
        double a6)
{
  __int64 i; // rbx
  int v9; // eax

  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 48) + 17LL) & 4) == 0 )
  {
    for ( i = sub_B8E970(a2 + 64); i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
    {
      v9 = *(_BYTE *)(i + 28) & 0x7F;
      if ( (unsigned int)(v9 - 64) > 2 )
      {
        if ( (unsigned int)(v9 - 58) <= 3 )
          sub_17E24D0(a1, i, a3, a4);
      }
      else
      {
        sub_17E1070(a1, i, a3, a4, a5, a6);
      }
    }
  }
}
