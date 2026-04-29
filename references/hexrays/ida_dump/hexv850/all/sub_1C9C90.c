__int64 __fastcall sub_1C9C90(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // eax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rcx
  __m128i v8; // xmm0
  __int64 v9; // r14
  unsigned __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  char func_frame; // al
  __int64 tinfo_size; // r8
  int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // [rsp+0h] [rbp-F0h]
  unsigned int v31; // [rsp+0h] [rbp-F0h]
  __int64 v32; // [rsp+0h] [rbp-F0h]
  __int64 v33; // [rsp+10h] [rbp-E0h] BYREF
  _BYTE v34[24]; // [rsp+18h] [rbp-D8h] BYREF
  __int128 v35; // [rsp+30h] [rbp-C0h]
  __int64 v36; // [rsp+40h] [rbp-B0h]
  __int128 v37; // [rsp+48h] [rbp-A8h]
  _OWORD v38[3]; // [rsp+58h] [rbp-98h] BYREF
  __int64 v39; // [rsp+88h] [rbp-68h]
  int v40; // [rsp+90h] [rbp-60h]
  __int64 v41; // [rsp+98h] [rbp-58h]
  char v42; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v43; // [rsp+B0h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v4 = *(unsigned int *)(a1 + 72);
  *(_OWORD *)&v34[8] = 0;
  *(_QWORD *)v34 = 32;
  *(_QWORD *)&v35 = 0;
  get_stkarg_area_info(v34, v4);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)&v34[8] + *(_DWORD *)&v34[16];
  v5 = *(_DWORD *)(a1 + 72);
  v6 = *(_QWORD *)(a1 + 136) + *(int *)(a1 + 116);
  if ( v5 <= 0x10 )
    v5 = getinf(99);
  if ( v5 == 176 || v5 == 256 || !(unsigned __int8)getinf_flag(67, 4) || (v6 & 7) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 136);
  }
  else
  {
    v6 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v7 = v6 - *(int *)(a1 + 116);
    *(_QWORD *)(a1 + 136) = v7;
  }
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v9 = 0;
  *(_QWORD *)(a1 + 144) = v6 + *(int *)(a1 + 120);
  v10 = _mm_add_epi64(v8, _mm_srli_si128(v8, 8)).m128i_u64[0];
  *(_QWORD *)(a1 + 80) = v7 - v10;
  if ( !a2 || a2[3] == -1 )
    goto LABEL_8;
  v33 = 0;
  func_frame = get_func_frame(&v33, a2);
  tinfo_size = 0;
  if ( func_frame )
  {
    tinfo_size = get_tinfo_size(0, v33, 0);
    if ( tinfo_size < 0 )
    {
      v26 = -9;
LABEL_27:
      v31 = v26;
      clear_tinfo_t(&v33);
      return v31;
    }
  }
  v9 = tinfo_size - v10;
  if ( (__int64)(tinfo_size - v10) < 0 )
    v9 = 0;
  if ( *(_DWORD *)(a1 + 116) )
  {
    v30 = tinfo_size;
    v36 = 0;
    v39 = 1;
    v40 = -1;
    v41 = 0;
    v42 = 0;
    memset(v34, 0, sizeof(v34));
    v35 = 0;
    v37 = 0;
    v38[0] = 0;
    *(_QWORD *)&v34[16] = qvector_reserve(&v34[16], 0, 17, 1);
    *(_QWORD *)&v35 = 17;
    v27 = v33;
    **(__m128i **)&v34[16] = _mm_load_si128((const __m128i *)&xmmword_400200);
    *(_BYTE *)(*(_QWORD *)&v34[16] + 16LL) = 0;
    if ( (unsigned int)find_tinfo_udt_member(v34, v27, 3) != -1 && 8LL * *(int *)(a1 + 116) == *(_QWORD *)&v34[8] )
    {
      clear_tinfo_t(v38);
      v28 = v30;
      if ( v36 )
      {
        *(_QWORD *)&v37 = 0;
        qfree(v36);
        v28 = v30;
      }
      if ( *(_QWORD *)&v34[16] )
      {
        v32 = v28;
        *(_QWORD *)&v35 = 0;
        qfree(*(_QWORD *)&v34[16]);
        v28 = v32;
      }
      v29 = *(int *)(a1 + 116);
      v9 = v28 - v10 - v29;
      if ( v9 >= 0 )
        goto LABEL_14;
      if ( !(_DWORD)v29 )
      {
        v9 = 0;
        goto LABEL_14;
      }
    }
    else
    {
      clear_tinfo_t(v38);
      if ( v36 )
      {
        *(_QWORD *)&v37 = 0;
        qfree(v36);
      }
      if ( *(_QWORD *)&v34[16] )
      {
        *(_QWORD *)&v35 = 0;
        qfree(*(_QWORD *)&v34[16]);
      }
    }
    v26 = -13;
    goto LABEL_27;
  }
LABEL_14:
  clear_tinfo_t(&v33);
  v7 = *(_QWORD *)(a1 + 136);
LABEL_8:
  v11 = *(_QWORD *)(a1 + 1504);
  if ( v7 + v9 + *(int *)(v11 + 68) > 0x100000 )
    return 4294967287LL;
  v12 = *(_QWORD *)(a1 + 1496);
  v13 = *(int *)(a1 + 120);
  v14 = *(_QWORD *)(a1 + 144);
  v15 = *(_DWORD *)(v11 + 80) * *(_DWORD *)(v12 + 656);
  *(_QWORD *)(a1 + 536) = 0;
  v16 = v15 + v14 - v13;
  v17 = v15 - v13;
  *(_QWORD *)(a1 + 128) = v16;
  v18 = *(_QWORD *)(a1 + 1440);
  *(_QWORD *)(a1 + 544) = v18;
  *(_QWORD *)(a1 + 600) = v18 + v7;
  v19 = *(int *)(a1 + 116);
  *(__m128i *)(a1 + 568) = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v7);
  *(_QWORD *)(a1 + 608) = v19;
  v20 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 16LL) & (v18 + v7 + v19);
  *(_QWORD *)(a1 + 640) = v13;
  *(_QWORD *)(a1 + 632) = v20;
  v21 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 16LL) & (v14 + v18);
  *(_QWORD *)(a1 + 672) = v17;
  v22 = v21 + v17;
  *(_QWORD *)(a1 + 664) = v21;
  *(_QWORD *)(a1 + 696) = v22;
  *(_QWORD *)(a1 + 704) = ~v22;
  sub_1AA170(a1);
  sub_1C9BB0((_QWORD *)a1, a2, 0);
  sub_188C20((_QWORD *)a1, 0, *(_QWORD *)(a1 + 144) - *(int *)(a1 + 120));
  sub_11DF60(
    (__int64 *)(a1 + 256),
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL)
  & (*(_QWORD *)(a1 + 1440) + *(_QWORD *)(a1 + 136) - *(_QWORD *)(a1 + 96)),
    *(_QWORD *)(a1 + 96) + *(int *)(a1 + 116));
  nullsub_115();
  sub_316300(a1, 1, !(*(_BYTE *)(a1 + 757) & 1));
  return 0;
}
