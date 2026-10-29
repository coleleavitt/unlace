void __fastcall sub_A0D270(__int64 *a1, int a2, const void *a3, size_t a4, char a5, __int64 a6, __int128 a7)
{
  unsigned __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  __m128i *v18; // r13
  __m128i *v19; // r12
  __int8 v20; // al
  __int64 v21; // rdx
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // [rsp+8h] [rbp-E0h] BYREF
  char v29[4]; // [rsp+14h] [rbp-D4h] BYREF
  int v30; // [rsp+18h] [rbp-D0h]
  int v31; // [rsp+1Ch] [rbp-CCh]
  __m128i v32; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v33[112]; // [rsp+30h] [rbp-B8h] BYREF
  char v34; // [rsp+A0h] [rbp-48h]

  v9 = sub_A00840(*a1, a3, a4);
  v10 = *a1;
  v29[0] = a5;
  v31 = a2;
  v30 = v9 >> 33;
  if ( sub_9FD9D0((__int64 *)(v10 + 664), v29, &v28) )
  {
    v13 = v28 + 16;
    goto LABEL_3;
  }
  v21 = *(unsigned int *)(v10 + 680);
  v22 = v28;
  v23 = *(_DWORD *)(v10 + 672) + 1;
  v24 = (unsigned int)(3 * v21);
  v32.m128i_i64[0] = v28;
  if ( 4 * v23 >= (unsigned int)v24 )
  {
    sub_A0CFE0(v10 + 664, 2 * v21, v21, v24, v11, v12);
  }
  else
  {
    v25 = (unsigned int)(v21 - *(_DWORD *)(v10 + 676) - v23);
    if ( (unsigned int)v25 > (unsigned int)v21 >> 3 )
      goto LABEL_8;
    sub_A0CFE0(v10 + 664, v21, v21, v25, v11, v12);
  }
  sub_9FD9D0((__int64 *)(v10 + 664), v29, &v32);
  v22 = v32.m128i_i64[0];
  v23 = *(_DWORD *)(v10 + 672) + 1;
LABEL_8:
  *(_DWORD *)(v10 + 672) = v23;
  if ( *(_DWORD *)(v22 + 8) != -1 || *(_DWORD *)(v22 + 4) != -1 || *(_BYTE *)v22 != 0xFF )
    --*(_DWORD *)(v10 + 676);
  *(_DWORD *)(v22 + 8) = v31;
  *(_DWORD *)(v22 + 4) = v30;
  *(_BYTE *)v22 = v29[0];
  v26 = v22 + 32;
  v13 = v22 + 16;
  *(_QWORD *)v13 = v26;
  *(_QWORD *)(v13 + 8) = 0x100000000LL;
LABEL_3:
  v32 = _mm_loadu_si128((const __m128i *)&a7);
  sub_9EDF30((__int64)v33, a6);
  v14 = *(unsigned int *)(v13 + 12);
  v34 = *(_BYTE *)(a6 + 112) & 3 | v34 & 0xFC;
  v15 = *(unsigned int *)(v13 + 8);
  v16 = v15 + 1;
  if ( v15 + 1 > v14 )
  {
    v27 = *(_QWORD *)v13;
    if ( *(_QWORD *)v13 > (unsigned __int64)&v32 || (unsigned __int64)&v32 >= v27 + 136 * v15 )
    {
      sub_9F1890(v13, v16);
      v18 = &v32;
      v17 = *(_QWORD *)v13;
      v15 = *(unsigned int *)(v13 + 8);
    }
    else
    {
      sub_9F1890(v13, v16);
      v17 = *(_QWORD *)v13;
      v15 = *(unsigned int *)(v13 + 8);
      v18 = (__m128i *)((char *)&v32 + *(_QWORD *)v13 - v27);
    }
  }
  else
  {
    v17 = *(_QWORD *)v13;
    v18 = &v32;
  }
  v19 = (__m128i *)(v17 + 136 * v15);
  *v19 = _mm_loadu_si128(v18);
  sub_9E6480(v19 + 1, v18 + 1);
  v20 = v18[8].m128i_i8[0] & 1 | v19[8].m128i_i8[0] & 0xFE;
  v19[8].m128i_i8[0] = v20;
  v19[8].m128i_i8[0] = v18[8].m128i_i8[0] & 2 | v20 & 0xFD;
  ++*(_DWORD *)(v13 + 8);
  sub_9E5FA0((__int64)v33);
}

