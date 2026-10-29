__int64 __fastcall sub_8933F0(unsigned __int64 *a1, int **a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  __int64 *v6; // rbx
  __m128i v7; // xmm0
  __int64 v8; // rax
  int *v9; // r12
  int *v10; // r15
  __int64 v11; // rbp
  int v12; // eax
  int v13; // eax
  void *v14; // r14
  __int64 result; // rax
  size_t v16; // rdi
  __int64 *v17; // r15
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 *v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __m128i v24; // xmm0
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r13
  __int64 v28; // rcx
  __int64 v29; // r12
  void *v30; // r14
  __int64 v31; // rsi
  __int64 *v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // r9
  __int64 *v35; // [rsp+8h] [rbp-80h]
  __int64 *v38; // [rsp+20h] [rbp-68h]
  unsigned int v39; // [rsp+2Ch] [rbp-5Ch]
  __int64 v40[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    LODWORD(v5) = *(_DWORD *)(v4 - 4);
    v6 = (__int64 *)(v4 + 8LL * (unsigned int)v5);
    if ( (_DWORD)v5 == *(_DWORD *)(v4 - 8) )
    {
      v39 = (unsigned int)(3 * v5 + 1) >> 1;
      v16 = 8 * v39 + 8;
      if ( 8 * (int)v5 + 8 >= (unsigned int)v16 || (unsigned int)v5 >= (unsigned int)(3 * v5 + 1) >> 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v40, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v40);
        sub_233E40((__int64)v40);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v5 = sub_186B270(v16);
      v35 = (__int64 *)v5;
      v4 = v5 + 8;
      v17 = (__int64 *)*a1;
      if ( *a1 )
      {
        v18 = *((unsigned int *)v17 - 1);
        *(_DWORD *)(v5 + 4) = v18;
        v19 = 8 * v18;
        v20 = &v17[v18];
        if ( v17 != v20 )
        {
          v21 = v19 - 8;
          if ( (unsigned __int64)(v19 - 8) <= 8 || v4 < (unsigned __int64)(v17 + 2) && v17 < v35 + 3 )
          {
            v32 = v17;
            v33 = v4;
            do
            {
              v34 = *v32;
              *v32++ = 0;
              v33 += 8LL;
              *(_QWORD *)(v33 - 8) = v34;
            }
            while ( v32 != v20 );
          }
          else
          {
            v22 = 0;
            v23 = (v21 >> 3) + 1;
            do
            {
              v24 = _mm_loadu_si128((const __m128i *)&v17[v22]);
              *(_OWORD *)&v17[v22] = 0;
              *(__m128i *)&v35[v22 + 1] = v24;
              v22 += 2LL;
            }
            while ( v22 != 2 * (v23 >> 1) );
            if ( (v23 & 1) != 0 )
            {
              v25 = v23 & 0xFFFFFFFFFFFFFFFELL;
              v26 = v17[v25];
              v17[v25] = 0;
              v35[v25 + 1] = v26;
            }
          }
        }
        v38 = &v17[v18];
        if ( (_DWORD)v18 )
        {
          do
          {
            v27 = *v17;
            if ( *v17 )
            {
              v28 = *(unsigned int *)(v27 - 4);
              if ( (_DWORD)v28 )
              {
                v29 = v27 + 40 * v28;
                do
                {
                  v30 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v27 + 8);
                  v31 = v27 + 24;
                  v27 += 40;
                  sub_182CBA0(v30, v31);
                }
                while ( v27 != v29 );
                v27 = *v17;
              }
              sub_186B220((void *)(v27 - 8));
            }
            ++v17;
          }
          while ( v17 != v38 );
          v17 = (__int64 *)*a1;
        }
        sub_186B220(v17 - 1);
        v5 = *((unsigned int *)v35 + 1);
        v6 = (__int64 *)(v4 + 8 * v5);
      }
      else
      {
        *(_DWORD *)(v5 + 4) = 0;
        v6 = (__int64 *)(v5 + 8);
        LODWORD(v5) = 0;
      }
      *a1 = v4;
      *(_DWORD *)v35 = v39;
    }
  }
  else
  {
    v5 = sub_186B270(0x18u);
    v4 = v5 + 8;
    *(_QWORD *)v5 = 2;
    v6 = (__int64 *)(v5 + 8);
    *a1 = v5 + 8;
    LODWORD(v5) = 0;
  }
  *v6 = 0;
  if ( *a2 )
  {
    v7 = _mm_loadl_epi64((const __m128i *)(*a2 - 2));
    v8 = sub_186B270(40LL * (unsigned int)_mm_cvtsi128_si32(v7) + 8) + 8;
    *(_QWORD *)(v8 - 8) = v7.m128i_i64[0];
    *v6 = v8;
    v9 = *a2;
    if ( *a2 )
    {
      v10 = &v9[10 * *(v9 - 1)];
      if ( v9 != v10 )
      {
        v11 = v8;
        while ( 1 )
        {
          v13 = *v9;
          v14 = qword_1C7F2C0;
          *(_DWORD *)(v11 + 8) = 0;
          *(_BYTE *)(v11 + 12) &= 0xFCu;
          *(_BYTE *)(v11 + 28) &= 0xFCu;
          *(_DWORD *)v11 = v13;
          *(_QWORD *)(v11 + 16) = 0;
          *(_DWORD *)(v11 + 24) = 1;
          *(_QWORD *)(v11 + 32) = 0;
          if ( (v9[3] & 1) != 0 )
          {
            sub_182C690(v14, v11 + 8, v9 + 2);
            if ( (v9[7] & 1) != 0 )
              goto LABEL_11;
LABEL_8:
            v12 = v9[6];
            v9 += 10;
            *(_BYTE *)(v11 + 28) &= ~1u;
            v11 += 40;
            *(_DWORD *)(v11 - 16) = v12;
            if ( v10 == v9 )
              break;
          }
          else
          {
            *(_DWORD *)(v11 + 8) = v9[2];
            if ( (v9[7] & 1) == 0 )
              goto LABEL_8;
LABEL_11:
            sub_182C690(v14, v11 + 24, v9 + 6);
            v9 += 10;
            v11 += 40;
            if ( v10 == v9 )
              break;
          }
        }
      }
    }
    v4 = *a1;
    LODWORD(v5) = *(_DWORD *)(*a1 - 4);
  }
  result = (unsigned int)(v5 + 1);
  *(_DWORD *)(v4 - 4) = result;
  return result;
}

