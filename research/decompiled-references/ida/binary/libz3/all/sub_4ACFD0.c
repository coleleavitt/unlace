__int64 __fastcall sub_4ACFD0(__int64 a1, __int64 *a2)
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
  _DWORD *v14; // rcx
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
  _DWORD *v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // rbx
  void *v31; // r13
  __int64 v32; // rsi
  unsigned int v33; // edx
  __int64 *v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // r9
  _DWORD *v37; // [rsp+8h] [rbp-90h]
  __int64 v38; // [rsp+10h] [rbp-88h]
  __int64 *v39; // [rsp+18h] [rbp-80h]
  __int64 *v40; // [rsp+20h] [rbp-78h]
  unsigned int v41; // [rsp+2Ch] [rbp-6Ch]
  __int64 v42[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v38 = a1;
  v39 = a2;
  if ( v3 )
  {
    LODWORD(v4) = *(_DWORD *)(v3 - 4);
    v5 = (__int64 *)(v3 + 8LL * (unsigned int)v4);
    if ( (_DWORD)v4 == *(_DWORD *)(v3 - 8) )
    {
      v41 = (unsigned int)(3 * v4 + 1) >> 1;
      v16 = 8 * v41 + 8;
      if ( 8 * (int)v4 + 8 >= (unsigned int)v16 || (unsigned int)v4 >= (unsigned int)(3 * v4 + 1) >> 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v42, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v42);
        sub_233E40((__int64)v42);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v4 = sub_186B270(v16);
      v37 = (_DWORD *)v4;
      v3 = v4 + 8;
      v17 = *(__int64 **)(v38 + 8);
      if ( v17 )
      {
        v18 = *((unsigned int *)v17 - 1);
        *(_DWORD *)(v4 + 4) = v18;
        v19 = 8 * v18;
        v20 = &v17[v18];
        if ( v20 != v17 )
        {
          v21 = v19 - 8;
          if ( (unsigned __int64)(v19 - 8) <= 8 || v3 < (unsigned __int64)(v17 + 2) && v17 < (__int64 *)v37 + 3 )
          {
            v34 = v17;
            v35 = v3;
            do
            {
              v36 = *v34;
              *v34++ = 0;
              v35 += 8LL;
              *(_QWORD *)(v35 - 8) = v36;
            }
            while ( v34 != v20 );
          }
          else
          {
            v22 = 0;
            v23 = (v21 >> 3) + 1;
            do
            {
              v24 = _mm_loadu_si128((const __m128i *)&v17[v22 / 2]);
              v25 = v37;
              *(_OWORD *)&v17[v22 / 2] = 0;
              *(__m128i *)&v25[v22 + 2] = v24;
              v22 += 4LL;
            }
            while ( v22 != 4 * (v23 >> 1) );
            if ( (v23 & 1) != 0 )
            {
              v26 = 2 * (v23 & 0xFFFFFFFFFFFFFFFELL);
              v27 = v17[v26 / 2];
              v17[v26 / 2] = 0;
              *(_QWORD *)&v25[v26 + 2] = v27;
            }
          }
        }
        v40 = &v17[v18];
        if ( (_DWORD)v18 )
        {
          do
          {
            v28 = *v17;
            if ( *v17 )
            {
              v29 = *(unsigned int *)(v28 - 4);
              if ( (_DWORD)v29 )
              {
                v30 = v28 + 32 * v29;
                do
                {
                  v31 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v28);
                  v32 = v28 + 16;
                  v28 += 32;
                  sub_182CBA0(v31, v32);
                }
                while ( v30 != v28 );
                v28 = *v17;
              }
              sub_186B220((void *)(v28 - 8));
            }
            ++v17;
          }
          while ( v17 != v40 );
          v17 = *(__int64 **)(v38 + 8);
        }
        sub_186B220(v17 - 1);
        v4 = (unsigned int)v37[1];
        v5 = (__int64 *)(v3 + 8 * v4);
      }
      else
      {
        *(_DWORD *)(v4 + 4) = 0;
        v5 = (__int64 *)(v4 + 8);
        LODWORD(v4) = 0;
      }
      v33 = v41;
      *(_QWORD *)(v38 + 8) = v3;
      *v37 = v33;
    }
  }
  else
  {
    v4 = sub_186B270(0x18u);
    v3 = v4 + 8;
    *(_QWORD *)v4 = 2;
    v5 = (__int64 *)(v4 + 8);
    *(_QWORD *)(v38 + 8) = v4 + 8;
    LODWORD(v4) = 0;
  }
  v6 = v39;
  *v5 = 0;
  if ( *v6 )
  {
    v7 = _mm_loadl_epi64((const __m128i *)(*v6 - 8));
    v37 = (_DWORD *)v7.m128i_i64[0];
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
    v3 = *(_QWORD *)(v38 + 8);
    LODWORD(v4) = *(_DWORD *)(v3 - 4);
  }
  v14 = (_DWORD *)v38;
  result = (unsigned int)(v4 + 1);
  *(_DWORD *)(v3 - 4) = result;
  *v14 = result;
  return result;
}

