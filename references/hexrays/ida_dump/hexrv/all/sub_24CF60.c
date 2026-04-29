__int64 __fastcall sub_24CF60(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, int, int); // rax
  unsigned int v5; // ebx
  __int64 *v6; // rbp
  __m128i *v7; // rax
  int v8; // r13d
  __int64 v9; // rax
  __int64 *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  _QWORD *v15; // r14
  _QWORD *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8

  v4 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v4 == sub_60D50 )
    v5 = **(_DWORD **)(a1[6] + 24LL * (int)a2);
  else
    v5 = v4((__int64)a1, a2, 0);
  v6 = (__int64 *)j__qalloc_or_throw(32);
  *v6 = -1;
  v6[1] = -4294967225LL;
  v6[2] = 0xFFFFFFFFLL;
  v6[3] = 0;
  v7 = (__m128i *)qalloc_or_throw(24);
  v7[1].m128i_i64[0] = 0;
  *v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v7);
  v6[3] = (__int64)v7;
  v8 = *(_DWORD *)(a1[38] + 4LL * (int)a2);
  v9 = sub_24B910(a1, v5, v6, v8 != 10);
  v10 = (__int64 *)v9;
  if ( !v9 )
  {
    v16 = sub_23C7C0(a3, *v6);
    v17 = sub_23C350(a1[41], 1, 0, -1, 0, 0, 0);
    *((_DWORD *)v16 + 2) = 75;
    v10 = (__int64 *)v17;
    v18 = j__qalloc_or_throw(72);
    *(_QWORD *)v18 = -1;
    *(_DWORD *)(v18 + 8) = 0;
    *(_QWORD *)(v18 + 12) = -1;
    *(_QWORD *)(v18 + 40) = 0;
    *(_QWORD *)(v18 + 48) = 0;
    *(_DWORD *)(v18 + 56) = 0;
    *(_OWORD *)(v18 + 24) = 0;
    v16[3] = v18;
    *(_QWORD *)(v18 + 64) = v6;
    result = v16[3];
    goto LABEL_11;
  }
  v11 = *(_DWORD *)(v9 + 8);
  if ( v11 != 1 && (unsigned int)(v11 - 17) > 1 )
    goto LABEL_15;
  v12 = v10[4];
  v13 = *(_DWORD *)(v12 + 8);
  if ( v13 != 1 && (unsigned int)(v13 - 17) > 1 || (v14 = sub_23CCB0(*(_QWORD *)(v12 + 32)), v14 == -1) )
  {
    v31 = *(_QWORD *)v12;
    if ( *(_QWORD *)v12 != -1 )
    {
LABEL_16:
      v15 = sub_23C7C0(a3, v31);
      goto LABEL_17;
    }
LABEL_15:
    v31 = *v10;
    goto LABEL_16;
  }
  v15 = sub_23C7C0(a3, v14);
LABEL_17:
  *((_DWORD *)v15 + 2) = 76;
  v32 = j__qalloc_or_throw(72);
  *(_QWORD *)v32 = -1;
  *(_DWORD *)(v32 + 8) = 0;
  *(_QWORD *)(v32 + 12) = -1;
  *(_QWORD *)(v32 + 40) = 0;
  *(_QWORD *)(v32 + 48) = 0;
  *(_DWORD *)(v32 + 56) = 0;
  *(_OWORD *)(v32 + 24) = 0;
  v15[3] = v32;
  *(_QWORD *)(v32 + 64) = v6;
  if ( v8 == 12 )
    v10 = sub_23F860(*(_QWORD *)(a1[41] + 112LL), (__int64)v10, v33, v34, v35);
  result = v15[3];
LABEL_11:
  v20 = *v10;
  *v10 = *(_QWORD *)result;
  v21 = *(_DWORD *)(result + 8);
  *(_QWORD *)result = v20;
  LODWORD(v20) = *((_DWORD *)v10 + 2);
  *((_DWORD *)v10 + 2) = v21;
  v22 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 8) = v20;
  LODWORD(v20) = *((_DWORD *)v10 + 3);
  *((_DWORD *)v10 + 3) = v22;
  v23 = *(_QWORD *)(result + 24);
  *(_DWORD *)(result + 12) = v20;
  v24 = v10[3];
  v10[3] = v23;
  v25 = *(_QWORD *)(result + 32);
  *(_QWORD *)(result + 24) = v24;
  v26 = v10[4];
  v10[4] = v25;
  v27 = *(_QWORD *)(result + 40);
  *(_QWORD *)(result + 32) = v26;
  v28 = v10[5];
  v10[5] = v27;
  v29 = *(_QWORD *)(result + 48);
  *(_QWORD *)(result + 40) = v28;
  v30 = v10[6];
  v10[6] = v29;
  LODWORD(v29) = *(_DWORD *)(result + 56);
  *(_QWORD *)(result + 48) = v30;
  LODWORD(v30) = *((_DWORD *)v10 + 14);
  *((_DWORD *)v10 + 14) = v29;
  *(_DWORD *)(result + 56) = v30;
  if ( v10 )
  {
    sub_250A30(v10);
    clear_tinfo_t(v10 + 6);
    return j__qfree(v10);
  }
  return result;
}
