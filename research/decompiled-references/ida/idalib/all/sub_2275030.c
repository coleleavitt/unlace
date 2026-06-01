__int64 __fastcall sub_2275030(__int64 a1, __m128 *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128 **v11; // rdx
  __m128 *v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 result; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 ***v22; // rax
  __int64 **v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rdi
  __m128i v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-58h] BYREF
  void *v29; // [rsp+18h] [rbp-40h]
  __int64 v30; // [rsp+28h] [rbp-30h] BYREF

  v7 = *(_DWORD *)sub_2273810(****(_QWORD ****)(a1 + 8), a2, a3, a4, a5, a6);
  if ( (v7 & 0xFFFFFFF7) != 0 && v7 != 17 )
  {
    v11 = ***(__m128 *****)(a1 + 8);
    v12 = *v11;
    if ( v7 == 16 )
    {
      a2 = *v11;
      sub_2273D80((__int64)&v28, *v11, (__int64)v11, v8, v9, v10);
      if ( v29 != &v30 )
        operator delete(v29);
      v12 = ****(__m128 *****)(a1 + 8);
    }
    v13 = *(_DWORD *)sub_2273810((__int64)v12, a2, (__int64)v11, v8, v9, v10);
    if ( v13 != 8 && v13 != 17 )
    {
      result = sub_2273F00(**(__int64 ****)(a1 + 8), a2, v14, v15, v16, v17);
      *(_QWORD *)(a1 + 72) = result;
      return result;
    }
    a2 = (__m128 *)&qword_48;
    v27 = sub_9C3B30((__int64 *)(**(_QWORD **)(a1 + 8) + 8LL), 72, 4u);
    goto LABEL_12;
  }
  v19 = **(_QWORD ***)(a1 + 8);
  v20 = v19[1];
  v19[11] += 72LL;
  v21 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v19[2] < v21 + 72 || !v20 )
  {
    a2 = (__m128 *)&qword_48;
    v27 = sub_986170((__int64)(v19 + 1), 72, 72, 4, v9, v10);
LABEL_12:
    v21 = v27;
    goto LABEL_10;
  }
  v19[1] = v21 + 72;
LABEL_10:
  v22 = *(__int64 ****)(a1 + 8);
  *(_QWORD *)(v21 + 16) = 0;
  *(_QWORD *)(v21 + 24) = 0;
  *(_QWORD *)(v21 + 8) = v22;
  v23 = *v22;
  *(_QWORD *)v21 = off_2BEBBC8;
  v24 = *v23;
  *(_DWORD *)(v21 + 32) = 0;
  *(_QWORD *)(v21 + 40) = 0;
  *(_QWORD *)(v21 + 48) = 0;
  v25 = *v24;
  *(_QWORD *)(v21 + 56) = 0;
  *(_QWORD *)(v21 + 64) = 0;
  v26 = _mm_loadl_epi64((const __m128i *)(sub_2273810(v25, a2, (__int64)off_2BEBBC8, v8, v9, v10) + 8));
  *(_QWORD *)v21 = off_2BEBBE8;
  *(__m128i *)(v21 + 16) = _mm_unpacklo_epi64(v26, v26);
  *(_QWORD *)(a1 + 72) = v21;
  return v21;
}
