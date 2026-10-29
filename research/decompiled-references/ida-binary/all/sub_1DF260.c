void __fastcall sub_1DF260(signed int *a1, signed int *a2)
{
  signed int *v2; // r9
  unsigned __int64 v3; // r10
  signed int *v4; // r8
  signed int v5; // edx
  signed int v6; // ecx
  __int64 v7; // r8
  signed int *v8; // r11
  signed int v9; // eax
  __int64 v10; // rdi
  signed int *v11; // r11
  unsigned __int64 v12; // xmm0_8
  __int64 v13; // rax
  __int64 v14; // rdx

  if ( a1 != a2 )
  {
    v2 = a1;
    if ( a2 != a1 + 3 )
    {
      v3 = 0xAAAAAAAAAAAAAAABLL;
      v4 = a1 + 6;
      do
      {
        while ( 1 )
        {
          v9 = *(v4 - 3);
          v10 = (__int64)(v4 - 3);
          v11 = v4;
          if ( v9 >= *v2 )
            break;
          v6 = *(v4 - 1);
          v5 = *(v4 - 2);
LABEL_11:
          v12 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), _mm_cvtsi32_si128(v5)).m128i_u64[0];
          v13 = v3 * ((v10 - (__int64)v2) >> 2);
          if ( v10 - (__int64)v2 > 0 )
          {
            do
            {
              v14 = *(_QWORD *)(v10 - 12);
              v10 -= 12;
              *(_QWORD *)(v10 + 12) = v14;
              *(_DWORD *)(v10 + 20) = *(_DWORD *)(v10 + 8);
              --v13;
            }
            while ( v13 );
          }
          v2[2] = v6;
          v4 += 3;
          *(_QWORD *)v2 = v12;
          if ( a2 == v11 )
            return;
        }
        if ( v9 <= *v2 )
        {
          v5 = *(v4 - 2);
          if ( v5 < v2[1] )
          {
            v6 = *(v4 - 1);
            goto LABEL_11;
          }
          if ( v5 <= v2[1] )
          {
            v6 = *(v4 - 1);
            if ( v6 < v2[2] )
              goto LABEL_11;
          }
        }
        sub_1DF050(v10);
        v4 = (signed int *)(v7 + 12);
      }
      while ( a2 != v8 );
    }
  }
}
