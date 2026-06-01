__int64 __fastcall sub_106ED20(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  void *v5; // rax
  __int64 result; // rax

  sub_102F020(a1, a2, (__int64)a3, a4);
  if ( (a3[47] & 0x20) == 0 || (v5 = &unk_252BF20, (a3[60] & 1) != 0) )
  {
    v5 = &unk_252BF20;
    if ( *(_DWORD *)(a1 + 248) == 26 )
      v5 = &unk_252BFA0;
  }
  *(_QWORD *)(a1 + 352) = v5;
  result = (4 * (a3[863] & 1)) | (2 * (a3[862] & 1)) & 0xFB | a3[861] & 1 | *(_BYTE *)(a1 + 504) & 0xF8u;
  *(_BYTE *)(a1 + 504) = (4 * (a3[863] & 1)) | (2 * (a3[862] & 1)) & 0xFB | a3[861] & 1 | *(_BYTE *)(a1 + 504) & 0xF8;
  return result;
}
