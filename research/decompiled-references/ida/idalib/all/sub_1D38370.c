bool __fastcall sub_1D38370(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  unsigned __int8 v4; // al
  unsigned __int8 v5; // al
  __int64 v6; // rbp

  v2 = a1;
  v3 = a2;
  v4 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v4 - 18 <= 0x3F && ((unsigned int)v4 - 53 <= 1 || ((v4 + 52) & 0x7Fu) <= 1) )
    v2 = sub_B72ED0(a1);
  v5 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v5 - 18 <= 0x3F && ((unsigned int)v5 - 53 <= 1 || ((v5 + 52) & 0x7Fu) <= 1) )
    v3 = sub_B72ED0(a2);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return v6 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
}
