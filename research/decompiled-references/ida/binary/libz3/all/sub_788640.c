char __fastcall sub_788640(__int64 a1, __int64 a2)
{
  int *v2; // rax
  int v3; // edx
  int v4; // eax
  char result; // al

  if ( !*(_WORD *)(a2 + 4) )
  {
    v2 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v2 )
    {
      v3 = *v2;
      if ( !*v2 )
      {
        v4 = v2[1];
        if ( v4 == 4 )
          return sub_15D2CB0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 40));
        if ( v4 > 4 )
          return (unsigned int)(v4 - 5) <= 4;
        if ( v4 <= 1 )
          return v4 >= 0;
        if ( v4 == 2 )
          return sub_15D2CB0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 40));
        return 0;
      }
      result = 0;
      if ( *(_BYTE *)(a1 + 273) )
        return result;
    }
    else
    {
      result = 0;
      v3 = -1;
      if ( *(_BYTE *)(a1 + 273) )
        return result;
    }
    return *(_DWORD *)(a1 + 24) == v3;
  }
  return 0;
}

