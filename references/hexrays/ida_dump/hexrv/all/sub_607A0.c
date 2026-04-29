__int64 __fastcall sub_607A0(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // r8
  unsigned int v3; // ecx
  __int64 v4; // r9
  __int64 v5; // rdi
  int v6; // edx
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 8) >> 6;
  if ( v1 )
  {
    v2 = *(__int64 **)a1;
    v3 = 0;
    v4 = *(_QWORD *)a1 + 8 * v1;
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = *v2;
        if ( *v2 )
          break;
LABEL_6:
        if ( ++v2 == (__int64 *)v4 )
          return v3;
      }
      v6 = 64;
      v7 = 1;
      if ( v5 != -1 )
      {
        do
        {
          v3 -= ((v7 & v5) == 0) - 1;
          v7 *= 2;
          --v6;
        }
        while ( v6 );
        goto LABEL_6;
      }
      ++v2;
      v3 += 64;
      if ( v2 == (__int64 *)v4 )
        return v3;
    }
  }
  return 0;
}
