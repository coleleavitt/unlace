__int64 __fastcall sub_790090(__int64 a1)
{
  bool v1; // bl
  char v2; // al
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  char v5; // al
  unsigned int v6; // ebx
  _QWORD v8[21]; // [rsp+0h] [rbp-A8h] BYREF

  v1 = 1;
  memset(v8, 0, 0x88u);
  v2 = *(_BYTE *)(a1 + 28);
  LOBYTE(v8[0]) = 1;
  v8[1] = -1;
  v8[3] = -1;
  v8[5] = -1;
  v3 = (v2 + 110) & 0x7F;
  v8[7] = -1;
  v8[9] = -1;
  v8[11] = -1;
  v8[13] = -1;
  v8[15] = -1;
  if ( (unsigned __int8)v3 <= 0x34u )
  {
    v4 = 0x10FFC000000001LL;
    v1 = !_bittest64(&v4, v3);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(sub_798D40(a1) + 2160) + 105LL) & 4) != 0 )
  {
    v1 = 1;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  v6 = sub_78C840((__int64)v8, a1, (4 * (v5 & 1)) | (2 * (v5 & 1)) | (unsigned int)v1);
  if ( (v8[0] & 1) == 0 )
    operator delete();
  return v6;
}

