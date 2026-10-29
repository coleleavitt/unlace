unsigned __int64 __fastcall sub_1B0DFE0(
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
  __int64 v14; // rax
  __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // r10
  _QWORD *v18; // rsi
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rax
  int v24; // [rsp+10h] [rbp-2B8h]
  __int64 v25; // [rsp+10h] [rbp-2B8h]
  int v26; // [rsp+18h] [rbp-2B0h]
  char v27; // [rsp+1Ch] [rbp-2ACh]
  _QWORD v28[21]; // [rsp+20h] [rbp-2A8h] BYREF
  _QWORD v29[6]; // [rsp+C8h] [rbp-200h] BYREF
  _QWORD v30[6]; // [rsp+F8h] [rbp-1D0h] BYREF
  _QWORD v31[6]; // [rsp+128h] [rbp-1A0h] BYREF
  _QWORD v32[6]; // [rsp+158h] [rbp-170h] BYREF
  _QWORD v33[6]; // [rsp+188h] [rbp-140h] BYREF
  _QWORD v34[6]; // [rsp+1B8h] [rbp-110h] BYREF
  _QWORD v35[6]; // [rsp+1E8h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+218h] [rbp-B0h] BYREF

  v9 = 1;
  if ( a4 )
  {
    v14 = sub_1AEB8B0(*a1, 0x15u, a4);
    v29[4] = v30;
    v15 = &a2[a3];
    v30[4] = v31;
    v31[4] = v32;
    v32[4] = v33;
    v33[4] = v34;
    v28[19] = v29;
    v34[4] = v35;
    v28[20] = 0x400000000LL;
    v29[5] = 0x400000000LL;
    v30[5] = 0x400000000LL;
    v31[5] = 0x400000000LL;
    v32[5] = 0x400000000LL;
    v33[5] = 0x400000000LL;
    v34[5] = 0x400000000LL;
    v35[4] = &v36;
    v35[5] = 0x400000000LL;
    if ( v15 != a2 )
    {
      v16 = *a2;
      if ( *(_DWORD *)(*a2 + 8) == 15 )
      {
LABEL_14:
        v18 = *(_QWORD **)(v16 + 16);
        if ( v18 && (*(_DWORD *)v18 & 0x40000) != 0 )
          goto LABEL_16;
        goto LABEL_8;
      }
      v17 = a2 + 1;
      while ( v15 != v17 )
      {
        v16 = *v17++;
        if ( *(_DWORD *)(v16 + 8) == 15 )
          goto LABEL_14;
      }
    }
    v18 = nullptr;
LABEL_8:
    v24 = sub_1B0B640(0x15u, v18, nullptr, v14, (_QWORD *)*a1, a1[1], a7, a8, a9, (__int64)v28);
    if ( v24 )
    {
      v19 = sub_1AE5FF0(a1[1]);
      v20 = 0;
      if ( v19 )
        v20 = *(_BYTE *)(v19 + 1106);
      v27 = v20;
      v26 = v24;
      v25 = *(_QWORD *)(v19 + 1128);
      v21 = sub_168B6C0((__int64)a1);
      v9 = sub_EFA1D0(v21, a5, a6, v26, a2, a3, (__int64)a4, (__int64)v28, v25, v27);
      goto LABEL_12;
    }
LABEL_16:
    v9 = 1;
LABEL_12:
    sub_1AF4340(v28);
  }
  return v9;
}
