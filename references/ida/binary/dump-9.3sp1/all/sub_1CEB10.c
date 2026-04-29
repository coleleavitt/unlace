__int64 __fastcall sub_1CEB10(__int64 a1, __int64 *a2)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rcx
  __m128i v7; // xmm0
  __int64 v8; // r14
  unsigned __int64 v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  char func_frame; // al
  __int64 tinfo_size; // r8
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-F0h]
  unsigned int v29; // [rsp+0h] [rbp-F0h]
  __int64 v30; // [rsp+0h] [rbp-F0h]
  _BYTE v31[24]; // [rsp+18h] [rbp-D8h] BYREF
  __int128 v32; // [rsp+30h] [rbp-C0h]
  __int64 v33; // [rsp+40h] [rbp-B0h]
  __int128 v34; // [rsp+48h] [rbp-A8h]
  __int128 v35; // [rsp+58h] [rbp-98h]
  __int64 v36; // [rsp+88h] [rbp-68h]
  int v37; // [rsp+90h] [rbp-60h]
  __int64 v38; // [rsp+98h] [rbp-58h]
  char v39; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v40; // [rsp+B0h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  *(_OWORD *)&v31[8] = 0;
  *(_QWORD *)&v32 = 0;
  get_stkarg_area_info();
  *(_DWORD *)(a1 + 120) = 0;
  v4 = *(_DWORD *)(a1 + 72);
  v5 = *(_QWORD *)(a1 + 136) + *(int *)(a1 + 116);
  if ( v4 <= 0x10 )
    v4 = getinf();
  if ( v4 == 176 || v4 == 256 || !(unsigned __int8)getinf_flag() || (v5 & 7) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 136);
  }
  else
  {
    v5 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v6 = v5 - *(int *)(a1 + 116);
    *(_QWORD *)(a1 + 136) = v6;
  }
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v8 = 0;
  *(_QWORD *)(a1 + 144) = v5 + *(int *)(a1 + 120);
  v9 = _mm_add_epi64(v7, _mm_srli_si128(v7, 8)).m128i_u64[0];
  *(_QWORD *)(a1 + 80) = v6 - v9;
  if ( !a2 || a2[3] == -1 )
    goto LABEL_8;
  func_frame = get_func_frame();
  tinfo_size = 0;
  if ( func_frame )
  {
    tinfo_size = get_tinfo_size();
    if ( tinfo_size < 0 )
    {
      v25 = -9;
LABEL_27:
      v29 = v25;
      clear_tinfo_t();
      return v29;
    }
  }
  v8 = tinfo_size - v9;
  if ( (__int64)(tinfo_size - v9) < 0 )
    v8 = 0;
  if ( *(_DWORD *)(a1 + 116) )
  {
    v28 = tinfo_size;
    v33 = 0;
    v36 = 1;
    v37 = -1;
    v38 = 0;
    v39 = 0;
    memset(v31, 0, sizeof(v31));
    v32 = 0;
    v34 = 0;
    v35 = 0;
    *(_QWORD *)&v31[16] = qvector_reserve((__int64)&v31[16], 0, 17, 1);
    *(_QWORD *)&v32 = 17;
    **(__m128i **)&v31[16] = _mm_load_si128((const __m128i *)&xmmword_424880);
    *(_BYTE *)(*(_QWORD *)&v31[16] + 16LL) = 0;
    if ( (unsigned int)find_tinfo_udt_member() != -1 && 8LL * *(int *)(a1 + 116) == *(_QWORD *)&v31[8] )
    {
      clear_tinfo_t();
      v26 = v28;
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v33);
        v26 = v28;
      }
      if ( *(_QWORD *)&v31[16] )
      {
        v30 = v26;
        *(_QWORD *)&v32 = 0;
        qfree(*(__int64 *)&v31[16]);
        v26 = v30;
      }
      v27 = *(int *)(a1 + 116);
      v8 = v26 - v9 - v27;
      if ( v8 >= 0 )
        goto LABEL_14;
      if ( !(_DWORD)v27 )
      {
        v8 = 0;
        goto LABEL_14;
      }
    }
    else
    {
      clear_tinfo_t();
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v33);
      }
      if ( *(_QWORD *)&v31[16] )
      {
        *(_QWORD *)&v32 = 0;
        qfree(*(__int64 *)&v31[16]);
      }
    }
    v25 = -13;
    goto LABEL_27;
  }
LABEL_14:
  clear_tinfo_t();
  v6 = *(_QWORD *)(a1 + 136);
LABEL_8:
  v10 = *(_QWORD *)(a1 + 1504);
  if ( v6 + v8 + *(int *)(v10 + 68) > 0x100000 )
    return 4294967287LL;
  v11 = *(_QWORD *)(a1 + 1496);
  v12 = *(int *)(a1 + 120);
  v13 = *(_QWORD *)(a1 + 144);
  v14 = *(_DWORD *)(v10 + 80) * *(_DWORD *)(v11 + 656);
  *(_QWORD *)(a1 + 536) = 0;
  v15 = v14 + v13 - v12;
  v16 = v14 - v12;
  *(_QWORD *)(a1 + 128) = v15;
  v17 = *(_QWORD *)(a1 + 1440);
  *(_QWORD *)(a1 + 544) = v17;
  *(_QWORD *)(a1 + 600) = v17 + v6;
  v18 = *(int *)(a1 + 116);
  *(__m128i *)(a1 + 568) = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v6);
  *(_QWORD *)(a1 + 608) = v18;
  v19 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 16LL) & (v17 + v6 + v18);
  *(_QWORD *)(a1 + 640) = v12;
  *(_QWORD *)(a1 + 632) = v19;
  v20 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 16LL) & (v13 + v17);
  *(_QWORD *)(a1 + 672) = v16;
  v21 = v20 + v16;
  *(_QWORD *)(a1 + 664) = v20;
  *(_QWORD *)(a1 + 696) = v21;
  *(_QWORD *)(a1 + 704) = ~v21;
  sub_1AEE70(a1);
  sub_1CEA30((_QWORD *)a1, a2, 0);
  sub_18D7E0((_QWORD *)a1, 0, *(_QWORD *)(a1 + 144) - *(int *)(a1 + 120));
  sub_122B20(
    (__int64 *)(a1 + 256),
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL)
  & (*(_QWORD *)(a1 + 1440) + *(_QWORD *)(a1 + 136) - *(_QWORD *)(a1 + 96)),
    *(_QWORD *)(a1 + 96) + *(int *)(a1 + 116));
  nullsub_115();
  sub_31BBC0(a1, 1, !(*(_BYTE *)(a1 + 757) & 1));
  return 0;
}
