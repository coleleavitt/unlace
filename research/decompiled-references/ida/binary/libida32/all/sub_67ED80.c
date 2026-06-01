void __fastcall sub_67ED80(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __m128i *v4; // rbx
  __int64 v5; // r14
  __int64 v9; // rdi
  char *v10; // r12
  __int64 v11; // rbx
  char *v12; // rbp
  unsigned __int64 v13; // rdx
  char *v14; // rbx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  char *v17; // rax
  char *v18; // rsi
  char *v19; // rsi

  v4 = *(__m128i **)a1;
  v5 = *(_QWORD *)a1 + 4LL * *(_QWORD *)(a1 + 8);
  if ( v5 == *(_QWORD *)a1 )
    return;
  do
  {
    v9 = v4->m128i_u32[0];
    v4 = (__m128i *)((char *)v4 + 4);
    v4[-1].m128i_i32[3] = correct_address(v9, a2, a3, a4, 0);
  }
  while ( (__m128i *)v5 != v4 );
  v10 = *(char **)a1;
  v11 = 4LL * *(_QWORD *)(a1 + 8);
  v12 = (char *)(*(_QWORD *)a1 + v11);
  if ( *(char **)a1 == v12 )
    return;
  if ( !(v11 >> 2) )
  {
    sub_678690(*(__m128i **)a1, (unsigned int *)(*(_QWORD *)a1 + v11), -2);
    goto LABEL_12;
  }
  _BitScanReverse64(&v13, v11 >> 2);
  sub_678690(*(__m128i **)a1, (unsigned int *)(*(_QWORD *)a1 + v11), 2LL * (int)v13);
  if ( v11 <= 64 )
  {
LABEL_12:
    sub_678540(v10, v12);
    return;
  }
  v14 = v10 + 64;
  sub_678540(v10, v10 + 64);
  do
  {
    while ( 1 )
    {
      v15 = *(_DWORD *)v14;
      v16 = *((_DWORD *)v14 - 1);
      v17 = v14 - 4;
      if ( *(_DWORD *)v14 < v16 )
        break;
      v19 = v14;
      v14 += 4;
      *(_DWORD *)v19 = v15;
      if ( v12 == v14 )
        return;
    }
    do
    {
      *((_DWORD *)v17 + 1) = v16;
      v18 = v17;
      v16 = *((_DWORD *)v17 - 1);
      v17 -= 4;
    }
    while ( v15 < v16 );
    v14 += 4;
    *(_DWORD *)v18 = v15;
  }
  while ( v12 != v14 );
}

