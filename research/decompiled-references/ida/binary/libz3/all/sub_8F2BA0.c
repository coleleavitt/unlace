__int64 __fastcall sub_8F2BA0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v5; // rsi
  unsigned int v6; // r15d
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rdx
  unsigned int ***v10; // rsi
  unsigned int **v11; // r12
  unsigned int **v12; // r8
  unsigned int v13; // r15d
  unsigned int **v14; // r14
  unsigned int *v15; // rbp
  unsigned int v16; // esi
  __int64 v17; // rcx
  int v18; // r10d
  unsigned int *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // r14d
  unsigned __int64 v26; // rcx
  unsigned int **v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r8
  __int64 v31; // rcx
  unsigned int *v32; // rbp
  unsigned int *v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rsi
  char v36; // al
  unsigned int **v37; // rdx
  unsigned int *v38; // rsi
  unsigned int **v39; // [rsp+8h] [rbp-50h]
  unsigned int **v40; // [rsp+10h] [rbp-48h]
  unsigned int ***v41; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8920);
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
LABEL_2:
        if ( !v2 || *(_DWORD *)(a1 + 8936) >= *(_DWORD *)(v2 - 4) )
          return 1;
        v3 = *(_QWORD *)(a1 + 104);
        if ( *(_DWORD *)(a1 + 8632) == 1 && !*(_BYTE *)(v3 + 4) || !(unsigned __int8)sub_18290A0(v3) )
        {
          *(_DWORD *)(a1 + 10308) = 3;
          return 1;
        }
        v2 = *(_QWORD *)(a1 + 8920);
        v5 = *(_QWORD *)(a1 + 8856);
        v6 = *(_DWORD *)(v2 + 4LL * *(unsigned int *)(a1 + 8936));
        v7 = *(_QWORD *)(a1 + 104);
        v8 = *(_DWORD *)(a1 + 8936) + 1;
        --*(_DWORD *)(a1 + 8944);
        *(_DWORD *)(a1 + 8936) = v8;
        v9 = 8LL * v6;
        v10 = (unsigned int ***)(v9 + v5);
        v41 = v10;
        if ( !*(_DWORD *)(v7 + 712) )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 112) + 473LL) )
            break;
        }
LABEL_11:
        v11 = *v41;
        if ( *v41 )
          goto LABEL_12;
        v2 = *(_QWORD *)(a1 + 8920);
      }
      v11 = *v10;
    }
    while ( !*v10 );
    v30 = *((unsigned int *)v11 - 1);
    v31 = *((unsigned int *)v11 - 2);
    v32 = (unsigned int *)((char *)v11 + v30);
    v33 = (unsigned int *)((char *)v11 + v31);
    if ( (_DWORD)v31 != (_DWORD)v30 )
      break;
LABEL_12:
    v12 = (unsigned int **)((char *)v11 + *((unsigned int *)v11 - 3));
    if ( v12 != v11 )
    {
      v13 = v6 ^ 1;
      v14 = v11;
      while ( 1 )
      {
        v15 = *v11;
        v16 = (*v11)[2];
        if ( v13 == v16 )
        {
          v16 = v15[3];
          *((_QWORD *)v15 + 1) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v16), _mm_cvtsi32_si128(v13)).m128i_u64[0];
        }
        v17 = *(_QWORD *)(a1 + 8848);
        v18 = *(char *)(v17 + v16);
        if ( v18 == 1 )
          break;
        v19 = v15 + 4;
        v20 = (__int64)&v15[*v15 + 2];
        if ( v15 + 4 == (unsigned int *)v20 )
        {
LABEL_30:
          if ( v18 == -1 )
          {
            if ( v11 >= v12 )
              goto LABEL_43;
            v26 = (char *)v12 - 1 - (char *)v11;
            if ( v26 <= 0x17 )
            {
              v37 = v14;
              v27 = v11 + 1;
            }
            else
            {
              v27 = v11 + 1;
              if ( v14 != v11 + 1 )
              {
                v28 = 0;
                v29 = (v26 >> 3) + 1;
                do
                {
                  *(__m128i *)&v14[v28] = _mm_loadu_si128((const __m128i *)&v11[v28]);
                  v28 += 2;
                }
                while ( v28 != 2 * (((v26 >> 3) + 1) >> 1) );
                if ( (v29 & 1) != 0 )
                  v14[v29 & 0xFFFFFFFFFFFFFFFELL] = v11[v29 & 0xFFFFFFFFFFFFFFFELL];
LABEL_42:
                LODWORD(v14) = (_DWORD)v14 + (v26 & 0xFFFFFFF8) + 8;
LABEL_43:
                if ( *v41 )
                  *((_DWORD *)*v41 - 3) = (_DWORD)v14 - (unsigned int)*v41;
                if ( *(_QWORD *)(a1 + 8984) == qword_1C7EC50 && !*(_BYTE *)(a1 + 2416) )
                {
                  *(_QWORD *)(a1 + 8984) = v15;
                  *(_DWORD *)(a1 + 8992) = -2;
                  return 0;
                }
                return 0;
              }
              v37 = v14;
            }
            while ( 1 )
            {
              v38 = *v11;
              ++v37;
              v11 = v27;
              *(v37 - 1) = v38;
              if ( v27 >= v12 )
                break;
              ++v27;
            }
            goto LABEL_42;
          }
          *v14 = v15;
          ++*(_DWORD *)(a1 + 8);
          ++v14;
          v39 = v12;
          sub_8F28B0(a1, v16, (__int64)v15, 0);
          v12 = v39;
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 112) + 480LL) )
          {
            if ( (*((_BYTE *)v15 + 7) & 3u) - 2 <= 1 )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 48LL))(
                *(_QWORD *)(a1 + 7488),
                *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (v16 >> 1)));
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 7488) + 64LL))(*(_QWORD *)(a1 + 7488));
              v12 = v39;
            }
          }
LABEL_15:
          if ( ++v11 == v12 )
            goto LABEL_27;
        }
        else
        {
          while ( *(_BYTE *)(v17 + *v19) == 0xFF )
          {
            if ( ++v19 == (unsigned int *)v20 )
              goto LABEL_30;
          }
          v21 = *(_QWORD *)(a1 + 8856);
          v22 = (__int64 *)(v21 + 8LL * (*v19 ^ 1));
          v23 = *v22;
          if ( !*v22
            || (v24 = *(unsigned int *)(v23 - 12), v21 = v24, v24 + 8 >= (unsigned __int64)*(unsigned int *)(v23 - 8)) )
          {
            v40 = v12;
            sub_9676E0(v22, v22, v21);
            v12 = v40;
            v23 = *v22;
            v24 = *(unsigned int *)(*v22 - 12);
            LODWORD(v21) = *(_DWORD *)(*v22 - 12);
          }
          *(_QWORD *)(v23 + v24) = v15;
          ++v11;
          *(_DWORD *)(v23 - 12) = v21 + 8;
          v15[3] = *v19;
          *v19 = v13;
          if ( v11 == v12 )
          {
LABEL_27:
            v11 = *v41;
            v2 = *(_QWORD *)(a1 + 8920);
            if ( !*v41 )
              goto LABEL_2;
            v25 = (_DWORD)v14 - (_DWORD)v11;
            goto LABEL_29;
          }
        }
      }
      *v14++ = v15;
      goto LABEL_15;
    }
    v2 = *(_QWORD *)(a1 + 8920);
    v25 = 0;
LABEL_29:
    *((_DWORD *)v11 - 3) = v25;
  }
  v34 = v9 | 1;
  while ( 1 )
  {
    v35 = *v33;
    v36 = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v35);
    if ( v36 == -1 )
      break;
    if ( !v36 )
    {
      ++*(_DWORD *)(a1 + 12);
      sub_8F28B0(a1, v35, v34, 0);
    }
    if ( v32 == ++v33 )
      goto LABEL_11;
  }
  ++*(_DWORD *)(a1 + 12);
  if ( *(_QWORD *)(a1 + 8984) != qword_1C7EC50 || *(_BYTE *)(a1 + 2416) )
    return 0;
  *(_QWORD *)(a1 + 8984) = v34;
  *(_DWORD *)(a1 + 8992) = v35 ^ 1;
  return 0;
}

