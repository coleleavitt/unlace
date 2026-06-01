_BYTE *__fastcall sub_BDEAD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r15
  _QWORD *v8; // r12
  __int64 v9; // r14
  _DWORD *v10; // rax
  __int64 v11; // r14
  int v12; // esi
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // r12d
  __int64 v16; // rcx
  int v17; // edx
  _BYTE *v18; // rcx
  __int64 *v19; // rsi
  _BYTE *result; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  _DWORD *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 i; // rax
  _BYTE *v31; // [rsp+10h] [rbp-D8h]
  __int64 v32; // [rsp+18h] [rbp-D0h]
  _BYTE *v33; // [rsp+20h] [rbp-C8h]
  __int64 v34; // [rsp+28h] [rbp-C0h]
  _BYTE v35[184]; // [rsp+30h] [rbp-B8h] BYREF

  v33 = v35;
  v34 = 0x1000000000LL;
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v4 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v4 )
    {
      v5 = 8 * v4;
      v6 = 0;
      while ( 1 )
      {
        v7 = *(_QWORD *)(a1 + 16);
        v8 = *(_QWORD **)(v2 + v6);
        v9 = *v8;
        if ( (unsigned int)sub_8E7030(v7)
          && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v7 + 7488) + 56LL))(
                *(_QWORD *)(v7 + 7488),
                v9)
          || (v10 = *(_DWORD **)(sub_15D1F10(*v8) + 24)) == nullptr
          || *(_DWORD *)(a1 + 8) != *v10
          || v10[1]
          || (v11 = v8[1], (*(_BYTE *)(v11 + 44) & 1) != 0) )
        {
          v6 += 8;
          if ( v5 == v6 )
            goto LABEL_20;
        }
        else
        {
          if ( (unsigned __int8)sub_8EB4E0(*(_QWORD *)(a1 + 16), v8[1]) || (unsigned __int8)sub_BDEA40(a1, v11) )
          {
            v12 = sub_B39350(v11, *(_DWORD *)(a1 + 8));
            v13 = a2;
            v14 = *(_DWORD *)(a2 + 8);
            v15 = *(_DWORD *)(a2 + 12);
            if ( v14 >= v15 )
            {
              v23 = 2 * v15;
              v16 = sub_186B270(4 * v23);
              v14 = *(_DWORD *)(a2 + 8);
              v24 = *(_DWORD **)a2;
              if ( v14 )
              {
                if ( v14 - 1 <= 2 || (unsigned __int64)(v16 - (_QWORD)(v24 + 1)) <= 8 )
                {
                  for ( i = 0; i != v14; ++i )
                    *(_DWORD *)(v16 + i * 4) = v24[i];
                }
                else
                {
                  v25 = 0;
                  do
                  {
                    *(__m128i *)(v16 + v25 * 4) = _mm_loadu_si128((const __m128i *)&v24[v25]);
                    v25 += 4;
                  }
                  while ( v25 != 4LL * (v14 >> 2) );
                  if ( (v14 & 3) != 0 )
                  {
                    *(_DWORD *)(v16 + 4LL * (v14 & 0xFFFFFFFC)) = v24[v14 & 0xFFFFFFFC];
                    v26 = (v14 & 0xFFFFFFFC) + 1;
                    if ( (unsigned int)v26 < v14 )
                    {
                      v27 = (v14 & 0xFFFFFFFC) + 2;
                      *(_DWORD *)(v16 + 4 * v26) = v24[v26];
                      if ( (unsigned int)v27 < v14 )
                        *(_DWORD *)(v16 + 4 * v27) = v24[v27];
                    }
                  }
                }
              }
              if ( v24 != (_DWORD *)(a2 + 16) && v24 )
              {
                v32 = v16;
                sub_186B220(v24);
                v16 = v32;
                v14 = *(_DWORD *)(a2 + 8);
              }
              v13 = a2;
              *(_QWORD *)a2 = v16;
              *(_DWORD *)(a2 + 12) = v23;
            }
            else
            {
              v16 = *(_QWORD *)a2;
            }
            *(_DWORD *)(v16 + 4LL * v14) = v12;
            ++*(_DWORD *)(v13 + 8);
          }
          v17 = v34;
          *(_BYTE *)(v11 + 44) |= 1u;
          if ( (unsigned int)v34 >= HIDWORD(v34) )
          {
            v21 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v34)));
            v17 = v34;
            v18 = (_BYTE *)v21;
            if ( (_DWORD)v34 )
            {
              if ( (unsigned int)(v34 - 1) <= 2 || (_BYTE *)v21 == v33 + 8 )
              {
                v28 = 0;
                do
                {
                  *(_QWORD *)&v18[v28] = *(_QWORD *)&v33[v28];
                  v28 += 8;
                }
                while ( 8LL * (unsigned int)v34 != v28 );
              }
              else
              {
                v22 = 0;
                do
                {
                  *(__m128i *)&v18[v22] = _mm_loadu_si128((const __m128i *)&v33[v22]);
                  v22 += 16;
                }
                while ( v22 != 16LL * ((unsigned int)v34 >> 1) );
                if ( (v34 & 1) != 0 )
                  *(_QWORD *)&v18[8 * (v34 & 0xFFFFFFFE)] = *(_QWORD *)&v33[8 * (v34 & 0xFFFFFFFE)];
              }
            }
            if ( v33 != v35 && v33 )
            {
              v31 = v18;
              sub_186B220(v33);
              v17 = v34;
              v18 = v31;
            }
            v33 = v18;
            HIDWORD(v34) *= 2;
          }
          else
          {
            v18 = v33;
          }
          v6 += 8;
          *(_QWORD *)&v18[8 * v17] = v11;
          LODWORD(v34) = v17 + 1;
          if ( v5 == v6 )
          {
LABEL_20:
            LODWORD(v4) = v34;
            v19 = (__int64 *)v33;
            goto LABEL_21;
          }
        }
        v2 = *(_QWORD *)(a1 + 32);
      }
    }
    v19 = (__int64 *)v35;
  }
  else
  {
    v19 = (__int64 *)v35;
    LODWORD(v4) = 0;
  }
LABEL_21:
  result = (_BYTE *)sub_B397E0(v4, v19);
  if ( v33 )
  {
    result = v35;
    if ( v33 != v35 )
      return (_BYTE *)sub_186B220(v33);
  }
  return result;
}

