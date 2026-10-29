unsigned __int64 __fastcall sub_1E61050(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rsi
  char v12; // cl
  char v13; // di
  char v14; // cl
  char v15; // di

  v8 = a1[11];
  a1[21] += 32LL;
  v9 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a1[12] >= v9 + 32 && v8 )
  {
    a1[11] = v9 + 32;
    result = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v9 = sub_986170((__int64)(a1 + 11), 32, 32, 4, a5, a6);
    result = v9 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v11 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  v12 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  *(_QWORD *)v9 = v9;
  *(_BYTE *)(v9 + 16) = 59;
  v13 = v12;
  v14 = *(_BYTE *)(v9 + 17);
  *(_QWORD *)(v9 + 24) = a3;
  v15 = v13 & 0x1F;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v11 = a2;
  *(_BYTE *)(v9 + 17) = v15 | v14 & 0xE0;
  *(_QWORD *)(v9 + 8) = v11;
  *(_WORD *)(v9 + 17) &= 0xF81Fu;
  return result;
}
