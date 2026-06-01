__int64 __fastcall sub_554430(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  unsigned int v5; // ebx
  __int64 result; // rax
  unsigned int v7; // r14d
  int v8; // r13d
  unsigned int v10; // r12d
  __int64 v11; // r15
  __int64 v12; // rsi
  int v13; // eax
  unsigned int v14; // r10d
  __int64 v15; // r11
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // r13
  int v19; // r15d
  _QWORD *v20; // rbp
  __int64 v21; // rdx
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v28; // [rsp+8h] [rbp-60h]
  int v29; // [rsp+18h] [rbp-50h]
  int v30; // [rsp+1Ch] [rbp-4Ch]
  unsigned int v31; // [rsp+20h] [rbp-48h]
  _QWORD *v32; // [rsp+28h] [rbp-40h]

  v4 = a3;
  v5 = a4;
  v31 = a3;
  sub_182A020(a1, *(_QWORD *)a2, a3, a4);
  result = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)result )
  {
    v7 = 2 * v4;
    v29 = 1 << (v7 & 0x1F);
    v8 = 1 << (v7 + 1);
    v28 = v7 >> 5;
    v32 = (_QWORD *)(a2 + 24);
    v30 = v8;
    v10 = 0;
    do
    {
      v11 = 8LL * v10;
      v12 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + v11);
      v13 = ((*(_DWORD *)(v12 + 4 * v28) & v30) != 0) | (2 * ((*(_DWORD *)(v12 + 4 * v28) & v29) != 0));
      if ( v5 == v13 || v13 == 3 || v5 == 3 )
      {
        ++v10;
        sub_182A020(a1, v12, v31, v5);
        result = *(unsigned int *)(a2 + 16);
      }
      else
      {
        sub_182A4B0(a1, v12);
        v14 = *(_DWORD *)(a2 + 16);
        if ( v10 + 1 >= v14 )
        {
          result = v14 - 1;
          if ( !v14 )
          {
            LODWORD(v18) = *(_DWORD *)(a2 + 20);
            v19 = -1;
            LODWORD(result) = 0;
            do
            {
              if ( (unsigned int)result < (unsigned int)v18 )
              {
                v20 = *(_QWORD **)(a2 + 8);
              }
              else
              {
                v18 = (unsigned int)(2 * v18);
                result = sub_186B270(8 * v18);
                v22 = *(_QWORD **)(a2 + 8);
                v20 = (_QWORD *)result;
                LODWORD(result) = *(_DWORD *)(a2 + 16);
                if ( (_DWORD)result )
                {
                  if ( (unsigned int)(result - 1) <= 2 || v20 == v22 + 1 )
                  {
                    v24 = 0;
                    do
                    {
                      v20[v24] = v22[v24];
                      ++v24;
                    }
                    while ( v24 != (unsigned int)result );
                  }
                  else
                  {
                    v23 = 0;
                    do
                    {
                      *(__m128i *)&v20[v23] = _mm_loadu_si128((const __m128i *)&v22[v23]);
                      v23 += 2;
                    }
                    while ( 2LL * ((unsigned int)result >> 1) != v23 );
                    if ( (result & 1) != 0 )
                      v20[(unsigned int)result & 0xFFFFFFFE] = v22[(unsigned int)result & 0xFFFFFFFE];
                  }
                }
                if ( v22 && v22 != v32 )
                {
                  sub_186B220(v22);
                  LODWORD(result) = *(_DWORD *)(a2 + 16);
                }
                *(_QWORD *)(a2 + 8) = v20;
                *(_DWORD *)(a2 + 20) = v18;
              }
              v21 = (unsigned int)result;
              result = (unsigned int)(result + 1);
              v20[v21] = 0;
              *(_DWORD *)(a2 + 16) = result;
              --v19;
            }
            while ( v19 );
            continue;
          }
        }
        else
        {
          v15 = *(_QWORD *)(a2 + 8);
          if ( v14 - v10 - 2 <= 2 )
          {
            v25 = v15 + v11;
            do
            {
              v26 = *(_QWORD *)(v25 + 8);
              v25 += 8;
              *(_QWORD *)(v25 - 8) = v26;
            }
            while ( v25 != v15 + 8 * (v10 + (unsigned __int64)(v14 - 2 - v10)) + 8 );
          }
          else
          {
            v16 = v14 - v10 - 1;
            v17 = 0;
            do
            {
              *(__m128i *)(v15 + v11 + v17) = _mm_loadu_si128((const __m128i *)(v15 + v11 + 8 + v17));
              v17 += 16;
            }
            while ( 16LL * (v16 >> 1) != v17 );
            if ( (v16 & 1) != 0 )
              *(_QWORD *)(v15 + 8LL * ((v16 & 0xFFFFFFFE) + v10)) = *(_QWORD *)(v15
                                                                              + 8LL * ((v16 & 0xFFFFFFFE) + v10 + 1));
          }
          result = v14 - 1;
        }
        *(_DWORD *)(a2 + 16) = result;
      }
    }
    while ( v10 < (unsigned int)result );
  }
  return result;
}

