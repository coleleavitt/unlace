void __fastcall sub_BED410(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 v3; // rbp

  if ( a2 )
  {
    for ( i = a2; ; i = v3 )
    {
      sub_BED410(a1, *(_QWORD *)(i + 24));
      v3 = *(_QWORD *)(i + 16);
      if ( *(_DWORD *)(i + 40) > 1u )
      {
        sub_A2BBA0((int *)(i + 40));
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

