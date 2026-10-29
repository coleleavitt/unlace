void __fastcall sub_1404830(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // ebx
  char v5; // al
  __int64 v6; // rbx
  __int64 v7; // r12
  __m128i v8; // xmm1
  __int64 v9; // rax
  __m128i v10; // xmm0
  int *v11; // rsi
  __int64 v12; // rax
  char v13; // al
  __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rsi
  int v20; // ecx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  __m128i v24; // [rsp+0h] [rbp-98h] BYREF
  __int64 v25; // [rsp+18h] [rbp-80h] BYREF
  __m128i v26; // [rsp+20h] [rbp-78h] BYREF
  __int64 v27; // [rsp+30h] [rbp-68h]

  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  if ( v3 )
  {
    if ( (*(_BYTE *)(v3 + 904) & 4) != 0 )
    {
      if ( !sub_FEF250(v3) )
      {
        v19 = *(_QWORD *)(a1 + 8);
        v20 = 1081;
        goto LABEL_22;
      }
      v3 = *(_QWORD *)(a1 + 48);
      v5 = *(_BYTE *)(v3 + 905);
      if ( (v5 & 2) == 0 )
        goto LABEL_4;
    }
    else
    {
      v5 = *(_BYTE *)(v3 + 905);
      if ( (v5 & 2) == 0 )
      {
LABEL_4:
        if ( (*(_BYTE *)(a2 + 128) & 2) == 0 )
        {
          *(_BYTE *)(v3 + 905) = v5 | 2;
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 912LL) = v4;
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 905LL) = (4 * (*(_BYTE *)(a2 + 128) & 1))
                                                   | *(_BYTE *)(*(_QWORD *)(a1 + 48) + 905LL) & 0xFB;
          goto LABEL_6;
        }
        v19 = *(_QWORD *)(a1 + 8);
        v20 = 1080;
LABEL_22:
        sub_FC70B0((__int64)&v26, v19, v4, v20);
        sub_AEA040((__int64)&v26);
        return;
      }
    }
    sub_FC70B0((__int64)&v26, *(_QWORD *)(a1 + 8), v4, 1082);
    sub_AEA040((__int64)&v26);
    v12 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v12 + 912) )
    {
      sub_FC70B0((__int64)&v26, *(_QWORD *)(a1 + 8), *(_DWORD *)(v12 + 912), 1271);
      sub_AEA040((__int64)&v26);
    }
    return;
  }
  v13 = *(_BYTE *)(a2 + 128);
  if ( (v13 & 2) == 0 )
  {
    v19 = *(_QWORD *)(a1 + 8);
    v20 = 1093;
    goto LABEL_22;
  }
  if ( (v13 & 1) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 8);
    v20 = 1078;
    goto LABEL_22;
  }
  v14 = (__int64 *)(*(_QWORD *)(a1 + 16) + 496LL);
  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
  if ( (unsigned __int8)sub_13F8140(v14, &v25, &v26) )
  {
    v18 = (_QWORD *)(v26.m128i_i64[0] + 8);
  }
  else
  {
    v21 = sub_14047A0((__int64)v14, &v25, v26.m128i_i64[0], v15, v16, v17);
    v22 = v25;
    *((_BYTE *)v21 + 8) &= ~1u;
    *v21 = v22;
    v23 = v21 + 5;
    *((_BYTE *)v21 + 12) &= 0xF0u;
    v18 = v21 + 1;
    *((_DWORD *)v18 + 2) = 0;
    v18[2] = v23;
    v18[3] = 0x200000000LL;
  }
  *(_BYTE *)v18 |= 1u;
  *((_BYTE *)v18 + 4) = *(_BYTE *)(a2 + 100);
  *((_DWORD *)v18 + 2) = *(_DWORD *)(a1 + 24);
LABEL_6:
  v6 = *(_QWORD *)(a2 + 104);
  v7 = *(_QWORD *)(a2 + 112);
  if ( v6 != v7 )
  {
    v24.m128i_i64[0] = a1;
    v8 = _mm_loadl_epi64(&v24);
    v27 = a1;
    v26 = _mm_unpacklo_epi64(v8, v8);
    v9 = *(unsigned __int8 *)(v6 + 136);
    v24 = v26;
    if ( (_BYTE)v9 == 0xFF )
LABEL_27:
      abort();
    while ( 1 )
    {
      v11 = (int *)v6;
      v6 += 144;
      ((void (__fastcall *)(__int64, int *))funcs_1404933[v9])((__int64)&v26, v11);
      if ( v7 == v6 )
        break;
      v10 = _mm_load_si128(&v24);
      v27 = a1;
      v26 = v10;
      v9 = *(unsigned __int8 *)(v6 + 136);
      if ( (_BYTE)v9 == 0xFF )
        goto LABEL_27;
    }
  }
}
