unsigned __int64 __fastcall sub_1C0AEA0(
        __m128 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v12; // rdx
  unsigned int v14; // [rsp+10h] [rbp-F8h] BYREF
  char v15; // [rsp+14h] [rbp-F4h]
  __int64 v16; // [rsp+18h] [rbp-F0h] BYREF
  unsigned int v17; // [rsp+20h] [rbp-E8h]
  char v18; // [rsp+24h] [rbp-E4h]
  unsigned int v19; // [rsp+50h] [rbp-B8h] BYREF
  char v20; // [rsp+54h] [rbp-B4h]
  unsigned int v21; // [rsp+90h] [rbp-78h] BYREF
  char v22; // [rsp+94h] [rbp-74h]

  v14 = 0;
  v15 &= ~1u;
  v19 = 0;
  v20 &= ~1u;
  v9 = sub_1C0A810(a1, a2, a3, a5, 0, &v19, a6, a7);
  v10 = v9;
  if ( v9 == 1 || (*(_DWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL) & 0x20000) != 0 )
  {
    v22 &= ~1u;
    v21 = 0;
    sub_A4FD20((__int64)&v14, (__int64)&v21);
    if ( v21 > 1 )
      sub_A4F8E0((int *)&v21);
  }
  else
  {
    v10 = (unsigned __int64)sub_1BE1B90(
                              (__int64)a1,
                              v9 & 0xFFFFFFFFFFFFFFFELL,
                              a3,
                              (int *)&v14,
                              a5,
                              1,
                              *(double *)a6.m128_u64,
                              (int *)&v19);
  }
  if ( v19 > 1 )
    sub_A4F8E0((int *)&v19);
  if ( v10 != 1 && (*(_DWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL) & 0x20000) == 0 )
  {
    if ( *(_DWORD *)(a4 + 8) <= 0x40u && v17 <= 0x40 )
    {
      v12 = v16;
      *(_DWORD *)(a4 + 8) = v17;
      *(_QWORD *)a4 = v12;
    }
    else
    {
      sub_22056A0(a4, &v16);
    }
    *(_BYTE *)(a4 + 12) = v18;
  }
  if ( v14 > 1 )
    sub_A4F8E0((int *)&v14);
  return v10;
}
