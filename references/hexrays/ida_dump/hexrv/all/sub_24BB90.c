__int64 __fastcall sub_24BB90(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 (__fastcall *v6)(__int64, int, int); // rax
  __int64 v7; // rcx
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rbp
  __int64 v16; // rax
  _QWORD *v17; // r15
  __m128i *v18; // rax
  __int64 (__fastcall *v19)(__int64, int, int); // rax
  __int64 v20; // rsi
  __int64 result; // rax
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx

  v6 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v6 == sub_60D50 )
  {
    v7 = a1[6];
    v8 = **(_DWORD **)(v7 + 24LL * a2);
  }
  else
  {
    v8 = v6((__int64)a1, a2, 0);
  }
  v11 = sub_24B3D0(a1, v8, a3, v7, a5);
  if ( *(_DWORD *)(a1[38] + 4LL * a2) == 14 )
    v11 = sub_23F860(*(_QWORD *)(a1[41] + 112LL), (__int64)v11, v9, v10, v12);
  v13 = sub_23C8F0((__int64)a1);
  v14 = sub_23C7C0(a3, v13);
  *((_DWORD *)v14 + 2) = 75;
  v15 = v14;
  v16 = j__qalloc_or_throw(72);
  *(_OWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v16 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)v16 = -1;
  *(_QWORD *)(v16 + 40) = 0;
  *(_QWORD *)(v16 + 48) = 0;
  *(_QWORD *)(v16 + 56) = 0;
  *(_QWORD *)(v16 + 64) = 0;
  v15[3] = v16;
  v17 = (_QWORD *)j__qalloc_or_throw(32);
  *v17 = -1;
  v17[2] = 0xFFFFFFFFLL;
  v17[1] = -4294967225LL;
  v17[3] = 0;
  v18 = (__m128i *)qalloc_or_throw(24);
  v18[1].m128i_i64[0] = 0;
  *v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v18);
  v17[3] = v18;
  *(_QWORD *)(v15[3] + 64LL) = v17;
  v19 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v19 == sub_60D50 )
    v20 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24LL * a2) + 4LL);
  else
    v20 = (unsigned int)v19((__int64)a1, a2, 1);
  sub_24B910(a1, v20, v17, 0);
  result = v15[3];
  v22 = *v11;
  *v11 = *(_QWORD *)result;
  v23 = *(_DWORD *)(result + 8);
  *(_QWORD *)result = v22;
  LODWORD(v22) = *((_DWORD *)v11 + 2);
  *((_DWORD *)v11 + 2) = v23;
  v24 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 8) = v22;
  LODWORD(v22) = *((_DWORD *)v11 + 3);
  *((_DWORD *)v11 + 3) = v24;
  v25 = *(_QWORD *)(result + 24);
  *(_DWORD *)(result + 12) = v22;
  v26 = v11[3];
  v11[3] = v25;
  v27 = *(_QWORD *)(result + 32);
  *(_QWORD *)(result + 24) = v26;
  v28 = v11[4];
  v11[4] = v27;
  v29 = *(_QWORD *)(result + 40);
  *(_QWORD *)(result + 32) = v28;
  v30 = v11[5];
  v11[5] = v29;
  v31 = *(_QWORD *)(result + 48);
  *(_QWORD *)(result + 40) = v30;
  v32 = v11[6];
  v11[6] = v31;
  LODWORD(v31) = *(_DWORD *)(result + 56);
  *(_QWORD *)(result + 48) = v32;
  LODWORD(v32) = *((_DWORD *)v11 + 14);
  *((_DWORD *)v11 + 14) = v31;
  *(_DWORD *)(result + 56) = v32;
  if ( v11 )
  {
    sub_250A30(v11);
    clear_tinfo_t(v11 + 6);
    return j__qfree(v11);
  }
  return result;
}
