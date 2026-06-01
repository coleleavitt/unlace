unsigned __int64 __fastcall sub_1B3EC70(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __m128 a7,
        __m128 a8,
        __int64 a9)
{
  unsigned __int64 v9; // rbp
  __int64 *v12; // rcx
  __int64 *v15; // rax
  __int64 v16; // rsi
  int v17; // r8d
  __int64 *v18; // rdx
  __int64 v19; // rdi
  _QWORD *v20; // rdx
  _QWORD *v21; // rsi
  int v22; // r14d
  __int64 v24; // rax
  char v25; // dl
  __int64 v26; // rax
  __int64 v28; // [rsp+10h] [rbp-2B8h]
  char v30; // [rsp+1Ch] [rbp-2ACh]
  __int64 v31[21]; // [rsp+20h] [rbp-2A8h] BYREF
  _QWORD v32[6]; // [rsp+C8h] [rbp-200h] BYREF
  _QWORD v33[6]; // [rsp+F8h] [rbp-1D0h] BYREF
  _QWORD v34[6]; // [rsp+128h] [rbp-1A0h] BYREF
  _QWORD v35[6]; // [rsp+158h] [rbp-170h] BYREF
  _QWORD v36[6]; // [rsp+188h] [rbp-140h] BYREF
  _QWORD v37[6]; // [rsp+1B8h] [rbp-110h] BYREF
  _QWORD v38[6]; // [rsp+1E8h] [rbp-E0h] BYREF
  __int64 v39; // [rsp+218h] [rbp-B0h] BYREF

  v9 = 1;
  if ( a4 )
  {
    v12 = &a2[a3];
    v32[4] = v33;
    v33[4] = v34;
    v34[4] = v35;
    v35[4] = v36;
    v36[4] = v37;
    v31[19] = (__int64)v32;
    v37[4] = v38;
    v31[20] = 0x400000000LL;
    v32[5] = 0x400000000LL;
    v33[5] = 0x400000000LL;
    v34[5] = 0x400000000LL;
    v35[5] = 0x400000000LL;
    v36[5] = 0x400000000LL;
    v37[5] = 0x400000000LL;
    v38[5] = 0x400000000LL;
    v15 = a2;
    v38[4] = &v39;
    if ( v12 == a2 )
    {
      v20 = nullptr;
      v21 = nullptr;
    }
    else
    {
      v16 = *a2;
      v17 = *(_DWORD *)(v16 + 8);
      if ( v17 == 77 )
      {
        v19 = v16;
LABEL_9:
        v20 = *(_QWORD **)(v19 + 16);
      }
      else
      {
        v18 = a2 + 1;
        while ( v12 != v18 )
        {
          v19 = *v18++;
          if ( *(_DWORD *)(v19 + 8) == 77 )
            goto LABEL_9;
        }
        v20 = nullptr;
      }
      if ( v17 == 15 )
      {
LABEL_22:
        v21 = *(_QWORD **)(v16 + 16);
        if ( v21 && (*(_DWORD *)v21 & 0x40000) != 0 )
          goto LABEL_19;
      }
      else
      {
        while ( ++v15 != v12 )
        {
          v16 = *v15;
          if ( *(_DWORD *)(*v15 + 8) == 15 )
            goto LABEL_22;
        }
        v21 = nullptr;
      }
      if ( v20 && (*(_DWORD *)v20 & 0x40000) != 0 )
      {
LABEL_19:
        v9 = 1;
LABEL_20:
        sub_1AF4340(v31);
        return v9;
      }
    }
    v22 = sub_1B0B640(0x25u, v21, v20, a4, (_QWORD *)*a1, a1[1], *(double *)a7.m128_u64, a8, a9, (__int64)v31);
    if ( v22 && !(unsigned __int8)sub_1B3EC00(*a1, a2, a3, v31, a1[1], a7, a8) )
    {
      v24 = sub_1AE5FF0(a1[1]);
      v25 = 0;
      if ( v24 )
        v25 = *(_BYTE *)(v24 + 1106);
      v30 = v25;
      v28 = *(_QWORD *)(v24 + 1128);
      v26 = sub_168B6C0((__int64)a1);
      v9 = sub_EF6230(v26, a5, a6, v22, a2, a3, a4, (__int64)v31, v28, v30);
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  return v9;
}
