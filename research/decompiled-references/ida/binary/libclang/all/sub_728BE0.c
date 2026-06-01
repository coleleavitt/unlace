unsigned __int64 __fastcall sub_728BE0(
        _QWORD *a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        __int64 a6,
        int a7)
{
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  char v13; // al
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+10h] [rbp-48h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  if ( a7 == 1 )
  {
    v10 = 1;
    v11 = 2;
  }
  else if ( a7 == 2 )
  {
    v10 = 2;
    v11 = 3;
  }
  else
  {
    v10 = 0;
    v11 = 1;
  }
  v16 = a6;
  v15 = 0;
  v17 = v17 & 0xFC00000000000000LL | (v10 << 52) | (v11 << 48) | 0x19C00000000LL;
  v12 = sub_7222F0((__int64)(a1 + 274), 80, 3);
  sub_728980(v12, a1, &v15, a2, a3, a4, a5);
  v13 = *(_BYTE *)(v12 + 30);
  *(_BYTE *)(v12 + 34) |= 4u;
  if ( (~v13 & 0xF0) == 0 && !*(_QWORD *)v12 )
    *(_BYTE *)(v12 + 30) = v13 & 0xF;
  return v12;
}

