__int64 __fastcall sub_6B7B10(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _BYTE *v7; // rdi
  void *v8; // rdx
  __int64 v9; // rcx
  size_t v10; // rcx
  size_t v11; // r12
  unsigned __int64 v12; // rbp
  size_t v13; // r15
  unsigned __int64 v14; // r14
  double v15; // rcx
  __m128 v16; // xmm0
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-50h]
  double v19[9]; // [rsp+10h] [rbp-48h] BYREF

  *(_QWORD *)&v19[1] = __readfsqword(0x28u);
  sub_6B7750(a1, a2, a3, a4);
  if ( *(_QWORD *)(a1 + 8) > 1u )
  {
    sub_6B75D0((__int64 *)&ptr, a2, a3);
    v7 = ptr;
    v8 = ptr;
    if ( v18 > 1 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      if ( v9 )
      {
        v10 = v9 - 1;
        v11 = v10;
        if ( v10 )
        {
          v12 = v18 - 1;
          v13 = v10 + v18 - 1;
          v14 = v10 + v18;
          if ( *(_QWORD *)&v19[0] < v10 + v18 )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v14, 1);
            v7 = ptr;
          }
          v18 = v14;
          v7[v13] = 0;
          memcpy((char *)ptr + v12, *(const void **)a1, v11);
          v8 = ptr;
        }
      }
      v7 = *(_BYTE **)a1;
      v15 = *(double *)(a1 + 16);
      *(_QWORD *)a1 = v8;
      v16 = _mm_loadh_ps(v19);
      ptr = v7;
      v19[0] = v15;
      *(__m128 *)(a1 + 8) = v16;
    }
    if ( v7 )
    {
      v18 = 0;
      qfree(v7);
    }
  }
  return a1;
}

