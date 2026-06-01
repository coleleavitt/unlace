__int64 __fastcall sub_15BA000(__int64 a1, const void *a2, size_t a3, __int64 *a4, int a5)
{
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r9
  unsigned int v11; // r10d
  __int64 *v12; // r8
  const __m128i *v13; // r12
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // r12
  char *v22; // rdx
  _QWORD *v23; // rcx
  unsigned int v24; // eax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r8
  __m128i *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v39; // [rsp+10h] [rbp-68h]
  unsigned int v40; // [rsp+10h] [rbp-68h]
  unsigned int v41; // [rsp+10h] [rbp-68h]
  __int64 v42; // [rsp+10h] [rbp-68h]
  __int64 *v43; // [rsp+18h] [rbp-60h]
  __int64 *v44; // [rsp+18h] [rbp-60h]
  __int64 *v45[2]; // [rsp+20h] [rbp-58h] BYREF
  int v46; // [rsp+30h] [rbp-48h]

  v8 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 248LL) + 17504LL);
  v9 = sub_2244B30(a2, a3);
  v11 = sub_2244CB0(v8, a2, a3, v9);
  v12 = (__int64 *)(*(_QWORD *)v8 + 8LL * v11);
  if ( *v12 )
  {
    if ( *v12 != -8 )
    {
      v13 = (const __m128i *)v45;
      sub_989490(v45, v12, 0);
      v15 = *v45[0];
      v16 = *(__int64 **)(*v45[0] + 8);
      if ( v16 )
        goto LABEL_17;
      goto LABEL_4;
    }
    --*(_DWORD *)(v8 + 16);
  }
  v20 = *(_QWORD *)(v8 + 24);
  *(_QWORD *)(v8 + 104) += a3 + 17;
  v21 = (_QWORD *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v22 = (char *)v21 + a3 + 17;
  if ( *(_QWORD *)(v8 + 32) >= (unsigned __int64)v22 && v20 )
  {
    *(_QWORD *)(v8 + 24) = v22;
  }
  else
  {
    v44 = v12;
    v41 = v11;
    v31 = sub_986170(v8 + 24, a3 + 17, a3 + 17, 3, (__int64)v12, v10);
    v12 = v44;
    v11 = v41;
    v21 = (_QWORD *)v31;
  }
  v23 = v21 + 2;
  if ( a3 )
  {
    v43 = v12;
    v40 = v11;
    v30 = memcpy(v21 + 2, a2, a3);
    v12 = v43;
    v11 = v40;
    v23 = v30;
  }
  *((_BYTE *)v23 + a3) = 0;
  *v21 = a3;
  v21[1] = 0;
  *v12 = (__int64)v21;
  v13 = (const __m128i *)v45;
  ++*(_DWORD *)(v8 + 12);
  v24 = sub_22450D0(v8, v11);
  sub_989490(v45, (__int64 *)(*(_QWORD *)v8 + 8LL * v24), 0);
  v15 = *v45[0];
  v16 = *(__int64 **)(*v45[0] + 8);
  if ( !v16 )
  {
LABEL_4:
    v17 = *(_QWORD *)(v8 + 120);
    if ( !v17
      || (v39 = v15,
          v16 = (__int64 *)(*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v17 + 16LL))(
                             v17,
                             a2,
                             a3),
          v15 = v39,
          (*(_QWORD *)(v39 + 8) = v16) == 0) )
    {
      v18 = *(_QWORD *)(v8 + 24);
      *(_QWORD *)(v8 + 104) += 24LL;
      v16 = (__int64 *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( *(_QWORD *)(v8 + 32) >= (unsigned __int64)(v16 + 3) && v18 )
      {
        *(_QWORD *)(v8 + 24) = v16 + 3;
      }
      else
      {
        v42 = v15;
        v16 = (__int64 *)sub_986170(v8 + 24, 24, 24, 3, v15, v14);
        v15 = v42;
      }
      v19 = *v16 & 0xFFFFF80000000000LL;
      v16[1] = 0;
      *v16 = v19 | 0x1FFFC05;
      *(_QWORD *)(v15 + 8) = v16;
      v16[2] = v15;
    }
  }
LABEL_17:
  v25 = *(unsigned int *)(a1 + 48);
  v26 = *(unsigned int *)(a1 + 52);
  *(_WORD *)v16 = *(_WORD *)v16 & 0xFE00 | 5;
  v27 = 24 * v25;
  if ( v25 >= v26 )
  {
    v45[0] = v16;
    v32 = *(_QWORD *)(a1 + 40);
    v33 = v25 + 1;
    v45[1] = a4;
    v46 = a5;
    v34 = (__m128i *)(v32 + v27);
    if ( v26 < v25 + 1 )
    {
      v35 = a1 + 40;
      v36 = a1 + 56;
      if ( v32 > (unsigned __int64)v45 || v34 <= (__m128i *)v45 )
      {
        sub_2237220(v35, v36, v33, 24);
        v34 = (__m128i *)(*(_QWORD *)(a1 + 40) + 24LL * *(unsigned int *)(a1 + 48));
      }
      else
      {
        sub_2237220(v35, v36, v33, 24);
        v37 = *(_QWORD *)(a1 + 40);
        v13 = (const __m128i *)((char *)v45 + v37 - v32);
        v34 = (__m128i *)(v37 + 24LL * *(unsigned int *)(a1 + 48));
      }
    }
    *v34 = _mm_loadu_si128(v13);
    v34[1].m128i_i64[0] = v13[1].m128i_i64[0];
    ++*(_DWORD *)(a1 + 48);
  }
  else
  {
    v28 = *(_QWORD *)(a1 + 40) + v27;
    *(_QWORD *)v28 = v16;
    *(_QWORD *)(v28 + 8) = a4;
    *(_DWORD *)(v28 + 16) = a5;
    ++*(_DWORD *)(a1 + 48);
  }
  return a1;
}
