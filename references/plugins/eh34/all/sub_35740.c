__m128i *__fastcall sub_35740(__m128i *a1, _QWORD *a2, char a3, _DWORD *a4)
{
  __int64 v4; // rax
  int v6; // r15d
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned int *v9; // rcx
  unsigned int *v10; // r14
  int v11; // ebp
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 (__fastcall *hexdsp)(__int64, _QWORD *); // rax
  int v15; // ebx
  int v16; // eax
  __int64 v18; // [rsp+0h] [rbp-F8h]
  int v19; // [rsp+Ch] [rbp-ECh]
  unsigned int *v20; // [rsp+10h] [rbp-E8h]
  int v22; // [rsp+2Ch] [rbp-CCh]
  int v23; // [rsp+30h] [rbp-C8h]
  int v24; // [rsp+34h] [rbp-C4h]
  unsigned int v25; // [rsp+38h] [rbp-C0h]
  unsigned int v26; // [rsp+3Ch] [rbp-BCh]
  unsigned int v27; // [rsp+40h] [rbp-B8h]
  unsigned int v28; // [rsp+44h] [rbp-B4h]
  __int64 v29; // [rsp+48h] [rbp-B0h]
  _QWORD v31[2]; // [rsp+70h] [rbp-88h] BYREF
  _QWORD v32[4]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v33[11]; // [rsp+A0h] [rbp-58h] BYREF

  v33[3] = __readfsqword(0x28u);
  *a4 = -1;
  v4 = a2[71];
  if ( (int)v4 <= 1 )
    goto LABEL_26;
  v18 = 0;
  v6 = 0;
  v29 = (unsigned int)(v4 - 2);
  v25 = 0;
  v28 = -2;
  v27 = -2;
  v26 = -2;
  v22 = 0;
  v24 = 0x7FFFFFFF;
  while ( 1 )
  {
    v7 = a2[70] + ((v18 + 1) << 6);
    if ( *(_BYTE *)(v7 + 12) )
    {
      v8 = *(_QWORD *)(v7 + 48);
      if ( v8 )
      {
        v19 = *(_DWORD *)(v7 + 8);
        v9 = *(unsigned int **)(v7 + 40);
        v20 = &v9[4 * v8];
        if ( v20 != v9 )
        {
          v10 = *(unsigned int **)(v7 + 40);
          v23 = v18 + 1;
          do
          {
            v11 = v10[1] - *v10;
            v12 = a2[67] + 16LL * (int)sub_320C0(v10[2]);
            v13 = a2[67] + 16LL * (int)sub_320C0(v19);
            sub_320D0(v31, v13, v12);
            hexdsp = (__int64 (__fastcall *)(__int64, _QWORD *))get_hexdsp(v31, v13);
            v15 = hexdsp(218, v31);
            if ( a3 )
            {
              sub_28EA0((__int64)v32, (__int64)a2, *(_DWORD *)v7);
              sub_28EA0((__int64)v33, (__int64)a2, *(_DWORD *)(v7 + 4));
              if ( v33[0] )
              {
                v33[1] = 0;
                qfree(v33[0]);
              }
              if ( v32[0] )
              {
                v32[1] = 0;
                qfree(v32[0]);
              }
            }
            v16 = v10[3];
            if ( v16 <= v6 )
            {
              if ( v16 == v6 )
              {
                if ( v15 > v22 )
                {
                  v25 = v6;
                  v22 = v15;
                  v26 = *v10;
                  v24 = v11;
                  v27 = v10[1];
                  v28 = v10[2];
                  *a4 = v23;
                  v6 = v10[3];
                }
                else if ( v15 == v22 && v11 < v24 )
                {
                  v25 = v6;
                  v24 = v11;
                  v26 = *v10;
                  v27 = v10[1];
                  v28 = v10[2];
                  *a4 = v23;
                  v6 = v10[3];
                }
              }
            }
            else
            {
              v25 = v10[3];
              v22 = v15;
              v26 = *v10;
              v24 = v11;
              v27 = v10[1];
              v28 = v10[2];
              *a4 = v23;
              v6 = v10[3];
            }
            v10 += 4;
            qfree(v31[0]);
          }
          while ( v20 != v10 );
        }
      }
    }
    if ( v18 == v29 )
      break;
    ++v18;
  }
  if ( v6 <= 0 )
  {
LABEL_26:
    a1[1].m128i_i8[0] = 0;
  }
  else
  {
    a1[1].m128i_i8[0] = 1;
    *a1 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), _mm_cvtsi32_si128(v27)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), _mm_cvtsi32_si128(v25)));
  }
  return a1;
}
