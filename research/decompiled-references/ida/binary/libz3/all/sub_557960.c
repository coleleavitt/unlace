__int64 __fastcall sub_557960(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 *v7; // rax
  _QWORD *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // r9
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  __int64 v15; // rsi
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  _QWORD *v18; // r15
  __int64 result; // rax
  __int64 v20; // r15
  _QWORD *v21; // rsi
  __int64 v22; // rbx
  __int64 *v23; // rdx
  unsigned int v24; // ecx
  unsigned int v25; // ebx
  __int64 v26; // rbx
  __int64 v27; // rax
  _QWORD *v28; // rdi
  __int64 v29; // rax
  __int64 k; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  _QWORD *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  _QWORD *v37; // rdi
  __int64 v38; // rax
  __int64 i; // rax
  __int64 j; // rax
  __int64 *v41; // [rsp+8h] [rbp-50h]
  __int64 *v42; // [rsp+8h] [rbp-50h]
  __int64 *v43; // [rsp+8h] [rbp-50h]
  __int64 v44; // [rsp+8h] [rbp-50h]
  __int64 *v45; // [rsp+10h] [rbp-48h]

  *(_DWORD *)(a3 + 8) = 0;
  if ( *((_DWORD *)a2 + 4) || (result = sub_182A660(a1, *a2, *(_QWORD *)(a1 + 552)), !(_BYTE)result) )
  {
    v6 = sub_1829AC0(a1);
    v7 = (__int64 *)sub_17E9C90(a1 + 560, 88);
    v8 = v7 + 3;
    *v7 = v6;
    v9 = *a2;
    v7[1] = (__int64)(v7 + 3);
    v7[2] = 0x800000000LL;
    v41 = v7;
    v10 = sub_1829B00(a1, v9);
    v11 = v41;
    v12 = v10;
    v13 = *((_DWORD *)v41 + 4);
    v14 = *((_DWORD *)v41 + 5);
    if ( v13 >= v14 )
    {
      v45 = v41;
      v35 = 2 * v14;
      v44 = v10;
      v36 = sub_186B270(8 * v35);
      v11 = v45;
      v12 = v44;
      v15 = v36;
      v13 = *((_DWORD *)v45 + 4);
      v37 = (_QWORD *)v45[1];
      if ( v13 )
      {
        if ( v13 - 1 <= 2 || (_QWORD *)v36 == v37 + 1 )
        {
          for ( i = 0; i != v13; ++i )
            *(_QWORD *)(v15 + i * 8) = v37[i];
        }
        else
        {
          v38 = 0;
          do
          {
            *(__m128i *)(v15 + v38 * 8) = _mm_loadu_si128((const __m128i *)&v37[v38]);
            v38 += 2;
          }
          while ( v38 != 2LL * (v13 >> 1) );
          if ( (v13 & 1) != 0 )
            *(_QWORD *)(v15 + 8LL * (v13 & 0xFFFFFFFE)) = v37[v13 & 0xFFFFFFFE];
        }
      }
      if ( v8 != v37 && v37 )
      {
        sub_186B220(v37);
        v11 = v45;
        v12 = v44;
        v13 = *((_DWORD *)v45 + 4);
      }
      v11[1] = v15;
      *((_DWORD *)v11 + 5) = v35;
    }
    else
    {
      v15 = v41[1];
    }
    *(_QWORD *)(v15 + 8LL * v13) = v12;
    *((_DWORD *)v11 + 4) = v13 + 1;
    v16 = *(_DWORD *)(a3 + 8);
    v17 = *(_DWORD *)(a3 + 12);
    if ( v16 >= v17 )
    {
      v43 = v11;
      v31 = 2 * v17;
      v32 = sub_186B270(8 * v31);
      v16 = *(_DWORD *)(a3 + 8);
      v33 = *(_QWORD **)a3;
      v11 = v43;
      v18 = (_QWORD *)v32;
      if ( v16 )
      {
        if ( v16 - 1 <= 2 || (_QWORD *)v32 == v33 + 1 )
        {
          for ( j = 0; j != v16; ++j )
            v18[j] = v33[j];
        }
        else
        {
          v34 = 0;
          do
          {
            *(__m128i *)&v18[v34] = _mm_loadu_si128((const __m128i *)&v33[v34]);
            v34 += 2;
          }
          while ( v34 != 2LL * (v16 >> 1) );
          if ( (v16 & 1) != 0 )
            v18[v16 & 0xFFFFFFFE] = v33[v16 & 0xFFFFFFFE];
        }
      }
      if ( v33 != (_QWORD *)(a3 + 16) && v33 )
      {
        sub_186B220(v33);
        v16 = *(_DWORD *)(a3 + 8);
        v11 = v43;
      }
      *(_QWORD *)a3 = v18;
      *(_DWORD *)(a3 + 12) = v31;
    }
    else
    {
      v18 = *(_QWORD **)a3;
    }
    v18[v16] = v11;
    *(_DWORD *)(a3 + 8) = v16 + 1;
    result = *((unsigned int *)a2 + 4);
    if ( (_DWORD)result )
    {
      v20 = 0;
      do
      {
        v22 = sub_1829B00(a1, *(_QWORD *)(a2[1] + 8 * v20));
        v23 = (__int64 *)sub_17E9C90(a1 + 560, 88);
        *v23 = v22;
        v23[2] = 0x800000000LL;
        v24 = *(_DWORD *)(a3 + 8);
        v25 = *(_DWORD *)(a3 + 12);
        v23[1] = (__int64)(v23 + 3);
        if ( v24 < v25 )
        {
          v21 = *(_QWORD **)a3;
        }
        else
        {
          v42 = v23;
          v26 = 2 * v25;
          v27 = sub_186B270(8 * v26);
          v24 = *(_DWORD *)(a3 + 8);
          v28 = *(_QWORD **)a3;
          v23 = v42;
          v21 = (_QWORD *)v27;
          if ( v24 )
          {
            if ( v24 - 1 <= 2 || (_QWORD *)v27 == v28 + 1 )
            {
              for ( k = 0; k != v24; ++k )
                v21[k] = v28[k];
            }
            else
            {
              v29 = 0;
              do
              {
                *(__m128i *)&v21[v29] = _mm_loadu_si128((const __m128i *)&v28[v29]);
                v29 += 2;
              }
              while ( 2LL * (v24 >> 1) != v29 );
              if ( (v24 & 1) != 0 )
                v21[v24 & 0xFFFFFFFE] = v28[v24 & 0xFFFFFFFE];
            }
          }
          if ( v28 != (_QWORD *)(a3 + 16) )
          {
            if ( v28 )
            {
              sub_186B220(v28);
              v24 = *(_DWORD *)(a3 + 8);
              v23 = v42;
            }
          }
          *(_QWORD *)a3 = v21;
          *(_DWORD *)(a3 + 12) = v26;
        }
        result = v24;
        ++v20;
        v21[v24] = v23;
        *(_DWORD *)(a3 + 8) = v24 + 1;
      }
      while ( (unsigned int)v20 < *((_DWORD *)a2 + 4) );
    }
  }
  return result;
}

