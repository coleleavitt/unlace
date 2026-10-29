void __fastcall sub_1390040(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        _QWORD *a9)
{
  _QWORD *v9; // rsi
  __int64 v10; // rdi
  __int64 i; // rax
  unsigned __int64 v12; // rax

  v9 = a9;
  if ( a9 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    for ( i = a9[1]; i; i = *(_QWORD *)(v12 + 8) )
    {
      if ( (i & 4) == 0 )
        break;
      v12 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v12 )
        break;
      v9 = (_QWORD *)v12;
    }
    (*(void (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 72LL))(v10, v9 + 4, *v9, 0, 0);
  }
}
