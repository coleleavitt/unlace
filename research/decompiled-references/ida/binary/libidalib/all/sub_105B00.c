__int64 __fastcall sub_105B00(_QWORD *a1, __int64 a2)
{
  void (*v3)(void); // rax
  __int64 undo_info; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi

  v3 = *(void (**)(void))(*a1 + 32LL);
  if ( (char *)v3 == (char *)sub_104AC0 )
  {
    undo_info = get_undo_info();
    v5 = a1[24];
    a1[27] = 0;
    a1[26] = undo_info;
    if ( v5 )
    {
      v6 = a1[23];
      v7 = 0;
      v8 = v6 + 32 * v5;
      do
      {
        v7 += *(_QWORD *)(v6 + 24);
        v6 += 32;
        a1[27] = v7;
      }
      while ( v6 != v8 );
    }
  }
  else
  {
    v3();
  }
  return a2;
}

