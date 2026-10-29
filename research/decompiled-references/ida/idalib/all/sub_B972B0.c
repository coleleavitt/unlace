unsigned __int64 __fastcall sub_B972B0(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  _QWORD *v3; // rdx

  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 60 > 1 )
  {
    v3 = (_QWORD *)(*(_QWORD *)(a1 + 136) & 0xFFFFFFFFFFFFFFF8LL);
    result = (2LL * (unsigned int)(a2 - 1)) | *v3 & 0xFFFFFFFFFFFFFFF9LL;
    *v3 = result;
  }
  else
  {
    result = a2 & 7;
    *(_BYTE *)(a1 + 180) = result | *(_BYTE *)(a1 + 180) & 0xF8;
  }
  return result;
}
