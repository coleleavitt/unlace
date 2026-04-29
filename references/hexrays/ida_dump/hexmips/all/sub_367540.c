unsigned __int64 __fastcall sub_367540(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  int *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  void *v15; // rdi
  __m128i v17; // [rsp+0h] [rbp-38h] BYREF
  _QWORD *v18; // [rsp+10h] [rbp-28h]
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  if ( a1 != (_QWORD *)a2 )
  {
    v2 = a1[2];
    v3 = a1[4];
    v18 = a1;
    v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)v3);
    if ( v2 )
    {
      *(_QWORD *)(v2 + 8) = 0;
      v6 = *(_QWORD *)(v3 + 16);
      if ( v6 )
        v17.m128i_i64[1] = v6;
      v7 = (__int64)(a1 + 1);
      a1[2] = 0;
      a1[3] = a1 + 1;
      a1[4] = a1 + 1;
      a1[5] = 0;
      v8 = *(int **)(a2 + 16);
      if ( !v8 )
        goto LABEL_11;
    }
    else
    {
      v7 = (__int64)(a1 + 1);
      a1[5] = 0;
      a1[3] = a1 + 1;
      a1[4] = a1 + 1;
      v8 = *(int **)(a2 + 16);
      v17.m128i_i64[1] = 0;
      if ( !v8 )
        return v19 - __readfsqword(0x28u);
    }
    v9 = sub_366EA0(v8, v7, &v17);
    v10 = v9;
    do
    {
      v11 = v10;
      v10 = *(_QWORD *)(v10 + 16);
    }
    while ( v10 );
    a1[3] = v11;
    v12 = v9;
    do
    {
      v13 = v12;
      v12 = *(_QWORD *)(v12 + 24);
    }
    while ( v12 );
    a1[4] = v13;
    v2 = v17.m128i_i64[0];
    v14 = *(_QWORD *)(a2 + 40);
    a1[2] = v9;
    a1[5] = v14;
    while ( v2 )
    {
LABEL_11:
      sub_366CD0(*(_QWORD **)(v2 + 24));
      v15 = (void *)v2;
      v2 = *(_QWORD *)(v2 + 16);
      operator delete(v15, 0x28u);
    }
  }
  return v19 - __readfsqword(0x28u);
}
