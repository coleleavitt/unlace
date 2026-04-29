__int64 __fastcall sub_10CBB0(__m128i *a1, int *a2, int *a3, __int64 a4, __int64 a5, char a6)
{
  unsigned __int8 **v7; // rbx
  unsigned int v9; // eax
  unsigned int v10; // r14d
  __m128d v12; // xmm0
  char v13; // r13
  int v14; // edx
  __m128d v15; // xmm0
  char *v16; // rax
  _BYTE *v17; // rcx
  int v18; // eax
  _QWORD *v19; // rbx
  int v20; // r12d
  char *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rax
  _BYTE *v25; // [rsp+8h] [rbp-120h]
  int v26; // [rsp+8h] [rbp-120h]
  int v28; // [rsp+10h] [rbp-118h]
  __int64 v29; // [rsp+10h] [rbp-118h]
  __int64 v30; // [rsp+20h] [rbp-108h]
  char *v31; // [rsp+28h] [rbp-100h]
  int v32; // [rsp+38h] [rbp-F0h] BYREF
  int v33; // [rsp+3Ch] [rbp-ECh] BYREF
  _BYTE v34[160]; // [rsp+40h] [rbp-E8h] BYREF
  char v35; // [rsp+E0h] [rbp-48h] BYREF
  unsigned __int64 v36; // [rsp+E8h] [rbp-40h]

  v7 = (unsigned __int8 **)a1;
  v36 = __readfsqword(0x28u);
  *a2 = 0;
  v9 = sub_10CA20(a1->m128i_i64, &v32, &v33, a4, a5, a6);
  if ( (_BYTE)v9 )
    return 1;
  v10 = v9;
  if ( v32 )
  {
    *a2 = v32;
    *a3 = v33;
  }
  if ( (a6 & 8) == 0 )
    return v10;
  v12 = (__m128d)_mm_loadu_si128(a1);
  *(__m128d *)a1 = _mm_shuffle_pd(v12, v12, 1);
  v13 = sub_10CA20(a1->m128i_i64, &v32, &v33, a4, a5, a6);
  if ( v13 )
    return 1;
  if ( v32 )
  {
    v14 = v33;
    if ( !*a2 || *a3 < v33 )
    {
      *a2 = v32 + 2;
      *a3 = v14;
    }
  }
  v15 = (__m128d)_mm_loadu_si128(a1);
  *(__m128d *)a1 = _mm_shuffle_pd(v15, v15, 1);
  v28 = *a2;
  if ( *a2 )
  {
    v16 = v34;
    do
    {
      *(_OWORD *)(v16 + 24) = 0;
      v16 += 40;
      *((_QWORD *)v16 - 5) = 0;
      *((_QWORD *)v16 - 4) = 0;
      *((_QWORD *)v16 - 3) = 0;
    }
    while ( v16 != &v35 );
    v17 = v34;
    do
    {
      v25 = v17;
      sub_10C410((__int64)v17, a4, *v7++);
      v17 = v25 + 40;
    }
    while ( v25 + 40 != &v35 );
    v18 = v28;
    v29 = 0;
    v31 = (char *)&unk_4057E0 + 8 * v18 - 8;
    do
    {
      v19 = v34;
      v20 = 0;
      v26 = *(_DWORD *)&v31[4 * v29];
      v30 = 40LL * v26;
      do
      {
        if ( v26 != v20
          && ((unsigned __int8)sub_5FD00(&v34[v30], v19) || (unsigned __int8)sub_312BB0(&v34[v30 + 16], v19 + 2)) )
        {
          v13 = 1;
          goto LABEL_21;
        }
        ++v20;
        v19 += 5;
      }
      while ( v20 != 4 );
      v23 = v29;
      v29 = 1;
    }
    while ( v23 != 1 );
LABEL_21:
    v21 = &v35;
    do
    {
      v22 = *((_QWORD *)v21 - 3);
      v21 -= 40;
      if ( v22 )
      {
        *((_QWORD *)v21 + 3) = 0;
        qfree(v22);
      }
      qfree(*(_QWORD *)v21);
    }
    while ( v21 != v34 );
    if ( v13 )
      *a2 = 0;
  }
  return v10;
}
