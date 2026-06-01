void *__fastcall sub_1088B00(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  void *result; // rax

  sub_100B2E0(a1, a2, (__int64)a3, a4);
  result = &unk_25961C0;
  if ( (a3[96] & 0x10) == 0 )
  {
    result = &unk_2596240;
    if ( (unsigned int)(*(_DWORD *)(a1 + 248) - 49) <= 2 && (a3[89] & 4) != 0 )
      result = &unk_25961C0;
  }
  *(_QWORD *)(a1 + 352) = result;
  if ( (a3[47] & 0x20) != 0 )
    *(_DWORD *)(a1 + 520) = 3;
  return result;
}

