__int64 __fastcall sub_3F1EF0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r12
  int v3; // r13d
  unsigned int dtype_size; // eax
  int v5; // r14d
  int *v6; // r15
  signed int v7; // edi
  int v8; // r9d
  signed int v9; // r15d
  __int64 sp_delta; // r13
  int v11; // r14d
  unsigned __int8 dtype_by_size; // al
  char *v13; // rbx
  char *v14; // rdi
  int v16; // eax
  int v17; // eax
  int *v18; // r15
  signed int v19; // r14d
  int v20; // r10d
  int v21; // r9d
  int v22; // r15d
  int v23; // r14d
  int v24; // eax
  int v25; // esi
  __m128i v26; // xmm1
  int v27; // eax
  int v28; // eax
  int v29; // r12d
  int v30; // eax
  int v31; // eax
  int v32; // [rsp-10h] [rbp-D0h]
  int v33; // [rsp+Ch] [rbp-B4h]
  int v34; // [rsp+10h] [rbp-B0h]
  int v35; // [rsp+10h] [rbp-B0h]
  int v36; // [rsp+24h] [rbp-9Ch]
  int v37; // [rsp+28h] [rbp-98h]
  unsigned __int8 v38; // [rsp+28h] [rbp-98h]
  unsigned __int8 v39; // [rsp+38h] [rbp-88h]
  unsigned int v40; // [rsp+40h] [rbp-80h]
  __int64 v41; // [rsp+48h] [rbp-78h]
  _DWORD v42[4]; // [rsp+50h] [rbp-70h] BYREF
  _DWORD v43[4]; // [rsp+60h] [rbp-60h] BYREF
  _DWORD v44[6]; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v45; // [rsp+88h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 776LL) + 56LL);
  if ( (*(_BYTE *)(a2 + 16) & 8) != 0 )
  {
    if ( !under_debugger )
      sub_37EA20(52267);
    BUG();
  }
  v2 = *(_DWORD **)(v41 + 832);
  v3 = v2[97];
  dtype_size = get_dtype_size();
  v5 = *(_DWORD *)(a2 + 8);
  v40 = dtype_size;
  if ( (unsigned int)(v5 - 22) <= 2 )
  {
    v16 = get_dtype_size();
    sub_1D3790(v41, v5, v16, 8, v3, 8, 0);
    v17 = get_dtype_size();
    sub_1D3790(v41, 61, v17, 346938453, 346938453, v3, 0);
  }
  else
  {
    v6 = *(int **)(v41 + 832);
    v7 = v6[20];
    v39 = *(_BYTE *)(a2 + 12);
    get_dtype_by_size();
    sub_3ED260(v41, 2u, v39, v6[14], v6[15], 8, v7);
    v42[0] = 1;
    v42[2] = 8;
    v42[1] = v40;
    v43[0] = 1;
    v43[2] = 8;
    v43[1] = get_dtype_size();
    if ( (*(_BYTE *)(a2 + 16) & 0x28) != 0 )
    {
      sub_1D38D0(v41, *(_DWORD *)(a2 + 8), (unsigned int)v42, 0, (unsigned int)v43, v8);
    }
    else
    {
      v38 = *(_BYTE *)(a2 + 12);
      v36 = v2[116];
      v18 = *(int **)(v41 + 832);
      v19 = v18[20];
      get_dtype_by_size();
      v20 = v18[15];
      if ( v40 )
      {
        v33 = v18[15];
        v34 = v18[114];
        v27 = get_dtype_size();
        sub_1D3790(v41, 3, v27, v40, 346938453, v34, 0);
        v35 = v18[114];
        v28 = get_dtype_size();
        sub_1D3790(v41, 12, v28, v35, v33, v35, 0);
        v20 = v18[114];
      }
      sub_3ED260(v41, 2u, v38, v18[14], v20, v36, v19);
      if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
      {
        v22 = 18;
        if ( *(_DWORD *)(a2 + 8) == 15 )
          v22 = 17;
        v23 = v2[116];
        v24 = get_dtype_size();
        sub_1D3790(v41, v22, v24, 8, v23, v3, 0);
        v21 = v32;
      }
      v25 = *(_DWORD *)(a2 + 8);
      v26 = _mm_cvtsi32_si128(v2[116]);
      v44[0] = 1;
      *(_QWORD *)&v44[1] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v40), v26).m128i_u64[0];
      sub_1D38D0(v41, v25, (unsigned int)v42, (unsigned int)v44, (unsigned int)v43, v21);
      sub_11A960((__int64)v44);
    }
    v9 = v2[20];
    get_item_end();
    sub_1CBEA0(*(_QWORD *)(v41 + 8));
    sp_delta = get_sp_delta();
    get_dtype_by_size();
    v11 = v2[15];
    if ( sp_delta )
    {
      v29 = v2[114];
      v30 = get_dtype_size();
      sub_1D3790(v41, 3, v30, sp_delta, 346938453, v29, 0);
      v31 = get_dtype_size();
      sub_1D3790(v41, 12, v31, v11, v11, v11, 0);
    }
    else
    {
      v37 = v2[114];
      dtype_by_size = get_dtype_by_size();
      v13 = (char *)sub_3ED260(v41, 2u, dtype_by_size, v2[14], v11, v37, v9);
      sub_1291D0((__int64)v13, (__int64)v2, 61, -1, 1);
      v14 = v13 + 64;
      v13 += 32;
      sub_11A5D0(v14, v13);
      sub_11A960((__int64)v13);
    }
    sub_11A960((__int64)v43);
    sub_11A960((__int64)v42);
  }
  return 0;
}
