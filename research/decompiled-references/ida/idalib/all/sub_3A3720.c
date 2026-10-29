__m128i *__fastcall sub_3A3720(_QWORD *a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  _QWORD *v7; // rdi
  _QWORD *v8; // rdx
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  _BYTE ptr[24]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v7 = a1 + 1;
  v8 = (_QWORD *)a1[2];
  v17 = __readfsqword(0x28u);
  if ( !v8 )
  {
    v11 = v7;
LABEL_8:
    if ( (unsigned __int8)must_journal() )
    {
      v14 = *a2;
      memset(ptr, 0, sizeof(ptr));
      sub_3A0A80((__int64 *)ptr, v14);
      sub_3A0A80((__int64 *)ptr, *a3);
      add_undo_record(a4, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
      if ( *(_QWORD *)ptr )
      {
        *(_QWORD *)&ptr[8] = 0;
        qfree(*(void **)ptr);
      }
    }
    *(__m128 *)ptr = _mm_loadh_ps((const double *)a3);
    return sub_3A3660(a1, v11, (const __m128i *)ptr);
  }
  v10 = *a2;
  v11 = v7;
  do
  {
    while ( 1 )
    {
      v12 = v8[2];
      v13 = v8[3];
      if ( v8[4] < v10 )
        break;
      v11 = v8;
      v8 = (_QWORD *)v8[2];
      if ( !v12 )
        goto LABEL_6;
    }
    v8 = (_QWORD *)v8[3];
  }
  while ( v13 );
LABEL_6:
  if ( v7 == v11 || v11[4] != v10 )
    goto LABEL_8;
  return (__m128i *)v11;
}
