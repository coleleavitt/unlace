__int64 __fastcall sub_251B60(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, int, int); // rdx
  __int64 (__fastcall *v5)(__int64, int, int); // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __m128i *v11; // rax
  int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rbx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // r14
  __int64 *v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
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
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // [rsp-8h] [rbp-30h]

  v4 = sub_650D0;
  v5 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v5 == sub_650D0 )
  {
    v6 = a1[6];
    v7 = **(_DWORD **)(v6 + 24LL * (int)a2);
  }
  else
  {
    v7 = v5((__int64)a1, a2, 0);
  }
  v8 = (__int64 *)j__qalloc_or_throw(32, a2, (__int64)v4, v6);
  *v8 = -1;
  v8[1] = -4294967225LL;
  v8[2] = 0xFFFFFFFFLL;
  v8[3] = 0;
  v11 = (__m128i *)qalloc_or_throw(24, a2, v9, v10);
  v11[1].m128i_i64[0] = 0;
  *v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
  v8[3] = (__int64)v11;
  v12 = *(_DWORD *)(a1[38] + 4LL * (int)a2);
  v13 = sub_250510(a1, v7, v8, v12 != 10);
  v16 = (__int64 *)v13;
  if ( !v13 )
  {
    v24 = sub_2413C0(a3, *v8, v14, v15);
    v25 = sub_240F50(a1[41], 1, 0, -1, 0, 0, 0);
    *((_DWORD *)v24 + 2) = 75;
    v16 = (__int64 *)v25;
    v27 = j__qalloc_or_throw(72, 1, v44, v26);
    *(_QWORD *)v27 = -1;
    *(_DWORD *)(v27 + 8) = 0;
    *(_QWORD *)(v27 + 12) = -1;
    *(_QWORD *)(v27 + 40) = 0;
    *(_QWORD *)(v27 + 48) = 0;
    *(_DWORD *)(v27 + 56) = 0;
    *(_OWORD *)(v27 + 24) = 0;
    v24[3] = v27;
    *(_QWORD *)(v27 + 64) = v8;
    result = v24[3];
    goto LABEL_11;
  }
  v17 = *(_DWORD *)(v13 + 8);
  if ( v17 != 1 && (unsigned int)(v17 - 17) > 1 )
    goto LABEL_15;
  v14 = v16[4];
  v18 = *(_DWORD *)(v14 + 8);
  if ( v18 != 1 && (unsigned int)(v18 - 17) > 1 || (v19 = sub_2418B0(*(_QWORD *)(v14 + 32)), v19 == -1) )
  {
    v20 = *(_QWORD *)v14;
    if ( *(_QWORD *)v14 != -1 )
    {
LABEL_16:
      v23 = sub_2413C0(a3, v20, v14, v15);
      goto LABEL_17;
    }
LABEL_15:
    v20 = *v16;
    goto LABEL_16;
  }
  v20 = v19;
  v23 = sub_2413C0(a3, v19, v14, v15);
LABEL_17:
  *((_DWORD *)v23 + 2) = 76;
  v40 = j__qalloc_or_throw(72, v20, v21, v22);
  *(_QWORD *)v40 = -1;
  *(_DWORD *)(v40 + 8) = 0;
  *(_QWORD *)(v40 + 12) = -1;
  *(_QWORD *)(v40 + 40) = 0;
  *(_QWORD *)(v40 + 48) = 0;
  *(_DWORD *)(v40 + 56) = 0;
  *(_OWORD *)(v40 + 24) = 0;
  v23[3] = v40;
  *(_QWORD *)(v40 + 64) = v8;
  if ( v12 == 12 )
    v16 = sub_244460(*(_QWORD *)(a1[41] + 112LL), (__int64)v16, v41, v42, v43);
  result = v23[3];
LABEL_11:
  v29 = *v16;
  *v16 = *(_QWORD *)result;
  v30 = *(_DWORD *)(result + 8);
  *(_QWORD *)result = v29;
  LODWORD(v29) = *((_DWORD *)v16 + 2);
  *((_DWORD *)v16 + 2) = v30;
  v31 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 8) = v29;
  LODWORD(v29) = *((_DWORD *)v16 + 3);
  *((_DWORD *)v16 + 3) = v31;
  v32 = *(_QWORD *)(result + 24);
  *(_DWORD *)(result + 12) = v29;
  v33 = v16[3];
  v16[3] = v32;
  v34 = *(_QWORD *)(result + 32);
  *(_QWORD *)(result + 24) = v33;
  v35 = v16[4];
  v16[4] = v34;
  v36 = *(_QWORD *)(result + 40);
  *(_QWORD *)(result + 32) = v35;
  v37 = v16[5];
  v16[5] = v36;
  v38 = *(_QWORD *)(result + 48);
  *(_QWORD *)(result + 40) = v37;
  v39 = v16[6];
  v16[6] = v38;
  LODWORD(v38) = *(_DWORD *)(result + 56);
  *(_QWORD *)(result + 48) = v39;
  LODWORD(v39) = *((_DWORD *)v16 + 14);
  *((_DWORD *)v16 + 14) = v38;
  *(_DWORD *)(result + 56) = v39;
  if ( v16 )
  {
    sub_255630(v16);
    clear_tinfo_t();
    return j__qfree((__int64)v16);
  }
  return result;
}
