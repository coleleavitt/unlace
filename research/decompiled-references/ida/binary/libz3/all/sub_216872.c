__int64 __fastcall sub_216872(_QWORD *a1, __int64 a2)
{
  unsigned int i; // r12d
  unsigned int j; // r13d
  unsigned int v4; // eax
  unsigned int v5; // eax

  for ( i = 0; i < *(_DWORD *)a2; ++i )
  {
    for ( j = 0; ; ++j )
    {
      v4 = *(_DWORD *)(a2 + 4);
      if ( j >= v4 )
        break;
      v5 = j + i * v4;
      sub_182EF00(*a1, 16LL * v5 + *(_QWORD *)(a2 + 8));
    }
  }
  sub_17E9C40(a1[1], (unsigned int)(16 * *(_DWORD *)(a2 + 4) * *(_DWORD *)a2), *(_QWORD *)(a2 + 8));
  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  return 0;
}

