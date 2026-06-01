__int64 __fastcall sub_4F4DC0(__int64 a1, const void *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbp
  __int64 v5; // r13
  __int64 result; // rax
  __int64 v7; // rdi
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  __int64 v10; // r14
  __int64 v11; // rsi
  unsigned int v12; // edx
  __int64 v13; // r15
  int v14; // r14d
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 i; // rax
  unsigned int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v3 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::udoc_relation,
         0);
  if ( !v3 )
    __cxa_bad_cast();
  v4 = v3;
  v5 = v3[4];
  result = *(_QWORD *)(a1 + 8);
  v7 = a1 + 24;
  v8 = 0;
  v9 = *(_DWORD *)result;
  if ( *((_DWORD *)v4 + 12) )
  {
    v21 = *((_DWORD *)v4 + 12);
    v10 = 0;
    v20 = *(_DWORD *)(a1 + 16);
    for ( result = sub_555180(v5, *(_QWORD *)v4[5], v9, v20, a1 + 96, v7);
          ;
          result = sub_555180(v5, *(_QWORD *)(v4[5] + 8 * v10), v9, v20, a1 + 96, v7) )
    {
      if ( (_BYTE)result )
      {
        if ( v8 != (_DWORD)v10 )
        {
          result = v4[5];
          *(_QWORD *)(result + 8LL * v8) = *(_QWORD *)(result + 8 * v10);
        }
        ++v10;
        ++v8;
        if ( v10 == v21 )
        {
LABEL_10:
          if ( v21 != v8 )
          {
            v12 = *((_DWORD *)v4 + 12);
            if ( v12 >= v8 )
            {
              if ( v8 < v12 )
                *((_DWORD *)v4 + 12) = v8;
            }
            else
            {
              LODWORD(v13) = *((_DWORD *)v4 + 13);
              v14 = *((_DWORD *)v4 + 12);
              do
              {
                if ( v12 < (unsigned int)v13 )
                {
                  v15 = v4[5];
                }
                else
                {
                  v13 = (unsigned int)(2 * v13);
                  v16 = sub_186B270(8 * v13);
                  v12 = *((_DWORD *)v4 + 12);
                  v17 = (_QWORD *)v4[5];
                  v15 = v16;
                  if ( v12 )
                  {
                    if ( v12 - 1 <= 2 || (_QWORD *)v16 == v17 + 1 )
                    {
                      for ( i = 0; i != v12; ++i )
                        *(_QWORD *)(v15 + i * 8) = v17[i];
                    }
                    else
                    {
                      v18 = 0;
                      do
                      {
                        *(__m128i *)(v15 + v18 * 8) = _mm_loadu_si128((const __m128i *)&v17[v18]);
                        v18 += 2;
                      }
                      while ( 2LL * (v12 >> 1) != v18 );
                      if ( (v12 & 1) != 0 )
                        *(_QWORD *)(v15 + 8LL * (v12 & 0xFFFFFFFE)) = v17[v12 & 0xFFFFFFFE];
                    }
                  }
                  if ( v17 )
                  {
                    if ( v17 != v4 + 7 )
                    {
                      sub_186B220(v17);
                      v12 = *((_DWORD *)v4 + 12);
                    }
                  }
                  v4[5] = v15;
                  *((_DWORD *)v4 + 13) = v13;
                }
                result = v12;
                ++v14;
                ++v12;
                *(_QWORD *)(v15 + 8 * result) = 0;
                *((_DWORD *)v4 + 12) = v12;
              }
              while ( v14 != v8 );
            }
          }
          return result;
        }
      }
      else
      {
        v11 = *(_QWORD *)(v4[5] + 8 * v10++);
        result = sub_553300(v5, v11);
        if ( v10 == v21 )
          goto LABEL_10;
      }
    }
  }
  return result;
}

