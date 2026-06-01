void __fastcall sub_A082A0(__int64 *a1, int a2, char a3, const void *a4, size_t a5, __int64 a6, __int128 a7)
{
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  int *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __m128i *v17; // rsi
  __m128i *v18; // rdi
  __int64 v19; // rdx
  int *v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int *v24; // rax
  __int64 v25; // r12
  int *v27; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+18h] [rbp-C0h] BYREF
  __m128i v29; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v30[168]; // [rsp+30h] [rbp-A8h] BYREF

  v8 = sub_A00840(*a1, a4, a5);
  v9 = *a1;
  v10 = -1;
  if ( a3 )
    v10 = a2;
  HIDWORD(v28) = v8 >> 33;
  LODWORD(v28) = v10;
  if ( (unsigned __int8)sub_9FED20((__int64 *)(v9 + 784), &v28, &v27) )
  {
    v13 = v27 + 2;
    goto LABEL_5;
  }
  v19 = *(unsigned int *)(v9 + 800);
  v20 = v27;
  v21 = *(_DWORD *)(v9 + 792) + 1;
  v22 = (unsigned int)(3 * v19);
  v29.m128i_i64[0] = (__int64)v27;
  if ( 4 * v21 >= (unsigned int)v22 )
  {
    sub_A08050(v9 + 784, 2 * v19, v19, v22, v11, v12);
  }
  else
  {
    v23 = (unsigned int)(v19 - *(_DWORD *)(v9 + 796) - v21);
    if ( (unsigned int)v23 > (unsigned int)v19 >> 3 )
      goto LABEL_10;
    sub_A08050(v9 + 784, v19, v19, v23, v11, v12);
  }
  sub_9FED20((__int64 *)(v9 + 784), &v28, (int **)&v29);
  v20 = (int *)v29.m128i_i64[0];
  v21 = *(_DWORD *)(v9 + 792) + 1;
LABEL_10:
  *(_DWORD *)(v9 + 792) = v21;
  if ( *v20 != -1 || v20[1] != -1 )
    --*(_DWORD *)(v9 + 796);
  *(_QWORD *)v20 = v28;
  v24 = v20 + 6;
  v13 = v20 + 2;
  *(_QWORD *)v13 = v24;
  *((_QWORD *)v13 + 1) = 0x100000000LL;
LABEL_5:
  v29 = _mm_loadu_si128((const __m128i *)&a7);
  sub_9EDF30((__int64)v30, a6);
  v14 = (unsigned int)v13[2];
  v15 = v14 + 1;
  if ( v14 + 1 > (unsigned __int64)(unsigned int)v13[3] )
  {
    v25 = *(_QWORD *)v13;
    if ( *(_QWORD *)v13 > (unsigned __int64)&v29 || (unsigned __int64)&v29 >= v25 + (v14 << 7) )
    {
      sub_9F3D50((__int64)v13, v15);
      v16 = *(_QWORD *)v13;
      v14 = (unsigned int)v13[2];
      v17 = &v29;
    }
    else
    {
      sub_9F3D50((__int64)v13, v15);
      v16 = *(_QWORD *)v13;
      v14 = (unsigned int)v13[2];
      v17 = (__m128i *)((char *)&v29 + *(_QWORD *)v13 - v25);
    }
  }
  else
  {
    v16 = *(_QWORD *)v13;
    v17 = &v29;
  }
  v18 = (__m128i *)(v16 + (v14 << 7));
  *v18 = _mm_loadu_si128(v17);
  sub_9E6480(v18 + 1, v17 + 1);
  ++v13[2];
  sub_9E5FA0((__int64)v30);
}

