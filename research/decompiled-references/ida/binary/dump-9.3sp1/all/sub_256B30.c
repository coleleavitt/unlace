__int64 __fastcall sub_256B30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // edx
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __m128i *v14; // rax
  __m128i *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // ecx

  v5 = a2;
  if ( *(_DWORD *)(a2 + 8) == 71 )
  {
    v6 = *(_QWORD *)a1;
    *(_QWORD *)a1 = *(_QWORD *)a2;
    v7 = *(_DWORD *)(a2 + 8);
    *(_QWORD *)a2 = v6;
    LODWORD(v6) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 8) = v7;
    v8 = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 8) = v6;
    LODWORD(v6) = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 12) = v8;
    v9 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 12) = v6;
    v10 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v9;
    *(_QWORD *)(a2 + 24) = v10;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 71;
    v14 = (__m128i *)qalloc_or_throw(24, a2, a3, a4);
    v14[1].m128i_i64[0] = 0;
    v15 = v14;
    *v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
    *(_QWORD *)(a1 + 24) = v14;
    v18 = qalloc_or_throw(48, a2, v16, v17);
    a2 = -4294967226LL;
    *(_QWORD *)(v18 + 24) = -4294967226LL;
    *(_QWORD *)(v18 + 16) = -1;
    *(_QWORD *)(v18 + 40) = 0;
    *(_QWORD *)(v18 + 32) = 0xFFFFFFFFLL;
    *(_QWORD *)v18 = v15;
    v19 = (__int64 *)v15->m128i_i64[1];
    *(_QWORD *)(v18 + 8) = v19;
    *v19 = v18;
    v15->m128i_i64[1] = v18;
    ++v15[1].m128i_i64[0];
    v20 = *(_QWORD *)(v18 + 16);
    *(_QWORD *)(v18 + 16) = *(_QWORD *)v5;
    v21 = *(_DWORD *)(v5 + 8);
    *(_QWORD *)v5 = v20;
    LODWORD(v20) = *(_DWORD *)(v18 + 24);
    *(_DWORD *)(v18 + 24) = v21;
    v22 = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v5 + 8) = v20;
    LODWORD(v20) = *(_DWORD *)(v18 + 28);
    *(_DWORD *)(v18 + 28) = v22;
    a4 = *(_QWORD *)(v5 + 24);
    *(_DWORD *)(v5 + 12) = v20;
    v9 = *(_QWORD *)(v18 + 40);
    *(_QWORD *)(v18 + 40) = a4;
    *(_QWORD *)(v5 + 24) = v9;
    *(_QWORD *)a1 = *(_QWORD *)(v18 + 16);
  }
  if ( v5 )
  {
    sub_255050(v5);
    j__qfree(v5);
  }
  result = sub_241B40(a1, a2, v9, a4, a5);
  if ( (_BYTE)result )
  {
    result = (__int64)sub_2413C0(a1, -1, v12, v13);
    *(_DWORD *)(result + 8) = 78;
  }
  return result;
}
