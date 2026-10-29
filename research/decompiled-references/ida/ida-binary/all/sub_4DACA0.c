bool __fastcall sub_4DACA0(__int64 a1, __int64 a2)
{
  bool result; // al
  __int64 v3; // rdx
  __int64 v4; // rax
  const char *v5; // rdx
  const char *v6; // rax

  result = 0;
  if ( !*(_QWORD *)(a1 + 72) && !*(_QWORD *)(a2 + 72) && *(_DWORD *)a1 == *(_DWORD *)a2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 == *(_QWORD *)(a2 + 16) )
    {
      if ( v3 )
      {
        v4 = 0;
        while ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + v4) == *(_BYTE *)(*(_QWORD *)(a2 + 8) + v4) )
        {
          if ( v3 == ++v4 )
            goto LABEL_11;
        }
        return 0;
      }
      else
      {
LABEL_11:
        result = 0;
        if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(a2 + 32) )
        {
          v5 = &s1;
          if ( *(_QWORD *)(a2 + 48) )
            v5 = *(const char **)(a2 + 40);
          v6 = &s1;
          if ( *(_QWORD *)(a1 + 48) )
            v6 = *(const char **)(a1 + 40);
          return strcmp(v6, v5) == 0;
        }
      }
    }
  }
  return result;
}
