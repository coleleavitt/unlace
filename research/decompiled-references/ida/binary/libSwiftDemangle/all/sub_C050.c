__int64 __fastcall sub_C050(__int64 a1)
{
  char v1; // dl
  __int64 result; // rax
  __int64 v3; // rdi

  v1 = *(_BYTE *)(a1 + 18);
  result = a1 + 16;
  if ( v1 != 4 )
  {
    if ( v1 == 5 )
    {
      return *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8);
    }
    else
    {
      v3 = a1 + 8;
      result = 0;
      if ( v1 == 3 )
        return v3;
    }
  }
  return result;
}

