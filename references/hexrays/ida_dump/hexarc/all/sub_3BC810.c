unsigned __int64 __fastcall sub_3BC810(
        __int64 a1,
        char *a2,
        double a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9)
{
  char v9; // al
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 i; // rbp
  __int64 v19; // rdi
  __int64 v21; // rbx
  __int64 v22; // rbp
  __int64 v23; // rdi
  __int64 v24; // [rsp+0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+8h] [rbp-58h] BYREF
  __int128 v26; // [rsp+10h] [rbp-50h]
  unsigned __int64 v27; // [rsp+20h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v26 = 0;
  v25 = 0;
  v9 = sub_3BBB30(&v25, a1, a2, 0.0, a4, a5, a6, a7, a8, a9);
  v10 = v25;
  v11 = v26;
  if ( v9 )
  {
    v12 = qalloc_or_throw(264);
    sub_3BC3C0(v12, a1, a2, &v25, 0);
    v13 = v25;
    v14 = v26;
    v24 = -1;
    v16 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
            16,
            0,
            v12 + 32,
            &v24,
            &callui,
            v15);
    if ( v12 && v16 == -3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      if ( !v13 )
        return v27 - __readfsqword(0x28u);
    }
    else if ( !v13 )
    {
      return v27 - __readfsqword(0x28u);
    }
    if ( v14 )
    {
      v17 = v13;
      for ( i = 0; i != v14; ++i )
      {
        v19 = *(_QWORD *)(v17 + 16);
        if ( v19 )
        {
          *(_QWORD *)(v17 + 24) = 0;
          qfree(v19);
        }
        v17 += 48;
      }
    }
    qfree(v13);
  }
  else if ( v25 )
  {
    if ( (_QWORD)v26 )
    {
      v21 = v25;
      v22 = 0;
      do
      {
        v23 = *(_QWORD *)(v21 + 16);
        if ( v23 )
        {
          *(_QWORD *)(v21 + 24) = 0;
          qfree(v23);
        }
        ++v22;
        v21 += 48;
      }
      while ( v22 != v11 );
    }
    qfree(v10);
  }
  return v27 - __readfsqword(0x28u);
}
