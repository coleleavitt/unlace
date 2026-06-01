void __fastcall sub_A2BB70(__int64 *a1, int a2, const void *a3, size_t a4, __int64 a5, __int64 a6, __int128 a7)
{
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r8
  __int64 v11; // r9
  int *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __m128i *v16; // rsi
  __m128i *v17; // rdi
  __int64 v18; // rdx
  int *v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int *v23; // rax
  __int64 v24; // r12
  int *v25; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+8h] [rbp-C0h] BYREF
  __m128i v27; // [rsp+10h] [rbp-B8h] BYREF
  _BYTE v28[168]; // [rsp+20h] [rbp-A8h] BYREF

  v8 = sub_A24580(*a1, a3, a4);
  v9 = *a1;
  LODWORD(v26) = a2;
  HIDWORD(v26) = v8 >> 33;
  if ( (unsigned __int8)sub_A22990((__int64 *)(v9 + 688), &v26, &v25) )
  {
    v12 = v25 + 2;
    goto LABEL_3;
  }
  v18 = *(unsigned int *)(v9 + 704);
  v19 = v25;
  v20 = *(_DWORD *)(v9 + 696) + 1;
  v21 = (unsigned int)(3 * v18);
  v27.m128i_i64[0] = (__int64)v25;
  if ( 4 * v20 >= (unsigned int)v21 )
  {
    sub_A2B920(v9 + 688, 2 * v18, v18, v21, v10, v11);
  }
  else
  {
    v22 = (unsigned int)(v18 - *(_DWORD *)(v9 + 700) - v20);
    if ( (unsigned int)v22 > (unsigned int)v18 >> 3 )
      goto LABEL_8;
    sub_A2B920(v9 + 688, v18, v18, v22, v10, v11);
  }
  sub_A22990((__int64 *)(v9 + 688), &v26, (int **)&v27);
  v19 = (int *)v27.m128i_i64[0];
  v20 = *(_DWORD *)(v9 + 696) + 1;
LABEL_8:
  *(_DWORD *)(v9 + 696) = v20;
  if ( *v19 != -1 || v19[1] != -1 )
    --*(_DWORD *)(v9 + 700);
  *(_QWORD *)v19 = v26;
  v23 = v19 + 6;
  v12 = v19 + 2;
  *(_QWORD *)v12 = v23;
  *((_QWORD *)v12 + 1) = 0x100000000LL;
LABEL_3:
  v27 = _mm_loadu_si128((const __m128i *)&a7);
  sub_A11C70((__int64)v28, a5);
  v13 = (unsigned int)v12[2];
  v14 = v13 + 1;
  if ( v13 + 1 > (unsigned __int64)(unsigned int)v12[3] )
  {
    v24 = *(_QWORD *)v12;
    if ( *(_QWORD *)v12 > (unsigned __int64)&v27 || (unsigned __int64)&v27 >= v24 + (v13 << 7) )
    {
      sub_A16940((__int64)v12, v14);
      v15 = *(_QWORD *)v12;
      v13 = (unsigned int)v12[2];
      v16 = &v27;
    }
    else
    {
      sub_A16940((__int64)v12, v14);
      v15 = *(_QWORD *)v12;
      v13 = (unsigned int)v12[2];
      v16 = (__m128i *)((char *)&v27 + *(_QWORD *)v12 - v24);
    }
  }
  else
  {
    v15 = *(_QWORD *)v12;
    v16 = &v27;
  }
  v17 = (__m128i *)(v15 + (v13 << 7));
  *v17 = _mm_loadu_si128(v16);
  sub_A0A1C0(v17 + 1, v16 + 1);
  ++v12[2];
  sub_A09CE0((__int64)v28);
}
