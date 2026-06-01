void __fastcall sub_B05D80(_QWORD *a1)
{
  __int64 v1; // r8
  unsigned int v2; // r9d
  __int64 v3; // rsi
  unsigned int v4; // edx
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rax

  v1 = a1[108];
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 - 4);
    if ( v2 )
    {
      v3 = a1[107];
      v4 = 0;
      v5 = a1[119];
      do
      {
        if ( v3 )
        {
          v6 = *(unsigned int *)(v1 + 4LL * v4);
          v7 = 0;
          if ( (unsigned int)v6 < *(_DWORD *)(v3 - 4) )
          {
            v8 = *(_DWORD *)(v3 + 4 * v6);
            v7 = -v8;
            if ( v8 > 0 )
              v7 = v8;
          }
        }
        else
        {
          v7 = 0;
        }
        if ( v5 && *(_DWORD *)(v5 - 4) > v7 )
        {
          v9 = *(_QWORD *)(v5 + 8LL * v7);
          if ( v9 )
          {
            *(_DWORD *)(v9 - 4) = 0;
            v2 = *(_DWORD *)(v1 - 4);
          }
        }
        ++v4;
      }
      while ( v4 < v2 );
    }
  }
}

