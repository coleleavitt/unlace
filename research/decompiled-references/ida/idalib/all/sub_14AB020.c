__int64 __fastcall sub_14AB020(__int64 a1, unsigned int *a2, __m128i a3, __m128 a4)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int16 v8; // ax
  unsigned __int16 v9; // cx
  __int64 *v10; // rdi
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __m128i *v19; // rbp
  __m128i *v20; // r11
  const __m128i *v21; // rcx
  unsigned __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rax
  unsigned __int16 v27; // cx
  unsigned int v28; // eax
  __int64 v29; // rdx
  unsigned __int16 v30; // cx
  unsigned int v31; // eax
  unsigned __int16 v32; // si
  _WORD *v33; // rdx
  const __m128i *v34; // rbp
  unsigned int v35; // eax
  unsigned __int16 v36; // si
  _WORD *v37; // rdx
  int v38; // eax
  __int64 *v39; // rdi
  __int64 v40; // rsi
  char *v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rax
  int *v44; // [rsp+8h] [rbp-E0h]
  unsigned int v45; // [rsp+14h] [rbp-D4h]
  __int64 v46; // [rsp+18h] [rbp-D0h]
  __int64 v47; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v48; // [rsp+18h] [rbp-D0h]
  __int64 v49; // [rsp+18h] [rbp-D0h]
  __int64 v50; // [rsp+20h] [rbp-C8h]
  __int64 v51; // [rsp+20h] [rbp-C8h]
  __int64 v52; // [rsp+20h] [rbp-C8h]
  const __m128i *v53; // [rsp+28h] [rbp-C0h]
  __int64 v54; // [rsp+28h] [rbp-C0h]
  unsigned int v55; // [rsp+3Ch] [rbp-ACh] BYREF
  void *ptr; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+48h] [rbp-A0h]
  _BYTE v58[152]; // [rsp+50h] [rbp-98h] BYREF

  v45 = *(_DWORD *)(a1 + 16);
  v55 = v45;
  v44 = (int *)(a1 + 16);
  do
  {
    do
    {
      while ( 1 )
      {
        ptr = v58;
        v57 = 0x400000000LL;
        sub_14AA640(a1, (__int64)a2, (__int64)&ptr, (__int32 *)&v55, a3, a4);
        if ( !(_DWORD)v57 )
          goto LABEL_3;
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1012LL) )
        {
          v46 = *(_QWORD *)(a1 + 8);
          v7 = operator new[](0x18u);
          a3 = _mm_loadu_si128((const __m128i *)(a1 + 16));
          *(_DWORD *)(v7 + 16) = *(_DWORD *)(a1 + 32);
          *(__m128i *)v7 = a3;
          sub_14368B0(v46, (char *)v7, 1, 1u, 1u, 1u);
        }
        else
        {
          v47 = *(_QWORD *)(a1 + 8);
          sub_1417F90((_QWORD *)v47);
          v11 = v47;
          v12 = *(unsigned int *)(v47 + 2912);
          v13 = v47 + 2904;
          v14 = *(_QWORD *)(v47 + 2904);
          v15 = 3 * v12;
          v16 = v12 + 1;
          v17 = 24LL * *(_QWORD *)(v47 + 2944);
          v18 = 8 * v15;
          v19 = (__m128i *)(v14 + v17);
          v20 = (__m128i *)(v14 + v18);
          if ( v14 + v17 == v14 + v18 )
          {
            v34 = (const __m128i *)v44;
            if ( v16 > *(unsigned int *)(v47 + 2916) )
            {
              v42 = v47 + 2920;
              if ( v14 > (unsigned __int64)v44 || v20 <= (__m128i *)v44 )
              {
                sub_2237220(v13, v42, v16, 24);
                v11 = v47;
                v20 = (__m128i *)(*(_QWORD *)(v47 + 2904) + 24LL * *(unsigned int *)(v47 + 2912));
              }
              else
              {
                sub_2237220(v13, v42, v16, 24);
                v11 = v47;
                v43 = *(_QWORD *)(v47 + 2904);
                v34 = (const __m128i *)((char *)v44 + v43 - v14);
                v20 = (__m128i *)(v43 + 24LL * *(unsigned int *)(v47 + 2912));
              }
            }
            *v20 = _mm_loadu_si128(v34);
            v20[1].m128i_i64[0] = v34[1].m128i_i64[0];
            ++*(_DWORD *)(v11 + 2912);
          }
          else
          {
            v21 = (const __m128i *)v44;
            v22 = *(unsigned int *)(v47 + 2916);
            v48 = (unsigned __int64)v44;
            if ( v16 > v22 )
            {
              v40 = v11 + 2920;
              if ( v14 > (unsigned __int64)v44 || v20 <= (__m128i *)v44 )
              {
                v54 = v17;
                v52 = v11;
                sub_2237220(v13, v40, v16, 24);
                v11 = v52;
                v21 = (const __m128i *)v44;
                v14 = *(_QWORD *)(v52 + 2904);
                v19 = (__m128i *)(v14 + v54);
                v18 = 24LL * *(unsigned int *)(v52 + 2912);
                v20 = (__m128i *)(v14 + v18);
              }
              else
              {
                v51 = v17;
                v41 = (char *)v44 - v14;
                v49 = v11;
                sub_2237220(v13, v40, v16, 24);
                v11 = v49;
                v14 = *(_QWORD *)(v49 + 2904);
                v21 = (const __m128i *)&v41[v14];
                v18 = 24LL * *(unsigned int *)(v49 + 2912);
                v19 = (__m128i *)(v14 + v51);
                v48 = (unsigned __int64)v21;
                v20 = (__m128i *)(v14 + v18);
              }
            }
            a4 = (__m128)_mm_loadu_si128((const __m128i *)(v14 + v18 - 24));
            *v20 = (__m128i)a4;
            v20[1].m128i_i64[0] = *(_QWORD *)(v14 + v18 - 8);
            v23 = *(_QWORD *)(v11 + 2904);
            v24 = *(_DWORD *)(v11 + 2912);
            v25 = 24LL * v24;
            if ( (__m128i *)(v23 + v25 - 24) != v19 )
            {
              v53 = v21;
              v50 = v11;
              memmove(&v19[1].m128i_u64[1], v19, v23 + v25 - 24 - (_QWORD)v19);
              v11 = v50;
              v21 = v53;
              v24 = *(_DWORD *)(v50 + 2912);
              v23 = *(_QWORD *)(v50 + 2904);
            }
            v26 = v24 + 1;
            *(_DWORD *)(v11 + 2912) = v26;
            if ( (unsigned __int64)v19 <= v48 && v23 + 24 * v26 > v48 )
              v21 = (const __m128i *)((char *)v21 + 24);
            *v19 = _mm_loadu_si128(v21);
            v19[1].m128i_i32[0] = v21[1].m128i_i32[0];
          }
        }
        sub_14368B0(*(_QWORD *)(a1 + 8), (char *)ptr, (unsigned int)v57, 1u, 0, 1u);
        v8 = *(_WORD *)(a1 + 32);
        if ( v8 == 22 )
        {
          ++*(_WORD *)(a1 + 88);
          goto LABEL_16;
        }
        if ( v8 == 23 )
        {
          v27 = *(_WORD *)(a1 + 88);
          if ( !v27 )
            goto LABEL_16;
          v28 = *(_DWORD *)(a1 + 2792);
          if ( !v28 )
          {
LABEL_34:
            *(_WORD *)(a1 + 88) = v27 - 1;
            goto LABEL_16;
          }
          v29 = *(_QWORD *)(a1 + 2784) + 24LL * v28 - 24;
          while ( 1 )
          {
            if ( v27 == *(_WORD *)(v29 + 14) )
            {
              if ( *(_DWORD *)(v29 + 16) == *(_DWORD *)(a1 + 90) )
                goto LABEL_29;
            }
            else if ( v27 > *(_WORD *)(v29 + 14) )
            {
              goto LABEL_29;
            }
            if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v29 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v29 + 18) )
              goto LABEL_34;
LABEL_29:
            --v28;
            v29 -= 24;
            *(_DWORD *)(a1 + 2792) = v28;
            if ( !v28 )
              goto LABEL_34;
          }
        }
        if ( (unsigned __int16)(v8 - 20) <= 1u )
        {
          v9 = *(_WORD *)(a1 + 90);
          if ( v8 == 20 )
          {
            *(_WORD *)(a1 + 90) = v9 + 1;
            goto LABEL_16;
          }
          if ( !v9 )
            goto LABEL_16;
          v35 = *(_DWORD *)(a1 + 2792);
          if ( !v35 )
          {
LABEL_58:
            *(_WORD *)(a1 + 90) = v9 - 1;
            goto LABEL_16;
          }
          v36 = *(_WORD *)(a1 + 88);
          v37 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v35 - 24);
          while ( 2 )
          {
            if ( v36 == v37[7] )
            {
              if ( *((_DWORD *)v37 + 4) != *(_DWORD *)(a1 + 90) )
              {
LABEL_56:
                if ( v37[8] >= v9 && *(_WORD *)(a1 + 92) <= v37[9] )
                  goto LABEL_58;
              }
            }
            else if ( v36 <= v37[7] )
            {
              goto LABEL_56;
            }
            --v35;
            v37 -= 12;
            *(_DWORD *)(a1 + 2792) = v35;
            if ( !v35 )
              goto LABEL_58;
            continue;
          }
        }
        if ( (unsigned __int16)(v8 - 24) <= 1u )
        {
          v30 = *(_WORD *)(a1 + 92);
          if ( v8 == 24 )
          {
            *(_WORD *)(a1 + 92) = v30 + 1;
            goto LABEL_16;
          }
          if ( v30 )
          {
            v31 = *(_DWORD *)(a1 + 2792);
            if ( !v31 )
            {
LABEL_46:
              *(_WORD *)(a1 + 92) = v30 - 1;
              goto LABEL_16;
            }
            v32 = *(_WORD *)(a1 + 88);
            v33 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v31 - 24);
            while ( 2 )
            {
              if ( v32 == v33[7] )
              {
                if ( *((_DWORD *)v33 + 4) != *(_DWORD *)(a1 + 90) )
                {
LABEL_44:
                  if ( *(_WORD *)(a1 + 90) <= v33[8] && v33[9] >= v30 )
                    goto LABEL_46;
                }
              }
              else if ( v32 <= v33[7] )
              {
                goto LABEL_44;
              }
              --v31;
              v33 -= 12;
              *(_DWORD *)(a1 + 2792) = v31;
              if ( !v31 )
                goto LABEL_46;
              continue;
            }
          }
LABEL_16:
          v10 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v10, v44);
          goto LABEL_3;
        }
        if ( (unsigned __int16)(v8 - 14) <= 1u || (unsigned __int16)(v8 - 17) <= 2u || v8 == 3 || !sub_10CCDE0(v8) )
          goto LABEL_16;
        v38 = *(_DWORD *)(a1 + 20);
        v39 = *(__int64 **)(a1 + 8);
        if ( !v38 )
          v38 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 40) = v38;
        sub_14634E0(v39, v44);
LABEL_3:
        if ( ptr == v58 )
          break;
        free(ptr);
        if ( (unsigned __int16)(*(_WORD *)(a1 + 32) - 406) > 8u )
          goto LABEL_5;
      }
    }
    while ( (unsigned __int16)(*(_WORD *)(a1 + 32) - 406) <= 8u );
LABEL_5:
    ;
  }
  while ( (unsigned int)sub_155CBC0(a1, 0, 0) );
  *a2 = v45;
  result = v55;
  a2[1] = v55;
  return result;
}
