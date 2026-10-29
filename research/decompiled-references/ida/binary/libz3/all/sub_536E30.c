__int64 __fastcall sub_536E30(unsigned __int64 *a1, __int64 *a2)
{
  char **exception; // rbx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 *v6; // r15
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rbx
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
  _DWORD *v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // rbx
  void *v30; // r14
  __int64 v31; // rsi
  unsigned int v32; // edx
  __int64 *v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // r9
  _DWORD *v36; // [rsp+8h] [rbp-90h]
  unsigned __int64 *v37; // [rsp+10h] [rbp-88h]
  __int64 *v38; // [rsp+18h] [rbp-80h]
  __int64 *v39; // [rsp+20h] [rbp-78h]
  unsigned int v40; // [rsp+2Ch] [rbp-6Ch]
  __int64 v41[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *a1;
  v37 = a1;
  v38 = a2;
  if ( v3 )
  {
    LODWORD(v4) = *(_DWORD *)(v3 - 4);
    v5 = (__int64 *)(v3 + 8LL * (unsigned int)v4);
    if ( (_DWORD)v4 == *(_DWORD *)(v3 - 8) )
    {
      v40 = (unsigned int)(3 * v4 + 1) >> 1;
      v15 = 8 * v40 + 8;
      if ( 8 * (int)v4 + 8 >= (unsigned int)v15 || (unsigned int)v4 >= (unsigned int)(3 * v4 + 1) >> 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v41, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v41);
        sub_233E40((__int64)v41);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v4 = sub_186B270(v15);
      v36 = (_DWORD *)v4;
      v3 = v4 + 8;
      v16 = (__int64 *)*v37;
      if ( *v37 )
      {
        v17 = *((unsigned int *)v16 - 1);
        *(_DWORD *)(v4 + 4) = v17;
        v18 = 8 * v17;
        v19 = &v16[v17];
        if ( v16 != v19 )
        {
          v20 = v18 - 8;
          if ( (unsigned __int64)(v18 - 8) <= 8 || v3 < (unsigned __int64)(v16 + 2) && v16 < (__int64 *)v36 + 3 )
          {
            v33 = v16;
            v34 = v3;
            do
            {
              v35 = *v33;
              *v33++ = 0;
              v34 += 8LL;
              *(_QWORD *)(v34 - 8) = v35;
            }
            while ( v33 != v19 );
          }
          else
          {
            v21 = 0;
            v22 = (v20 >> 3) + 1;
            do
            {
              v23 = _mm_loadu_si128((const __m128i *)&v16[v21 / 2]);
              v24 = v36;
              *(_OWORD *)&v16[v21 / 2] = 0;
              *(__m128i *)&v24[v21 + 2] = v23;
              v21 += 4LL;
            }
            while ( v21 != 4 * (v22 >> 1) );
            if ( (v22 & 1) != 0 )
            {
              v25 = 2 * (v22 & 0xFFFFFFFFFFFFFFFELL);
              v26 = v16[v25 / 2];
              v16[v25 / 2] = 0;
              *(_QWORD *)&v24[v25 + 2] = v26;
            }
          }
        }
        v39 = &v16[v17];
        if ( (_DWORD)v17 )
        {
          do
          {
            v27 = *v16;
            if ( *v16 )
            {
              v28 = *(unsigned int *)(v27 - 4);
              if ( (_DWORD)v28 )
              {
                v29 = v27 + 32 * v28;
                do
                {
                  v30 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v27);
                  v31 = v27 + 16;
                  v27 += 32;
                  sub_182CBA0(v30, v31);
                }
                while ( v29 != v27 );
                v27 = *v16;
              }
              sub_186B220((void *)(v27 - 8));
            }
            ++v16;
          }
          while ( v16 != v39 );
          v16 = (__int64 *)*v37;
        }
        sub_186B220(v16 - 1);
        v4 = (unsigned int)v36[1];
        v5 = (__int64 *)(v3 + 8 * v4);
      }
      else
      {
        *(_DWORD *)(v4 + 4) = 0;
        v5 = (__int64 *)(v4 + 8);
        LODWORD(v4) = 0;
      }
      v32 = v40;
      *v37 = v3;
      *v36 = v32;
    }
  }
  else
  {
    v4 = sub_186B270(0x18u);
    v3 = v4 + 8;
    *(_QWORD *)v4 = 2;
    v5 = (__int64 *)(v4 + 8);
    *v37 = v4 + 8;
    LODWORD(v4) = 0;
  }
  v6 = v38;
  *v5 = 0;
  if ( *v6 )
  {
    v7 = _mm_loadl_epi64((const __m128i *)(*v6 - 8));
    v36 = (_DWORD *)v7.m128i_i64[0];
    v8 = sub_186B270(32LL * (unsigned int)_mm_cvtsi128_si32(v7) + 8) + 8;
    *(_QWORD *)(v8 - 8) = v7.m128i_i64[0];
    *v5 = v8;
    v9 = *v6;
    if ( *v6 )
    {
      v10 = v9 + 32LL * *(unsigned int *)(v9 - 4);
      if ( v9 != v10 )
      {
        v11 = v8;
        while ( 1 )
        {
          *(_BYTE *)(v11 + 4) &= 0xFCu;
          v13 = qword_1C7F2C0;
          *(_BYTE *)(v11 + 20) &= 0xFCu;
          *(_DWORD *)v11 = 0;
          *(_QWORD *)(v11 + 8) = 0;
          *(_DWORD *)(v11 + 16) = 1;
          *(_QWORD *)(v11 + 24) = 0;
          if ( (*(_BYTE *)(v9 + 4) & 1) != 0 )
          {
            sub_182C690(v13, v11, v9);
            if ( (*(_BYTE *)(v9 + 20) & 1) != 0 )
              goto LABEL_11;
LABEL_8:
            v12 = *(_DWORD *)(v9 + 16);
            v9 += 32;
            *(_BYTE *)(v11 + 20) &= ~1u;
            v11 += 32;
            *(_DWORD *)(v11 - 16) = v12;
            if ( v10 == v9 )
              break;
          }
          else
          {
            *(_DWORD *)v11 = *(_DWORD *)v9;
            if ( (*(_BYTE *)(v9 + 20) & 1) == 0 )
              goto LABEL_8;
LABEL_11:
            sub_182C690(v13, v11 + 16, v9 + 16);
            v9 += 32;
            v11 += 32;
            if ( v10 == v9 )
              break;
          }
        }
      }
    }
    v3 = *v37;
    LODWORD(v4) = *(_DWORD *)(*v37 - 4);
  }
  result = (unsigned int)(v4 + 1);
  *(_DWORD *)(v3 - 4) = result;
  return result;
}

