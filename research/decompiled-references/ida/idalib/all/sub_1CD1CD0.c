__int64 __fastcall sub_1CD1CD0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int128 a7,
        __int64 a8,
        __m128 *a9,
        int a10)
{
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned int v15; // esi
  unsigned __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // r9d
  __int64 v19; // r11
  __int64 result; // rax
  unsigned __int64 v21; // rax
  __int64 v23; // [rsp+10h] [rbp-48h]
  __int64 *v24; // [rsp+18h] [rbp-40h] BYREF

  v13 = (__int64)a6;
  v24 = a6;
  if ( a6 )
  {
    v14 = sub_F1ED40(*(_QWORD **)(a1 + 248), a6, a3, a4, a5, (__int64)a6);
    v15 = a9[1].m128_u32[2];
    v13 = v14;
    v16 = a9[3].m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL;
    v17 = *((_DWORD *)v24 + 69);
    v18 = *((_DWORD *)v24 + 68);
  }
  else
  {
    v15 = a9[1].m128_u32[2];
    v18 = 0;
    v17 = 0;
    v16 = a9[3].m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL;
  }
  v19 = sub_1CD1930(a1, a2, a3, a4, a5, v18, a7, SDWORD2(a7), a8, v17, v16, v15, (__int64 *)&v24, a10);
  result = 1;
  v23 = v19;
  if ( v19 != 1 )
  {
    v21 = sub_A55700(*(_QWORD **)(a1 + 248), a2, a3, 0, a5, a4, a7, a8, v13);
    sub_BBE5F0(a9, v21, v23 & 0xFFFFFFFFFFFFFFFELL, 0);
    return 0;
  }
  return result;
}
