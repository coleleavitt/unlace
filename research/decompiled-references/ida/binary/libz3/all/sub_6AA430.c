__int64 __fastcall sub_6AA430(__int64 a1, __int64 a2)
{
  int *v2; // rax
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rcx

  v2 = *(int **)(sub_15D1F10(a2) + 24);
  if ( v2 )
  {
    v3 = *v2;
    v4 = 0;
    if ( (int)v3 >= 0 )
    {
      v5 = *(_QWORD *)(a1 + 40);
      if ( v5 )
      {
        if ( *(_DWORD *)(v5 - 4) > (int)v3 )
          LOBYTE(v4) = *(_QWORD *)(v5 + 8 * v3) != 0;
      }
    }
  }
  else
  {
    return 0;
  }
  return v4;
}

