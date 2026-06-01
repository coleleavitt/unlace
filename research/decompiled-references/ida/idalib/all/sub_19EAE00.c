__int64 __fastcall sub_19EAE00(__int64 a1, int a2, char a3, int a4)
{
  __int64 *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rbx
  unsigned __int8 v12; // cl
  char v13; // si
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  const __m128i *v16; // rbx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __m128i *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r11
  __m128i *v25; // r9
  __m128i *v26; // r10
  __int64 v27; // rsi
  __int64 v28; // rdi
  __m128i *v29; // rdx
  __m128i *v30; // rsi
  __m128i *v31; // rdi
  unsigned __int64 v32; // rdx
  const __m128i *v33; // rcx
  __int64 v34; // rdx
  void **v35; // rcx
  __int64 v36; // r10
  __int64 v37; // rsi
  __int64 *v38; // rdi
  __int64 *v39; // rsi
  __int64 v40; // rax
  int v41; // [rsp+0h] [rbp-78h]
  __int64 v42; // [rsp+8h] [rbp-70h]
  __int64 v43; // [rsp+8h] [rbp-70h]
  __m128i *v44; // [rsp+8h] [rbp-70h]
  __int64 v45; // [rsp+8h] [rbp-70h]
  int v46; // [rsp+10h] [rbp-68h]
  void **v47; // [rsp+10h] [rbp-68h]
  int v48; // [rsp+10h] [rbp-68h]
  __int64 v49; // [rsp+10h] [rbp-68h]
  int v50; // [rsp+10h] [rbp-68h]
  int v52; // [rsp+1Ch] [rbp-5Ch]
  int v53; // [rsp+1Ch] [rbp-5Ch]
  _BYTE v54[2]; // [rsp+20h] [rbp-58h] BYREF
  char v55; // [rsp+22h] [rbp-56h]
  char v56; // [rsp+23h] [rbp-55h]
  __int64 v57; // [rsp+28h] [rbp-50h]
  int v58; // [rsp+30h] [rbp-48h]
  __int64 v59; // [rsp+38h] [rbp-40h]

  v7 = *(__int64 **)(a1 + 24);
  v8 = *v7;
  if ( (*v7 & 1) != 0 )
  {
    v13 = 0;
LABEL_20:
    v14 = *(_QWORD *)(a1 + 40);
    v15 = v7[2];
    v56 = a3;
    v16 = (const __m128i *)v54;
    v17 = *((unsigned int *)v7 + 7);
    v54[0] = v13;
    v57 = v14;
    v18 = *((unsigned int *)v7 + 6);
    v55 = 0;
    v19 = v18 + 1;
    v58 = a4;
    v59 = 0;
    v20 = (__m128i *)(v15 + 32 * v18);
    if ( v19 > v17 )
    {
      v38 = v7 + 2;
      v39 = v7 + 4;
      v41 = a4;
      if ( v15 > (unsigned __int64)v54 || v20 <= (__m128i *)v54 )
      {
        sub_2237220(v38, v39, v19, 32);
        a4 = v41;
        v20 = (__m128i *)(v7[2] + 32LL * *((unsigned int *)v7 + 6));
      }
      else
      {
        sub_2237220(v38, v39, v19, 32);
        a4 = v41;
        v40 = v7[2];
        v16 = (const __m128i *)&v54[v40 - v15];
        v20 = (__m128i *)(32LL * *((unsigned int *)v7 + 6) + v40);
      }
    }
    *v20 = _mm_loadu_si128(v16);
    v20[1] = _mm_loadu_si128(v16 + 1);
    ++*((_DWORD *)v7 + 6);
    v7 = *(__int64 **)(a1 + 24);
    goto LABEL_5;
  }
  if ( (v8 & 2) != 0 )
  {
    if ( (a2 & 0x2F) == 0 )
    {
      v9 = 1;
      goto LABEL_12;
    }
    v13 = 1;
    goto LABEL_20;
  }
  if ( (v8 & 4) != 0 )
  {
    v9 = 2;
LABEL_12:
    while ( 1 )
    {
      v12 = v9 + 1;
      if ( v9 == 3 )
        break;
      if ( (v8 & (1LL << v12)) != 0 )
      {
        v13 = v9 + 1;
        if ( (a2 & dword_2646E30[v12]) != 0 )
          goto LABEL_20;
        ++v9;
      }
      else
      {
        if ( v9 != 1 || (v8 & 8) == 0 )
          break;
        v9 = 3;
      }
    }
  }
  else
  {
    v9 = 3;
    if ( (v8 & 8) != 0 )
      goto LABEL_12;
  }
LABEL_5:
  result = v7[1];
  if ( (result & 1) != 0 )
  {
    v11 = 0;
    goto LABEL_23;
  }
  if ( (result & 2) != 0 )
  {
    v11 = 1;
    goto LABEL_23;
  }
  if ( (result & 4) != 0 )
  {
    v11 = 2;
LABEL_23:
    LOBYTE(v21) = v11;
    result = (unsigned __int8)v11;
    if ( (a2 & dword_2646E30[(unsigned __int8)v11]) != 0 )
      goto LABEL_32;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
LABEL_24:
            v21 = v11 + 1;
            if ( v11 == 3 )
              return result;
            result = v7[1];
            if ( (result & (1LL << v21)) != 0 )
              goto LABEL_65;
            v21 = v11 + 2;
            if ( v11 == 2 )
              return result;
            if ( (result & (1LL << v21)) != 0 )
            {
LABEL_65:
              v11 = v21;
            }
            else
            {
              if ( v11 || (result & 8) == 0 )
                return result;
              v11 = 3;
              LOBYTE(v21) = 3;
            }
            result = (unsigned __int8)v21;
          }
          while ( (a2 & dword_2646E30[(unsigned __int8)v21]) == 0 );
LABEL_32:
          v22 = *(_QWORD *)(a1 + 40);
          v23 = *(_QWORD *)(a1 + 24);
          v54[0] = v21;
          v55 = 0;
          v57 = v22;
          result = *(_QWORD *)(v23 + 32);
          v56 = a3;
          v58 = a4;
          v59 = 0;
          if ( result )
            break;
          v46 = a4;
          v42 = v23;
          result = operator new(0x30u);
          v34 = v42;
          a4 = v46;
          *(_QWORD *)(result + 8) = 0x100000000LL;
          *(_QWORD *)result = result + 16;
          v35 = *(void ***)(v42 + 32);
          *(_QWORD *)(v42 + 32) = result;
          if ( !v35 )
          {
            v26 = *(__m128i **)result;
            v33 = (const __m128i *)v54;
            goto LABEL_50;
          }
          if ( *v35 != v35 + 2 )
          {
            v52 = v46;
            v47 = v35;
            free(*v35);
            a4 = v52;
            v35 = v47;
            v34 = v42;
          }
          v48 = a4;
          v43 = v34;
          operator delete(v35, 0x30u);
          a4 = v48;
          v33 = (const __m128i *)v54;
          result = *(_QWORD *)(v43 + 32);
          v36 = *(unsigned int *)(result + 8);
          v25 = *(__m128i **)result;
          v32 = v36 + 1;
          v26 = (__m128i *)(*(_QWORD *)result + 32 * v36);
          if ( v32 > *(unsigned int *)(result + 12) )
            goto LABEL_62;
LABEL_50:
          *v26 = _mm_loadu_si128(v33);
          v26[1] = _mm_loadu_si128(v33 + 1);
          ++*(_DWORD *)(result + 8);
        }
        v24 = *(unsigned int *)(result + 8);
        v25 = *(__m128i **)result;
        v26 = (__m128i *)(*(_QWORD *)result + 32 * v24);
        v27 = (32 * v24) >> 5;
        v28 = (32 * v24) >> 7;
        if ( !v28 )
          break;
        if ( (_BYTE)v21 == v25->m128i_i8[0] )
        {
          v29 = *(__m128i **)result;
          goto LABEL_56;
        }
        if ( v25[2].m128i_i8[0] != (_BYTE)v21 )
        {
          v29 = v25 + 4;
          if ( (_BYTE)v21 != v25[4].m128i_i8[0] )
          {
            v30 = *(__m128i **)result;
            v29 = v25 + 6;
            v31 = &v25[8 * v28];
            if ( v25[6].m128i_i8[0] != (_BYTE)v21 )
            {
              while ( 1 )
              {
                v29 = v30 + 8;
                if ( &v30[8] == v31 )
                {
                  v27 = ((char *)v26 - (char *)v31) >> 5;
                  goto LABEL_46;
                }
                if ( (_BYTE)v21 == v30[8].m128i_i8[0] )
                  goto LABEL_56;
                if ( (_BYTE)v21 == v30[10].m128i_i8[0] )
                {
                  if ( v26 != &v30[10] )
                    goto LABEL_24;
                  goto LABEL_49;
                }
                if ( (_BYTE)v21 == v30[12].m128i_i8[0] )
                {
                  if ( v26 != &v30[12] )
                    goto LABEL_24;
                  goto LABEL_49;
                }
                if ( (_BYTE)v21 == v30[14].m128i_i8[0] )
                  break;
                v30 += 8;
              }
              if ( v26 != &v30[14] )
                goto LABEL_24;
LABEL_49:
              v32 = v24 + 1;
              v33 = (const __m128i *)v54;
              if ( v24 + 1 <= (unsigned __int64)*(unsigned int *)(result + 12) )
                goto LABEL_50;
LABEL_62:
              v37 = result + 16;
              v44 = v25;
              if ( v25 > (__m128i *)v54 || v26 <= (__m128i *)v54 )
              {
                v50 = a4;
                v45 = result;
                sub_2237220(result, v37, v32, 32);
                result = v45;
                v33 = (const __m128i *)v54;
                a4 = v50;
                v26 = (__m128i *)(*(_QWORD *)v45 + 32LL * *(unsigned int *)(v45 + 8));
              }
              else
              {
                v53 = a4;
                v49 = result;
                sub_2237220(result, v37, v32, 32);
                result = v49;
                a4 = v53;
                v33 = (const __m128i *)(*(_QWORD *)v49 + v54 - (_BYTE *)v44);
                v26 = (__m128i *)(32LL * *(unsigned int *)(v49 + 8) + *(_QWORD *)v49);
              }
              goto LABEL_50;
            }
          }
          goto LABEL_56;
        }
        if ( &v25[2] == v26 || v25 == (__m128i *)-32LL )
          goto LABEL_49;
      }
      v29 = *(__m128i **)result;
LABEL_46:
      if ( v27 == 2 )
        goto LABEL_53;
      if ( v27 != 3 )
      {
        if ( v27 != 1 )
          goto LABEL_49;
LABEL_55:
        if ( (_BYTE)v21 != v29->m128i_i8[0] )
          goto LABEL_49;
        goto LABEL_56;
      }
      if ( (_BYTE)v21 != v29->m128i_i8[0] )
        break;
LABEL_56:
      if ( v26 == v29 )
        goto LABEL_49;
    }
    v29 += 2;
LABEL_53:
    if ( (_BYTE)v21 != v29->m128i_i8[0] )
    {
      v29 += 2;
      goto LABEL_55;
    }
    goto LABEL_56;
  }
  v11 = 3;
  if ( (result & 8) != 0 )
    goto LABEL_23;
  return result;
}
