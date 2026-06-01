__int64 __fastcall sub_1D37560(__int64 *a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  char v7; // al
  int v8; // r12d
  int v9; // r14d
  unsigned int *v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // edx
  unsigned int *v13; // rax
  __int64 v14; // rsi
  __int64 result; // rax
  unsigned int *i; // r15
  __int64 v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r10
  int v22; // r9d
  __int64 v23; // rax
  char *v24; // rdi
  char *v25; // rax
  const __m128i *v26; // rbp
  __int64 v27; // rcx
  __int64 v28; // r9
  const __m128i *v29; // r10
  unsigned __int64 v30; // r9
  __m128i v31; // xmm0
  __int64 v32; // rdx
  const __m128i *v33; // roff
  int v34; // eax
  unsigned __int16 v35; // r8
  int v36; // [rsp+0h] [rbp-58h]
  unsigned __int64 v37; // [rsp+0h] [rbp-58h]
  const __m128i *v38; // [rsp+0h] [rbp-58h]
  int v39; // [rsp+8h] [rbp-50h]
  int v40; // [rsp+8h] [rbp-50h]
  unsigned int v41; // [rsp+14h] [rbp-44h] BYREF
  const __m128i *v42; // [rsp+18h] [rbp-40h] BYREF

  v3 = *a1;
  v42 = nullptr;
  v4 = *(_QWORD *)(v3 + 11280);
  v41 = 0;
  if ( v4 && (v5 = sub_1DBAFC0(v4, &v42, &v41), (v6 = v5) != 0) )
  {
    v7 = *(_BYTE *)(v5 + 28) & 0x7F;
    if ( v7 == 67 )
    {
      v8 = sub_BBE5B0(v6);
      v9 = sub_BBE590(v6);
    }
    else
    {
      if ( v7 == 47 )
      {
        v35 = *(_WORD *)(v6 + 70) >> 4;
        v9 = *(_DWORD *)(v6 + 68) & 0xFFFFF;
      }
      else
      {
        v35 = *(_WORD *)(v6 + 66) >> 4;
        v9 = *(_DWORD *)(v6 + 64) & 0xFFFFF;
      }
      v8 = v35;
    }
  }
  else
  {
    v8 = -1;
    v9 = -1;
  }
  v10 = (unsigned int *)a1[6];
  if ( a2 )
  {
    v11 = a1[3];
    v12 = *v10;
    if ( *(_DWORD *)(v11 + 28) > *v10 )
    {
      v13 = v10 + 56;
      v14 = (__int64)&v10[56 * (a2 - 1) + 56];
      do
      {
        if ( *(_DWORD *)(v11 + 24) == v9 && v8 == v12 )
        {
          *((_BYTE *)a1 + 36) = 1;
          if ( (unsigned int *)v14 == v13 )
            goto LABEL_14;
        }
        else if ( (unsigned int *)v14 == v13 )
        {
          goto LABEL_14;
        }
        v12 = *v13;
        v13 += 56;
      }
      while ( v12 < *(_DWORD *)(v11 + 28) );
    }
    *((_BYTE *)a1 + 36) = 0;
  }
  else
  {
LABEL_14:
    if ( *((_BYTE *)a1 + 36) )
    {
      *((_DWORD *)a1 + 8) += v41;
    }
    else
    {
      v34 = *((_DWORD *)a1 + 10);
      if ( v34 )
        *((_DWORD *)a1 + 8) = *((_DWORD *)a1 + 8) + v34 - 1;
    }
  }
  result = *((unsigned int *)a1 + 14);
  for ( i = &v10[56 * result]; i != v10; v10 += 56 )
  {
    v18 = a1[3];
    v19 = *v10;
    v20 = *(unsigned int *)(v18 + 248);
    result = v19;
    if ( (unsigned int)v19 < (unsigned int)v20 )
    {
      v17 = 8 * v19;
      *((_QWORD *)v10 + 27) = *(_QWORD *)(*(_QWORD *)(v18 + 240) + 8 * v19);
      v18 = a1[3];
    }
    else
    {
      v21 = (unsigned int)(v19 + 1);
      v22 = v19 + 1;
      if ( v21 == v20 )
      {
        v17 = 8 * v19;
      }
      else
      {
        if ( v21 >= v20 )
        {
          if ( v21 > *(unsigned int *)(v18 + 252) )
          {
            v39 = v19 + 1;
            v37 = (unsigned int)(v19 + 1);
            sub_2237220(v18 + 240, v18 + 256, v37, 8);
            v20 = *(unsigned int *)(v18 + 248);
            v22 = v39;
            v21 = v37;
          }
          v23 = *(_QWORD *)(v18 + 240);
          v24 = (char *)(v23 + 8 * v20);
          v25 = (char *)(v23 + 8 * v21);
          if ( v24 != v25 )
          {
            v36 = v22;
            memset(v24, 0, 8 * ((unsigned __int64)(v25 - 8 - v24) >> 3) + 8);
            v22 = v36;
          }
        }
        *(_DWORD *)(v18 + 248) = v22;
        v18 = a1[3];
        result = *v10;
        v17 = 8 * result;
      }
    }
    *(_QWORD *)(*(_QWORD *)(v18 + 240) + v17) = v10;
    if ( *(_DWORD *)(a1[3] + 24) == v9 && v8 == (_DWORD)result )
    {
      v26 = v42;
      v27 = v10[20];
      v28 = 24LL * v41;
      v29 = (const __m128i *)((char *)v42 + v28);
      v30 = 0xAAAAAAAAAAAAAAABLL * (v28 >> 3);
      if ( v30 + v27 > v10[21] )
      {
        v40 = v30;
        v38 = v29;
        sub_2237220(v10 + 18, v10 + 22, v30 + v27, 32);
        v27 = v10[20];
        LODWORD(v30) = v40;
        v29 = v38;
      }
      result = *((_QWORD *)v10 + 9) + 32 * v27;
      if ( v26 != v29 )
      {
        do
        {
          v31 = _mm_loadu_si128(v26);
          v26 = (const __m128i *)((char *)v26 + 24);
          result += 32;
          *(__m128i *)(result - 32) = v31;
          v32 = v26[-1].m128i_i64[1];
          *(_BYTE *)(result - 8) = 0;
          *(_QWORD *)(result - 16) = v32;
        }
        while ( v29 != v26 );
        LODWORD(v27) = v10[20];
      }
      v10[20] = v27 + v30;
      if ( !*((_BYTE *)a1 + 39) && !*((_BYTE *)a1 + 36) )
      {
        result = *(_QWORD *)a1[2] + 32LL * *v10;
        v33 = (const __m128i *)(*((_QWORD *)v10 + 9) + 32LL * *((unsigned int *)a1 + 8));
        *(__m128i *)result = _mm_loadu_si128(v33);
        *(_QWORD *)(result + 16) = v33[1].m128i_i64[0];
        *(_BYTE *)(result + 24) = v33[1].m128i_i8[8];
      }
    }
  }
  return result;
}
