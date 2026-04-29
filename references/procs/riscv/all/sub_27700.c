unsigned __int64 __fastcall sub_27700(double a1, double a2, __int64 a3, __int64 *a4, char a5, __int64 a6, __int64 a7)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r13
  __int64 v20; // rbx
  __int64 v21; // r14
  unsigned __int64 v22; // r12
  __int64 v23; // rsi
  __m128i si128; // xmm0
  __m128i *v25; // rbx
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+0h] [rbp-58h] BYREF
  __int128 v31; // [rsp+8h] [rbp-50h]
  int v32; // [rsp+18h] [rbp-40h]
  unsigned __int64 v33; // [rsp+28h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  if ( a5 == 115 )
  {
    v30 = 0;
    v32 = 0;
    v31 = 0;
    v10 = node2ea(a6);
    if ( (unsigned __int8)sub_22D30((__int64)&v30, a7, v10) )
    {
      v11 = a4[1];
      v12 = *a4;
      if ( a4[2] < (unsigned __int64)(v11 + 1) )
      {
        v16 = qvector_reserve(a4, v12, v11 + 1, 24);
        *a4 = v16;
        v11 = a4[1];
        v12 = v16;
      }
      v13 = v12 + 24 * v11;
      *(_QWORD *)v13 = 0;
      *(_OWORD *)(v13 + 8) = 0;
      v14 = v32;
      ++a4[1];
      sub_B630((__int64 *)v13, (__int64)"flags:%02X", v14);
      v15 = v30;
      if ( (_QWORD)v31 )
      {
        v17 = a4[1];
        v18 = *a4;
        if ( a4[2] < (unsigned __int64)(v17 + 1) )
        {
          v29 = qvector_reserve(a4, v18, v17 + 1, 24);
          *a4 = v29;
          v17 = a4[1];
          v18 = v29;
        }
        v19 = v18 + 24 * v17;
        *(_OWORD *)(v19 + 8) = 0;
        *(_QWORD *)v19 = 0;
        ++a4[1];
        v20 = *(_QWORD *)(v19 + 8);
        if ( v20 )
        {
          v21 = v20 + 23;
          v22 = v20 + 24;
          --v20;
        }
        else
        {
          v22 = 25;
          v21 = 24;
        }
        v23 = *(_QWORD *)v19;
        if ( *(_QWORD *)(v19 + 16) < v22 )
        {
          v28 = qvector_reserve(v19, v23, v22, 1);
          *(_QWORD *)v19 = v28;
          v23 = v28;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_2B150);
        *(_QWORD *)(v19 + 8) = v22;
        *(_BYTE *)(v23 + v21) = 0;
        v25 = (__m128i *)(*(_QWORD *)v19 + v20);
        *v25 = si128;
        v26 = v31;
        v25[1].m128i_i64[0] = 0x3A296765723A6874LL;
        v27 = v30;
        v15 = v30 + 32 * v26;
        if ( v30 != v15 )
        {
          do
          {
            sub_27640(
              (__int64 *)v19,
              (__int64)" %a:%zd:%a:%s",
              *(double *)si128.m128i_i64,
              *(_QWORD *)v27,
              a2,
              *(const char **)(v27 + 8));
            v27 += 32;
          }
          while ( v15 != v27 );
          v15 = v30;
        }
      }
      if ( v15 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v15);
      }
    }
    else if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v30);
    }
  }
  return v33 - __readfsqword(0x28u);
}
