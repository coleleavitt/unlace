__int64 __fastcall sub_60C300(unsigned int a1, const char *a2, __int32 a3, __int64 a4)
{
  int v4; // r13d
  size_t v6; // rax
  size_t v7; // r14
  size_t v8; // r12
  int v9; // r12d
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned int v15; // [rsp+Ch] [rbp-5Ch] BYREF
  __m128i v16; // [rsp+10h] [rbp-58h] BYREF
  __int128 v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+30h] [rbp-38h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v4 = *(_DWORD *)(a4 + 120);
  v15 = a1;
  v19 = __readfsqword(0x28u);
  if ( a2 )
  {
    v16.m128i_i32[0] = -1;
    v16.m128i_i64[1] = 0;
    v17 = 0;
    v6 = strlen(a2);
    v7 = v6 + 1;
    v8 = v6;
    v16.m128i_i64[1] = qvector_reserve(&v16.m128i_u64[1], 0, v6 + 1, 1);
    *(_QWORD *)&v17 = v7;
    memmove((void *)v16.m128i_i64[1], a2, v8);
    *(_BYTE *)(v16.m128i_i64[1] + v8) = 0;
    v9 = -1;
  }
  else
  {
    v16.m128i_i32[0] = a3;
    v9 = a3;
    v16.m128i_i64[1] = 0;
    v17 = 0;
  }
  v10 = *(_QWORD **)(a4 + 56);
  v18 = v4;
  v11 = (_QWORD *)(a4 + 48);
  if ( !v10 )
    goto LABEL_14;
  do
  {
    while ( 1 )
    {
      v12 = v10[2];
      v13 = v10[3];
      if ( v10[4] < (unsigned __int64)v15 )
        break;
      v11 = v10;
      v10 = (_QWORD *)v10[2];
      if ( !v12 )
        goto LABEL_8;
    }
    v10 = (_QWORD *)v10[3];
  }
  while ( v13 );
LABEL_8:
  if ( (_QWORD *)(a4 + 48) == v11 || (unsigned __int64)v15 < v11[4] )
  {
LABEL_14:
    sub_60BDC0((_QWORD *)(a4 + 40), v11, &v15, &v16);
    if ( v16.m128i_i64[1] )
    {
      *(_QWORD *)&v17 = 0;
      qfree((void *)v16.m128i_i64[1]);
    }
  }
  else
  {
    if ( v16.m128i_i64[1] )
    {
      *(_QWORD *)&v17 = 0;
      qfree((void *)v16.m128i_i64[1]);
    }
    *((_DWORD *)v11 + 10) = v9;
  }
  return 1;
}

