__int64 __fastcall sub_5AE850(_QWORD *a1, __int64 a2)
{
  char v2; // dl
  __int64 result; // rax
  unsigned int v4; // edx

  v2 = sub_5ACDD0(a1, a2, 1);
  result = 0xFFFFFFFFLL;
  if ( v2 )
  {
    result = *(unsigned int *)(a2 + 4);
    if ( *(_DWORD *)(a2 + 104) )
    {
      v4 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 8LL * *(int *)(a2 + 104) - 4);
      if ( (unsigned int)result < v4 )
        return v4;
    }
  }
  return result;
}

