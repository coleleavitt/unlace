unsigned __int64 __fastcall sub_F7840(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r12
  __int64 (__fastcall *v12)(_QWORD *); // rax
  _QWORD *v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // rbp
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  __m128i v27; // xmm0
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  __m128i v30; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  v5 = j__qalloc_or_throw(176, a2, a3, a4);
  v8 = sub_670E0((_QWORD *)a1, a2, v6, v7);
  sub_70F60(v5, v8);
  v11 = *(_QWORD **)(a1 + 784);
  *(_QWORD *)(a1 + 1240) = v5;
  if ( v11 )
  {
    v12 = *(__int64 (__fastcall **)(_QWORD *))(*v11 + 8LL);
    if ( v12 == sub_66F30 )
    {
      v13 = v11 + 27;
      *v11 = off_4EC750;
      do
      {
        v14 = (__int64)v13;
        v13 -= 4;
        sub_66C80(v14);
      }
      while ( v11 + 3 != v13 );
      v15 = v11[1];
      *v11 = &unk_4EC808;
      if ( v15 )
      {
        v11[2] = 0;
        qfree(v15);
      }
      j__qfree((__int64)v11);
    }
    else
    {
      v12(v11);
    }
  }
  *(_QWORD *)(a1 + 784) = 0;
  v16 = qalloc_or_throw(24, v8, v9, v10);
  *(_QWORD *)v16 = 0;
  v17 = (__int64 *)v16;
  *(_OWORD *)(v16 + 8) = 0;
  v18 = *(int *)(a1 + 64);
  *(_QWORD *)(a1 + 1248) = v16;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = v18;
  if ( v18 != v19 )
  {
    v30 = 0;
    if ( v18 >= v19 )
    {
      v25 = *v17;
      v26 = v17[2];
      if ( (unsigned __int64)&v30 >= *v17 && (unsigned __int64)&v30 < v25 + 16 * v26 )
      {
        if ( v26 < v18 )
        {
          *v17 = qvector_reserve((__int64)v17, v25, v18, 16);
          v19 = v17[1];
        }
        if ( v19 < v18 )
        {
          do
          {
            v29 = v19++;
            *(_OWORD *)(*v17 + 16 * v29) = 0;
          }
          while ( v18 != v19 );
        }
      }
      else
      {
        if ( v26 < v18 )
        {
          *v17 = qvector_reserve((__int64)v17, v25, v18, 16);
          v19 = v17[1];
        }
        if ( v19 < v18 )
        {
          v27 = _mm_load_si128(&v30);
          do
          {
            v28 = v19++;
            *(__m128i *)(*v17 + 16 * v28) = v27;
          }
          while ( v18 != v19 );
        }
      }
    }
    v17[1] = v18;
    v20 = *(_DWORD *)(a1 + 64);
  }
  v21 = 0;
  if ( v20 > 0 )
  {
    do
    {
      v22 = (_QWORD *)(*v17 + 16 * v21);
      *v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v21) + 32LL);
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v21++);
      v22[1] = *(_QWORD *)(v23 + 40);
    }
    while ( *(_DWORD *)(a1 + 64) > (int)v21 );
  }
  return v31 - __readfsqword(0x28u);
}
