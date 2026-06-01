void __fastcall sub_11FC6E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __m128i *v14; // rax
  __m128i *v15; // rdx
  _BYTE *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rsi
  __m128i *v21; // rdx
  __m128i *v22; // rcx
  _BYTE *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rsi
  __m128i *v28; // rdx
  __m128i *v29; // rcx
  _BYTE *v30; // rdi
  unsigned __int64 v31; // rdx
  __int64 v32; // rdi
  unsigned __int64 v33; // rbp
  __int64 v34; // rdi
  unsigned __int64 v35; // r12
  __int64 v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // rbp
  __int64 v40; // [rsp+8h] [rbp-120h]
  void *v41[2]; // [rsp+10h] [rbp-118h] BYREF
  _BYTE v42[16]; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v43[4]; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v44; // [rsp+50h] [rbp-D8h]
  _BYTE v45[32]; // [rsp+60h] [rbp-C8h] BYREF
  __int16 v46; // [rsp+80h] [rbp-A8h]
  _BYTE v47[32]; // [rsp+90h] [rbp-98h] BYREF
  __int16 v48; // [rsp+B0h] [rbp-78h]
  void *v49[2]; // [rsp+C0h] [rbp-68h] BYREF
  _BYTE v50[16]; // [rsp+D0h] [rbp-58h] BYREF
  __int16 v51; // [rsp+E0h] [rbp-48h]

  sub_121FCF0(a1, a2, a3, a4);
  v5 = *(unsigned int *)(a1 + 1160);
  *(_QWORD *)a1 = off_2C3A1B0;
  v6 = v5 + 1;
  v7 = *(_QWORD *)(a1 + 8) + 104LL;
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1164) )
  {
    v37 = *(_QWORD *)(a1 + 1152);
    v38 = a1 + 1152;
    if ( v37 > v7 || v7 >= v37 + 32 * v5 )
    {
      sub_A8C1F0(v38, v6);
      v8 = *(_QWORD *)(a1 + 1152);
      v5 = *(unsigned int *)(a1 + 1160);
    }
    else
    {
      v39 = v7 - v37;
      sub_A8C1F0(v38, v6);
      v8 = *(_QWORD *)(a1 + 1152);
      v5 = *(unsigned int *)(a1 + 1160);
      v7 = v8 + v39;
    }
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 1152);
  }
  v9 = (_QWORD *)(v8 + 32 * v5);
  *v9 = v9 + 2;
  sub_11F9CC0(v9, *(_BYTE **)v7, *(_QWORD *)v7 + *(_QWORD *)(v7 + 8));
  v10 = *(_QWORD *)(a1 + 8);
  ++*(_DWORD *)(a1 + 1160);
  v49[0] = v50;
  sub_11F9CC0(v49, *(_BYTE **)(v10 + 104), *(_QWORD *)(v10 + 104) + *(_QWORD *)(v10 + 112));
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v49[1] <= 6 )
    std::__throw_length_error("basic_string::append");
  sub_9EE560(v49, "/../lib", 7u);
  v11 = *(unsigned int *)(a1 + 632);
  v12 = v11 + 1;
  if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
  {
    v35 = *(_QWORD *)(a1 + 624);
    v36 = a1 + 624;
    if ( v35 > (unsigned __int64)v49 || (unsigned __int64)v49 >= v35 + 32 * v11 )
    {
      sub_A8C1F0(v36, v12);
      v13 = *(_QWORD *)(a1 + 624);
      v11 = *(unsigned int *)(a1 + 632);
      v14 = (__m128i *)v49;
    }
    else
    {
      sub_A8C1F0(v36, v12);
      v13 = *(_QWORD *)(a1 + 624);
      v11 = *(unsigned int *)(a1 + 632);
      v14 = (__m128i *)((char *)v49 + v13 - v35);
    }
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 624);
    v14 = (__m128i *)v49;
  }
  v15 = (__m128i *)(v13 + 32 * v11);
  v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
  if ( (__m128i *)v14->m128i_i64[0] == &v14[1] )
  {
    v15[1] = _mm_loadu_si128(v14 + 1);
  }
  else
  {
    v15->m128i_i64[0] = v14->m128i_i64[0];
    v15[1].m128i_i64[0] = v14[1].m128i_i64[0];
  }
  v15->m128i_i64[1] = v14->m128i_i64[1];
  v14->m128i_i64[0] = (__int64)v14[1].m128i_i64;
  v14->m128i_i64[1] = 0;
  v14[1].m128i_i8[0] = 0;
  v16 = v49[0];
  ++*(_DWORD *)(a1 + 632);
  if ( v16 != v50 )
    operator delete(v16);
  v43[0] = "/usr/lib";
  v17 = *(_QWORD *)(a1 + 8);
  v44 = 259;
  v51 = 257;
  v48 = 257;
  v46 = 257;
  sub_1130220(
    v41,
    *(_BYTE **)(v17 + 488),
    *(_QWORD *)(v17 + 496),
    (__int64)v43,
    (__int64)v45,
    (__int64)v47,
    (__int64)v49);
  v18 = *(unsigned int *)(a1 + 632);
  v19 = v18 + 1;
  if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
  {
    v31 = *(_QWORD *)(a1 + 624);
    v32 = a1 + 624;
    if ( v31 > (unsigned __int64)v41 || (v40 = *(_QWORD *)(a1 + 624), (unsigned __int64)v41 >= v31 + 32 * v18) )
    {
      sub_A8C1F0(v32, v19);
      v20 = *(_QWORD *)(a1 + 624);
      v18 = *(unsigned int *)(a1 + 632);
      v21 = (__m128i *)v41;
    }
    else
    {
      sub_A8C1F0(v32, v19);
      v20 = *(_QWORD *)(a1 + 624);
      v18 = *(unsigned int *)(a1 + 632);
      v21 = (__m128i *)((char *)v41 + v20 - v40);
    }
  }
  else
  {
    v20 = *(_QWORD *)(a1 + 624);
    v21 = (__m128i *)v41;
  }
  v22 = (__m128i *)(v20 + 32 * v18);
  v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
  if ( (__m128i *)v21->m128i_i64[0] == &v21[1] )
  {
    v22[1] = _mm_loadu_si128(v21 + 1);
  }
  else
  {
    v22->m128i_i64[0] = v21->m128i_i64[0];
    v22[1].m128i_i64[0] = v21[1].m128i_i64[0];
  }
  v22->m128i_i64[1] = v21->m128i_i64[1];
  v21->m128i_i64[0] = (__int64)v21[1].m128i_i64;
  v21->m128i_i64[1] = 0;
  v21[1].m128i_i8[0] = 0;
  v23 = v41[0];
  ++*(_DWORD *)(a1 + 632);
  if ( v23 != v42 )
    operator delete(v23);
  v51 = 257;
  v48 = 257;
  v24 = *(_QWORD *)(a1 + 8);
  v46 = 257;
  v43[0] = "/usr/lib/gcc80";
  v44 = 259;
  sub_1130220(
    v41,
    *(_BYTE **)(v24 + 488),
    *(_QWORD *)(v24 + 496),
    (__int64)v43,
    (__int64)v45,
    (__int64)v47,
    (__int64)v49);
  v25 = *(unsigned int *)(a1 + 632);
  v26 = v25 + 1;
  if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
  {
    v33 = *(_QWORD *)(a1 + 624);
    v34 = a1 + 624;
    if ( v33 > (unsigned __int64)v41 || (unsigned __int64)v41 >= v33 + 32 * v25 )
    {
      sub_A8C1F0(v34, v26);
      v27 = *(_QWORD *)(a1 + 624);
      v25 = *(unsigned int *)(a1 + 632);
      v28 = (__m128i *)v41;
    }
    else
    {
      sub_A8C1F0(v34, v26);
      v27 = *(_QWORD *)(a1 + 624);
      v25 = *(unsigned int *)(a1 + 632);
      v28 = (__m128i *)((char *)v41 + v27 - v33);
    }
  }
  else
  {
    v27 = *(_QWORD *)(a1 + 624);
    v28 = (__m128i *)v41;
  }
  v29 = (__m128i *)(v27 + 32 * v25);
  v29->m128i_i64[0] = (__int64)v29[1].m128i_i64;
  if ( (__m128i *)v28->m128i_i64[0] == &v28[1] )
  {
    v29[1] = _mm_loadu_si128(v28 + 1);
  }
  else
  {
    v29->m128i_i64[0] = v28->m128i_i64[0];
    v29[1].m128i_i64[0] = v28[1].m128i_i64[0];
  }
  v29->m128i_i64[1] = v28->m128i_i64[1];
  v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
  v28->m128i_i64[1] = 0;
  v28[1].m128i_i8[0] = 0;
  v30 = v41[0];
  ++*(_DWORD *)(a1 + 632);
  if ( v30 != v42 )
    operator delete(v30);
}
