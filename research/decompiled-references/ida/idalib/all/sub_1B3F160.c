unsigned __int64 __fastcall sub_1B3F160(
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
  unsigned __int64 v9; // rbp
  __int64 v14; // rax
  __int64 *v15; // rsi
  __int64 *v16; // r10
  __int64 v17; // rdi
  int v18; // ecx
  __int64 *v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rsi
  int v23; // r14d
  __int64 v24; // rax
  char v25; // dl
  __int64 v26; // rax
  __int64 v29; // [rsp+10h] [rbp-2B8h]
  char v31; // [rsp+1Ch] [rbp-2ACh]
  __int64 v32[21]; // [rsp+20h] [rbp-2A8h] BYREF
  _QWORD v33[6]; // [rsp+C8h] [rbp-200h] BYREF
  _QWORD v34[6]; // [rsp+F8h] [rbp-1D0h] BYREF
  _QWORD v35[6]; // [rsp+128h] [rbp-1A0h] BYREF
  _QWORD v36[6]; // [rsp+158h] [rbp-170h] BYREF
  _QWORD v37[6]; // [rsp+188h] [rbp-140h] BYREF
  _QWORD v38[6]; // [rsp+1B8h] [rbp-110h] BYREF
  _QWORD v39[6]; // [rsp+1E8h] [rbp-E0h] BYREF
  __int64 v40; // [rsp+218h] [rbp-B0h] BYREF

  v9 = 1;
  if ( a4 )
  {
    v14 = sub_1AEB8B0(*a1, 0x4Du, a4);
    v15 = &a2[a3];
    v16 = a2;
    v33[4] = v34;
    v34[4] = v35;
    v35[4] = v36;
    v36[4] = v37;
    v37[4] = v38;
    v32[19] = (__int64)v33;
    v38[4] = v39;
    v32[20] = 0x400000000LL;
    v33[5] = 0x400000000LL;
    v34[5] = 0x400000000LL;
    v35[5] = 0x400000000LL;
    v36[5] = 0x400000000LL;
    v37[5] = 0x400000000LL;
    v38[5] = 0x400000000LL;
    v39[4] = &v40;
    v39[5] = 0x400000000LL;
    if ( v15 == a2 )
    {
      v21 = nullptr;
      v22 = nullptr;
    }
    else
    {
      v17 = *a2;
      v18 = *(_DWORD *)(*a2 + 8);
      if ( v18 == 77 )
      {
        v20 = *a2;
LABEL_26:
        v21 = *(_QWORD **)(v20 + 16);
      }
      else
      {
        v19 = a2 + 1;
        while ( v15 != v19 )
        {
          v20 = *v19++;
          if ( *(_DWORD *)(v20 + 8) == 77 )
            goto LABEL_26;
        }
        v21 = nullptr;
      }
      if ( v18 == 15 )
      {
LABEL_20:
        v22 = *(_QWORD **)(v17 + 16);
        if ( v22 && (*(_DWORD *)v22 & 0x40000) != 0 )
          goto LABEL_22;
      }
      else
      {
        while ( ++v16 != v15 )
        {
          v17 = *v16;
          if ( *(_DWORD *)(*v16 + 8) == 15 )
            goto LABEL_20;
        }
        v22 = nullptr;
      }
      if ( v21 && (*(_DWORD *)v21 & 0x40000) != 0 )
      {
LABEL_22:
        v9 = 1;
LABEL_23:
        sub_1AF4340(v32);
        return v9;
      }
    }
    v23 = sub_1B0B640(0x4Du, v22, v21, v14, (_QWORD *)*a1, a1[1], *(double *)a7.m128_u64, a8, a9, (__int64)v32);
    if ( v23 && !(unsigned __int8)sub_1B3EC00(*a1, a2, a3, v32, a1[1], a7, a8) )
    {
      v24 = sub_1AE5FF0(a1[1]);
      v25 = 0;
      if ( v24 )
        v25 = *(_BYTE *)(v24 + 1106);
      v31 = v25;
      v29 = *(_QWORD *)(v24 + 1128);
      v26 = sub_168B6C0((__int64)a1);
      v9 = sub_EF7BA0(v26, a5, a6, v23, a2, a3, (__int64)a4, (__int64)v32, v29, v31);
      goto LABEL_23;
    }
    goto LABEL_22;
  }
  return v9;
}
