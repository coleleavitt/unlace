__int64 __fastcall sub_1ADF0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  char *v5; // rdi
  char v6; // cl
  __int64 i; // rdx
  __int64 v8; // rdx
  _BYTE *v9; // rdi

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v5 = *(char **)(a1 + 24);
    v6 = *v5;
    *(_QWORD *)(a1 + 32) = v2 - 1;
    *(_QWORD *)(a1 + 24) = v5 + 1;
    if ( (unsigned __int8)(v6 - 48) <= 9u )
    {
      *a2 = (char)(v6 - 48);
      for ( i = *(_QWORD *)(a1 + 32); i; *(_QWORD *)(a1 + 32) = i )
      {
        v9 = *(_BYTE **)(a1 + 24);
        if ( (unsigned __int8)(*v9 - 48) > 9u )
        {
          if ( *v9 != 95 )
            return 0;
          *(_QWORD *)(a1 + 24) = v9 + 1;
          *(_QWORD *)(a1 + 32) = i - 1;
          return 1;
        }
        *a2 = (char)(*v9 - 48) + 10LL * *a2;
        v8 = *(_QWORD *)(a1 + 32);
        if ( !v8 )
          return 0;
        i = v8 - 1;
        ++*(_QWORD *)(a1 + 24);
      }
    }
  }
  return 0;
}

