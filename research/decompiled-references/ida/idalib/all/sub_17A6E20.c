bool __fastcall sub_17A6E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  bool result; // al

  v6 = *(_QWORD *)(a1 + 232);
  result = 0;
  if ( (*(_BYTE *)(v6 + 60) & 0x10) != 0 && (*(_BYTE *)(v6 + 89) & 4) == 0 )
    return (unsigned int)sub_178EA20(*(_QWORD *)(a1 + 664), a2, nullptr, a4, a5, a6) == 1;
  return result;
}
