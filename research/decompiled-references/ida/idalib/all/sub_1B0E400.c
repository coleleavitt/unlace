unsigned __int64 __fastcall sub_1B0E400(
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
  __int64 *v15; // rdi
  __int64 v16; // rsi
  __int64 *v17; // rdx
  _QWORD *v18; // rsi
  int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  char v23; // dl
  __int64 v24; // rax
  __int64 v27; // [rsp+10h] [rbp-2B8h]
  char v29; // [rsp+1Ch] [rbp-2ACh]
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
    v14 = sub_1AEB8B0(*a1, 0x62u, a4);
    v31[4] = v32;
    v15 = &a2[a3];
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
    if ( v15 != a2 )
    {
      v16 = *a2;
      if ( *(_DWORD *)(*a2 + 8) == 15 )
      {
LABEL_16:
        v18 = *(_QWORD **)(v16 + 16);
        if ( v18 && (*(_DWORD *)v18 & 0x40000) != 0 )
          goto LABEL_18;
        goto LABEL_8;
      }
      v17 = a2 + 1;
      while ( v15 != v17 )
      {
        v16 = *v17++;
        if ( *(_DWORD *)(v16 + 8) == 15 )
          goto LABEL_16;
      }
    }
    v18 = nullptr;
LABEL_8:
    v19 = sub_1B0B640(0x62u, v18, nullptr, v14, (_QWORD *)*a1, a1[1], a7, a8, a9, (__int64)v30);
    if ( v19 )
    {
      v20 = sub_1AE6050(a1[1]);
      if ( v20 )
      {
        *(_DWORD *)(v20 + 1120) = a5;
        v21 = a1[1];
      }
      v22 = sub_1AE5FF0(v21);
      v23 = 0;
      if ( v22 )
        v23 = *(_BYTE *)(v22 + 1106);
      v29 = v23;
      v27 = *(_QWORD *)(v22 + 1128);
      v24 = sub_168B6C0((__int64)a1);
      v9 = sub_EFBD70(v24, a5, a6, v19, a2, a3, (__int64)a4, (__int64)v30, v27, v29);
      goto LABEL_14;
    }
LABEL_18:
    v9 = 1;
LABEL_14:
    sub_1AF4340(v30);
  }
  return v9;
}
