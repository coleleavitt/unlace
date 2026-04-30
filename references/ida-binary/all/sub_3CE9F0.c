signed __int64 __fastcall sub_3CE9F0(
        __int64 a1,
        int *a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64))
{
  signed __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  int *v8; // r13
  _DWORD *v10; // r15
  int *v11; // rbx
  int *v12; // rsi
  unsigned int v13; // eax
  int *i; // r15
  int v15; // eax
  __int64 j; // rbx
  int v17; // ecx
  unsigned __int8 v18; // dl
  unsigned int v19; // eax
  unsigned __int8 v20; // al
  int v21; // edx
  int *v22; // [rsp+0h] [rbp-40h]

  result = (signed __int64)a2 - a1;
  if ( (__int64)a2 - a1 > 64 )
  {
    v5 = result >> 3;
    v6 = a3;
    v7 = ((__int64)a2 - a1) >> 2;
    v8 = a2;
    if ( a3 )
    {
      while ( 1 )
      {
        v10 = (_DWORD *)(a1 + 4 * v5);
        v11 = (int *)(a1 + 4);
        --v6;
        v22 = v8 - 1;
        v12 = v8 - 1;
        if ( a4(a1 + 4, (__int64)v10) )
        {
          if ( a4((__int64)v10, (__int64)v12) )
          {
            v13 = *(_DWORD *)a1;
            *(_DWORD *)a1 = *v10;
            *v10 = v13;
          }
          else
          {
            v18 = a4(a1 + 4, (__int64)v22);
            v19 = *(_DWORD *)a1;
            if ( v18 )
            {
              *(_DWORD *)a1 = *(v8 - 1);
              *(v8 - 1) = v19;
            }
            else
            {
              *(_QWORD *)a1 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 4)), _mm_cvtsi32_si128(v19)).m128i_u64[0];
            }
          }
        }
        else if ( a4(a1 + 4, (__int64)v12) )
        {
          *(_QWORD *)a1 = __ROL8__(*(_QWORD *)a1, 32);
        }
        else
        {
          v20 = a4((__int64)v10, (__int64)v22);
          v21 = *(_DWORD *)a1;
          if ( v20 )
          {
            *(_DWORD *)a1 = *(v8 - 1);
            *(v8 - 1) = v21;
          }
          else
          {
            *(_DWORD *)a1 = *v10;
            *v10 = v21;
          }
        }
        for ( i = v8; ; *i = v15 )
        {
          while ( a4((__int64)v11, a1) )
            ++v11;
          do
            --i;
          while ( a4(a1, (__int64)i) );
          if ( v11 >= i )
            break;
          v15 = *v11++;
          *(v11 - 1) = *i;
        }
        sub_3CE9F0(v11, v8, v6, a4);
        result = (signed __int64)v11 - a1;
        if ( (__int64)v11 - a1 <= 64 )
          break;
        v8 = v11;
        v5 = result >> 3;
        v7 = ((__int64)v11 - a1) >> 2;
        if ( !v6 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      for ( j = v5 - 1; ; --j )
      {
        sub_3CE800(a1, j, v7, *(_DWORD *)(a1 + 4 * j), a4);
        if ( !j )
          break;
      }
      for ( result = (signed __int64)v8 - a1;
            (__int64)v8 - a1 > 4;
            result = sub_3CE800(a1, 0, ((__int64)v8 - a1) >> 2, v17, a4) )
      {
        v17 = *--v8;
        *v8 = *(_DWORD *)a1;
      }
    }
  }
  return result;
}
