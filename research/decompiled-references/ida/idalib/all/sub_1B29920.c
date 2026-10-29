unsigned __int64 __fastcall sub_1B29920(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        double a7,
        __m128 a8,
        __int64 a9)
{
  unsigned __int64 v9; // rbp
  __int64 *v13; // rcx
  __int64 v16; // rdx
  __int64 *v17; // rax
  _QWORD *v18; // rsi
  int v19; // r11d
  __int64 v21; // rdi
  __int64 v22; // rax
  char v23; // dl
  __int64 v24; // rax
  int v26; // [rsp+8h] [rbp-2C0h]
  char v27; // [rsp+Ch] [rbp-2BCh]
  __int64 v28; // [rsp+18h] [rbp-2B0h] BYREF
  _QWORD v29[21]; // [rsp+20h] [rbp-2A8h] BYREF
  _QWORD v30[6]; // [rsp+C8h] [rbp-200h] BYREF
  _QWORD v31[6]; // [rsp+F8h] [rbp-1D0h] BYREF
  _QWORD v32[6]; // [rsp+128h] [rbp-1A0h] BYREF
  _QWORD v33[6]; // [rsp+158h] [rbp-170h] BYREF
  _QWORD v34[6]; // [rsp+188h] [rbp-140h] BYREF
  _QWORD v35[6]; // [rsp+1B8h] [rbp-110h] BYREF
  _QWORD v36[6]; // [rsp+1E8h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+218h] [rbp-B0h] BYREF

  v9 = 1;
  if ( a4 )
  {
    v13 = &a2[a3];
    v30[4] = v31;
    v31[4] = v32;
    v32[4] = v33;
    v33[4] = v34;
    v34[4] = v35;
    v29[19] = v30;
    v35[4] = v36;
    v29[20] = 0x400000000LL;
    v30[5] = 0x400000000LL;
    v31[5] = 0x400000000LL;
    v32[5] = 0x400000000LL;
    v33[5] = 0x400000000LL;
    v34[5] = 0x400000000LL;
    v35[5] = 0x400000000LL;
    v36[4] = &v37;
    v36[5] = 0x400000000LL;
    if ( v13 != a2 )
    {
      v16 = *a2;
      if ( *(_DWORD *)(*a2 + 8) == 15 )
      {
LABEL_12:
        v18 = *(_QWORD **)(v16 + 16);
        if ( v18 && (*(_DWORD *)v18 & 0x40000) != 0 )
          goto LABEL_9;
        goto LABEL_8;
      }
      v17 = a2 + 1;
      while ( v17 != v13 )
      {
        v16 = *v17++;
        if ( *(_DWORD *)(v16 + 8) == 15 )
          goto LABEL_12;
      }
    }
    v18 = nullptr;
LABEL_8:
    v19 = sub_1B0B640(0x5Au, v18, nullptr, a4, (_QWORD *)*a1, a1[1], a7, a8, a9, (__int64)v29);
    if ( v19 )
    {
      v21 = *a1;
      v26 = v19;
      v28 = 0x4600000028LL;
      if ( !(unsigned __int8)sub_1B28C40(v21, (unsigned int **)a2, a3, &v28)
        && !sub_1B107F0(*a1, (unsigned int **)a2, a3) )
      {
        sub_15F2480(*a1);
        v22 = sub_1AE5FF0(a1[1]);
        v23 = 0;
        if ( v22 )
          v23 = *(_BYTE *)(v22 + 1106);
        v27 = v23;
        v24 = sub_168B6C0((__int64)a1);
        v9 = sub_EF8010(v24, a5, a6, v26, a2, a3, a4, (__int64)v29, v27);
        goto LABEL_10;
      }
    }
LABEL_9:
    v9 = 1;
LABEL_10:
    sub_1AF4340(v29);
  }
  return v9;
}
