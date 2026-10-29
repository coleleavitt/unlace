__int64 __fastcall sub_1B416B0(
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
  int v21; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+0h] [rbp-2B8h]
  int v25; // [rsp+8h] [rbp-2B0h]
  __int64 v26[21]; // [rsp+10h] [rbp-2A8h] BYREF
  _QWORD v27[6]; // [rsp+B8h] [rbp-200h] BYREF
  _QWORD v28[6]; // [rsp+E8h] [rbp-1D0h] BYREF
  _QWORD v29[6]; // [rsp+118h] [rbp-1A0h] BYREF
  _QWORD v30[6]; // [rsp+148h] [rbp-170h] BYREF
  _QWORD v31[6]; // [rsp+178h] [rbp-140h] BYREF
  _QWORD v32[6]; // [rsp+1A8h] [rbp-110h] BYREF
  _QWORD v33[6]; // [rsp+1D8h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+208h] [rbp-B0h] BYREF

  if ( !a4 )
    return 1;
  if ( (unsigned __int8)sub_1B0A9B0(a1, (char *)a2, a3, 1u, 0x11C8u, *(double *)a7.m128_u64)
    && (unsigned __int8)sub_1B0ABC0(a1, (char *)a2, a3, 1u, 0x11C8u, *(double *)a7.m128_u64) )
  {
    v16 = sub_1AEB8B0(*a1, 0x55u, a4);
    v17 = &a2[a3];
    v27[4] = v28;
    v28[4] = v29;
    v29[4] = v30;
    v30[4] = v31;
    v31[4] = v32;
    v26[19] = (__int64)v27;
    v32[4] = v33;
    v26[20] = 0x400000000LL;
    v27[5] = 0x400000000LL;
    v28[5] = 0x400000000LL;
    v29[5] = 0x400000000LL;
    v30[5] = 0x400000000LL;
    v31[5] = 0x400000000LL;
    v32[5] = 0x400000000LL;
    v33[4] = &v34;
    v33[5] = 0x400000000LL;
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
    v21 = sub_1B0B640(0x55u, v20, nullptr, v16, (_QWORD *)*a1, a1[1], *(double *)a7.m128_u64, a8, a9, (__int64)v26);
    if ( v21 )
    {
      v25 = v21;
      if ( !(unsigned __int8)sub_1B3EC00(*a1, a2, a3, v26, a1[1], a7, a8)
        && !(unsigned __int8)sub_1B10540(*a1, a2, a3, *(double *)a7.m128_u64) )
      {
        v23 = sub_168B6C0((__int64)a1);
        v22 = sub_EFCAB0(v23, a5, a6, v25, a2, a3, (__int64)a4, (__int64)v26);
        goto LABEL_15;
      }
    }
LABEL_14:
    v22 = 1;
LABEL_15:
    v24 = v22;
    sub_1AF4340(v26);
    return v24;
  }
  return 1;
}
