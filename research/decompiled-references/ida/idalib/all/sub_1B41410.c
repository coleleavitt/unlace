__int64 __fastcall sub_1B41410(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        int a6,
        __m128 a7,
        __m128 a8,
        __int64 a9)
{
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rsi
  __int64 *v19; // rdx
  _QWORD *v20; // rsi
  int v21; // r11d
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  char v24; // dl
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+0h] [rbp-2C0h]
  __int64 v27; // [rsp+0h] [rbp-2C0h]
  int v28; // [rsp+8h] [rbp-2B8h]
  char v29; // [rsp+8h] [rbp-2B8h]
  int v30; // [rsp+Ch] [rbp-2B4h]
  __int64 v31[21]; // [rsp+18h] [rbp-2A8h] BYREF
  _QWORD v32[6]; // [rsp+C0h] [rbp-200h] BYREF
  _QWORD v33[6]; // [rsp+F0h] [rbp-1D0h] BYREF
  _QWORD v34[6]; // [rsp+120h] [rbp-1A0h] BYREF
  _QWORD v35[6]; // [rsp+150h] [rbp-170h] BYREF
  _QWORD v36[6]; // [rsp+180h] [rbp-140h] BYREF
  _QWORD v37[6]; // [rsp+1B0h] [rbp-110h] BYREF
  _QWORD v38[6]; // [rsp+1E0h] [rbp-E0h] BYREF
  __int64 v39; // [rsp+210h] [rbp-B0h] BYREF

  if ( !a4 )
    return 1;
  if ( (unsigned __int8)sub_1B0A9B0(a1, (char *)a2, a3, 1u, 0x11C8u, *(double *)a7.m128_u64)
    && (unsigned __int8)sub_1B0ABC0(a1, (char *)a2, a3, 1u, 0x11C8u, *(double *)a7.m128_u64) )
  {
    v16 = sub_1AEB8B0(*a1, 0x54u, a4);
    v17 = &a2[a3];
    v32[4] = v33;
    v33[4] = v34;
    v34[4] = v35;
    v35[4] = v36;
    v36[4] = v37;
    v31[19] = (__int64)v32;
    v37[4] = v38;
    v31[20] = 0x400000000LL;
    v32[5] = 0x400000000LL;
    v33[5] = 0x400000000LL;
    v34[5] = 0x400000000LL;
    v35[5] = 0x400000000LL;
    v36[5] = 0x400000000LL;
    v37[5] = 0x400000000LL;
    v38[4] = &v39;
    v38[5] = 0x400000000LL;
    if ( v17 != a2 )
    {
      v18 = *a2;
      if ( *(_DWORD *)(*a2 + 8) == 15 )
      {
LABEL_16:
        v20 = *(_QWORD **)(v18 + 16);
        if ( v20 && (*(_DWORD *)v20 & 0x40000) != 0 )
          goto LABEL_14;
        goto LABEL_13;
      }
      v19 = a2 + 1;
      while ( v19 != v17 )
      {
        v18 = *v19++;
        if ( *(_DWORD *)(v18 + 8) == 15 )
          goto LABEL_16;
      }
    }
    v20 = nullptr;
LABEL_13:
    v21 = sub_1B0B640(0x54u, v20, nullptr, v16, (_QWORD *)*a1, a1[1], *(double *)a7.m128_u64, a8, a9, (__int64)v31);
    if ( v21 )
    {
      v28 = v21;
      if ( !(unsigned __int8)sub_1B3EC00(*a1, a2, a3, v31, a1[1], a7, a8) )
      {
        v23 = sub_1AE5FF0(a1[1]);
        v24 = 0;
        if ( v23 )
          v24 = *(_BYTE *)(v23 + 1106);
        v30 = v28;
        v29 = v24;
        v27 = *(_QWORD *)(v23 + 1128);
        v25 = sub_168B6C0((__int64)a1);
        v22 = sub_EFC580(v25, a5, a6, v30, a2, a3, (__int64)a4, (__int64)v31, v27, v29);
        goto LABEL_15;
      }
    }
LABEL_14:
    v22 = 1;
LABEL_15:
    v26 = v22;
    sub_1AF4340(v31);
    return v26;
  }
  return 1;
}
