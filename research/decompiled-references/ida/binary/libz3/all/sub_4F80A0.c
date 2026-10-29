__int64 __fastcall sub_4F80A0(__int64 a1, const void *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // r13d
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 i; // rax
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]

  v3 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::udoc_relation,
         0);
  if ( !v3 )
    __cxa_bad_cast();
  v4 = v3;
  v5 = v3[1];
  v6 = sub_186B270(0x80u);
  v7 = 0;
  sub_4EE440(v6, v5, (_QWORD *)(a1 + 8));
  v19 = v4[4];
  if ( *((_DWORD *)v4 + 12) )
  {
    do
    {
      v9 = sub_553150(v19, *(_QWORD *)(v4[5] + 8 * v7), *(_QWORD *)(a1 + 24));
      v10 = *(_DWORD *)(v6 + 48);
      v11 = *(_DWORD *)(v6 + 52);
      v12 = v9;
      if ( v10 < v11 )
      {
        v8 = *(_QWORD *)(v6 + 40);
      }
      else
      {
        v20 = v9;
        v13 = 2 * v11;
        v14 = sub_186B270(8 * v13);
        v10 = *(_DWORD *)(v6 + 48);
        v15 = *(_QWORD **)(v6 + 40);
        v12 = v20;
        v8 = v14;
        if ( v10 )
        {
          if ( v10 - 1 <= 2 || (_QWORD *)v14 == v15 + 1 )
          {
            for ( i = 0; i != v10; ++i )
              *(_QWORD *)(v8 + i * 8) = v15[i];
          }
          else
          {
            v16 = 0;
            do
            {
              *(__m128i *)(v8 + v16 * 8) = _mm_loadu_si128((const __m128i *)&v15[v16]);
              v16 += 2;
            }
            while ( 2LL * (v10 >> 1) != v16 );
            if ( (v10 & 1) != 0 )
              *(_QWORD *)(v8 + 8LL * (v10 & 0xFFFFFFFE)) = v15[v10 & 0xFFFFFFFE];
          }
        }
        if ( v15 != (_QWORD *)(v6 + 56) && v15 )
        {
          sub_186B220(v15);
          v10 = *(_DWORD *)(v6 + 48);
        }
        *(_QWORD *)(v6 + 40) = v8;
        *(_DWORD *)(v6 + 52) = v13;
      }
      ++v7;
      *(_QWORD *)(v8 + 8LL * v10) = v12;
      *(_DWORD *)(v6 + 48) = v10 + 1;
    }
    while ( (unsigned int)v7 < *((_DWORD *)v4 + 12) );
  }
  return v6;
}

