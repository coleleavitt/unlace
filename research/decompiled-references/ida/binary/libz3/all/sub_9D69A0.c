__int64 __fastcall sub_9D69A0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  char v5; // al
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rax
  void *v10; // rbx
  __int64 v12; // r14
  unsigned int v13; // edx
  unsigned int v14; // r13d
  _QWORD *v15; // r15
  __int64 v16; // r12
  __int64 v17; // rdx
  unsigned int v18; // r13d
  const __m128i *v19; // r14
  __m128i *v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __m128i *v27; // rax
  const __m128i *v28; // rdi
  const __m128i *v29; // rsi
  unsigned int v30; // ecx
  __m128i v31; // xmm0
  __int64 i; // rax
  char v33; // [rsp+Fh] [rbp-59h] BYREF
  _QWORD v34[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v35[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *a1;
  v34[0] = 0;
  v34[1] = 0;
  v35[0] = 1;
  v35[1] = 0;
  if ( (unsigned __int8)sub_1666AE0(v4 + 344, a2, v34, &v33) )
  {
    sub_9AF730((__int64)qword_1C7F2C0, a1[1], (__int64)v34, a1[1]);
  }
  else
  {
    v5 = *(_BYTE *)(a2 + 6);
    if ( (v5 & 1) != 0 )
    {
      v6 = a1[3];
      v7 = *(_DWORD *)(v6 + 8) - 1;
      while ( v7 != -1 )
      {
        v8 = v7--;
        v9 = *(_QWORD *)v6 + 16 * v8;
        if ( *(_QWORD *)v9 == a2 )
        {
          ++*(_DWORD *)(v9 + 8);
          break;
        }
      }
    }
    else
    {
      v12 = a1[2];
      *(_BYTE *)(a2 + 6) = v5 | 1;
      v13 = *(_DWORD *)(v12 + 8);
      v14 = *(_DWORD *)(v12 + 12);
      if ( v13 >= v14 )
      {
        v21 = 2 * v14;
        v22 = sub_186B270(8 * v21);
        v13 = *(_DWORD *)(v12 + 8);
        v23 = *(_QWORD **)v12;
        v15 = (_QWORD *)v22;
        if ( v13 )
        {
          if ( v13 - 1 <= 2 || (_QWORD *)v22 == v23 + 1 )
          {
            for ( i = 0; i != v13; ++i )
              v15[i] = v23[i];
          }
          else
          {
            v24 = 0;
            do
            {
              *(__m128i *)&v15[v24] = _mm_loadu_si128((const __m128i *)&v23[v24]);
              v24 += 2;
            }
            while ( v24 != 2LL * (v13 >> 1) );
            if ( (v13 & 1) != 0 )
              v15[v13 & 0xFFFFFFFE] = v23[v13 & 0xFFFFFFFE];
          }
        }
        if ( v23 && v23 != (_QWORD *)(v12 + 16) )
        {
          sub_186B220(v23);
          v13 = *(_DWORD *)(v12 + 8);
        }
        *(_QWORD *)v12 = v15;
        *(_DWORD *)(v12 + 12) = v21;
      }
      else
      {
        v15 = *(_QWORD **)v12;
      }
      v16 = a1[3];
      v15[v13] = a2;
      *(_DWORD *)(v12 + 8) = v13 + 1;
      v17 = *(unsigned int *)(v16 + 8);
      v18 = *(_DWORD *)(v16 + 12);
      if ( (unsigned int)v17 >= v18 )
      {
        v25 = 2 * v18;
        v26 = sub_186B270(16 * v25);
        v17 = *(unsigned int *)(v16 + 8);
        v19 = (const __m128i *)v26;
        v27 = *(__m128i **)v16;
        if ( (_DWORD)v17 )
        {
          v28 = *(const __m128i **)v16;
          v29 = v19;
          v30 = 0;
          do
          {
            v31 = _mm_loadu_si128(v28);
            ++v30;
            ++v28;
            ++v29;
            v29[-1] = v31;
            v17 = *(unsigned int *)(v16 + 8);
          }
          while ( v30 < (unsigned int)v17 );
        }
        if ( v27 != (__m128i *)(v16 + 16) && v27 )
        {
          sub_186B220(v27);
          v17 = *(unsigned int *)(v16 + 8);
        }
        *(_QWORD *)v16 = v19;
        *(_DWORD *)(v16 + 12) = v25;
      }
      else
      {
        v19 = *(const __m128i **)v16;
      }
      v20 = (__m128i *)&v19[v17];
      v20->m128i_i64[0] = a2;
      v20->m128i_i32[2] = 1;
      ++*(_DWORD *)(v16 + 8);
    }
  }
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v34);
  return sub_182CBA0(v10, v35);
}

