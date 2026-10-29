__int64 __fastcall sub_1712C0(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 256) )
  {
    *(_QWORD *)(a1 + 264) = 0;
    qfree();
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)(a1 + 272) = 0;
  }
  sub_171080((__m128i **)(a1 + 256), *(_QWORD *)(a1 + 216), *(_DWORD *)(a1 + 224), nullptr, 0, 1);
  return 1;
}

