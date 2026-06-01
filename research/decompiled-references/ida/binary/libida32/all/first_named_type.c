size_t __fastcall first_named_type(__int64 a1, char a2)
{
  __int64 v2; // rdx
  size_t result; // rax
  size_t v4; // rbx

  if ( !a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1480) + 8LL);
  v2 = *(_QWORD *)(a1 + 64);
  if ( (a2 & 1) == 0 )
    v2 = *(_QWORD *)(a1 + 56);
  result = 0;
  if ( *(_DWORD *)(v2 + 12) )
  {
    result = *(_QWORD *)(v2 + 32);
    v4 = result + *(unsigned int *)(v2 + 20);
    while ( *(_DWORD *)result == 2147483646 || *(_BYTE *)(result + 4) == 35 && !*(_BYTE *)(result + 5) )
    {
      result = sub_62A040((const char *)result);
      if ( result >= v4 )
        return 0;
    }
    if ( result )
      result += 4LL;
  }
  return result;
}

