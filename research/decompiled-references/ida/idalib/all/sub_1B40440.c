unsigned __int64 __fastcall sub_1B40440(
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
  __int64 v14; // rax
  __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // r10
  _QWORD *v18; // rsi
  int v19; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  int v24; // [rsp+Ch] [rbp-2ACh]
  __int64 v25[21]; // [rsp+10h] [rbp-2A8h] BYREF
  _QWORD v26[6]; // [rsp+B8h] [rbp-200h] BYREF
  _QWORD v27[6]; // [rsp+E8h] [rbp-1D0h] BYREF
  _QWORD v28[6]; // [rsp+118h] [rbp-1A0h] BYREF
  _QWORD v29[6]; // [rsp+148h] [rbp-170h] BYREF
  _QWORD v30[6]; // [rsp+178h] [rbp-140h] BYREF
  _QWORD v31[6]; // [rsp+1A8h] [rbp-110h] BYREF
  _QWORD v32[6]; // [rsp+1D8h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+208h] [rbp-B0h] BYREF

  v9 = 1;
  if ( a4 )
  {
    v14 = sub_1AEB8B0(*a1, 0x64u, a4);
    v26[4] = v27;
    v15 = &a2[a3];
    v27[4] = v28;
    v28[4] = v29;
    v29[4] = v30;
    v30[4] = v31;
    v25[19] = (__int64)v26;
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
    if ( v15 != a2 )
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
      while ( v15 != v17 )
      {
        v16 = *v17++;
        if ( *(_DWORD *)(v16 + 8) == 15 )
          goto LABEL_12;
      }
    }
    v18 = nullptr;
LABEL_8:
    v19 = sub_1B0B640(0x64u, v18, nullptr, v14, (_QWORD *)*a1, a1[1], *(double *)a7.m128_u64, a8, a9, (__int64)v25);
    if ( v19 )
    {
      v24 = v19;
      if ( !(unsigned __int8)sub_1B3EC00(*a1, a2, a3, v25, a1[1], a7, a8)
        && !(unsigned __int8)sub_1B10540(*a1, a2, a3, *(double *)a7.m128_u64) )
      {
        v21 = sub_1AE6050(a1[1]);
        if ( v21 )
          *(_DWORD *)(v21 + 1120) = a5;
        v22 = sub_168B6C0((__int64)a1);
        v9 = sub_EFB5D0(v22, a5, a6, v24, a2, a3, (__int64)a4, (__int64)v25);
        goto LABEL_10;
      }
    }
LABEL_9:
    v9 = 1;
LABEL_10:
    sub_1AF4340(v25);
  }
  return v9;
}
