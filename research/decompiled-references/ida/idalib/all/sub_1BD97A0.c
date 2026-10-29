__int64 __fastcall sub_1BD97A0(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  char v4; // al
  char v6; // al
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // r12
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  __int64 result; // rax
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  int v25; // r13d
  char *v26; // rdi
  char *v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r8
  char *v31; // rsi
  __int64 v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rax

  v4 = *(_BYTE *)(a1 + 1);
  *(_BYTE *)a1 = a3;
  v6 = v4 & 0xFE;
  *(_BYTE *)(a1 + 1) = v6;
  switch ( a3 )
  {
    case 1:
    case 2:
    case 11:
    case 12:
    case 16:
    case 17:
      *(_QWORD *)(a1 + 8) = 0;
      result = a1;
      break;
    case 3:
    case 13:
      *(_QWORD *)(a1 + 8) = a4[22];
      result = a1;
      break;
    case 4:
    case 5:
    case 6:
      v33 = (_QWORD *)sub_9C3B30((__int64 *)(a2 + 2352), 56, 3u);
      v33[1] = 0;
      *v33 &= 0xFFFFFFFE00000000LL;
      v33[3] &= 0xFFFFFFFE00000000LL;
      v33[4] = 0;
      v33[6] = 0;
      v33[6] = a4[22];
      *(__m128i *)v33 = _mm_loadu_si128((const __m128i *)(a4 + 23));
      v33[2] = a4[25];
      *(__m128i *)(v33 + 3) = _mm_loadu_si128((const __m128i *)a4 + 13);
      v33[5] = a4[28];
      *(_QWORD *)(a1 + 8) = v33;
      result = a1;
      break;
    case 7:
      v8 = *a4;
      v9 = *((_BYTE *)a4 + 20) == 0;
      *a4 = 0;
      *(_QWORD *)(a1 + 8) = v8;
      if ( !v9 )
      {
        v10 = a4[4];
        *(_DWORD *)(a1 + 16) = *(_DWORD *)v10;
        v11 = *(_DWORD *)(v10 + 24);
        *(_DWORD *)(v10 + 24) = 0;
        v12 = *((unsigned int *)a4 + 10);
        *(_DWORD *)(a1 + 40) = v11;
        v13 = *(_QWORD *)(v10 + 8);
        *(_QWORD *)(v10 + 8) = 0;
        *(_QWORD *)(a1 + 24) = v13;
        v14 = *(_QWORD *)(v10 + 16);
        *(_QWORD *)(v10 + 16) = 0;
        v15 = a4[4];
        *(_QWORD *)(a1 + 32) = v14;
        v16 = v15 + 32 * v12;
        if ( v15 != v16 )
        {
          do
          {
            v16 -= 32;
            v17 = *(_QWORD *)(v16 + 8);
            if ( v17 )
            {
              v18 = *(_QWORD *)(v16 + 16);
              if ( v18 )
                sub_1580C40(v18, v17);
            }
          }
          while ( v15 != v16 );
          v6 = *(_BYTE *)(a1 + 1);
        }
        *((_DWORD *)a4 + 10) = 0;
        *((_BYTE *)a4 + 20) = 0;
        *(_BYTE *)(a1 + 1) = v6 | 1;
      }
      goto LABEL_10;
    case 8:
    case 9:
      v34 = sub_9C3B30((__int64 *)(a2 + 2352), 64, 3u);
      *(_QWORD *)(v34 + 8) = 0;
      *(_QWORD *)v34 &= 0xFFFFFFFE00000000LL;
      *(_QWORD *)(v34 + 24) &= 0xFFFFFFFE00000000LL;
      *(_QWORD *)(v34 + 32) = 0;
      v35 = _mm_loadu_si128((const __m128i *)(a4 + 23));
      *(_QWORD *)(a1 + 8) = v34;
      *(__m128i *)v34 = v35;
      *(_QWORD *)(v34 + 16) = a4[25];
      *(__m128i *)(v34 + 24) = _mm_loadu_si128((const __m128i *)a4 + 13);
      *(_QWORD *)(v34 + 40) = a4[28];
      v36 = *a4;
      *a4 = 0;
      *(_QWORD *)(v34 + 48) = v36;
      *(_DWORD *)(v34 + 56) = *((_DWORD *)a4 + 58);
      result = a1;
      break;
    case 10:
      v37 = (_QWORD *)sub_9C3B30((__int64 *)(a2 + 2352), 48, 3u);
      v37[1] = 0;
      *v37 &= 0xFFFFFFFE00000000LL;
      v37[3] &= 0xFFFFFFFE00000000LL;
      v37[4] = 0;
      *(__m128i *)v37 = _mm_loadu_si128((const __m128i *)(a4 + 23));
      v37[2] = a4[25];
      *(__m128i *)(v37 + 3) = _mm_loadu_si128((const __m128i *)a4 + 13);
      v37[5] = a4[28];
      *(_QWORD *)(a1 + 8) = v37;
      result = a1;
      break;
    case 15:
      v20 = sub_9C3B30((__int64 *)(a2 + 2352), 192, 3u);
      *(_QWORD *)(v20 + 8) = 0;
      v21 = v20;
      v20 += 40;
      *(_QWORD *)(v20 - 24) = 0;
      *(_QWORD *)(v21 + 24) = v20;
      *(_QWORD *)(v21 + 32) = 0x400000000LL;
      *(_WORD *)(v21 + 136) = 0;
      *(_QWORD *)(v21 + 144) = v21 + 160;
      *(_QWORD *)(v21 + 152) = 0x400000000LL;
      v22 = *a4;
      *a4 = 0;
      *(_QWORD *)v21 = v22;
      *(_QWORD *)(v21 + 8) = a4[40];
      *(_QWORD *)(v21 + 16) = a4[41];
      sub_17443E0((__int64 *)(v21 + 24), a4 + 42);
      *(_BYTE *)(v21 + 136) = *((_BYTE *)a4 + 448);
      *(_BYTE *)(v21 + 137) = *((_BYTE *)a4 + 449);
      if ( (__int64 *)(v21 + 144) != a4 + 57 )
      {
        v23 = *((unsigned int *)a4 + 116);
        v24 = *(unsigned int *)(v21 + 152);
        v25 = *((_DWORD *)a4 + 116);
        if ( v23 <= v24 )
        {
          if ( *((_DWORD *)a4 + 116) )
          {
            v38 = *(_QWORD *)(v21 + 144);
            v39 = a4[57];
            v40 = 8 * v23;
            v41 = 0;
            do
            {
              *(_QWORD *)(v38 + v41) = *(_QWORD *)(v39 + v41);
              v41 += 8;
            }
            while ( v40 != v41 );
          }
        }
        else
        {
          if ( v23 > *(unsigned int *)(v21 + 156) )
          {
            *(_DWORD *)(v21 + 152) = 0;
            sub_2237220(v21 + 144, v21 + 160, v23, 8);
            v27 = (char *)a4[57];
            v23 = *((unsigned int *)a4 + 116);
            v30 = 0;
            v26 = *(char **)(v21 + 144);
            v31 = v27;
          }
          else
          {
            v26 = *(char **)(v21 + 144);
            v27 = (char *)a4[57];
            if ( *(_DWORD *)(v21 + 152) )
            {
              v28 = 8 * v24;
              v29 = 0;
              v30 = v28;
              do
              {
                *(_QWORD *)&v26[v29] = *(_QWORD *)&v27[v29];
                v29 += 8;
              }
              while ( v28 != v29 );
              v27 = (char *)a4[57];
              v23 = *((unsigned int *)a4 + 116);
              v26 = (char *)(v28 + *(_QWORD *)(v21 + 144));
              v31 = &v27[v28];
            }
            else
            {
              v31 = (char *)a4[57];
              v30 = 0;
            }
          }
          v32 = 8 * v23;
          if ( v31 != &v27[v32] )
            memcpy(v26, v31, v32 - v30);
        }
        *(_DWORD *)(v21 + 152) = v25;
      }
      *(_QWORD *)(a1 + 8) = v21;
      result = a1;
      break;
    default:
LABEL_10:
      result = a1;
      break;
  }
  return result;
}
