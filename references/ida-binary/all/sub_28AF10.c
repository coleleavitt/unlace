__int64 __fastcall sub_28AF10(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 *func; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rsi
  const char *v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 next_func; // rax
  unsigned __int64 *v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // r15
  __int64 v23; // [rsp+0h] [rbp-58h] BYREF
  __int128 v24; // [rsp+8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( a2 == -1 || a3 == -1 )
    return 0;
  v6 = a2;
  v23 = 0;
  v24 = 0;
  v23 = qvector_reserve(&v23, 0, 10000, 8);
  func = (__int64 *)get_func(a2);
  v11 = v24;
  if ( !func )
    goto LABEL_13;
  v12 = *func;
  v13 = v23;
  if ( *((_QWORD *)&v24 + 1) < (unsigned __int64)(v24 + 1) )
  {
    v23 = qvector_reserve(&v23, v23, v24 + 1, 8);
    v11 = v24;
    v13 = v23;
  }
  *(_QWORD *)(v13 + 8 * v11) = v12;
  v11 = v24 + 1;
  *(_QWORD *)&v24 = v11;
  if ( v11 < a4 )
  {
    while ( 1 )
    {
      next_func = get_next_func(v6);
      v14 = (const char *)v23;
      v20 = (unsigned __int64 *)next_func;
      v15 = *((_QWORD *)&v24 + 1);
      v11 = v24;
      v21 = v23;
      if ( !v20 )
        break;
      v22 = *v20;
      if ( a3 < *v20 )
        break;
      if ( *((_QWORD *)&v24 + 1) < (unsigned __int64)(v24 + 1) )
      {
        v21 = qvector_reserve(&v23, v23, v24 + 1, 8);
        v23 = v21;
        v11 = v24;
      }
      *(_QWORD *)(v21 + 8 * v11) = v22;
      v11 = v24 + 1;
      *(_QWORD *)&v24 = v24 + 1;
      v6 = *v20;
LABEL_13:
      if ( v11 >= a4 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v14 = (const char *)v23;
    v15 = *((_QWORD *)&v24 + 1);
  }
  v16 = *(_QWORD *)a1;
  v17 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v14;
  v23 = v16;
  *((_QWORD *)&v24 + 1) = v17;
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v15);
  if ( v16 )
    qfree(v16, v14, v11, v15, v9, v10, v23, 0, *((_QWORD *)&v24 + 1), v25);
  return 1;
}
