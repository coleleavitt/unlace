void __fastcall sub_1232070(__int64 a1, __int64 a2, const __m128i *a3, void *a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __m128i *v11; // rdx
  __m128i *v12; // rcx
  _BYTE *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rsi
  __m128i *v18; // rdx
  __m128i *v19; // rcx
  _BYTE *v20; // rdi
  _BYTE *v21; // r13
  signed __int64 v22; // r12
  _QWORD *v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r12
  __m128i *v26; // rcx
  unsigned __int64 v27; // rsi
  __m128i *v28; // rax
  _QWORD *v29; // rdi
  unsigned __int64 v30; // r12
  __int64 v31; // rdi
  unsigned __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // [rsp+8h] [rbp-120h]
  void *v36[2]; // [rsp+10h] [rbp-118h] BYREF
  _BYTE v37[16]; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v38[4]; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v39; // [rsp+50h] [rbp-D8h]
  _BYTE v40[32]; // [rsp+60h] [rbp-C8h] BYREF
  __int16 v41; // [rsp+80h] [rbp-A8h]
  _BYTE v42[32]; // [rsp+90h] [rbp-98h] BYREF
  __int16 v43; // [rsp+B0h] [rbp-78h]
  void *v44; // [rsp+C0h] [rbp-68h] BYREF
  signed __int64 v45; // [rsp+C8h] [rbp-60h]
  _QWORD v46[2]; // [rsp+D0h] [rbp-58h] BYREF
  __int16 v47; // [rsp+E0h] [rbp-48h]

  sub_121FCF0(a1, a2, a3, (__int64)a4);
  *(_QWORD *)a1 = off_2C3B6F0;
  sub_122CEF0(a1 + 2384, (__int64)a3, a4);
  v39 = 259;
  v47 = 257;
  v43 = 257;
  v38[0] = "/boot/system/lib";
  v7 = *(_QWORD *)(a1 + 8);
  v41 = 257;
  sub_1130220(
    v36,
    *(_BYTE **)(v7 + 488),
    *(_QWORD *)(v7 + 496),
    (__int64)v38,
    (__int64)v40,
    (__int64)v42,
    (__int64)&v44);
  v8 = *(unsigned int *)(a1 + 632);
  v9 = v8 + 1;
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
  {
    v32 = *(_QWORD *)(a1 + 624);
    if ( v32 > (unsigned __int64)v36 || (unsigned __int64)v36 >= v32 + 32 * v8 )
    {
      sub_A8C1F0(a1 + 624, v9);
      v10 = *(_QWORD *)(a1 + 624);
      v8 = *(unsigned int *)(a1 + 632);
      v11 = (__m128i *)v36;
    }
    else
    {
      v35 = *(_QWORD *)(a1 + 624);
      sub_A8C1F0(a1 + 624, v9);
      v10 = *(_QWORD *)(a1 + 624);
      v8 = *(unsigned int *)(a1 + 632);
      v11 = (__m128i *)((char *)v36 + v10 - v35);
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 624);
    v11 = (__m128i *)v36;
  }
  v12 = (__m128i *)(v10 + 32 * v8);
  v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
  if ( (__m128i *)v11->m128i_i64[0] == &v11[1] )
  {
    v12[1] = _mm_loadu_si128(v11 + 1);
  }
  else
  {
    v12->m128i_i64[0] = v11->m128i_i64[0];
    v12[1].m128i_i64[0] = v11[1].m128i_i64[0];
  }
  v12->m128i_i64[1] = v11->m128i_i64[1];
  v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
  v11->m128i_i64[1] = 0;
  v11[1].m128i_i8[0] = 0;
  v13 = v36[0];
  ++*(_DWORD *)(a1 + 632);
  if ( v13 != v37 )
    operator delete(v13);
  v47 = 257;
  v43 = 257;
  v14 = *(_QWORD *)(a1 + 8);
  v41 = 257;
  v38[0] = "/boot/system/develop/lib";
  v39 = 259;
  sub_1130220(
    v36,
    *(_BYTE **)(v14 + 488),
    *(_QWORD *)(v14 + 496),
    (__int64)v38,
    (__int64)v40,
    (__int64)v42,
    (__int64)&v44);
  v15 = *(unsigned int *)(a1 + 632);
  v16 = v15 + 1;
  if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
  {
    v30 = *(_QWORD *)(a1 + 624);
    v31 = a1 + 624;
    if ( v30 > (unsigned __int64)v36 || (unsigned __int64)v36 >= v30 + 32 * v15 )
    {
      sub_A8C1F0(v31, v16);
      v17 = *(_QWORD *)(a1 + 624);
      v15 = *(unsigned int *)(a1 + 632);
      v18 = (__m128i *)v36;
    }
    else
    {
      sub_A8C1F0(v31, v16);
      v17 = *(_QWORD *)(a1 + 624);
      v15 = *(unsigned int *)(a1 + 632);
      v18 = (__m128i *)((char *)v36 + v17 - v30);
    }
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 624);
    v18 = (__m128i *)v36;
  }
  v19 = (__m128i *)(v17 + 32 * v15);
  v19->m128i_i64[0] = (__int64)v19[1].m128i_i64;
  if ( (__m128i *)v18->m128i_i64[0] == &v18[1] )
  {
    v19[1] = _mm_loadu_si128(v18 + 1);
  }
  else
  {
    v19->m128i_i64[0] = v18->m128i_i64[0];
    v19[1].m128i_i64[0] = v18[1].m128i_i64[0];
  }
  v19->m128i_i64[1] = v18->m128i_i64[1];
  v18->m128i_i64[0] = (__int64)v18[1].m128i_i64;
  v18->m128i_i64[1] = 0;
  v18[1].m128i_i8[0] = 0;
  v20 = v36[0];
  ++*(_DWORD *)(a1 + 632);
  if ( v20 != v37 )
    operator delete(v20);
  if ( *(_BYTE *)(a1 + 2384) )
  {
    v21 = *(_BYTE **)(a1 + 2456);
    if ( !v21 )
    {
      LOBYTE(v46[0]) = 0;
      v44 = v46;
      v45 = 0;
      goto LABEL_20;
    }
    v22 = *(_QWORD *)(a1 + 2464);
    v23 = v46;
    v44 = v46;
    if ( (unsigned __int64)v22 > 0xF )
    {
      if ( v22 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v23 = (_QWORD *)operator new(v22 + 1);
      v46[0] = v22;
      v44 = v23;
    }
    else
    {
      if ( v22 == 1 )
      {
        LOBYTE(v46[0]) = *v21;
LABEL_18:
        v45 = v22;
        *((_BYTE *)v23 + v22) = 0;
LABEL_20:
        v24 = *(unsigned int *)(a1 + 632);
        v25 = *(_QWORD *)(a1 + 624);
        v26 = (__m128i *)&v44;
        v27 = v24 + 1;
        v28 = (__m128i *)(v25 + 32 * v24);
        if ( v27 > *(unsigned int *)(a1 + 636) )
        {
          v33 = a1 + 624;
          if ( v25 > (unsigned __int64)&v44 || v28 <= (__m128i *)&v44 )
          {
            sub_A8C1F0(v33, v27);
            v26 = (__m128i *)&v44;
            v28 = (__m128i *)(*(_QWORD *)(a1 + 624) + 32LL * *(unsigned int *)(a1 + 632));
          }
          else
          {
            sub_A8C1F0(v33, v27);
            v34 = *(_QWORD *)(a1 + 624);
            v26 = (__m128i *)((char *)&v44 + v34 - v25);
            v28 = (__m128i *)(v34 + 32LL * *(unsigned int *)(a1 + 632));
          }
        }
        v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
        if ( (__m128i *)v26->m128i_i64[0] == &v26[1] )
        {
          v28[1] = _mm_loadu_si128(v26 + 1);
        }
        else
        {
          v28->m128i_i64[0] = v26->m128i_i64[0];
          v28[1].m128i_i64[0] = v26[1].m128i_i64[0];
        }
        v28->m128i_i64[1] = v26->m128i_i64[1];
        v26->m128i_i64[0] = (__int64)v26[1].m128i_i64;
        v26->m128i_i64[1] = 0;
        v26[1].m128i_i8[0] = 0;
        v29 = v44;
        ++*(_DWORD *)(a1 + 632);
        if ( v29 != v46 )
          operator delete(v29);
        return;
      }
      if ( !v22 )
        goto LABEL_18;
    }
    memcpy(v23, v21, v22);
    v23 = v44;
    goto LABEL_18;
  }
}
