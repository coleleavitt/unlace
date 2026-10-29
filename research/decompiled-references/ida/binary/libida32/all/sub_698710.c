__int64 __fastcall sub_698710(__int64 *a1, __int64 *a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 result; // rax
  unsigned __int64 v24; // rdx

  v2 = *((_BYTE *)a1 + 28);
  *((_BYTE *)a1 + 28) = *((_BYTE *)a2 + 28);
  v3 = *a2;
  *((_BYTE *)a2 + 28) = v2;
  v4 = *a1;
  *a1 = v3;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  a1[1] = a2[1];
  a1[2] = a2[2];
  LODWORD(v3) = *((_DWORD *)a2 + 6);
  *a2 = v4;
  *(__m128i *)(a2 + 1) = v5;
  LODWORD(v4) = *((_DWORD *)a1 + 6);
  *((_DWORD *)a1 + 6) = v3;
  LOBYTE(v3) = *((_BYTE *)a2 + 29);
  *((_DWORD *)a2 + 6) = v4;
  LOBYTE(v4) = *((_BYTE *)a1 + 29);
  *((_BYTE *)a1 + 29) = v3;
  v6 = a2[4];
  *((_BYTE *)a2 + 29) = v4;
  v7 = a1[4];
  a1[4] = v6;
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 5));
  a1[5] = a2[5];
  a1[6] = a2[6];
  *(__m128i *)(a2 + 5) = v8;
  a2[4] = v7;
  v9 = a1[17];
  v10 = _mm_loadu_si128((const __m128i *)a1 + 9);
  a1[17] = a2[17];
  a1[18] = a2[18];
  a1[19] = a2[19];
  v11 = _mm_loadu_si128((const __m128i *)(a2 + 11));
  a2[17] = v9;
  *((__m128i *)a2 + 9) = v10;
  v12 = a1[12];
  v10.m128i_i32[0] = *((_DWORD *)a1 + 22);
  *(__m128i *)(a1 + 11) = v11;
  a2[12] = v12;
  *((_DWORD *)a2 + 22) = v10.m128i_i32[0];
  v13 = (__int64 *)a1[7];
  v14 = (__int64 *)a2[7];
  if ( v13 == a1 + 13 )
  {
    v13 = a2 + 13;
    if ( v14 != a2 + 13 )
      goto LABEL_3;
  }
  else
  {
    if ( v14 != a2 + 13 )
    {
LABEL_3:
      a1[7] = (__int64)v14;
      a2[7] = (__int64)v13;
      goto LABEL_4;
    }
    a2[7] = (__int64)v13;
    a1[7] = (__int64)(a1 + 13);
  }
LABEL_4:
  v15 = a1[8];
  a1[8] = a2[8];
  v16 = a2[9];
  a2[8] = v15;
  v17 = a1[9];
  a1[9] = v16;
  v18 = a2[10];
  a2[9] = v17;
  v19 = a1[10];
  a1[10] = v18;
  v20 = a2[13];
  a2[10] = v19;
  v21 = a1[13];
  a1[13] = v20;
  a2[13] = v21;
  v22 = a1[9];
  if ( v22 )
    *(_QWORD *)(a1[7] + 8 * (*(unsigned int *)(v22 + 8) % (unsigned __int64)a1[8])) = a1 + 9;
  result = a2[9];
  if ( result )
  {
    v24 = *(unsigned int *)(result + 8) % (unsigned __int64)a2[8];
    result = a2[7];
    *(_QWORD *)(result + 8 * v24) = a2 + 9;
  }
  return result;
}

