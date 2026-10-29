__int64 __fastcall sub_76B6A0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int16 v2; // dx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v2 = *(_BYTE *)(v1 + 17) & 0x1F;
  LOBYTE(v1) = (unsigned __int8)v2 > 0xFu;
  return (2 * ((v2 >> 1) & 1)) | (unsigned int)(16 * v1);
}

