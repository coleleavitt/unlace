__int64 __fastcall sub_251770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // edx
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  __m128i *v12; // rax
  __m128i *v13; // rbp
  __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // ecx

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
    v12 = (__m128i *)qalloc_or_throw(24);
    v12[1].m128i_i64[0] = 0;
    v13 = v12;
    *v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
    *(_QWORD *)(a1 + 24) = v12;
    v14 = qalloc_or_throw(48);
    a2 = -4294967226LL;
    *(_QWORD *)(v14 + 24) = -4294967226LL;
    *(_QWORD *)(v14 + 16) = -1;
    *(_QWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 32) = 0xFFFFFFFFLL;
    *(_QWORD *)v14 = v13;
    v15 = (__int64 *)v13->m128i_i64[1];
    *(_QWORD *)(v14 + 8) = v15;
    *v15 = v14;
    v13->m128i_i64[1] = v14;
    ++v13[1].m128i_i64[0];
    v16 = *(_QWORD *)(v14 + 16);
    *(_QWORD *)(v14 + 16) = *(_QWORD *)v5;
    v17 = *(_DWORD *)(v5 + 8);
    *(_QWORD *)v5 = v16;
    LODWORD(v16) = *(_DWORD *)(v14 + 24);
    *(_DWORD *)(v14 + 24) = v17;
    v18 = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v5 + 8) = v16;
    LODWORD(v16) = *(_DWORD *)(v14 + 28);
    *(_DWORD *)(v14 + 28) = v18;
    a4 = *(_QWORD *)(v5 + 24);
    *(_DWORD *)(v5 + 12) = v16;
    v9 = *(_QWORD *)(v14 + 40);
    *(_QWORD *)(v14 + 40) = a4;
    *(_QWORD *)(v5 + 24) = v9;
    *(_QWORD *)a1 = *(_QWORD *)(v14 + 16);
  }
  if ( v5 )
  {
    sub_24FC90(v5);
    j__qfree(v5);
  }
  result = sub_23C780(a1, a2, v9, a4, a5);
  if ( (_BYTE)result )
  {
    result = (__int64)sub_23C000(a1, -1);
    *(_DWORD *)(result + 8) = 78;
  }
  return result;
}
