bool __fastcall sub_77E960(_BYTE *a1)
{
  __int64 v1; // rdx
  bool result; // al
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  v1 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 32LL))(a1);
  result = 0;
  if ( *(char *)(v1 + 84) < 0 )
  {
    result = a1[29] & 1;
    if ( result )
    {
      v3 = sub_79A2B0(a1);
      v4 = *(_QWORD *)v3;
      v5 = *(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 8);
      if ( v4 < v5 )
      {
        while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 151 )
        {
          v4 += 8LL;
          if ( v5 == v4 )
            return 0;
        }
      }
      else
      {
        if ( v4 == v5 )
          return 0;
        while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 151 )
        {
          v5 += 8LL;
          if ( v4 == v5 )
            return 0;
        }
      }
      return v4 != v5;
    }
  }
  return result;
}

