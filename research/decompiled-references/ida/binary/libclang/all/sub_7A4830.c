unsigned __int64 __fastcall sub_7A4830(__int64 a1, int a2)
{
  int v2; // esi
  unsigned __int64 result; // rax
  _QWORD *v4; // rdx

  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 58 > 1 )
  {
    v4 = (_QWORD *)(*(_QWORD *)(a1 + 136) & 0xFFFFFFFFFFFFFFF8LL);
    result = (2LL * (unsigned int)(a2 - 1)) | *v4 & 0xFFFFFFFFFFFFFFF9LL;
    *v4 = result;
  }
  else
  {
    v2 = a2 & 7;
    result = v2 | *(_BYTE *)(a1 + 180) & 0xF8u;
    *(_BYTE *)(a1 + 180) = v2 | *(_BYTE *)(a1 + 180) & 0xF8;
  }
  return result;
}

