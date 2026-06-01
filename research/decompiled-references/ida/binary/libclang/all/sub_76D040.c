__int64 __fastcall sub_76D040(__int64 a1, int a2)
{
  __int64 v2; // rax
  char v3; // cl
  unsigned __int16 v4; // dx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v3 = *(_BYTE *)(v2 + 17);
  v4 = v3 & 0x1F;
  LOBYTE(v2) = (unsigned __int8)v4 > 0xFu;
  return (2 * ((v4 >> 1) & 1)) | ((v3 & 4) != 0 ? 4 : 0) | a2 | ((v3 & 4) != 0 ? 8 : 0) | (unsigned int)(16 * v2);
}

