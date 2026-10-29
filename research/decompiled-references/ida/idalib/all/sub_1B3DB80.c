__int64 __fastcall sub_1B3DB80(
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
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 *v18; // r10
  _QWORD *v19; // rsi
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+0h] [rbp-2B8h]
  int v24; // [rsp+Ch] [rbp-2ACh]
  _QWORD v25[21]; // [rsp+10h] [rbp-2A8h] BYREF
  _QWORD v26[6]; // [rsp+B8h] [rbp-200h] BYREF
  _QWORD v27[6]; // [rsp+E8h] [rbp-1D0h] BYREF
  _QWORD v28[6]; // [rsp+118h] [rbp-1A0h] BYREF
  _QWORD v29[6]; // [rsp+148h] [rbp-170h] BYREF
  _QWORD v30[6]; // [rsp+178h] [rbp-140h] BYREF
  _QWORD v31[6]; // [rsp+1A8h] [rbp-110h] BYREF
  _QWORD v32[6]; // [rsp+1D8h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+208h] [rbp-B0h] BYREF

  if ( !a4 )
    return 1;
  if ( !(unsigned __int8)sub_1B3CC40(*a1, a2, a3, 0x70u, a1[1], a7) )
  {
    v15 = sub_1AEB8B0(*a1, 0x70u, a4);
    v16 = &a2[a3];
    v26[4] = v27;
    v27[4] = v28;
    v28[4] = v29;
    v29[4] = v30;
    v30[4] = v31;
    v25[19] = v26;
    v31[4] = v32;
    v25[20] = 0x400000000LL;
    v26[5] = 0x400000000LL;
    v27[5] = 0x400000000LL;
    v28[5] = 0x400000000LL;
    v29[5] = 0x400000000LL;
    v30[5] = 0x400000000LL;
    v31[5] = 0x400000000LL;
    v32[4] = &v33;
    v32[5] = 0x400000000LL;
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
    v20 = sub_1B0B640(0x70u, v19, nullptr, v15, (_QWORD *)*a1, a1[1], a7, a8, a9, (__int64)v25);
    if ( v20 )
    {
      v24 = v20;
      v22 = sub_168B6C0((__int64)a1);
      v21 = sub_EFE0B0(v22, a5, a6, v24, a2, a3, (__int64)a4, (__int64)v25);
      goto LABEL_14;
    }
LABEL_13:
    v21 = 1;
LABEL_14:
    v23 = v21;
    sub_1AF4340(v25);
    return v23;
  }
  return 1;
}
