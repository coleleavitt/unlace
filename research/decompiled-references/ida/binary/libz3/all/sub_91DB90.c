__int64 __fastcall sub_91DB90(unsigned __int64 *a1, int **a2)
{
  char **exception; // rbx
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  __int64 *v5; // rbx
  __m128i v6; // xmm0
  __int64 v7; // rax
  int *v8; // r12
  int *v9; // r15
  __int64 v10; // rbp
  int v11; // eax
  int v12; // eax
  void *v13; // r14
  __int64 result; // rax
  size_t v15; // rdi
  __int64 *v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 *v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __m128i v23; // xmm0
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r13
  __int64 v27; // rcx
  __int64 v28; // r12
  void *v29; // r14
  __int64 v30; // rsi
  __int64 *v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // r9
  __int64 *v34; // [rsp+8h] [rbp-80h]
  __int64 *v37; // [rsp+20h] [rbp-68h]
  unsigned int v38; // [rsp+2Ch] [rbp-5Ch]
  __int64 v39[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *a1;
  if ( *a1 )
  {
    LODWORD(v4) = *(_DWORD *)(v3 - 4);
    v5 = (__int64 *)(v3 + 8LL * (unsigned int)v4);
    if ( (_DWORD)v4 == *(_DWORD *)(v3 - 8) )
    {
      v38 = (unsigned int)(3 * v4 + 1) >> 1;
      v15 = 8 * v38 + 8;
      if ( 8 * (int)v4 + 8 >= (unsigned int)v15 || (unsigned int)v4 >= (unsigned int)(3 * v4 + 1) >> 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(v39, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v39);
        sub_233E40((__int64)v39);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v4 = sub_186B270(v15);
      v34 = (__int64 *)v4;
      v3 = v4 + 8;
      v16 = (__int64 *)*a1;
      if ( *a1 )
      {
        v17 = *((unsigned int *)v16 - 1);
        *(_DWORD *)(v4 + 4) = v17;
        v18 = 8 * v17;
        v19 = &v16[v17];
        if ( v16 != v19 )
        {
          v20 = v18 - 8;
          if ( (unsigned __int64)(v18 - 8) <= 8 || v3 < (unsigned __int64)(v16 + 2) && v16 < v34 + 3 )
          {
            v31 = v16;
            v32 = v3;
            do
            {
              v33 = *v31;
              *v31++ = 0;
              v32 += 8LL;
              *(_QWORD *)(v32 - 8) = v33;
            }
            while ( v31 != v19 );
          }
          else
          {
            v21 = 0;
            v22 = (v20 >> 3) + 1;
            do
            {
              v23 = _mm_loadu_si128((const __m128i *)&v16[v21]);
              *(_OWORD *)&v16[v21] = 0;
              *(__m128i *)&v34[v21 + 1] = v23;
              v21 += 2LL;
            }
            while ( v21 != 2 * (v22 >> 1) );
            if ( (v22 & 1) != 0 )
            {
              v24 = v22 & 0xFFFFFFFFFFFFFFFELL;
              v25 = v16[v24];
              v16[v24] = 0;
              v34[v24 + 1] = v25;
            }
          }
        }
        v37 = &v16[v17];
        if ( (_DWORD)v17 )
        {
          do
          {
            v26 = *v16;
            if ( *v16 )
            {
              v27 = *(unsigned int *)(v26 - 4);
              if ( (_DWORD)v27 )
              {
                v28 = v26 + 40 * v27;
                do
                {
                  v29 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v26 + 8);
                  v30 = v26 + 24;
                  v26 += 40;
                  sub_182CBA0(v29, v30);
                }
                while ( v26 != v28 );
                v26 = *v16;
              }
              sub_186B220((void *)(v26 - 8));
            }
            ++v16;
          }
          while ( v16 != v37 );
          v16 = (__int64 *)*a1;
        }
        sub_186B220(v16 - 1);
        v4 = *((unsigned int *)v34 + 1);
        v5 = (__int64 *)(v3 + 8 * v4);
      }
      else
      {
        *(_DWORD *)(v4 + 4) = 0;
        v5 = (__int64 *)(v4 + 8);
        LODWORD(v4) = 0;
      }
      *a1 = v3;
      *(_DWORD *)v34 = v38;
    }
  }
  else
  {
    v4 = sub_186B270(0x18u);
    v3 = v4 + 8;
    *(_QWORD *)v4 = 2;
    v5 = (__int64 *)(v4 + 8);
    *a1 = v4 + 8;
    LODWORD(v4) = 0;
  }
  *v5 = 0;
  if ( *a2 )
  {
    v6 = _mm_loadl_epi64((const __m128i *)(*a2 - 2));
    v7 = sub_186B270(40LL * (unsigned int)_mm_cvtsi128_si32(v6) + 8) + 8;
    *(_QWORD *)(v7 - 8) = v6.m128i_i64[0];
    *v5 = v7;
    v8 = *a2;
    if ( *a2 )
    {
      v9 = &v8[10 * *(v8 - 1)];
      if ( v8 != v9 )
      {
        v10 = v7;
        while ( 1 )
        {
          v12 = *v8;
          v13 = qword_1C7F2C0;
          *(_DWORD *)(v10 + 8) = 0;
          *(_BYTE *)(v10 + 12) &= 0xFCu;
          *(_BYTE *)(v10 + 28) &= 0xFCu;
          *(_DWORD *)v10 = v12;
          *(_QWORD *)(v10 + 16) = 0;
          *(_DWORD *)(v10 + 24) = 1;
          *(_QWORD *)(v10 + 32) = 0;
          if ( (v8[3] & 1) != 0 )
          {
            sub_182C690(v13, v10 + 8, v8 + 2);
            if ( (v8[7] & 1) != 0 )
              goto LABEL_11;
LABEL_8:
            v11 = v8[6];
            v8 += 10;
            *(_BYTE *)(v10 + 28) &= ~1u;
            v10 += 40;
            *(_DWORD *)(v10 - 16) = v11;
            if ( v9 == v8 )
              break;
          }
          else
          {
            *(_DWORD *)(v10 + 8) = v8[2];
            if ( (v8[7] & 1) == 0 )
              goto LABEL_8;
LABEL_11:
            sub_182C690(v13, v10 + 24, v8 + 6);
            v8 += 10;
            v10 += 40;
            if ( v9 == v8 )
              break;
          }
        }
      }
    }
    v3 = *a1;
    LODWORD(v4) = *(_DWORD *)(*a1 - 4);
  }
  result = (unsigned int)(v4 + 1);
  *(_DWORD *)(v3 - 4) = result;
  return result;
}

