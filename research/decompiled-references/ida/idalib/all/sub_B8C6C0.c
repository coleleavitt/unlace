__int64 (*__fastcall sub_B8C6C0(unsigned __int64 a1))(void)
{
  __int64 (*result)(void); // rax

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    a1 = sub_B8C2C0(a1);
  result = *(__int64 (**)(void))(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 18360LL) + 64LL);
  if ( (char *)result != (char *)nullsub_161 )
    return (__int64 (*)(void))result();
  return result;
}
