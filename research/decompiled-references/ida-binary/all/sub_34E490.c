__int64 __fastcall sub_34E490(
        __int64 a1,
        int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        char *a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rbp
  __int64 result; // rax
  const char *v17; // rsi
  const char **v18; // r12
  char *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  const char *v24; // rbp
  _BYTE *v25; // r13
  __int128 v26; // kr00_16
  __int64 v27; // rdi
  double v28; // xmm0_8
  _BYTE *v29; // rdi
  int v30; // ebp
  __int64 i; // rax
  _DWORD *v32; // rax
  _DWORD *v33; // rdx
  const char *v34; // r12
  size_t v35; // rbp
  char *v36; // rax
  signed __int64 v37; // rdx
  _BYTE *v38; // rax
  __int64 v39; // [rsp+0h] [rbp-68h] BYREF
  __int128 v40; // [rsp+8h] [rbp-60h]
  _BYTE *v41; // [rsp+20h] [rbp-48h] BYREF
  __int128 v42; // [rsp+28h] [rbp-40h]
  unsigned __int64 v43; // [rsp+38h] [rbp-30h]

  v14 = a2;
  v43 = __readfsqword(0x28u);
  result = 0;
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
    return 0;
  if ( *(_DWORD *)(a1 + 144) != a2 )
  {
    *(_DWORD *)(a1 + 144) = a2;
    v40 = 0;
    sub_34E130(a1, (const char *)&v39, a1 + 96, a12, a13, a14, (__m128)0LL, a4, a5, a6, a7, a8, a9, a10, 0);
    v17 = (const char *)(a1 + 72);
    v18 = (const char **)(*(_QWORD *)a1 + 24 * v14);
    sub_34E130(
      a1,
      (const char *)(a1 + 72),
      (unsigned __int64)v18,
      v19,
      v20,
      v21,
      (__m128)0LL,
      a4,
      a5,
      a6,
      v22,
      v23,
      a9,
      a10,
      v39);
    v24 = v18[1];
    if ( !v24 )
      goto LABEL_7;
    v34 = *v18;
    v17 = (_BYTE *)(&qword_28 + 5);
    v35 = (size_t)(v24 - 1);
    v36 = strchr(v34, 45);
    v41 = nullptr;
    v42 = 0;
    v37 = v36 - v34;
    if ( v35 <= v36 - v34 )
      v37 = v35;
    if ( v36 )
      v35 = v37;
    if ( v35 )
    {
      v38 = (_BYTE *)qvector_reserve(&v41, 0, v35 + 1, 1);
      v17 = v34;
      *(_QWORD *)&v42 = v35 + 1;
      v41 = v38;
      memmove(v38, v34, v35);
      v41[v35] = 0;
      v25 = v41;
      v26 = v42;
    }
    else
    {
LABEL_7:
      v25 = nullptr;
      v26 = 0u;
    }
    v27 = *(_QWORD *)(a1 + 96);
    v28 = 0.0;
    v41 = nullptr;
    v42 = 0;
    if ( v27 )
    {
      *(_QWORD *)(a1 + 104) = 0;
      v28 = qfree(v27, v17);
      v29 = v41;
      *(_QWORD *)(a1 + 96) = v25;
      *(_OWORD *)(a1 + 104) = v26;
      if ( v29 )
      {
        *(_QWORD *)&v42 = 0;
        v28 = qfree(v29, v17, v28);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 96) = v25;
      *(_OWORD *)(a1 + 104) = v26;
    }
    v30 = 0;
    for ( i = 0; v30 < (unsigned __int64)v40; i = v30 )
    {
      v17 = (const char *)*(unsigned int *)(v39 + 4 * i);
      v32 = *(_DWORD **)(a1 + 72);
      v33 = &v32[*(_QWORD *)(a1 + 80)];
      if ( v32 != v33 )
      {
        while ( (_DWORD)v17 != *v32 )
        {
          if ( v33 == ++v32 )
            goto LABEL_18;
        }
        if ( v32 != v33 )
          sub_34D910((_QWORD *)a1, (int)v17);
      }
LABEL_18:
      ++v30;
    }
    sub_34DC20(a1);
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree(v39, v17, v28);
    }
    return 1;
  }
  return result;
}
