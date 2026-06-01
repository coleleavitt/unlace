unsigned __int64 __fastcall sub_3BE0D0(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 i; // rbp
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // [rsp+0h] [rbp-60h] BYREF
  __int64 v15; // [rsp+8h] [rbp-58h] BYREF
  __int128 v16; // [rsp+10h] [rbp-50h]
  unsigned __int64 v17; // [rsp+20h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v16 = 0;
  v15 = 0;
  v2 = sub_3BD430(&v15, a1, a2);
  v3 = v16;
  if ( v2 )
  {
    v4 = qalloc_or_throw();
    sub_3BDC80(v4, a1, a2, &v15, 0);
    v5 = v15;
    v6 = v16;
    v14 = -1;
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
           16,
           0,
           v4 + 32,
           &v14,
           &callui,
           v7);
    if ( v4 && v8 == -3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      if ( !v5 )
        return v17 - __readfsqword(0x28u);
    }
    else if ( !v5 )
    {
      return v17 - __readfsqword(0x28u);
    }
    if ( v6 )
    {
      v9 = v5;
      for ( i = 0; i != v6; ++i )
      {
        if ( *(_QWORD *)(v9 + 16) )
        {
          *(_QWORD *)(v9 + 24) = 0;
          qfree();
        }
        v9 += 40;
      }
    }
    qfree();
  }
  else if ( v15 )
  {
    if ( (_QWORD)v16 )
    {
      v12 = v15;
      v13 = 0;
      do
      {
        if ( *(_QWORD *)(v12 + 16) )
        {
          *(_QWORD *)(v12 + 24) = 0;
          qfree();
        }
        ++v13;
        v12 += 40;
      }
      while ( v13 != v3 );
    }
    qfree();
  }
  return v17 - __readfsqword(0x28u);
}
