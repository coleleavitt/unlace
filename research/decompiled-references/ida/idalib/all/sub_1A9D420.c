__int64 __fastcall sub_1A9D420(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // esi
  int v9; // ecx
  __int64 v10; // r12
  __int64 v11; // rdi
  int v12; // r11d
  unsigned int i; // eax
  unsigned int v14; // eax
  __int64 v15; // rax
  bool v17; // zf
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  const __m128i *v25; // rdx
  __m128i *v26; // rax
  unsigned __int64 v27; // rbp
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // [rsp+0h] [rbp-48h] BYREF
  int v31; // [rsp+8h] [rbp-40h]
  __int64 v32; // [rsp+10h] [rbp-38h]

  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v30 = 0;
    goto LABEL_26;
  }
  a3 = *(_QWORD *)a2;
  v9 = *(_DWORD *)(a2 + 8);
  v10 = 0;
  v11 = *(_QWORD *)a1;
  v12 = 1;
  for ( i = (v8 - 1)
          & (((0xBF58476D1CE4E5B9LL
             * ((unsigned int)(37 * v9)
              | ((unsigned __int64)(((unsigned int)*(_QWORD *)a2 >> 9) ^ ((unsigned int)*(_QWORD *)a2 >> 4)) << 32))) >> 31)
           ^ (756364221 * v9)); ; i = (v8 - 1) & v14 )
  {
    a5 = v11 + 24LL * i;
    a6 = *(_QWORD *)a5;
    if ( a3 == *(_QWORD *)a5 && v9 == *(_DWORD *)(a5 + 8) )
    {
      v15 = *(unsigned int *)(a5 + 16);
      return *(_QWORD *)(a1 + 24) + 24 * v15 + 16;
    }
    if ( a6 == -4096 )
      break;
    if ( a6 == -8192 && *(_DWORD *)(a5 + 8) == -2 && !v10 )
      v10 = v11 + 24LL * i;
LABEL_9:
    v14 = v12 + i;
    ++v12;
  }
  if ( *(_DWORD *)(a5 + 8) != -1 )
    goto LABEL_9;
  if ( !v10 )
    v10 = v11 + 24LL * i;
  a4 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  v30 = v10;
  if ( 4 * (int)a4 >= 3 * v8 )
  {
LABEL_26:
    sub_BAF6F0(a1, 2 * v8, a3, a4, a5, a6);
    goto LABEL_27;
  }
  if ( v8 - *(_DWORD *)(a1 + 12) - (unsigned int)a4 > v8 >> 3 )
    goto LABEL_18;
  sub_BAF6F0(a1, v8, a3, a4, a5, -4096);
LABEL_27:
  sub_BAA060((__int64 *)a1, (__int64 *)a2, &v30);
  a3 = *(_QWORD *)a2;
  v10 = v30;
  LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
LABEL_18:
  v17 = *(_QWORD *)v10 == -4096;
  *(_DWORD *)(a1 + 8) = a4;
  if ( !v17 || *(_DWORD *)(v10 + 8) != -1 )
    --*(_DWORD *)(a1 + 12);
  v18 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)v10 = a3;
  *(_DWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 8) = v18;
  v19 = *(_DWORD *)(a2 + 8);
  v20 = *(_QWORD *)a2;
  v21 = *(unsigned int *)(a1 + 36);
  v32 = 0;
  v31 = v19;
  v22 = *(unsigned int *)(a1 + 32);
  v30 = v20;
  v23 = v22 + 1;
  if ( v22 + 1 > v21 )
  {
    v27 = *(_QWORD *)(a1 + 24);
    v28 = a1 + 24;
    v29 = a1 + 40;
    if ( v27 > (unsigned __int64)&v30 || (unsigned __int64)&v30 >= v27 + 24 * v22 )
    {
      sub_2237220(v28, v29, v23, 24);
      v24 = *(_QWORD *)(a1 + 24);
      v22 = *(unsigned int *)(a1 + 32);
      v25 = (const __m128i *)&v30;
    }
    else
    {
      sub_2237220(v28, v29, v23, 24);
      v24 = *(_QWORD *)(a1 + 24);
      v22 = *(unsigned int *)(a1 + 32);
      v25 = (const __m128i *)((char *)&v30 + v24 - v27);
    }
  }
  else
  {
    v24 = *(_QWORD *)(a1 + 24);
    v25 = (const __m128i *)&v30;
  }
  v26 = (__m128i *)(v24 + 24 * v22);
  *v26 = _mm_loadu_si128(v25);
  v26[1].m128i_i64[0] = v25[1].m128i_i64[0];
  v15 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v15 + 1;
  *(_DWORD *)(v10 + 16) = v15;
  return *(_QWORD *)(a1 + 24) + 24 * v15 + 16;
}
