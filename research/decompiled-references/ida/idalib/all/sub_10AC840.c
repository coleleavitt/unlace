void *__fastcall sub_10AC840(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  void *result; // rax

  sub_102F020(a1, a2, (__int64)a3, a4);
  result = &unk_25BA320;
  if ( (a3[96] & 0x10) == 0 )
  {
    result = &unk_25BA3A0;
    if ( (unsigned int)(*(_DWORD *)(a1 + 248) - 49) <= 2 && (a3[89] & 4) != 0 )
      result = &unk_25BA320;
  }
  *(_QWORD *)(a1 + 352) = result;
  if ( (a3[47] & 0x20) != 0 )
    *(_DWORD *)(a1 + 520) = 3;
  return result;
}
