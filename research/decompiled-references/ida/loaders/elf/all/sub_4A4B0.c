__int64 __fastcall sub_4A4B0(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __m128i v11; // xmm0
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // r13d
  bool v16; // zf
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // rax
  __m128i v20; // [rsp+0h] [rbp-60h] BYREF
  char *v21; // [rsp+10h] [rbp-50h] BYREF
  __int128 v22; // [rsp+18h] [rbp-48h]
  unsigned __int64 v23; // [rsp+28h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 120);
  if ( !v5 )
    goto LABEL_16;
  v6 = *(unsigned int *)(a2 + 164);
  if ( (_DWORD)v6 )
  {
    *a3 = 0;
    v20.m128i_i64[0] = v6;
    goto LABEL_4;
  }
  if ( !*a3 )
    return 0;
  v9 = 4;
  if ( *(_BYTE *)(a2 + 617) )
    v9 = 8;
  v10 = *(_QWORD *)(a2 + 112);
  v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v9);
  v12 = a4;
  if ( *(_QWORD *)(a2 + 128) < (unsigned __int64)(v5 + 1) )
  {
    v20 = v11;
    v19 = qvector_reserve(a2 + 112, v10, v5 + 1, 64);
    v5 = *(_QWORD *)(a2 + 120);
    v11 = _mm_load_si128(&v20);
    *(_QWORD *)(a2 + 112) = v19;
    v10 = v19;
  }
  v13 = (v5 << 6) + v10;
  *(_QWORD *)v13 = 0x100000000LL;
  *(_QWORD *)(v13 + 24) = -1;
  *(_QWORD *)(v13 + 32) = v12;
  *(_QWORD *)(v13 + 40) = 0;
  *(_OWORD *)(v13 + 8) = 0;
  *(__m128i *)(v13 + 48) = v11;
  v14 = *(_QWORD *)(a2 + 120);
  v15 = v14;
  *(_QWORD *)(a2 + 120) = v14 + 1;
  if ( !(_DWORD)v14 )
  {
    if ( under_debugger )
      goto LABEL_23;
    interr(20071);
LABEL_22:
    sub_30AC0();
  }
  v16 = *(_BYTE *)(a2 + 248) == 0;
  *(_DWORD *)(a2 + 164) = v14;
  if ( v16 )
    goto LABEL_22;
  v20.m128i_i64[0] = (unsigned int)v14;
  if ( (unsigned int)v14 >= (unsigned __int64)(v14 + 1) )
  {
    if ( !under_debugger )
      interr(20048);
LABEL_23:
    BUG();
  }
  v17 = *(_QWORD *)(a1 + 16);
  v21 = nullptr;
  v22 = 0;
  v18 = *(_QWORD *)(a2 + 112) + (v20.m128i_i64[0] << 6);
  v21 = (char *)qvector_reserve(&v21, 0, 5, 1);
  *(_QWORD *)&v22 = 5;
  strcpy(v21, ".got");
  sub_49D80(v17, (_QWORD *)a2, v18, v15, (__int64)&v21, 0, *(double *)v11.m128i_i64, 0.0, nullptr, nullptr);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
LABEL_4:
  result = get_segm_by_sel(*(_QWORD *)(*(_QWORD *)(a2 + 1352) + 32 * v20.m128i_i64[0] + 16));
  if ( !result )
  {
LABEL_16:
    sub_BFC0((__int64)"AUTOHIDE SESSION\nFailed to create .got segment");
    return 0;
  }
  return result;
}

