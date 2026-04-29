unsigned __int64 __fastcall sub_3C4110(
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 i; // rbp
  __int64 v21; // rdi
  __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rdi
  __int64 v26; // [rsp+0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+8h] [rbp-58h] BYREF
  __int128 v28; // [rsp+10h] [rbp-50h]
  unsigned __int64 v29; // [rsp+20h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v28 = 0;
  v27 = 0;
  v9 = sub_3C3430(&v27, a1, a2, 0.0, a4, a5, a6, a7, a8, a9);
  v12 = v27;
  v13 = v28;
  if ( v9 )
  {
    v14 = qalloc_or_throw(264, a1, v10, v11);
    sub_3C3CC0(v14, a1, (struct _Unwind_Exception *)a2, &v27, 0);
    v15 = v27;
    v16 = v28;
    v26 = -1;
    v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
            16,
            0,
            v14 + 32,
            &v26,
            &callui,
            v17);
    if ( v14 && v18 == -3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      if ( !v15 )
        return v29 - __readfsqword(0x28u);
    }
    else if ( !v15 )
    {
      return v29 - __readfsqword(0x28u);
    }
    if ( v16 )
    {
      v19 = v15;
      for ( i = 0; i != v16; ++i )
      {
        v21 = *(_QWORD *)(v19 + 16);
        if ( v21 )
        {
          *(_QWORD *)(v19 + 24) = 0;
          qfree(v21);
        }
        v19 += 48;
      }
    }
    qfree(v15);
  }
  else if ( v27 )
  {
    if ( (_QWORD)v28 )
    {
      v23 = v27;
      v24 = 0;
      do
      {
        v25 = *(_QWORD *)(v23 + 16);
        if ( v25 )
        {
          *(_QWORD *)(v23 + 24) = 0;
          qfree(v25);
        }
        ++v24;
        v23 += 48;
      }
      while ( v24 != v13 );
    }
    qfree(v12);
  }
  return v29 - __readfsqword(0x28u);
}
