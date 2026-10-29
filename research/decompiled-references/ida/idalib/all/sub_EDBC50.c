char __fastcall sub_EDBC50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int64 *v11; // rbp
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rdi
  int v16; // eax
  int v17; // esi
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __m128i si128; // xmm0
  __m128 v24; // [rsp+0h] [rbp-58h] BYREF
  __int64 v25; // [rsp+10h] [rbp-48h] BYREF
  __int64 v26; // [rsp+18h] [rbp-40h] BYREF
  __int64 *v27; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v28; // [rsp+28h] [rbp-30h] BYREF

  v26 = a2;
  v8 = *(_QWORD *)(a2 + 104);
  v25 = a3;
  sub_7052B0((__int64 *)(v8 + 96), v8, a3, a4, a5, a6);
  v9 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v9 + 1) & 2) == 0 )
    return v9;
  if ( !(unsigned __int8)sub_ED8480((__int64 *)(a1 + 24), &v25, &v27) )
  {
    v14 = *(unsigned int *)(a1 + 40);
    v15 = v27;
    v16 = *(_DWORD *)(a1 + 32) + 1;
    v17 = 2 * v14;
    v18 = (unsigned int)(4 * v16);
    v19 = (unsigned int)(3 * v14);
    v28 = v27;
    if ( (unsigned int)v18 < (unsigned int)v19 )
    {
      v19 = (unsigned int)(v14 - *(_DWORD *)(a1 + 36) - v16);
      if ( (unsigned int)v19 > (unsigned int)v14 >> 3 )
      {
LABEL_15:
        *(_DWORD *)(a1 + 32) = v16;
        if ( *v15 != 0x7FFFFFFFFFFFFFFFLL )
          --*(_DWORD *)(a1 + 36);
        v20 = v25;
        v15[1] = 0;
        v11 = (unsigned __int64 *)(v15 + 1);
        *v15 = v20;
        goto LABEL_5;
      }
      v17 = v14;
    }
    sub_EDB9D0(a1 + 24, v17, v14, v19, v18, v10);
    sub_ED8480((__int64 *)(a1 + 24), &v25, &v28);
    v15 = v28;
    v16 = *(_DWORD *)(a1 + 32) + 1;
    goto LABEL_15;
  }
  v11 = (unsigned __int64 *)(v27 + 1);
LABEL_5:
  LOBYTE(v9) = sub_ED8120(v11, &v26);
  if ( !(_BYTE)v9 )
  {
    v12 = *v11 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v12 )
    {
      if ( (*v11 & 4) != 0 )
      {
        v13 = *(unsigned int *)(v12 + 8);
        if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(v12 + 12) )
        {
          sub_2237220(*v11 & 0xFFFFFFFFFFFFFFF8LL, v12 + 16, v13 + 1, 8);
          v13 = *(unsigned int *)(v12 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v12 + 8 * v13) = a2;
        ++*(_DWORD *)(v12 + 8);
      }
      else
      {
        v24.m128_u64[0] = a2;
        v24 = _mm_loadh_ps((const double *)v24.m128_u64);
        v21 = operator new(0x30u);
        si128 = _mm_load_si128((const __m128i *)&v24);
        *(_QWORD *)(v21 + 8) = 0x400000002LL;
        *(_QWORD *)v21 = v21 + 16;
        *(__m128i *)(v21 + 16) = si128;
        *v11 = v21 | 4;
      }
    }
    else
    {
      *v11 = a2 & 0xFFFFFFFFFFFFFFFBLL;
    }
    LOBYTE(v9) = v25;
    if ( v25 > *(_QWORD *)(a1 + 48) )
      *(_QWORD *)(a1 + 48) = v25;
  }
  return v9;
}
