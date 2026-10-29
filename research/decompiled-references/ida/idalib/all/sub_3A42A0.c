unsigned __int64 __fastcall sub_3A42A0(_QWORD *a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  __int64 *v4; // r12
  __int64 *v5; // rbp
  _QWORD *v6; // rax
  _QWORD *v7; // r13
  __int64 v8; // rcx
  char v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  _BYTE ptr[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v4 = a2;
  v5 = a3;
  v6 = (_QWORD *)a1[2];
  v16 = __readfsqword(0x28u);
  if ( !v6 )
    goto LABEL_11;
  a2 = (__int64 *)*a2;
  v7 = a1 + 1;
  do
  {
    while ( 1 )
    {
      a3 = (__int64 *)v6[2];
      v8 = v6[3];
      if ( v6[4] >= (unsigned __int64)a2 )
        break;
      v6 = (_QWORD *)v6[3];
      if ( !v8 )
        goto LABEL_6;
    }
    v7 = v6;
    v6 = (_QWORD *)v6[2];
  }
  while ( a3 );
LABEL_6:
  if ( a1 + 1 == v7 )
  {
LABEL_11:
    v7 = a1 + 1;
    if ( !(unsigned __int8)must_journal(a1, a2, a3) )
      goto LABEL_9;
    goto LABEL_12;
  }
  if ( a2 == (__int64 *)v7[4] )
  {
    if ( v7[5] == *v5 )
      return v16 - __readfsqword(0x28u);
    v10 = must_journal(a1, a2, a3);
    if ( !v10 )
      goto LABEL_20;
    goto LABEL_13;
  }
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
LABEL_12:
    v10 = 0;
LABEL_13:
    v11 = *v4;
    memset(ptr, 0, sizeof(ptr));
    sub_3A0A80((__int64 *)ptr, v11);
    v12 = *(_QWORD *)&ptr[8];
    v13 = *(_QWORD *)ptr;
    if ( *(_QWORD *)&ptr[16] < (unsigned __int64)(*(_QWORD *)&ptr[8] + 1LL) )
    {
      *(_QWORD *)ptr = qvector_reserve(ptr, *(_QWORD *)ptr, *(_QWORD *)&ptr[8] + 1LL, 1);
      v13 = *(_QWORD *)ptr;
      v12 = *(_QWORD *)&ptr[8];
    }
    *(_BYTE *)(v13 + v12) = v10;
    ++*(_QWORD *)&ptr[8];
    if ( v10 )
      sub_3A0A80((__int64 *)ptr, v7[5]);
    sub_3A0A80((__int64 *)ptr, *v5);
    add_undo_record(a4, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    if ( *(_QWORD *)ptr )
    {
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(void **)ptr);
    }
    if ( !v10 )
      goto LABEL_9;
LABEL_20:
    v7[5] = *v5;
    return v16 - __readfsqword(0x28u);
  }
LABEL_9:
  *(__m128 *)ptr = _mm_loadh_ps((const double *)v5);
  sub_3A3660(a1, v7, (const __m128i *)ptr);
  return v16 - __readfsqword(0x28u);
}
