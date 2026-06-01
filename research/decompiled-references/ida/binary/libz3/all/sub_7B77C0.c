__int64 __fastcall sub_7B77C0(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned int v5; // ebp
  __int64 result; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  unsigned int *v9; // rax
  unsigned int v10; // ebx
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(v3 + 3296);
  if ( v4 )
    v5 = 2 * *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  result = *(unsigned int *)(v3 + 3852);
  v7 = *(_QWORD **)(v3 + 3840);
  if ( (unsigned int)result < (int)result + 1 )
  {
    *(_QWORD *)(v3 + 3848) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(result), _mm_cvtsi32_si128((int)result + 1)).m128i_u64[0];
    if ( v7 )
      goto LABEL_11;
  }
  else
  {
    result = 0x100000000LL;
    *(_QWORD *)(v3 + 3848) = 0x100000000LL;
    if ( v7 )
    {
      *((_DWORD *)v7 - 1) = 0;
      for ( result = *((unsigned int *)v7 - 1); (unsigned int)result < v5; result = *((unsigned int *)v7 - 1) )
      {
        if ( (_DWORD)result == *((_DWORD *)v7 - 2) )
        {
          v10 = (unsigned int)(3 * result + 1) >> 1;
          v11 = 4 * v10 + 8;
          if ( 4 * (int)result + 8 >= (unsigned int)v11 || (unsigned int)result >= v10 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_113C8C(v13, "Overflow encountered when expanding vector", v2);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v13);
            sub_233E40((__int64)v13);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v12 = (unsigned int *)sub_186B300(v7 - 1, v11);
          v7 = v12 + 2;
          *(_QWORD *)(v3 + 3840) = v12 + 2;
          *v12 = v10;
          v9 = &v12[v12[1] + 2];
LABEL_10:
          *v9 = 0;
          ++*((_DWORD *)v7 - 1);
        }
        else
        {
          *((_DWORD *)v7 + result) = 0;
          ++*((_DWORD *)v7 - 1);
        }
LABEL_11:
        ;
      }
      return result;
    }
  }
  if ( v5 )
  {
    v8 = (_QWORD *)sub_186B270(0x10u);
    v7 = v8 + 1;
    *v8 = 2;
    *(_QWORD *)(v3 + 3840) = v8 + 1;
    v9 = (unsigned int *)(v8 + 1);
    goto LABEL_10;
  }
  return result;
}

