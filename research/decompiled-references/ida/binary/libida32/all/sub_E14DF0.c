__int64 __fastcall sub_E14DF0(__int64 a1)
{
  unsigned __int64 v1; // rsi
  __int64 v3; // [rsp+8h] [rbp-10h] BYREF

  v1 = a1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a1 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*(_BYTE *)(v1 + 28) & 0x7Fu) - 68 >= 7 )
    v1 = 0;
  sub_EFED60(&v3, v1);
  return v3;
}

