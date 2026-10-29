__int64 __fastcall sub_76BCF0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rax
  unsigned __int16 v4; // dx

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 6) == 0 )
    return (*(_DWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL) >> 14) & 0x1B;
  result = 0;
  if ( (*(_QWORD *)(a1 + 40) & 6LL) == 2 )
  {
    v3 = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0LL);
    v4 = *(_BYTE *)(v3 + 17) & 0x1F;
    LOBYTE(v3) = (unsigned __int8)v4 > 0xFu;
    return (2 * ((v4 >> 1) & 1)) | (unsigned int)(16 * v3);
  }
  return result;
}

