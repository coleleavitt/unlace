__int64 __fastcall sub_129CF60(__int64 a1, const __m128i *a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __m128i *v12; // rax
  __m128i *v13; // rdx
  __int64 *v14; // rdi
  void **v15; // rbx
  __int64 v17; // r14
  __int64 v18[2]; // [rsp+0h] [rbp-F8h] BYREF
  void *v19[2]; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v20; // [rsp+20h] [rbp-D8h] BYREF
  void *v21[2]; // [rsp+30h] [rbp-C8h] BYREF
  _OWORD v22[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-98h]
  _QWORD v24[2]; // [rsp+70h] [rbp-88h] BYREF
  _QWORD v25[4]; // [rsp+80h] [rbp-78h] BYREF
  char v26[16]; // [rsp+A0h] [rbp-58h] BYREF
  char v27[32]; // [rsp+B0h] [rbp-48h] BYREF
  char v28; // [rsp+D0h] [rbp-28h] BYREF

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x1000000000LL;
  v4 = (_BYTE *)a2[1].m128i_i64[0];
  v5 = a2[1].m128i_i64[1];
  v21[0] = v22;
  sub_129A5D0(v21, v4, (__int64)&v4[v5]);
  v6 = a2[4].m128i_i64[0];
  v24[0] = v25;
  v7 = _mm_loadu_si128(a2 + 3);
  v23 = v6;
  v8 = a2->m128i_i64[1];
  v22[1] = v7;
  sub_129A5D0(v24, *(_BYTE **)(v8 + 248), *(_QWORD *)(v8 + 248) + *(_QWORD *)(v8 + 256));
  v25[2] = v26;
  strcpy(v26, "lib");
  v25[3] = 3;
  sub_129BDF0(v27, (__int64)v21);
  v18[0] = (__int64)v24;
  v18[1] = 3;
  sub_129A750(v19, v18);
  v9 = *(unsigned int *)(a1 + 8);
  v10 = v9 + 1;
  if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    v17 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 > (unsigned __int64)v19 || (unsigned __int64)v19 >= v17 + 32 * v9 )
    {
      sub_A8C1F0(a1, v10);
      v11 = *(_QWORD *)a1;
      v9 = *(unsigned int *)(a1 + 8);
      v12 = (__m128i *)v19;
    }
    else
    {
      sub_A8C1F0(a1, v10);
      v11 = *(_QWORD *)a1;
      v9 = *(unsigned int *)(a1 + 8);
      v12 = (__m128i *)((char *)v19 + *(_QWORD *)a1 - v17);
    }
  }
  else
  {
    v11 = *(_QWORD *)a1;
    v12 = (__m128i *)v19;
  }
  v13 = (__m128i *)(v11 + 32 * v9);
  v13->m128i_i64[0] = (__int64)v13[1].m128i_i64;
  if ( (__m128i *)v12->m128i_i64[0] == &v12[1] )
  {
    v13[1] = _mm_loadu_si128(v12 + 1);
  }
  else
  {
    v13->m128i_i64[0] = v12->m128i_i64[0];
    v13[1].m128i_i64[0] = v12[1].m128i_i64[0];
  }
  v13->m128i_i64[1] = v12->m128i_i64[1];
  v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
  v14 = (__int64 *)v19[0];
  v12->m128i_i64[1] = 0;
  v12[1].m128i_i8[0] = 0;
  ++*(_DWORD *)(a1 + 8);
  if ( v14 != &v20 )
    operator delete(v14);
  v15 = (void **)&v28;
  do
  {
    while ( 1 )
    {
      v15 -= 4;
      if ( *v15 == v15 + 2 )
        break;
      operator delete(*v15);
      if ( v15 == v24 )
        goto LABEL_10;
    }
  }
  while ( v15 != v24 );
LABEL_10:
  if ( v21[0] != v22 )
    operator delete(v21[0]);
  return a1;
}
