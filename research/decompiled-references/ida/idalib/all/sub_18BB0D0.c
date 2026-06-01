__int64 __fastcall sub_18BB0D0(__int64 a1)
{
  unsigned int *v1; // rbx
  __int64 result; // rax
  char v3; // dl

  v1 = (unsigned int *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  if ( *v1 == 3 || *v1 <= 1 )
    return 0;
  v3 = sub_B8E180(*(_QWORD *)(a1 + 544));
  result = 1;
  if ( !v3 )
  {
    result = *v1;
    if ( (_DWORD)result != 2 )
    {
      if ( (unsigned int)(result - 4) <= 3 && *((_BYTE *)v1 + 596) )
        return 2;
      else
        return (unsigned int)((_DWORD)result != 7) + 2;
    }
  }
  return result;
}
