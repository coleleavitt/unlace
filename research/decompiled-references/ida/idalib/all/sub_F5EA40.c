__int64 __fastcall sub_F5EA40(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v2 = *(_BYTE *)(v1 + 16);
  LOBYTE(v1) = v2 == 11;
  return (v2 == 34) | (unsigned int)v1;
}
