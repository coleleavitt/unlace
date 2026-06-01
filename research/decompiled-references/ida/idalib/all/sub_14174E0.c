__int64 __fastcall sub_14174E0(__int64 a1, char *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v7; // r11
  __int64 v8; // rcx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  __int64 v11; // r9
  char *v12; // r13
  __int64 v13; // rax
  char *v14; // r8
  unsigned __int64 v15; // rdx
  char *v16; // r10
  __int64 v17; // rdi
  __int64 v18; // rsi
  size_t v19; // r11
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rcx
  unsigned int v22; // ebp
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 result; // rax
  __int64 v29; // rbp
  char *v30; // r15
  char *v31; // rdi
  size_t v32; // r11
  unsigned __int64 v33; // r10
  char *v34; // [rsp+0h] [rbp-68h]
  __int64 n; // [rsp+8h] [rbp-60h]
  size_t na; // [rsp+8h] [rbp-60h]
  char *v37; // [rsp+10h] [rbp-58h]
  __int64 v38; // [rsp+10h] [rbp-58h]
  __int64 v39; // [rsp+10h] [rbp-58h]
  __int64 v40; // [rsp+10h] [rbp-58h]
  char *v41; // [rsp+18h] [rbp-50h]
  char *v42; // [rsp+18h] [rbp-50h]
  char *v43; // [rsp+18h] [rbp-50h]
  int v44; // [rsp+20h] [rbp-48h]

  v4 = 24 * a3;
  v7 = *(unsigned int *)(a1 + 2912);
  v8 = *(_QWORD *)(a1 + 2904);
  v34 = &a2[v4];
  n = v4;
  v9 = *(unsigned int *)(a1 + 2916);
  v10 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 3);
  v11 = 24LL * *(_QWORD *)(a1 + 2944) - 24;
  v12 = (char *)(v8 + v11);
  v13 = 24 * v7;
  v14 = (char *)(v8 + 24 * v7);
  v15 = v7 - 0x5555555555555555LL * (v4 >> 3);
  if ( (char *)(v8 + v11) == v14 )
  {
    if ( v15 > v9 )
    {
      sub_2237220(a1 + 2904, a1 + 2920, v15, 24);
      v8 = *(_QWORD *)(a1 + 2904);
      v7 = *(unsigned int *)(a1 + 2912);
    }
    if ( a2 != v34 )
    {
      memcpy((void *)(v8 + 24 * v7), a2, n);
      LODWORD(v7) = *(_DWORD *)(a1 + 2912);
      v8 = *(_QWORD *)(a1 + 2904);
    }
    v24 = v10 + v7;
    *(_DWORD *)(a1 + 2912) = v10 + v7;
  }
  else
  {
    v16 = a2;
    v17 = *(_QWORD *)(a1 + 2904);
    v18 = v7;
    if ( v15 > v9 )
    {
      v38 = v11;
      sub_2237220(a1 + 2904, a1 + 2920, v15, 24);
      v18 = *(unsigned int *)(a1 + 2912);
      v11 = v38;
      v17 = *(_QWORD *)(a1 + 2904);
      v16 = a2;
      v13 = 24 * v18;
      v12 = (char *)(v17 + v38);
      v14 = (char *)(v17 + 24 * v18);
    }
    v19 = v13 - v11;
    v20 = 0xAAAAAAAAAAAAAAABLL * ((v13 - v11) >> 3);
    v21 = v20;
    if ( v20 < v10 )
    {
      v22 = v18 + v10;
      *(_DWORD *)(a1 + 2912) = v22;
      if ( v12 != v14 )
      {
        v41 = v16;
        v37 = v14;
        na = v13 - v11;
        memcpy((void *)(v17 + 24LL * v22 - v19), v12, v13 - v11);
        v21 = v20;
        v16 = v41;
        v14 = v37;
        v19 = na;
      }
      if ( v20 )
      {
        v23 = 0;
        do
        {
          *(__m128i *)&v12[v23] = _mm_loadu_si128((const __m128i *)&a2[v23]);
          *(_DWORD *)&v12[v23 + 16] = *(_DWORD *)&a2[v23 + 16];
          v23 += 24;
          --v21;
        }
        while ( v21 );
        v16 = &a2[v19];
      }
      if ( v34 != v16 )
        memcpy(v14, v16, v34 - v16);
LABEL_13:
      v24 = *(_DWORD *)(a1 + 2912);
      v8 = *(_QWORD *)(a1 + 2904);
      goto LABEL_14;
    }
    v29 = v13 - n;
    v30 = (char *)(v17 + v13 - n);
    v31 = v14;
    v32 = n;
    v33 = 0xAAAAAAAAAAAAAAABLL * (n >> 3);
    if ( v33 + v18 > *(unsigned int *)(a1 + 2916) )
    {
      v43 = v14;
      v40 = v11;
      sub_2237220(a1 + 2904, a1 + 2920, v33 + v18, 24);
      v18 = *(unsigned int *)(a1 + 2912);
      v33 = 0xAAAAAAAAAAAAAAABLL * (n >> 3);
      v32 = n;
      v14 = v43;
      v11 = v40;
      v31 = (char *)(*(_QWORD *)(a1 + 2904) + 24 * v18);
    }
    if ( v30 != v14 )
    {
      v44 = v33;
      v42 = v14;
      v39 = v11;
      memmove(v31, v30, v32);
      LODWORD(v18) = *(_DWORD *)(a1 + 2912);
      LODWORD(v33) = v44;
      v14 = v42;
      v11 = v39;
    }
    *(_DWORD *)(a1 + 2912) = v33 + v18;
    if ( v30 != v12 )
      memmove(&v14[-(v29 - v11)], v12, v29 - v11);
    if ( a2 == v34 )
      goto LABEL_13;
    memmove(v12, a2, n);
    v24 = *(_DWORD *)(a1 + 2912);
    v8 = *(_QWORD *)(a1 + 2904);
  }
LABEL_14:
  v25 = *(_QWORD *)(a1 + 2944);
  v26 = 24 * (a3 + v25);
  v27 = 24LL * v24;
  if ( v8 + v26 != v8 + v27 )
  {
    memmove((void *)(v8 + v26 - 24), (const void *)(v8 + v26), v27 - v26);
    v25 = *(_QWORD *)(a1 + 2944);
    v24 = *(_DWORD *)(a1 + 2912);
  }
  *(_DWORD *)(a1 + 2912) = v24 - 1;
  result = v25 + a3 - 1;
  *(_QWORD *)(a1 + 2944) = result;
  return result;
}
