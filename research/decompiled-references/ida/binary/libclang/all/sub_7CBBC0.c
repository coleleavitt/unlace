void __fastcall sub_7CBBC0(__int64 *a1, int a2, __int64 a3, const __m128i *a4, int a5)
{
  __int64 v8; // r14
  __int64 *v9; // r12
  __int64 v10; // rbx
  char v11; // r15
  __int64 v12; // r14
  __int64 v13; // rax
  _WORD *v14; // rdx
  __int64 v15; // rax
  __m128i v16; // xmm0
  bool i; // [rsp+7h] [rbp-81h]
  __int64 *v18; // [rsp+8h] [rbp-80h]
  __int64 v19; // [rsp+10h] [rbp-78h]
  __int64 v20; // [rsp+20h] [rbp-68h] BYREF
  __m128i v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+40h] [rbp-48h]
  char v24; // [rsp+44h] [rbp-44h]

  v8 = *a1;
  if ( a2 == 1 )
  {
    v15 = sub_798D40(*a1);
    v16 = _mm_loadu_si128(a4);
    v20 = a3;
    v22 = v15;
    v23 = a5;
    v24 = 0;
    v21 = v16;
    sub_7C5C80((__int64)&v20, v8);
  }
  else
  {
    v9 = a1;
    v18 = &a1[a2];
    if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 56 > 4 )
      v8 = 0;
    else
      v9 = a1 + 1;
    v10 = a4->m128i_i64[0];
    v19 = a4->m128i_i64[1];
    if ( v9 != v18 )
    {
      v11 = 0;
      for ( i = (a4->m128i_i8[1] & 4) != 0 || v8 != 0; ; i = 0 )
      {
        v12 = *v9++;
        v13 = sub_798D40(v12);
        v20 = a3;
        v23 = a5;
        v22 = v13;
        v24 = 0;
        BYTE1(v10) = BYTE1(v10) & 0xFA | v11 | (4 * i);
        v21.m128i_i64[0] = v10;
        v21.m128i_i64[1] = v19;
        sub_7C5C80((__int64)&v20, v12);
        if ( v18 == v9 )
          break;
        v14 = *(_WORD **)(a3 + 32);
        if ( *(_QWORD *)(a3 + 24) - (_QWORD)v14 <= 1u )
        {
          sub_26240F0(a3, ", ", 2);
        }
        else
        {
          *v14 = 8236;
          *(_QWORD *)(a3 + 32) += 2LL;
        }
        v11 = 1;
      }
    }
  }
}

