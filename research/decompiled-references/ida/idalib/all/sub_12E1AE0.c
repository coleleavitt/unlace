__int64 __fastcall sub_12E1AE0(__int64 *a1, __int64 *a2)
{
  __m128i si128; // xmm0
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  size_t v13; // r11
  char v14; // al
  __int64 v15; // rbp
  __int64 *v16; // r14
  size_t n; // [rsp+0h] [rbp-60h]
  __int64 v18; // [rsp+8h] [rbp-58h]
  __int64 v19; // [rsp+10h] [rbp-50h]
  __int64 v20; // [rsp+20h] [rbp-40h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  *a1 = 0;
  *(__m128i *)(a1 + 1) = si128;
  result = *((unsigned int *)a2 + 3);
  if ( (_DWORD)result )
  {
    sub_2244BF0(a1, *((unsigned int *)a2 + 2));
    v7 = *a2;
    v8 = *a1;
    result = *((unsigned int *)a1 + 2);
    v9 = 8 * result + 8;
    v19 = *a1;
    *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
    v10 = *((unsigned int *)a2 + 4);
    *((_DWORD *)a1 + 4) = v10;
    if ( (_DWORD)result )
    {
      v11 = 0;
      v18 = 8LL * (unsigned int)(result - 1);
      result = v7;
      while ( 1 )
      {
        v15 = *(_QWORD *)(result + v11);
        v16 = (__int64 *)(v8 + v11);
        if ( v15 == -8 || !v15 )
        {
          *v16 = v15;
          v9 += 4;
          if ( v11 == v18 )
            return result;
        }
        else
        {
          n = *(_QWORD *)v15;
          v12 = sub_22300B0(*(_QWORD *)v15 + 17LL, 8, v10, v8, v5, v6);
          v13 = n;
          v5 = v12;
          if ( n )
          {
            v20 = v12;
            memcpy((void *)(v12 + 16), (const void *)(v15 + 16), n);
            v5 = v20;
            v13 = n;
          }
          *(_BYTE *)(v5 + v13 + 16) = 0;
          v14 = *(_BYTE *)(v15 + 8);
          v10 = v19;
          *(_QWORD *)v5 = v13;
          *(_BYTE *)(v5 + 8) = v14;
          *v16 = v5;
          result = *(unsigned int *)(v7 + v9);
          *(_DWORD *)(v19 + v9) = result;
          v9 += 4;
          if ( v11 == v18 )
            return result;
        }
        result = *a2;
        v8 = *a1;
        v11 += 8;
      }
    }
  }
  return result;
}
