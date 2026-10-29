__int64 __fastcall sub_14643E0(__int64 *a1, __int64 a2)
{
  int v3; // ebp
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __m128i *v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // rdx
  const __m128i *v11; // rsi
  __int64 v12; // rsi
  _QWORD v13[2]; // [rsp+0h] [rbp-58h] BYREF
  int v14; // [rsp+10h] [rbp-48h]

  v3 = 0;
  v4 = *(_QWORD *)a2;
  v5 = *(unsigned int *)(a2 + 8);
  while ( 1 )
  {
    v6 = *(unsigned int *)(a2 + 12);
    v7 = (__m128i *)(v4 + 24 * v5);
    if ( v5 >= v6 )
    {
      v10 = v5 + 1;
      v13[0] = 0;
      v11 = (const __m128i *)v13;
      v13[1] = 0;
      v14 = 0;
      if ( v6 < v10 )
      {
        v12 = a2 + 16;
        if ( v4 > (unsigned __int64)v13 || v7 <= (__m128i *)v13 )
        {
          sub_2237220(a2, v12, v10, 24);
          v11 = (const __m128i *)v13;
          v7 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
        }
        else
        {
          sub_2237220(a2, v12, v10, 24);
          v11 = (const __m128i *)((char *)v13 + *(_QWORD *)a2 - v4);
          v7 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
        }
      }
      *v7 = _mm_loadu_si128(v11);
      v7[1].m128i_i64[0] = v11[1].m128i_i64[0];
      v8 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v8;
    }
    else
    {
      v7->m128i_i64[0] = 0;
      v7->m128i_i64[1] = 0;
      v7[1].m128i_i32[0] = 0;
      v8 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v8;
    }
    sub_14634E0(a1, (int *)(*(_QWORD *)a2 + 24 * v8 - 24));
    v5 = *(unsigned int *)(a2 + 8);
    v4 = *(_QWORD *)a2;
    result = *(unsigned __int16 *)(*(_QWORD *)a2 + 24 * v5 - 8);
    switch ( *(_WORD *)(*(_QWORD *)a2 + 24 * v5 - 8) )
    {
      case 1:
        return result;
      case 0x14:
      case 0x16:
      case 0x18:
        ++v3;
        continue;
      case 0x15:
      case 0x17:
      case 0x19:
        if ( !v3 )
          return result;
        --v3;
        break;
      case 0x3F:
        if ( v3 )
          continue;
        return result;
      default:
        continue;
    }
  }
}
