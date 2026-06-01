__int64 __fastcall sub_1B69000(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        int a6,
        double a7,
        __m128 a8,
        __int64 a9)
{
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rsi
  __int64 *v18; // rdx
  _QWORD *v19; // rsi
  int v20; // ecx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v25; // [rsp+0h] [rbp-2C8h]
  char v26; // [rsp+Bh] [rbp-2BDh]
  int v27; // [rsp+Ch] [rbp-2BCh]
  __int64 v28; // [rsp+10h] [rbp-2B8h] BYREF
  char v29; // [rsp+18h] [rbp-2B0h]
  _QWORD v30[21]; // [rsp+20h] [rbp-2A8h] BYREF
  _QWORD v31[6]; // [rsp+C8h] [rbp-200h] BYREF
  _QWORD v32[6]; // [rsp+F8h] [rbp-1D0h] BYREF
  _QWORD v33[6]; // [rsp+128h] [rbp-1A0h] BYREF
  _QWORD v34[6]; // [rsp+158h] [rbp-170h] BYREF
  _QWORD v35[6]; // [rsp+188h] [rbp-140h] BYREF
  _QWORD v36[6]; // [rsp+1B8h] [rbp-110h] BYREF
  _QWORD v37[6]; // [rsp+1E8h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+218h] [rbp-B0h] BYREF

  if ( !a4 )
    return 1;
  if ( !(unsigned __int8)sub_1B3CC40(*a1, a2, a3, 0x71u, a1[1], a7) )
  {
    v15 = sub_1AEB8B0(*a1, 0x71u, a4);
    v16 = &a2[a3];
    v31[4] = v32;
    v32[4] = v33;
    v33[4] = v34;
    v34[4] = v35;
    v35[4] = v36;
    v30[19] = v31;
    v36[4] = v37;
    v30[20] = 0x400000000LL;
    v31[5] = 0x400000000LL;
    v32[5] = 0x400000000LL;
    v33[5] = 0x400000000LL;
    v34[5] = 0x400000000LL;
    v35[5] = 0x400000000LL;
    v36[5] = 0x400000000LL;
    v37[4] = &v38;
    v37[5] = 0x400000000LL;
    if ( a2 != v16 )
    {
      v17 = *a2;
      if ( *(_DWORD *)(*a2 + 8) == 15 )
      {
LABEL_15:
        v19 = *(_QWORD **)(v17 + 16);
        if ( v19 && (*(_DWORD *)v19 & 0x40000) != 0 )
          goto LABEL_13;
        goto LABEL_12;
      }
      v18 = a2 + 1;
      while ( v16 != v18 )
      {
        v17 = *v18++;
        if ( *(_DWORD *)(v17 + 8) == 15 )
          goto LABEL_15;
      }
    }
    v19 = nullptr;
LABEL_12:
    v20 = sub_1B0B640(0x71u, v19, nullptr, v15, (_QWORD *)*a1, a1[1], a7, a8, a9, (__int64)v30);
    if ( v20 )
    {
      v22 = *a1;
      v27 = v20;
      v29 = 1;
      v28 = v22;
      sub_1B68D30((__int64)&v28, a4);
      v26 = v29;
      v23 = sub_168B6C0((__int64)a1);
      v21 = sub_EFD8C0(v23, a5, a6, v27, a2, a3, (__int64)a4, (__int64)v30, v26);
      goto LABEL_14;
    }
LABEL_13:
    v21 = 1;
LABEL_14:
    v25 = v21;
    sub_1AF4340(v30);
    return v25;
  }
  return 1;
}
