void __fastcall sub_C23B90(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 v3; // rbp

  if ( a2 )
  {
    for ( i = a2; ; i = v3 )
    {
      sub_C23B90(a1, *(_QWORD *)(i + 24));
      v3 = *(_QWORD *)(i + 16);
      if ( *(_DWORD *)(i + 48) > 1u )
      {
        sub_A4F8E0((int *)(i + 48));
        operator delete((void *)i);
        if ( !v3 )
          return;
      }
      else
      {
        operator delete((void *)i);
        if ( !v3 )
          return;
      }
    }
  }
}
