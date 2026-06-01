unsigned __int64 __fastcall sub_1B411C0(
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
  unsigned __int64 v9; // rbx
  __int64 v15; // rax
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 *v18; // r10
  _QWORD *v19; // rsi
  int v20; // eax
  __int64 v22; // rdi
  __int64 v23; // rax
  int v25; // [rsp+Ch] [rbp-2BCh]
  __int64 v26; // [rsp+18h] [rbp-2B0h] BYREF
  __int64 v27[21]; // [rsp+20h] [rbp-2A8h] BYREF
  _QWORD v28[6]; // [rsp+C8h] [rbp-200h] BYREF
  _QWORD v29[6]; // [rsp+F8h] [rbp-1D0h] BYREF
  _QWORD v30[6]; // [rsp+128h] [rbp-1A0h] BYREF
  _QWORD v31[6]; // [rsp+158h] [rbp-170h] BYREF
  _QWORD v32[6]; // [rsp+188h] [rbp-140h] BYREF
  _QWORD v33[6]; // [rsp+1B8h] [rbp-110h] BYREF
  _QWORD v34[6]; // [rsp+1E8h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+218h] [rbp-B0h] BYREF

  v9 = 1;
  if ( a4 )
  {
    v15 = sub_1AEB8B0(*a1, 0x37u, a4);
    v16 = &a2[a3];
    v28[4] = v29;
    v29[4] = v30;
    v30[4] = v31;
    v31[4] = v32;
    v32[4] = v33;
    v27[19] = (__int64)v28;
    v33[4] = v34;
    v27[20] = 0x400000000LL;
    v28[5] = 0x400000000LL;
    v29[5] = 0x400000000LL;
    v30[5] = 0x400000000LL;
    v31[5] = 0x400000000LL;
    v32[5] = 0x400000000LL;
    v33[5] = 0x400000000LL;
    v34[4] = &v35;
    v34[5] = 0x400000000LL;
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
      while ( v16 != v18 )
      {
        v17 = *v18++;
        if ( *(_DWORD *)(v17 + 8) == 15 )
          goto LABEL_12;
      }
    }
    v19 = nullptr;
LABEL_8:
    v20 = sub_1B0B640(0x37u, v19, nullptr, v15, (_QWORD *)*a1, a1[1], *(double *)a7.m128_u64, a8, a9, (__int64)v27);
    if ( v20 )
    {
      v25 = v20;
      if ( !(unsigned __int8)sub_1B3EC00(*a1, a2, a3, v27, a1[1], a7, a8) )
      {
        v22 = *a1;
        v26 = 0x4600000028LL;
        if ( !(unsigned __int8)sub_1B28C40(v22, (unsigned int **)a2, a3, &v26)
          && !sub_1B107F0(*a1, (unsigned int **)a2, a3)
          && !(unsigned __int8)sub_1B10540(*a1, a2, a3, *(double *)a7.m128_u64) )
        {
          v23 = sub_168B6C0((__int64)a1);
          v9 = sub_EF9AE0(v23, a5, a6, v25, a2, a3, (__int64)a4, (__int64)v27);
          goto LABEL_10;
        }
      }
    }
LABEL_9:
    v9 = 1;
LABEL_10:
    sub_1AF4340(v27);
  }
  return v9;
}
