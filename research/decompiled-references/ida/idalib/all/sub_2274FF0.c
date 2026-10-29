void __fastcall sub_2274FF0(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi

  if ( *(_BYTE *)(a1 + 76) )
  {
    *(_BYTE *)(a1 + 76) = 0;
    while ( 1 )
    {
      sub_2274D70(a1, a2, a3, a4, a5, a6);
      v7 = *(_QWORD *)(a1 + 80);
      if ( !v7 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
}
