__int64 __fastcall sub_8AE770(_QWORD *a1, double a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int v5[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v2 = 0;
  v3 = a1[200];
  if ( v3 )
  {
    while ( v2 < *(_DWORD *)(v3 - 4) )
    {
      if ( *(_DWORD *)(v3 + 4LL * v2) == -1 )
      {
        ++v2;
      }
      else
      {
        v5[0] = v2++;
        sub_8AE0E0(a1, v5, a2);
        v3 = a1[200];
        if ( !v3 )
          return 1;
      }
    }
  }
  return 1;
}

