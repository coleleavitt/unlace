unsigned __int64 __fastcall sub_1B0DE10(
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
  __int64 v15; // rdx
  __int64 *v16; // rax
  _QWORD *v17; // rsi
  int v18; // eax
  __int64 v20; // rax
  int v22; // [rsp+Ch] [rbp-2ACh]
  _QWORD v23[21]; // [rsp+10h] [rbp-2A8h] BYREF
  _QWORD v24[6]; // [rsp+B8h] [rbp-200h] BYREF
  _QWORD v25[6]; // [rsp+E8h] [rbp-1D0h] BYREF
  _QWORD v26[6]; // [rsp+118h] [rbp-1A0h] BYREF
  _QWORD v27[6]; // [rsp+148h] [rbp-170h] BYREF
  _QWORD v28[6]; // [rsp+178h] [rbp-140h] BYREF
  _QWORD v29[6]; // [rsp+1A8h] [rbp-110h] BYREF
  _QWORD v30[6]; // [rsp+1D8h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+208h] [rbp-B0h] BYREF

  v9 = 1;
  if ( a4 )
  {
    v13 = &a2[a3];
    v24[4] = v25;
    v25[4] = v26;
    v26[4] = v27;
    v27[4] = v28;
    v28[4] = v29;
    v23[19] = v24;
    v29[4] = v30;
    v23[20] = 0x400000000LL;
    v24[5] = 0x400000000LL;
    v25[5] = 0x400000000LL;
    v26[5] = 0x400000000LL;
    v27[5] = 0x400000000LL;
    v28[5] = 0x400000000LL;
    v29[5] = 0x400000000LL;
    v30[4] = &v31;
    v30[5] = 0x400000000LL;
    if ( v13 != a2 )
    {
      v15 = *a2;
      if ( *(_DWORD *)(*a2 + 8) == 15 )
      {
LABEL_12:
        v17 = *(_QWORD **)(v15 + 16);
        if ( v17 && (*(_DWORD *)v17 & 0x40000) != 0 )
          goto LABEL_9;
        goto LABEL_8;
      }
      v16 = a2 + 1;
      while ( v13 != v16 )
      {
        v15 = *v16++;
        if ( *(_DWORD *)(v15 + 8) == 15 )
          goto LABEL_12;
      }
    }
    v17 = nullptr;
LABEL_8:
    v18 = sub_1B0B640(0x12u, v17, nullptr, a4, (_QWORD *)*a1, a1[1], a7, a8, a9, (__int64)v23);
    if ( v18 )
    {
      v22 = v18;
      sub_15F2480(*a1);
      v20 = sub_168B6C0((__int64)a1);
      v9 = sub_EF9DC0(v20, a5, a6, v22, a2, a3, a4, (__int64)v23);
      goto LABEL_10;
    }
LABEL_9:
    v9 = 1;
LABEL_10:
    sub_1AF4340(v23);
  }
  return v9;
}
