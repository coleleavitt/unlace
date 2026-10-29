void __fastcall sub_37E320(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  bool v5; // cf
  __int64 v6; // rax

  v2 = a1[1] - 1LL;
  if ( v2 >= 0 )
  {
    do
    {
      v6 = *a1 + 32 * v2;
      if ( a2 && *(_QWORD *)(v6 + 8) != a2 )
      {
        v5 = v2-- == 0;
        if ( v5 )
          return;
        while ( 1 )
        {
          v6 = *a1 + 32 * v2;
          if ( *(_QWORD *)(v6 + 8) == a2 )
            break;
          v5 = v2-- == 0;
          if ( v5 )
            return;
        }
      }
      v4 = *(_QWORD *)(v6 + 16);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = v2-- == 0;
    }
    while ( !v5 );
  }
}

