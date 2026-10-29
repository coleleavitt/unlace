unsigned __int64 __fastcall sub_48EB00(__int64 *a1, unsigned int a2, int *a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  __m128i v5; // xmm0
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rax
  int *v13; // r12
  __int64 v14; // r15
  _QWORD *v15; // rdx
  unsigned int *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  int v19; // ecx
  int v20; // edx
  int v21; // edx
  __m128i v22; // xmm1
  unsigned int v23; // ecx
  size_t v24; // rsi
  unsigned int *v25; // rax
  _QWORD *v26; // rax
  char **exception; // rbx
  _QWORD *v28; // [rsp+0h] [rbp-78h]
  _QWORD *v29; // [rsp+0h] [rbp-78h]
  unsigned int v30; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v31[11]; // [rsp+20h] [rbp-58h] BYREF

  result = (unsigned int)*a3;
  if ( (_DWORD)result )
  {
    v5 = _mm_cvtsi32_si128(a2);
    v9 = a1[3];
    v10 = a1[1] + 16LL * (unsigned int)_mm_cvtsi128_si32(v5);
    ++*(_DWORD *)(v10 + 8);
    v11 = v9 + 24LL * a4;
    v12 = *(unsigned int *)(v10 + 12);
    if ( (_DWORD)v12 == -1 )
    {
      v5 = _mm_cvtsi32_si128(a2);
      v13 = sub_48D4A0((int **)v10, &v30);
    }
    else
    {
      v30 = *(_DWORD *)(v10 + 12);
      v13 = (int *)(*(_QWORD *)v10 + 40 * v12);
      *(_DWORD *)(v10 + 12) = v13[9];
    }
    LODWORD(v14) = *(_DWORD *)(v11 + 12);
    ++*(_DWORD *)(v11 + 8);
    v15 = *(_QWORD **)v11;
    if ( (_DWORD)v14 == -1 )
    {
      if ( v15 )
      {
        v14 = *((unsigned int *)v15 - 1);
        v16 = (unsigned int *)&v15[v14];
        if ( (_DWORD)v14 == *((_DWORD *)v15 - 2) )
        {
          v23 = (unsigned int)(3 * v14 + 1) >> 1;
          v24 = 8 * v23 + 8;
          if ( 8 * (int)v14 + 8 >= (unsigned int)v24 || (unsigned int)v14 >= v23 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v31, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v31);
            sub_233E40((__int64)v31);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v25 = (unsigned int *)sub_186B300(v15 - 1, v24);
          v5 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v5));
          v15 = v25 + 2;
          *(_QWORD *)v11 = v25 + 2;
          *v25 = (unsigned int)(3 * v14 + 1) >> 1;
          v16 = &v25[2 * v25[1] + 2];
        }
      }
      else
      {
        LODWORD(v14) = 0;
        v26 = (_QWORD *)sub_186B270(0x18u);
        v5 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v5));
        v15 = v26 + 1;
        *v26 = 2;
        *(_QWORD *)v11 = v26 + 1;
        v16 = (unsigned int *)(v26 + 1);
      }
      *(_QWORD *)v16 = 0;
      v17 = *((unsigned int *)v15 - 1);
      v18 = *a1;
      v19 = v17 + 1;
      result = (unsigned __int64)&v15[v17];
      *((_DWORD *)v15 - 1) = v19;
      v13[8] = a4;
      if ( (a3[1] & 1) == 0 )
      {
LABEL_8:
        v20 = *a3;
        *((_BYTE *)v13 + 4) &= ~1u;
        *v13 = v20;
        if ( (a3[5] & 1) == 0 )
        {
LABEL_9:
          v21 = a3[4];
          *((_BYTE *)v13 + 20) &= ~1u;
          v13[4] = v21;
LABEL_10:
          v22 = _mm_cvtsi32_si128(v30);
          v13[9] = v14;
          *(_QWORD *)result = _mm_unpacklo_epi32(v5, v22).m128i_u64[0];
          return result;
        }
LABEL_13:
        v29 = (_QWORD *)result;
        sub_182EA00(v18, v13 + 4, a3 + 4);
        v5 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v5));
        result = (unsigned __int64)v29;
        goto LABEL_10;
      }
    }
    else
    {
      v18 = *a1;
      result = (unsigned __int64)&v15[(unsigned int)v14];
      *(_DWORD *)(v11 + 12) = *(_DWORD *)(result + 4);
      v13[8] = a4;
      if ( (a3[1] & 1) == 0 )
        goto LABEL_8;
    }
    v28 = (_QWORD *)result;
    sub_182EA00(v18, v13, a3);
    v5 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v5));
    result = (unsigned __int64)v28;
    if ( (a3[5] & 1) == 0 )
      goto LABEL_9;
    goto LABEL_13;
  }
  return result;
}

