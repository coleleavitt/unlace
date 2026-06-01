__int64 __fastcall sub_250790(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 (__fastcall *v5)(__int64, int, int); // rax
  __int64 v6; // rcx
  unsigned int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __m128i *v25; // rax
  __int64 (__fastcall *v26)(__int64, int, int); // rax
  __int64 v27; // rsi
  __int64 result; // rax
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx

  v3 = a2;
  v5 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v5 == sub_650D0 )
  {
    v6 = a1[6];
    v7 = **(_DWORD **)(v6 + 24LL * a2);
  }
  else
  {
    v7 = v5((__int64)a1, a2, 0);
  }
  v10 = sub_24FFD0(a1, v7, a3, v6);
  if ( *(_DWORD *)(a1[38] + 4LL * a2) == 14 )
    v10 = (__int64)sub_244460(*(_QWORD *)(a1[41] + 112LL), v10, v8, v9, v11);
  v12 = sub_2414F0((__int64)a1);
  v15 = sub_2413C0(a3, v12, v13, v14);
  *((_DWORD *)v15 + 2) = 75;
  v16 = v15;
  v19 = j__qalloc_or_throw(72, v12, v17, v18);
  *(_OWORD *)(v19 + 24) = 0;
  *(_QWORD *)(v19 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v19 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)v19 = -1;
  *(_QWORD *)(v19 + 40) = 0;
  *(_QWORD *)(v19 + 48) = 0;
  *(_QWORD *)(v19 + 56) = 0;
  *(_QWORD *)(v19 + 64) = 0;
  v16[3] = v19;
  v22 = (_QWORD *)j__qalloc_or_throw(32, 0xFFFFFFFF00000000LL, v20, v21);
  *v22 = -1;
  v22[2] = 0xFFFFFFFFLL;
  v22[1] = -4294967225LL;
  v22[3] = 0;
  v25 = (__m128i *)qalloc_or_throw(24, 0xFFFFFFFF00000000LL, v23, v24);
  v25[1].m128i_i64[0] = 0;
  *v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
  v22[3] = v25;
  *(_QWORD *)(v16[3] + 64) = v22;
  v26 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v26 == sub_650D0 )
    v27 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v3) + 4LL);
  else
    v27 = (unsigned int)v26((__int64)a1, a2, 1);
  sub_250510(a1, v27, v22, 0);
  result = v16[3];
  v29 = *(_QWORD *)v10;
  *(_QWORD *)v10 = *(_QWORD *)result;
  v30 = *(_DWORD *)(result + 8);
  *(_QWORD *)result = v29;
  LODWORD(v29) = *(_DWORD *)(v10 + 8);
  *(_DWORD *)(v10 + 8) = v30;
  v31 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 8) = v29;
  LODWORD(v29) = *(_DWORD *)(v10 + 12);
  *(_DWORD *)(v10 + 12) = v31;
  v32 = *(_QWORD *)(result + 24);
  *(_DWORD *)(result + 12) = v29;
  v33 = *(_QWORD *)(v10 + 24);
  *(_QWORD *)(v10 + 24) = v32;
  v34 = *(_QWORD *)(result + 32);
  *(_QWORD *)(result + 24) = v33;
  v35 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 32) = v34;
  v36 = *(_QWORD *)(result + 40);
  *(_QWORD *)(result + 32) = v35;
  v37 = *(_QWORD *)(v10 + 40);
  *(_QWORD *)(v10 + 40) = v36;
  v38 = *(_QWORD *)(result + 48);
  *(_QWORD *)(result + 40) = v37;
  v39 = *(_QWORD *)(v10 + 48);
  *(_QWORD *)(v10 + 48) = v38;
  LODWORD(v38) = *(_DWORD *)(result + 56);
  *(_QWORD *)(result + 48) = v39;
  LODWORD(v39) = *(_DWORD *)(v10 + 56);
  *(_DWORD *)(v10 + 56) = v38;
  *(_DWORD *)(result + 56) = v39;
  if ( v10 )
  {
    sub_255630(v10);
    clear_tinfo_t();
    return j__qfree(v10);
  }
  return result;
}
