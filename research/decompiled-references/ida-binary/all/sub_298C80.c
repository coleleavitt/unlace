__int64 __fastcall sub_298C80(__int64 a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 *a4)
{
  __int64 v4; // r15
  __int64 (__fastcall *v6)(__int64, unsigned int); // r8
  __int64 (*v7)(void); // rax
  int v8; // eax
  __int64 v9; // rax
  unsigned int *v10; // r14
  __int64 (__fastcall *v11)(__int64, unsigned int); // r8
  __int64 (__fastcall *v12)(__int64); // rax
  int v13; // eax
  unsigned int *v14; // r12
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  __int64 v17; // r9
  int v18; // eax
  int v19; // eax

  v4 = a2 >> 32;
  v6 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
  if ( v6 == interactive_graph_t__::vfunc_19 )
  {
    v7 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
    if ( (char *)v7 == (char *)interactive_graph_t__::vfunc_7 )
      v8 = *(_DWORD *)(a1 + 184);
    else
      v8 = v7();
    if ( (int)a2 >= v8 )
      sub_16B930((__int64)"nrect(%d) failed", a2);
    v9 = *(_QWORD *)a1;
    v10 = (unsigned int *)(*(_QWORD *)(a1 + 224) + 16LL * (int)a2);
    v11 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
    if ( v11 == interactive_graph_t__::vfunc_19 )
      goto LABEL_6;
LABEL_19:
    v14 = (unsigned int *)v11(a1, HIDWORD(a2));
    goto LABEL_10;
  }
  v10 = (unsigned int *)((__int64 (*)(void))v6)();
  v9 = *(_QWORD *)a1;
  v11 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
  if ( v11 != interactive_graph_t__::vfunc_19 )
    goto LABEL_19;
LABEL_6:
  v12 = *(__int64 (__fastcall **)(__int64))(v9 + 56);
  if ( v12 == interactive_graph_t__::vfunc_7 )
    v13 = *(_DWORD *)(a1 + 184);
  else
    v13 = v12(a1);
  if ( SHIDWORD(a2) >= v13 )
    sub_16B930((__int64)"nrect(%d) failed", HIDWORD(a2));
  v14 = (unsigned int *)(*(_QWORD *)(a1 + 224) + 16 * v4);
LABEL_10:
  v15 = (v4 << 32) | (unsigned int)a2;
  v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL);
  if ( v16 == interactive_graph_t__::vfunc_20 )
    v17 = interactive_graph_t__::vfunc_20(a1, v15);
  else
    v17 = v16(a1, v15);
  v18 = *(_DWORD *)(v17 + 8);
  if ( v18 == -1 )
  {
    *a3 = sub_28FE70(*v10, v10[1], v10[2], v10[3], v14);
    v19 = *(_DWORD *)(v17 + 12);
    if ( v19 != -1 )
      goto LABEL_14;
LABEL_17:
    *a4 = sub_28FE70(*v14, v14[1], v14[2], v14[3], v10);
    return v17;
  }
  *a3 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*v10 + v18), _mm_cvtsi32_si128(v10[3])).m128i_u64[0];
  v19 = *(_DWORD *)(v17 + 12);
  if ( v19 == -1 )
    goto LABEL_17;
LABEL_14:
  *a4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*v14 + v19), _mm_cvtsi32_si128(v14[1])).m128i_u64[0];
  return v17;
}
