__int64 __fastcall sub_1B3D4F0(
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
  __int64 *v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rsi
  int v19; // r8d
  __int64 *v20; // rdx
  __int64 v21; // rdi
  _QWORD *v22; // rdx
  _QWORD *v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // [rsp+0h] [rbp-2B8h]
  int v27; // [rsp+Ch] [rbp-2ACh]
  _QWORD v28[21]; // [rsp+10h] [rbp-2A8h] BYREF
  _QWORD v29[6]; // [rsp+B8h] [rbp-200h] BYREF
  _QWORD v30[6]; // [rsp+E8h] [rbp-1D0h] BYREF
  _QWORD v31[6]; // [rsp+118h] [rbp-1A0h] BYREF
  _QWORD v32[6]; // [rsp+148h] [rbp-170h] BYREF
  _QWORD v33[6]; // [rsp+178h] [rbp-140h] BYREF
  _QWORD v34[6]; // [rsp+1A8h] [rbp-110h] BYREF
  _QWORD v35[6]; // [rsp+1D8h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+208h] [rbp-B0h] BYREF

  if ( !a4 )
    return 1;
  if ( (unsigned __int8)sub_1B3CC40(*a1, a2, a3, 0x6Cu, a1[1], a7) )
    return 1;
  sub_1AEB8B0(*a1, 0x6Cu, a4);
  v16 = &a2[a3];
  v29[4] = v30;
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
  v35[5] = 0x400000000LL;
  v17 = a2;
  v35[4] = &v36;
  if ( v16 == a2 )
  {
    v22 = nullptr;
    v23 = nullptr;
  }
  else
  {
    v18 = *a2;
    v19 = *(_DWORD *)(*a2 + 8);
    if ( v19 == 77 )
    {
      v21 = *a2;
LABEL_25:
      v22 = *(_QWORD **)(v21 + 16);
    }
    else
    {
      v20 = a2 + 1;
      while ( v16 != v20 )
      {
        v21 = *v20++;
        if ( *(_DWORD *)(v21 + 8) == 77 )
          goto LABEL_25;
      }
      v22 = nullptr;
    }
    if ( v19 == 15 )
    {
LABEL_21:
      v23 = *(_QWORD **)(v18 + 16);
      if ( v23 && (*(_DWORD *)v23 & 0x40000) != 0 )
        goto LABEL_23;
    }
    else
    {
      while ( ++v17 != v16 )
      {
        v18 = *v17;
        if ( *(_DWORD *)(*v17 + 8) == 15 )
          goto LABEL_21;
      }
      v23 = nullptr;
    }
    if ( v22 && (*(_DWORD *)v22 & 0x40000) != 0 )
    {
LABEL_23:
      v25 = 1;
      goto LABEL_20;
    }
  }
  v27 = sub_1B0B640(0x6Cu, v23, v22, (__int64)a4, (_QWORD *)*a1, a1[1], a7, a8, a9, (__int64)v28);
  if ( !v27 )
    goto LABEL_23;
  v24 = sub_168B6C0((__int64)a1);
  v25 = sub_EFD120(v24, a5, a6, v27, a2, a3, (__int64)a4, (__int64)v28);
LABEL_20:
  v26 = v25;
  sub_1AF4340(v28);
  return v26;
}
