__int64 __fastcall sub_1F6E410(_QWORD *a1, unsigned int a2)
{
  char *v2; // rdx
  char *v3; // r8
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r10

  v2 = (char *)a1[418];
  v3 = (char *)a1[417];
  if ( v3 == v2 )
    return 0;
  result = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1[5] + 88LL) + 316LL) > a2 )
  {
    if ( (*((_DWORD *)v2 - 1) & 0x7FFFFFFFu) >= a2 )
    {
      if ( (*(_DWORD *)v3 & 0x7FFFFFFFu) <= a2 )
      {
        v5 = v2 - v3;
        v6 = a1[417];
        v7 = v5 >> 3;
        if ( v5 > 0 )
        {
          do
          {
            while ( 1 )
            {
              v8 = v7 >> 1;
              v9 = v6 + 8 * (v7 >> 1);
              if ( (*(_DWORD *)(v9 + 4) & 0x7FFFFFFFu) >= a2 )
                break;
              v6 = v9 + 8;
              v7 = v7 - v8 - 1;
              if ( v7 <= 0 )
                return *(unsigned int *)(a1[420] + 4LL * (unsigned int)((v6 - (__int64)v3) >> 3));
            }
            v7 >>= 1;
          }
          while ( v8 );
        }
        return *(unsigned int *)(a1[420] + 4LL * (unsigned int)((v6 - (__int64)v3) >> 3));
      }
    }
    else
    {
      return *(unsigned int *)(a1[421] - 4LL);
    }
  }
  return result;
}
