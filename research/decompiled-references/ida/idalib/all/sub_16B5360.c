__int64 __fastcall sub_16B5360(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        double a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10)
{
  __int64 v11; // r12
  __int64 *v12; // rax
  __int64 *v16; // [rsp+18h] [rbp-40h]

  v11 = a6;
  v12 = (__int64 *)sub_1E855F0(a1, a5, *(_QWORD *)(a9 + 8));
  if ( (*(_BYTE *)(a5 + 720) & 1) != 0 || ((**(_DWORD **)a5 >> 12) & 0x7F) == 0x45 )
    return 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
  {
    v16 = v12;
    sub_186C8D0(a1, a5);
    v12 = v16;
  }
  return sub_16B28E0(
           a1,
           a2,
           a3,
           v12,
           a9,
           (v11 << 32) | a4,
           a7,
           (unsigned int)a8 | ((unsigned __int64)a10 << 32),
           a9,
           a10);
}
