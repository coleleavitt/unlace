void __fastcall sub_9CC460(unsigned __int16 **a1, __int64 *a2, __int64 *a3, unsigned int a4, __int64 a5)
{
  unsigned __int16 *v9; // rdi
  unsigned __int16 *v10; // rax
  __int64 v11; // r15
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // r14
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rcx
  char v18; // cl
  unsigned int v19; // eax
  unsigned __int16 *v20; // rdx
  unsigned __int16 *v21; // rax
  void *v22; // rdi
  char *v23; // rax
  unsigned __int16 *v24; // rcx
  int v25; // edx
  int v26; // edx
  __int64 v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  char v32; // cl
  __int64 v33; // rax
  __int64 v34; // rax
  void (*v35)(); // rbp
  __int64 *v36; // rdi
  __m128 v37; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v38; // [rsp+1Ch] [rbp-6Ch] BYREF
  void *v39; // [rsp+20h] [rbp-68h] BYREF
  void *v40; // [rsp+28h] [rbp-60h] BYREF
  __m128i v41; // [rsp+30h] [rbp-58h] BYREF
  __int64 v42; // [rsp+40h] [rbp-48h] BYREF

  v9 = *a1;
  v10 = a1[1];
  v37.m128_u64[0] = (unsigned __int64)a3;
  v11 = (__int64)&v9[(_QWORD)v10];
  v38 = a4;
  v37 = _mm_loadh_ps((const double *)v37.m128_u64);
  v12 = sub_9C9E00(v9, v11, (__int64 *)v37.m128_u64[0], (__int64 *)v37.m128_u64[1]);
  if ( (unsigned __int16 *)v11 == v12 )
  {
    if ( a5 )
    {
      v27 = 0;
      v28 = a3[2];
      v29 = *a3;
      v30 = *a3 & 0xFFFFFFFFFFFFFFF8LL;
      v41.m128i_i64[1] = a3[1];
      v31 = v30;
      v42 = v28;
      v32 = (v29 >> 1) & 3;
      v33 = (v32 & 1) == 0;
      if ( (v32 & 2) != 0 )
        v33 = ((v32 & 1) == 0) | 2u;
      v41.m128i_i64[0] = v31 | (2 * v33);
      v34 = sub_9C9F90((__int64)a1, a2, v41.m128i_i64);
      if ( v34 )
        v27 = *(unsigned int *)(v34 + 36);
      v35 = *(void (**)())(*(_QWORD *)a5 + 24LL);
      sub_9CC3A0(&v41, a3);
      v36 = (__int64 *)v41.m128i_i64[0];
      if ( v35 != nullsub_370 )
      {
        ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64))v35)(
          a5,
          a3[1],
          a3[2],
          v41.m128i_i64[0],
          v41.m128i_i64[1],
          v38,
          v27);
        v36 = (__int64 *)v41.m128i_i64[0];
      }
      if ( v36 != &v42 )
        operator delete(v36);
    }
  }
  else
  {
    v13 = v12;
    v14 = *(_QWORD *)(*a2 + 8LL * *v12);
    if ( *(_DWORD *)(v14 + 40) )
    {
      v23 = (char *)operator new(0x30u);
      v24 = a1[1];
      *(__m128i *)(v23 + 8) = _mm_loadu_si128((const __m128i *)(v14 + 8));
      *((_QWORD *)v23 + 3) = *(_QWORD *)(v14 + 24);
      v23[32] = *(_BYTE *)(v14 + 32);
      v23[33] = *(_BYTE *)(v14 + 33);
      v23[34] = *(_BYTE *)(v14 + 34);
      v25 = *(_DWORD *)(v14 + 36);
      *(_QWORD *)v23 = off_2B405A0;
      *((_DWORD *)v23 + 9) = v25;
      v26 = *(_DWORD *)(v14 + 40);
      v41.m128i_i64[0] = (__int64)v23;
      *((_DWORD *)v23 + 10) = v26 - 1;
      if ( v13 == &(*a1)[(_QWORD)v24] )
      {
        sub_9C8000(v23);
      }
      else
      {
        sub_9C85E0(a2, v13, v41.m128i_i64);
        if ( v41.m128i_i64[0] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41.m128i_i64[0] + 8LL))(v41.m128i_i64[0]);
      }
    }
    else
    {
      v15 = *a3;
      v16 = a3[2];
      v17 = *a3;
      v41.m128i_i64[1] = a3[1];
      v42 = v16;
      v18 = (v17 >> 1) & 3;
      v19 = (v18 & 1) == 0;
      if ( (v18 & 2) != 0 )
        v19 = ((v18 & 1) == 0) | 2;
      v41.m128i_i64[0] = v15 & 0xFFFFFFFFFFFFFFF8LL | (2LL * v19);
      sub_9C81C0(&v39, &v41, 1, (int *)&v38);
      v20 = a1[1];
      v21 = *a1;
      v22 = v39;
      v39 = nullptr;
      v40 = v22;
      if ( v13 != &v21[(_QWORD)v20] )
      {
        sub_9C85E0(a2, v13, (__int64 *)&v40);
        v22 = v40;
      }
      if ( v22 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 8LL))(v22);
      if ( v39 )
        operator delete(v39, 0x30u);
    }
  }
}
