__int64 __fastcall sub_9EBD70(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 *v6; // r13
  __int64 v9; // rax
  __m128i v10; // xmm1
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 *v14; // rdi
  int v15; // ebp
  int v16; // eax
  __int64 v17; // rdx
  _QWORD v18[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( *(_DWORD *)(a1 + 12) <= *(_DWORD *)(a1 + 8) )
  {
    v6 = (__int64 *)(a1 + 16);
    v9 = sub_2237400(a1, a1 + 16, 0, 24, v18);
    v10 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    v11 = v9;
    v12 = v9;
    v13 = v9 + 24LL * *(unsigned int *)(a1 + 8);
    *(_QWORD *)v13 = *a2;
    *(__m128i *)(v13 + 8) = v10;
    *a2 = 0;
    a2[1] = 0;
    *((_DWORD *)a2 + 4) = 0;
    sub_9EBBF0((__int64 **)a1, v12);
    v14 = *(__int64 **)a1;
    v15 = v18[0];
    if ( v6 != v14 )
      free(v14);
    v16 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a1 = v11;
    *(_DWORD *)(a1 + 12) = v15;
    v17 = (unsigned int)(v16 + 1);
    *(_DWORD *)(a1 + 8) = v17;
    return v11 + 24 * v17 - 24;
  }
  else
  {
    v2 = *(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8);
    v3 = *a2;
    *(__m128i *)(v2 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *(_QWORD *)v2 = v3;
    a2[1] = 0;
    *((_DWORD *)a2 + 4) = 0;
    LODWORD(v2) = *(_DWORD *)(a1 + 8);
    *a2 = 0;
    v4 = (unsigned int)(v2 + 1);
    *(_DWORD *)(a1 + 8) = v4;
    return *(_QWORD *)a1 + 24 * v4 - 24;
  }
}
