void __fastcall sub_15F0800(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  int v5; // r12d
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r12
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  void *v10; // rdi
  void **v11; // rbx
  void **v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rbp
  __int64 v19; // rax
  _DWORD *v20; // rax
  _QWORD *v21; // r12
  __int64 v22; // rdx
  int v23; // ecx
  _QWORD *v24; // r13
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdi
  int v27; // r13d
  __m128i v28; // [rsp+0h] [rbp-48h] BYREF
  __int64 v29[6]; // [rsp+18h] [rbp-30h] BYREF

  v3 = *a1;
  v4 = *(_QWORD *)a3;
  *(_QWORD *)a3 = 0;
  v5 = *(_DWORD *)(a3 + 16);
  v6 = *(_QWORD *)(a3 + 8);
  if ( *(_BYTE *)(v3 + 20) )
  {
    if ( v6 && v4 )
    {
      if ( v4 < v6 || v4 > v6 + 14848 )
      {
        v7 = *(_QWORD **)(v4 + 528);
        v8 = &v7[8 * (unsigned __int64)*(unsigned int *)(v4 + 536)];
        if ( v7 != v8 )
        {
          do
          {
            while ( 1 )
            {
              v8 -= 8;
              v9 = (_QWORD *)v8[3];
              if ( v9 == v8 + 5 )
                break;
              operator delete(v9);
              if ( v7 == v8 )
                goto LABEL_8;
            }
          }
          while ( v7 != v8 );
LABEL_8:
          v8 = *(_QWORD **)(v4 + 528);
        }
        if ( v8 != (_QWORD *)(v4 + 544) )
          free(v8);
        v10 = *(void **)(v4 + 416);
        v11 = (void **)(v4 + 416);
        if ( v10 != (void *)(v4 + 432) )
          free(v10);
        v12 = (void **)(v4 + 96);
        do
        {
          while ( 1 )
          {
            v11 -= 4;
            if ( *v11 == v11 + 2 )
              break;
            operator delete(*v11);
            if ( v11 == v12 )
            {
              operator delete((void *)v4, 0x3A0u);
              return;
            }
          }
        }
        while ( v11 != v12 );
        operator delete((void *)v4, 0x3A0u);
      }
      else
      {
        v13 = *(unsigned int *)(v6 + 14976);
        *(_DWORD *)(v6 + 14976) = v13 + 1;
        *(_QWORD *)(v6 + 8 * v13 + 14848) = v4;
      }
    }
  }
  else
  {
    v14 = *(unsigned int *)(v3 + 40);
    if ( *(_DWORD *)(v3 + 44) <= *(_DWORD *)(v3 + 40) )
    {
      v28.m128i_i64[0] = *(_QWORD *)(a3 + 8);
      v28 = (__m128i)_mm_loadh_ps((const double *)v28.m128i_i64);
      v16 = sub_2237400(v3 + 32, v3 + 48, 0, 32, v29);
      v17 = _mm_load_si128(&v28);
      v18 = v16;
      v19 = v16 + 32LL * *(unsigned int *)(v3 + 40);
      *(_DWORD *)v19 = a2;
      *(_DWORD *)(v19 + 24) = v5;
      *(__m128i *)(v19 + 8) = v17;
      v20 = *(_DWORD **)(v3 + 32);
      v21 = &v20[8 * *(unsigned int *)(v3 + 40)];
      if ( v20 != (_DWORD *)v21 )
      {
        v22 = v18;
        do
        {
          v23 = *v20;
          *(_QWORD *)(v22 + 16) = 0;
          v20 += 8;
          v22 += 32;
          *(_QWORD *)(v22 - 24) = 0;
          *(_DWORD *)(v22 - 32) = v23;
          *(_DWORD *)(v22 - 8) = *(v20 - 2);
          *(_QWORD *)(v22 - 16) = *((_QWORD *)v20 - 2);
          *(_QWORD *)(v22 - 24) = *((_QWORD *)v20 - 3);
          *((_QWORD *)v20 - 3) = 0;
        }
        while ( v21 != (_QWORD *)v20 );
        v24 = *(_QWORD **)(v3 + 32);
        v21 = &v24[4 * *(unsigned int *)(v3 + 40)];
        if ( v24 != v21 )
        {
          do
          {
            v21 -= 4;
            v25 = v21[1];
            if ( v25 )
            {
              v26 = v21[2];
              if ( v26 )
                sub_1580C40(v26, v25);
            }
          }
          while ( v24 != v21 );
          v21 = *(_QWORD **)(v3 + 32);
        }
      }
      v27 = v29[0];
      if ( (_QWORD *)(v3 + 48) != v21 )
        free(v21);
      *(_QWORD *)(v3 + 32) = v18;
      *(_DWORD *)(v3 + 44) = v27;
      ++*(_DWORD *)(v3 + 40);
    }
    else
    {
      v28.m128i_i64[0] = *(_QWORD *)(a3 + 8);
      v15 = *(_QWORD *)(v3 + 32) + 32 * v14;
      *(_DWORD *)v15 = a2;
      *(_DWORD *)(v15 + 24) = v5;
      *(__m128 *)(v15 + 8) = _mm_loadh_ps((const double *)v28.m128i_i64);
      ++*(_DWORD *)(v3 + 40);
    }
  }
}
