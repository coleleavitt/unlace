unsigned __int64 __fastcall sub_F3640(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 *v4; // r12
  __int64 (__fastcall *v5)(__int64 *); // rax
  __int64 *v6; // rbp
  __int64 *v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // rbp
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rdx
  __m128i v23; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v2 = j__qalloc_or_throw(176);
  v3 = sub_62EE0((_QWORD *)a1);
  sub_6CD60(v2, v3);
  v4 = *(__int64 **)(a1 + 784);
  *(_QWORD *)(a1 + 1240) = v2;
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(__int64 *))(*v4 + 8);
    if ( v5 == sub_62D30 )
    {
      v6 = v4 + 27;
      *v4 = (__int64)off_4CC628;
      do
      {
        v7 = v6;
        v6 -= 4;
        sub_62A80(v7);
      }
      while ( v4 + 3 != v6 );
      v8 = v4[1];
      *v4 = (__int64)&unk_4CC6E0;
      if ( v8 )
      {
        v4[2] = 0;
        qfree(v8);
      }
      j__qfree(v4);
    }
    else
    {
      v5(v4);
    }
  }
  *(_QWORD *)(a1 + 784) = 0;
  v9 = qalloc_or_throw(24);
  *(_QWORD *)v9 = 0;
  v10 = (__int64 *)v9;
  *(_OWORD *)(v9 + 8) = 0;
  v11 = *(int *)(a1 + 64);
  *(_QWORD *)(a1 + 1248) = v9;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = v11;
  if ( v11 != v12 )
  {
    v23 = 0;
    if ( v11 >= v12 )
    {
      v18 = *v10;
      v19 = v10[2];
      if ( (unsigned __int64)&v23 >= *v10 && (unsigned __int64)&v23 < v18 + 16 * v19 )
      {
        if ( v19 < v11 )
        {
          *v10 = qvector_reserve(v10, v18, v11, 16);
          v12 = v10[1];
        }
        if ( v12 < v11 )
        {
          do
          {
            v22 = v12++;
            *(_OWORD *)(*v10 + 16 * v22) = 0;
          }
          while ( v11 != v12 );
        }
      }
      else
      {
        if ( v19 < v11 )
        {
          *v10 = qvector_reserve(v10, v18, v11, 16);
          v12 = v10[1];
        }
        if ( v12 < v11 )
        {
          v20 = _mm_load_si128(&v23);
          do
          {
            v21 = v12++;
            *(__m128i *)(*v10 + 16 * v21) = v20;
          }
          while ( v11 != v12 );
        }
      }
    }
    v10[1] = v11;
    v13 = *(_DWORD *)(a1 + 64);
  }
  v14 = 0;
  if ( v13 > 0 )
  {
    do
    {
      v15 = (_QWORD *)(*v10 + 16 * v14);
      *v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v14) + 32LL);
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v14++);
      v15[1] = *(_QWORD *)(v16 + 40);
    }
    while ( *(_DWORD *)(a1 + 64) > (int)v14 );
  }
  return v24 - __readfsqword(0x28u);
}
