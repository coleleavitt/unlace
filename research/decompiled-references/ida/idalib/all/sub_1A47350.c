__int64 *__fastcall sub_1A47350(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rsi
  __int64 *v14; // rbx
  int v16; // r13d
  __int64 v17; // r12
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rcx
  __int64 *v24; // rsi
  int v25; // eax
  bool v26; // zf
  __m128i v27; // xmm0
  unsigned int v28; // eax
  __int64 v29; // r9
  int v30; // r13d
  __int64 v31; // r14
  __m128i v32; // xmm0
  int v33; // r11d
  __int64 *v34; // r10
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 *v38; // [rsp+8h] [rbp-50h] BYREF
  __m128 v39; // [rsp+10h] [rbp-48h] BYREF
  __m128 v40[3]; // [rsp+20h] [rbp-38h] BYREF

  if ( (*((_BYTE *)a2 + 28) & 0x7F) == 0x18 )
  {
    v7 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
    if ( v7 == sub_A55CC0 )
      v8 = a2[11];
    else
      v8 = v7((__int64)a2);
    v9 = *(_QWORD *)(a1 + 112);
    v10 = *(unsigned int *)(v9 + 12584);
    v11 = *(_QWORD *)(v9 + 12568);
    if ( !(_DWORD)v10 )
    {
      if ( (*(_BYTE *)(v8 + 8) & 6) == 0 )
      {
        v38 = (__int64 *)v8;
        v32 = _mm_loadl_epi64((const __m128i *)&v38);
        v23 = (__int64 *)(v9 + 12568);
        v14 = (__int64 *)v8;
        v39 = (__m128)_mm_unpacklo_epi64(v32, v32);
LABEL_23:
        v40[0].m128_u64[0] = 0;
        LODWORD(v10) = 0;
        goto LABEL_24;
      }
      goto LABEL_20;
    }
    a5 = (unsigned int)(v10 - 1);
    a4 = (unsigned int)a5 & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
    v12 = (__int64 *)(v11 + 16 * a4);
    v13 = *v12;
    if ( v8 != *v12 )
    {
      v18 = 1;
      if ( v13 == -4096 )
        goto LABEL_19;
      while ( 1 )
      {
        a6 = (unsigned int)(v18 + 1);
        a4 = (unsigned int)a5 & (v18 + (_DWORD)a4);
        v12 = (__int64 *)(v11 + 16LL * (unsigned int)a4);
        v19 = *v12;
        if ( v8 == *v12 )
          break;
        v18 = a6;
        if ( v19 == -4096 )
          goto LABEL_19;
      }
    }
    v14 = (__int64 *)v12[1];
    if ( v14 )
      return v14;
LABEL_19:
    if ( (*(_BYTE *)(v8 + 8) & 6) == 0 )
    {
      v38 = (__int64 *)v8;
      v27 = _mm_loadl_epi64((const __m128i *)&v38);
      v23 = (__int64 *)(v9 + 12568);
      v14 = (__int64 *)v8;
      v39 = (__m128)_mm_unpacklo_epi64(v27, v27);
      goto LABEL_30;
    }
LABEL_20:
    if ( sub_1A42350(*(_QWORD *)(a1 + 112), v8, 0, a4, a5, a6) )
    {
      v9 = *(_QWORD *)(a1 + 112);
      v14 = (__int64 *)v8;
      v11 = *(_QWORD *)(v9 + 12568);
      v10 = *(unsigned int *)(v9 + 12584);
    }
    else
    {
      v30 = *(_DWORD *)(a1 + 156);
      v31 = *(_QWORD *)(a1 + 112);
      v14 = (__int64 *)v8;
      while ( (__int64 *)v8 == v14
           || ((unsigned __int16)v30 & *((_WORD *)v14 + 15) & 0x3FFF) == 0
           || !(unsigned __int8)sub_1A423D0(v31, (__int64)v14, v20, v21, v22, a6) )
      {
        v14 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*v14 + 40))(v14);
        LOBYTE(v20) = v8 != (_QWORD)v14;
        if ( v14 == nullptr || v8 == (_QWORD)v14 )
          return nullptr;
      }
      v9 = *(_QWORD *)(a1 + 112);
      v11 = *(_QWORD *)(v9 + 12568);
      v10 = *(unsigned int *)(v9 + 12584);
    }
    v23 = (__int64 *)(v9 + 12568);
    a5 = (unsigned int)(v10 - 1);
    v38 = v14;
    v39 = _mm_loadh_ps((const double *)&v38);
    if ( !(_DWORD)v10 )
      goto LABEL_23;
LABEL_30:
    v28 = a5 & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
    v24 = (__int64 *)(v11 + 16LL * v28);
    v29 = *v24;
    if ( v8 != *v24 )
    {
      v33 = 1;
      v34 = nullptr;
      if ( v29 == -4096 )
      {
LABEL_42:
        v35 = *(_DWORD *)(v9 + 12576);
        a5 = (unsigned int)(3 * v10);
        v40[0].m128_u64[0] = (unsigned __int64)v24;
        v25 = v35 + 1;
        a6 = (unsigned int)(4 * v25);
        if ( (unsigned int)a6 < (unsigned int)a5 )
        {
          v36 = (unsigned int)(v10 - *(_DWORD *)(v9 + 12580) - v25);
          v37 = (unsigned int)v10 >> 3;
          if ( (unsigned int)v36 > (unsigned int)v37 )
            goto LABEL_26;
          v38 = v23;
          sub_A96050((__int64)v23, v10, v11, (__int64)v23, v36, v37);
LABEL_25:
          sub_A6E650(v38, (__int64 *)&v39, v40);
          v8 = v39.m128_u64[0];
          v11 = *(_QWORD *)(v9 + 12568);
          v10 = *(unsigned int *)(v9 + 12584);
          v24 = (__int64 *)v40[0].m128_u64[0];
          v23 = v38;
          v25 = *(_DWORD *)(v9 + 12576) + 1;
LABEL_26:
          v26 = *v24 == -4096;
          *(_DWORD *)(v9 + 12576) = v25;
          if ( !v26 )
            --*(_DWORD *)(v9 + 12580);
          *v24 = v8;
          v24[1] = v39.m128_i64[1];
          sub_1A3E4C0(v40, v24, (_QWORD *)(16 * v10 + v11), (__int64)v23, 1);
          return v14;
        }
LABEL_24:
        v38 = v23;
        sub_A96050((__int64)v23, 2 * v10, v11, (__int64)v23, a5, a6);
        goto LABEL_25;
      }
      while ( 1 )
      {
        if ( v29 == -8192 && !v34 )
          v34 = v24;
        v28 = a5 & (v33 + v28);
        v24 = (__int64 *)(v11 + 16LL * v28);
        v29 = *v24;
        if ( v8 == *v24 )
          break;
        if ( v29 == -4096 )
        {
          if ( v34 )
            v24 = v34;
          goto LABEL_42;
        }
        ++v33;
      }
    }
    sub_1A3E4C0(v40, v24, (_QWORD *)(16 * v10 + v11), (__int64)v23, 1);
    return v14;
  }
  v16 = *(_DWORD *)(a1 + 156);
  v17 = *(_QWORD *)(a1 + 112);
  v14 = a2;
  while ( a2 == v14
       || ((unsigned __int16)v16 & *((_WORD *)v14 + 15) & 0x3FFF) == 0
       || !(unsigned __int8)sub_1A423D0(v17, (__int64)v14, a3, a4, a5, a6) )
  {
    v14 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*v14 + 40))(v14);
    LOBYTE(a3) = a2 != v14;
    if ( v14 == nullptr || a2 == v14 )
      return nullptr;
  }
  return v14;
}
