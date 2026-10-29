_QWORD *__fastcall sub_7B6B30(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *result; // rax

  v2 = sub_798D40(a1);
  result = sub_6C29A0(v2, a2, a1);
  *(_BYTE *)(a1 + 58) |= 0x40u;
  *(_BYTE *)(a2 + 58) |= 0x80u;
  return result;
}

