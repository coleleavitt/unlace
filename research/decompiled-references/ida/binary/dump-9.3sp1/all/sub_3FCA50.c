__int64 __fastcall sub_3FCA50(__int64 a1, __int64 a2, double a3)
{
  _DWORD *v3; // r12
  __int64 v4; // r13
  signed int dtype_size; // eax
  unsigned int v6; // r14d
  int *v7; // r15
  signed int v8; // edi
  signed int v9; // r15d
  __int64 sp_delta; // r13
  __int64 v11; // r14
  unsigned __int8 dtype_by_size; // al
  char *v13; // rbx
  char *v14; // rdi
  int v16; // eax
  int v17; // eax
  int *v18; // r15
  signed int v19; // r14d
  int v20; // r10d
  unsigned int v21; // r15d
  __int64 v22; // r14
  int v23; // eax
  __int64 v24; // rsi
  __m128i v25; // xmm1
  int v26; // eax
  int v27; // eax
  __int64 v28; // r12
  int v29; // eax
  int v30; // eax
  int v31; // [rsp+Ch] [rbp-B4h]
  __int64 v32; // [rsp+10h] [rbp-B0h]
  __int64 v33; // [rsp+10h] [rbp-B0h]
  int v34; // [rsp+24h] [rbp-9Ch]
  int v35; // [rsp+28h] [rbp-98h]
  unsigned __int8 v36; // [rsp+28h] [rbp-98h]
  unsigned __int8 v37; // [rsp+38h] [rbp-88h]
  signed int v38; // [rsp+40h] [rbp-80h]
  __int64 v39; // [rsp+48h] [rbp-78h]
  _DWORD v40[4]; // [rsp+50h] [rbp-70h] BYREF
  _DWORD v41[4]; // [rsp+60h] [rbp-60h] BYREF
  unsigned __int8 v42[24]; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL) + 56LL);
  if ( (*(_BYTE *)(a2 + 16) & 8) != 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCC2Bu, a3);
    BUG();
  }
  v3 = *(_DWORD **)(v39 + 832);
  v4 = (int)v3[97];
  dtype_size = get_dtype_size();
  v6 = *(_DWORD *)(a2 + 8);
  v38 = dtype_size;
  if ( v6 - 22 <= 2 )
  {
    v16 = get_dtype_size();
    sub_1D6310(v39, v6, v16, 8, v4, 8, 0);
    v17 = get_dtype_size();
    sub_1D6310(v39, 0x3Du, v17, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, v4, 0);
  }
  else
  {
    v7 = *(int **)(v39 + 832);
    v8 = v7[20];
    v37 = *(_BYTE *)(a2 + 12);
    get_dtype_by_size();
    sub_3F7E20(v39, 2u, v37, v7[14], v7[15], 8, v8);
    v40[0] = 1;
    v40[2] = 8;
    v40[1] = v38;
    v41[0] = 1;
    v41[2] = 8;
    v41[1] = get_dtype_size();
    if ( (*(_BYTE *)(a2 + 16) & 0x28) != 0 )
    {
      sub_1D6450(v39, *(unsigned int *)(a2 + 8), (unsigned __int8 *)v40, nullptr, (unsigned __int8 *)v41);
    }
    else
    {
      v36 = *(_BYTE *)(a2 + 12);
      v34 = v3[116];
      v18 = *(int **)(v39 + 832);
      v19 = v18[20];
      get_dtype_by_size();
      v20 = v18[15];
      if ( v38 )
      {
        v31 = v18[15];
        v32 = v18[114];
        v26 = get_dtype_size();
        sub_1D6310(v39, 3u, v26, v38, 0x3BEA45E214ADDC55LL, v32, 0);
        v33 = v18[114];
        v27 = get_dtype_size();
        sub_1D6310(v39, 0xCu, v27, v33, v31, v33, 0);
        v20 = v18[114];
      }
      sub_3F7E20(v39, 2u, v36, v18[14], v20, v34, v19);
      if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
      {
        v21 = 18;
        if ( *(_DWORD *)(a2 + 8) == 15 )
          v21 = 17;
        v22 = (int)v3[116];
        v23 = get_dtype_size();
        sub_1D6310(v39, v21, v23, 8, v22, v4, 0);
      }
      v24 = *(unsigned int *)(a2 + 8);
      v25 = _mm_cvtsi32_si128(v3[116]);
      *(_DWORD *)v42 = 1;
      *(_QWORD *)&v42[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v38), v25).m128i_u64[0];
      sub_1D6450(v39, v24, (unsigned __int8 *)v40, v42, (unsigned __int8 *)v41);
      sub_11CDA0((__int64)v42);
    }
    v9 = v3[20];
    get_item_end();
    sub_1CE9E0(*(_QWORD *)(v39 + 8));
    sp_delta = get_sp_delta();
    get_dtype_by_size();
    v11 = (int)v3[15];
    if ( sp_delta )
    {
      v28 = (int)v3[114];
      v29 = get_dtype_size();
      sub_1D6310(v39, 3u, v29, sp_delta, 0x3BEA45E214ADDC55LL, v28, 0);
      v30 = get_dtype_size();
      sub_1D6310(v39, 0xCu, v30, v11, v11, v11, 0);
    }
    else
    {
      v35 = v3[114];
      dtype_by_size = get_dtype_by_size();
      v13 = (char *)sub_3F7E20(v39, 2u, dtype_by_size, (int)v3[14], (int)v11, v35, v9);
      sub_12B6F0((__int64)v13, (__int64)v3, 61, -1, 1);
      v14 = v13 + 64;
      v13 += 32;
      sub_11CA10(v14, v13);
      sub_11CDA0((__int64)v13);
    }
    sub_11CDA0((__int64)v41);
    sub_11CDA0((__int64)v40);
  }
  return 0;
}
