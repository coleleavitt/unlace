__int64 __fastcall sub_5898D0(__int64 a1, __m128 *a2, __int64 a3, size_t a4)
{
  __int64 (__fastcall ***v7)(_QWORD, __int64, int *, size_t); // rdi
  __int64 result; // rax
  __int64 v9; // r14
  size_t v10; // r15
  _BYTE *v11; // rsi
  size_t v12; // rdx
  void *v13; // rdx
  __m128 v14; // xmm0
  int src; // [rsp+24h] [rbp-5Ch] BYREF
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v18; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  ptr = nullptr;
  v18 = 0;
  while ( 1 )
  {
    v7 = *(__int64 (__fastcall ****)(_QWORD, __int64, int *, size_t))(a1 + 24);
    src = 0;
    result = (**v7)(v7, a3, &src, a4);
    if ( !(_BYTE)result )
      break;
    v9 = v18;
    a3 += a4;
    if ( !src )
    {
      v13 = ptr;
      v14 = _mm_loadh_ps((const double *)&v18 + 1);
      a2->m128_i8[0] = 7;
      a2->m128_u64[1] = (unsigned __int64)v13;
      a2[1] = v14;
      return result;
    }
    v10 = a4;
    if ( (_QWORD)v18 )
    {
      v9 = v18 - 1;
      v10 = a4 + v18 - 1;
    }
    v11 = ptr;
    v12 = v10 + 1;
    if ( *((_QWORD *)&v18 + 1) < v10 + 1 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
      v12 = v10 + 1;
      v11 = ptr;
    }
    *(_QWORD *)&v18 = v12;
    v11[v10] = 0;
    memmove((char *)ptr + v9, &src, a4);
  }
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
    return 0;
  }
  return result;
}
