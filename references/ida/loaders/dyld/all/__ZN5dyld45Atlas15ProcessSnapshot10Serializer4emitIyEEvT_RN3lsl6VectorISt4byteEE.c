__int64 __fastcall dyld4::Atlas::ProcessSnapshot::Serializer::emit<unsigned long long>(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  __int64 result; // x0
  char v5; // w8
  __int64 v6; // x9
  __int64 v7; // x10
  __int64 v8; // [xsp+8h] [xbp-28h]

  v3 = 0;
  v8 = a1;
  do
  {
    result = lsl::Vector<std::byte>::reserve(a2, *(_QWORD *)(a2 + 16) + 1LL);
    v5 = *((_BYTE *)&v8 + v3);
    v6 = *(_QWORD *)(a2 + 8);
    v7 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = v7 + 1;
    *(_BYTE *)(v6 + v7) = v5;
    ++v3;
  }
  while ( v3 != 8 );
  return result;
}
