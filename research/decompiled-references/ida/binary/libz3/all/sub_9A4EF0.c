__int64 __fastcall sub_9A4EF0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // ecx
  unsigned int v4; // edx

  result = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    v3 = *(_DWORD *)(result - 4);
    if ( v3 )
    {
      LODWORD(result) = *(_DWORD *)(result - 4);
      if ( !v2 )
        return (unsigned int)(result + 1);
      v4 = *(_DWORD *)(v2 - 4);
LABEL_5:
      LODWORD(result) = v3 + v4;
      return (unsigned int)(result + 1);
    }
    result = 0;
    if ( v2 )
    {
      v4 = *(_DWORD *)(v2 - 4);
      result = v4;
      if ( v4 )
        goto LABEL_5;
    }
  }
  else if ( v2 )
  {
    result = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)result )
      return (unsigned int)(result + 1);
  }
  return result;
}

