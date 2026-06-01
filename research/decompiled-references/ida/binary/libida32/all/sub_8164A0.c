unsigned __int64 __fastcall sub_8164A0(_BYTE *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // r10
  unsigned __int64 v5; // rtt
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rtt

  v4 = (unsigned int)a2;
  v5 = (((((HIDWORD(a3) % a4) << 32) + (unsigned int)a3) % a4) << 32) + HIDWORD(a2);
  v6 = (v5 / a4) << 32;
  v7 = ((v5 % a4) << 32) + v4;
  *a1 = v7 % a4;
  return (unsigned int)(v7 / a4) | v6;
}

