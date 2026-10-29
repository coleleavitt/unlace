__int64 __fastcall sub_4F4B80(__int64 a1, const void *a2)
{
  __int64 result; // rax
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned int v6; // ebp
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // edx
  __int64 v11; // r14
  int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 i; // rax

  result = (__int64)__dynamic_cast(
                      a2,
                      (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                      (const struct __class_type_info *)&`typeinfo for'datalog::udoc_relation,
                      0);
  if ( !result )
    __cxa_bad_cast();
  v3 = *(unsigned int *)(result + 48);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = result;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  if ( (_DWORD)v3 )
  {
    do
    {
      while ( 1 )
      {
        result = sub_553E00(v7, *(_QWORD *)(*(_QWORD *)(v5 + 40) + 8 * v8), v4);
        if ( (_BYTE)result )
          break;
        v9 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 8 * v8++);
        result = sub_553300(v7, v9);
        if ( v8 == v3 )
          goto LABEL_9;
      }
      if ( v6 != (_DWORD)v8 )
      {
        result = *(_QWORD *)(v5 + 40);
        *(_QWORD *)(result + 8LL * v6) = *(_QWORD *)(result + 8 * v8);
      }
      ++v8;
      ++v6;
    }
    while ( v8 != v3 );
LABEL_9:
    if ( (_DWORD)v3 != v6 )
    {
      v10 = *(_DWORD *)(v5 + 48);
      if ( v10 >= v6 )
      {
        if ( v6 < v10 )
          *(_DWORD *)(v5 + 48) = v6;
      }
      else
      {
        LODWORD(v11) = *(_DWORD *)(v5 + 52);
        v12 = *(_DWORD *)(v5 + 48);
        do
        {
          if ( v10 < (unsigned int)v11 )
          {
            v13 = *(_QWORD *)(v5 + 40);
          }
          else
          {
            v11 = (unsigned int)(2 * v11);
            v14 = sub_186B270(8 * v11);
            v10 = *(_DWORD *)(v5 + 48);
            v15 = *(_QWORD **)(v5 + 40);
            v13 = v14;
            if ( v10 )
            {
              if ( v10 - 1 <= 2 || (_QWORD *)v14 == v15 + 1 )
              {
                for ( i = 0; i != v10; ++i )
                  *(_QWORD *)(v13 + i * 8) = v15[i];
              }
              else
              {
                v16 = 0;
                do
                {
                  *(__m128i *)(v13 + v16 * 8) = _mm_loadu_si128((const __m128i *)&v15[v16]);
                  v16 += 2;
                }
                while ( 2LL * (v10 >> 1) != v16 );
                if ( (v10 & 1) != 0 )
                  *(_QWORD *)(v13 + 8LL * (v10 & 0xFFFFFFFE)) = v15[v10 & 0xFFFFFFFE];
              }
            }
            if ( v15 )
            {
              if ( v15 != (_QWORD *)(v5 + 56) )
              {
                sub_186B220(v15);
                v10 = *(_DWORD *)(v5 + 48);
              }
            }
            *(_QWORD *)(v5 + 40) = v13;
            *(_DWORD *)(v5 + 52) = v11;
          }
          result = v10;
          ++v12;
          ++v10;
          *(_QWORD *)(v13 + 8 * result) = 0;
          *(_DWORD *)(v5 + 48) = v10;
        }
        while ( v12 != v6 );
      }
    }
  }
  return result;
}

