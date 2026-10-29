void *__fastcall sub_1011A80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *result; // rax

  sub_100B2E0(a1, a2, a3, a4);
  result = &unk_2493E60;
  if ( (*(_BYTE *)(a3 + 96) & 0x10) == 0 )
  {
    result = &unk_2493EE0;
    if ( (unsigned int)(*(_DWORD *)(a1 + 248) - 49) <= 2 && (*(_BYTE *)(a3 + 89) & 4) != 0 )
      result = &unk_2493E60;
  }
  *(_QWORD *)(a1 + 352) = result;
  return result;
}

