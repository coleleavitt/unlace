__int64 __fastcall sub_78CB40(__int64 a1, __int64 a2)
{
  bool v2; // bl
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  char v5; // al

  v2 = 1;
  v3 = (*(_BYTE *)(a2 + 28) + 110) & 0x7F;
  if ( (unsigned __int8)v3 <= 0x34u )
  {
    v4 = 0x10FFC000000001LL;
    v2 = !_bittest64(&v4, v3);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(sub_798D40(a2) + 2160) + 105LL) & 4) != 0 )
  {
    v2 = 1;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  return sub_78C840(a1, a2, (4 * (v5 & 1)) | (2 * (v5 & 1)) | (unsigned int)v2);
}

