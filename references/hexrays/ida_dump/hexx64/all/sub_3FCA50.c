__int64 __fastcall sub_3FCA50(__int64 a1, __int64 a2, double a3)
{
  _DWORD *v4; // r12
  __int64 v5; // r13
  signed int dtype_size; // eax
  unsigned int v7; // r14d
  int *v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rdi
  signed int v11; // r15d
  __int64 item_end; // r13
  _QWORD *v13; // rax
  __int64 sp_delta; // r13
  unsigned __int8 v15; // al
  __int64 v16; // r14
  int v17; // eax
  unsigned __int8 v18; // al
  char *v19; // rbx
  char *v20; // rdi
  int v22; // eax
  int v23; // eax
  int *v24; // r15
  signed int v25; // r14d
  unsigned __int8 dtype_by_size; // al
  int v27; // r10d
  unsigned int v28; // r15d
  __int64 v29; // r14
  int v30; // eax
  int v31; // esi
  __m128i v32; // xmm1
  int v33; // eax
  int v34; // eax
  unsigned int v35; // ebx
  __int64 v36; // r12
  int v37; // eax
  int v38; // eax
  int v39; // [rsp+Ch] [rbp-B4h]
  __int64 v40; // [rsp+10h] [rbp-B0h]
  __int64 v41; // [rsp+10h] [rbp-B0h]
  unsigned int v42; // [rsp+20h] [rbp-A0h]
  int v43; // [rsp+24h] [rbp-9Ch]
  int v44; // [rsp+28h] [rbp-98h]
  unsigned __int8 v45; // [rsp+28h] [rbp-98h]
  unsigned __int8 v46; // [rsp+38h] [rbp-88h]
  signed int v47; // [rsp+40h] [rbp-80h]
  __int64 *v48; // [rsp+48h] [rbp-78h]
  _DWORD v49[4]; // [rsp+50h] [rbp-70h] BYREF
  _DWORD v50[4]; // [rsp+60h] [rbp-60h] BYREF
  unsigned __int8 v51[24]; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v52; // [rsp+88h] [rbp-38h]

  v52 = __readfsqword(0x28u);
  v48 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL) + 56LL);
  if ( (*(_BYTE *)(a2 + 16) & 8) != 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCC2Bu, a2, a3);
    BUG();
  }
  v4 = (_DWORD *)v48[104];
  v5 = (int)v4[97];
  dtype_size = get_dtype_size(*(unsigned __int8 *)(a2 + 12));
  v7 = *(_DWORD *)(a2 + 8);
  v47 = dtype_size;
  if ( v7 - 22 <= 2 )
  {
    v22 = get_dtype_size(*(unsigned __int8 *)(a2 + 13));
    sub_1D6310((__int64)v48, v7, v22, 8, v5, 8, 0);
    v23 = get_dtype_size(0);
    sub_1D6310((__int64)v48, 0x3Du, v23, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, v5, 0);
  }
  else
  {
    v8 = (int *)v48[104];
    v9 = v8[20];
    v46 = *(_BYTE *)(a2 + 12);
    get_dtype_by_size(v9);
    sub_3F7E20((__int64)v48, 2u, v46, v8[14], v8[15], 8, v9);
    v10 = *(unsigned __int8 *)(a2 + 13);
    v49[0] = 1;
    v49[2] = 8;
    v49[1] = v47;
    v50[0] = 1;
    v50[2] = 8;
    v50[1] = get_dtype_size(v10);
    if ( (*(_BYTE *)(a2 + 16) & 0x28) != 0 )
    {
      sub_1D6450((__int64)v48, *(_DWORD *)(a2 + 8), (unsigned __int8 *)v49, nullptr, (unsigned __int8 *)v50);
    }
    else
    {
      v45 = *(_BYTE *)(a2 + 12);
      v43 = v4[116];
      v24 = (int *)v48[104];
      v25 = v24[20];
      dtype_by_size = get_dtype_by_size(v25);
      v27 = v24[15];
      if ( v47 )
      {
        v39 = v24[15];
        v42 = dtype_by_size;
        v40 = v24[114];
        v33 = get_dtype_size(dtype_by_size);
        sub_1D6310((__int64)v48, 3u, v33, v47, 0x3BEA45E214ADDC55LL, v40, 0);
        v41 = v24[114];
        v34 = get_dtype_size(v42);
        sub_1D6310((__int64)v48, 0xCu, v34, v41, v39, v41, 0);
        v27 = v24[114];
      }
      sub_3F7E20((__int64)v48, 2u, v45, v24[14], v27, v43, v25);
      if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
      {
        v28 = 18;
        if ( *(_DWORD *)(a2 + 8) == 15 )
          v28 = 17;
        v29 = (int)v4[116];
        v30 = get_dtype_size(*(unsigned __int8 *)(a2 + 13));
        sub_1D6310((__int64)v48, v28, v30, 8, v29, v5, 0);
      }
      v31 = *(_DWORD *)(a2 + 8);
      v32 = _mm_cvtsi32_si128(v4[116]);
      *(_DWORD *)v51 = 1;
      *(_QWORD *)&v51[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v47), v32).m128i_u64[0];
      sub_1D6450((__int64)v48, v31, (unsigned __int8 *)v49, v51, (unsigned __int8 *)v50);
      sub_11CDA0((__int64)v51);
    }
    v11 = v4[20];
    item_end = get_item_end(v48[5]);
    v13 = sub_1CE9E0(v48[1]);
    sp_delta = get_sp_delta(v13, item_end);
    v15 = get_dtype_by_size(v11);
    v16 = (int)v4[15];
    if ( sp_delta )
    {
      v35 = v15;
      v36 = (int)v4[114];
      v37 = get_dtype_size(v15);
      sub_1D6310((__int64)v48, 3u, v37, sp_delta, 0x3BEA45E214ADDC55LL, v36, 0);
      v38 = get_dtype_size(v35);
      sub_1D6310((__int64)v48, 0xCu, v38, v16, v16, v16, 0);
    }
    else
    {
      v44 = v4[114];
      v17 = 2 * v47;
      if ( (*(_BYTE *)(a2 + 16) & 0x28) != 0 )
        v17 = v47;
      v18 = get_dtype_by_size(v17);
      v19 = (char *)sub_3F7E20((__int64)v48, 2u, v18, (int)v4[14], (int)v16, v44, v11);
      sub_12B6F0((__int64)v19, (__int64)v4, 61, -1, 1);
      v20 = v19 + 64;
      v19 += 32;
      sub_11CA10(v20, v19);
      sub_11CDA0((__int64)v19);
    }
    sub_11CDA0((__int64)v50);
    sub_11CDA0((__int64)v49);
  }
  return 0;
}
