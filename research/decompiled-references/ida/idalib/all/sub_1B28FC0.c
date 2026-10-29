unsigned __int64 __fastcall sub_1B28FC0(
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
  unsigned __int64 v9; // rbx
  __int64 v15; // rax
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 *v18; // r10
  _QWORD *v19; // rsi
  int v20; // r10d
  __int64 v22; // rdi
  __int64 v23; // rax
  char v24; // dl
  __int64 v25; // rax
  int v27; // [rsp+8h] [rbp-2C0h]
  char v28; // [rsp+Ch] [rbp-2BCh]
  __int64 v29; // [rsp+18h] [rbp-2B0h] BYREF
  _QWORD v30[21]; // [rsp+20h] [rbp-2A8h] BYREF
  _QWORD v31[6]; // [rsp+C8h] [rbp-200h] BYREF
  _QWORD v32[6]; // [rsp+F8h] [rbp-1D0h] BYREF
  _QWORD v33[6]; // [rsp+128h] [rbp-1A0h] BYREF
  _QWORD v34[6]; // [rsp+158h] [rbp-170h] BYREF
  _QWORD v35[6]; // [rsp+188h] [rbp-140h] BYREF
  _QWORD v36[6]; // [rsp+1B8h] [rbp-110h] BYREF
  _QWORD v37[6]; // [rsp+1E8h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+218h] [rbp-B0h] BYREF

  v9 = 1;
  if ( a4 )
  {
    v15 = sub_1AEB8B0(*a1, 0x36u, a4);
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
    if ( v16 != a2 )
    {
      v17 = *a2;
      if ( *(_DWORD *)(*a2 + 8) == 15 )
      {
LABEL_12:
        v19 = *(_QWORD **)(v17 + 16);
        if ( v19 && (*(_DWORD *)v19 & 0x40000) != 0 )
          goto LABEL_9;
        goto LABEL_8;
      }
      v18 = a2 + 1;
      while ( v18 != v16 )
      {
        v17 = *v18++;
        if ( *(_DWORD *)(v17 + 8) == 15 )
          goto LABEL_12;
      }
    }
    v19 = nullptr;
LABEL_8:
    v20 = sub_1B0B640(0x36u, v19, nullptr, v15, (_QWORD *)*a1, a1[1], a7, a8, a9, (__int64)v30);
    if ( v20 )
    {
      v22 = *a1;
      v27 = v20;
      v29 = 0x4600000028LL;
      if ( !(unsigned __int8)sub_1B28C40(v22, (unsigned int **)a2, a3, &v29)
        && !sub_1B107F0(*a1, (unsigned int **)a2, a3) )
      {
        v23 = sub_1AE5FF0(a1[1]);
        v24 = 0;
        if ( v23 )
          v24 = *(_BYTE *)(v23 + 1106);
        v28 = v24;
        v25 = sub_168B6C0((__int64)a1);
        v9 = sub_EF94F0(v25, a5, a6, v27, a2, a3, (__int64)a4, (__int64)v30, v28);
        goto LABEL_10;
      }
    }
LABEL_9:
    v9 = 1;
LABEL_10:
    sub_1AF4340(v30);
  }
  return v9;
}
