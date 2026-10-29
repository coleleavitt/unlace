__int64 __fastcall sub_10D9660(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128i *a6)
{
  __m128i *v6; // r14
  __int64 v8; // rbx
  int v9; // esi
  int v10; // eax
  bool v11; // zf
  __m128i v12; // xmm0
  __int64 v13; // rbx
  __int64 v14; // r15
  int v15; // ebx
  unsigned int v16; // eax
  const void *v17; // r10
  size_t v18; // r11
  __int64 v19; // r13
  char *v20; // rsi
  char v21; // al
  bool v22; // al
  __int64 v23; // rax
  int v25; // r11d
  char v26; // al
  int v27; // eax
  bool v28; // [rsp+0h] [rbp-78h]
  __m128i *v29; // [rsp+0h] [rbp-78h]
  int v30; // [rsp+Ch] [rbp-6Ch]
  int v31; // [rsp+Ch] [rbp-6Ch]
  __m128i *v32; // [rsp+10h] [rbp-68h]
  int v33; // [rsp+10h] [rbp-68h]
  const void *v34; // [rsp+10h] [rbp-68h]
  int v35; // [rsp+18h] [rbp-60h]
  const void *v36; // [rsp+18h] [rbp-60h]
  size_t v37; // [rsp+18h] [rbp-60h]
  size_t v38; // [rsp+20h] [rbp-58h]
  __m128i *v39; // [rsp+20h] [rbp-58h]
  const void *v40; // [rsp+28h] [rbp-50h]
  int v41; // [rsp+28h] [rbp-50h]
  __m128i *v42; // [rsp+38h] [rbp-40h] BYREF

  v6 = (__m128i *)a3;
  LODWORD(v8) = *(_DWORD *)(a2 + 16);
  if ( !(_DWORD)v8 )
  {
    v42 = nullptr;
LABEL_3:
    v9 = 2 * v8;
    goto LABEL_4;
  }
  v14 = *(_QWORD *)a2;
  v15 = v8 - 1;
  v16 = sub_2224B50(*(_QWORD *)a3, *(_QWORD *)(a3 + 8));
  v17 = (const void *)v6->m128i_i64[0];
  v18 = v6->m128i_u64[1];
  a5 = v15 & v16;
  v28 = v6->m128i_i64[0] == -2;
  if ( v18 )
  {
    v30 = 1;
    a6 = nullptr;
    while ( 1 )
    {
      v19 = v14 + 16LL * (unsigned int)a5;
      v20 = *(char **)v19;
      if ( *(_QWORD *)v19 == -1 )
        goto LABEL_28;
      if ( v20 == (char *)-2LL )
      {
        v22 = v28;
      }
      else
      {
        if ( v18 != *(_QWORD *)(v19 + 8) )
          goto LABEL_13;
        v41 = a5;
        v39 = a6;
        v37 = v18;
        v34 = v17;
        v27 = memcmp(v17, v20, v18);
        v17 = v34;
        v18 = v37;
        a6 = v39;
        LODWORD(a5) = v41;
        v22 = v27 == 0;
      }
      if ( v22 )
        goto LABEL_19;
LABEL_13:
      v40 = v17;
      v38 = v18;
      v35 = a5;
      v32 = a6;
      v21 = sub_E16190(*(char **)v19, *(_QWORD *)(v19 + 8), (const void *)0xFFFFFFFFFFFFFFFELL, 0);
      a6 = v32;
      v18 = v38;
      v17 = v40;
      if ( !v32 && v21 )
        a6 = (__m128i *)v19;
      a5 = v15 & (unsigned int)(v30 + v35);
      ++v30;
    }
  }
  v25 = 1;
  a6 = nullptr;
  while ( 1 )
  {
    v19 = v14 + 16LL * (unsigned int)a5;
    if ( *(_QWORD *)v19 == -1 )
      break;
    if ( *(_QWORD *)v19 == -2 )
    {
      if ( v17 == (const void *)-2LL )
        goto LABEL_19;
    }
    else if ( !*(_QWORD *)(v19 + 8) )
    {
      goto LABEL_19;
    }
    v36 = v17;
    v33 = v25;
    v31 = a5;
    v29 = a6;
    v26 = sub_E16190(*(char **)v19, *(_QWORD *)(v19 + 8), (const void *)0xFFFFFFFFFFFFFFFELL, 0);
    v17 = v36;
    if ( v29 || !v26 )
      v19 = (__int64)v29;
    a6 = (__m128i *)v19;
    v25 = v33 + 1;
    a5 = v15 & (unsigned int)(v33 + v31);
  }
LABEL_28:
  if ( v17 == (const void *)-1LL )
  {
LABEL_19:
    v23 = *(unsigned int *)(a2 + 16);
    *(_QWORD *)a1 = v19;
    *(_BYTE *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a2 + 16 * v23;
    return a1;
  }
  v8 = *(unsigned int *)(a2 + 16);
  if ( !a6 )
    a6 = (__m128i *)v19;
  v10 = *(_DWORD *)(a2 + 8) + 1;
  a3 = (unsigned int)(3 * v8);
  a4 = (unsigned int)(4 * v10);
  v42 = a6;
  if ( (unsigned int)a4 >= (unsigned int)a3 )
    goto LABEL_3;
  a4 = (unsigned int)(v8 - (v10 + *(_DWORD *)(a2 + 12)));
  a3 = (unsigned int)v8 >> 3;
  if ( (unsigned int)a4 > (unsigned int)a3 )
    goto LABEL_5;
  v9 = v8;
LABEL_4:
  sub_10D8F50(a2, v9, a3, a4, a5, (__int64)a6);
  sub_10C5570((__int64 *)a2, v6, &v42);
  v8 = *(unsigned int *)(a2 + 16);
  a6 = v42;
  v10 = *(_DWORD *)(a2 + 8) + 1;
LABEL_5:
  v11 = a6->m128i_i64[0] == -1;
  *(_DWORD *)(a2 + 8) = v10;
  if ( !v11 )
    --*(_DWORD *)(a2 + 12);
  v12 = _mm_loadu_si128(v6);
  v13 = *(_QWORD *)a2 + 16 * v8;
  *(_QWORD *)a1 = a6;
  *(_QWORD *)(a1 + 8) = v13;
  *a6 = v12;
  *(_BYTE *)(a1 + 16) = 1;
  return a1;
}

