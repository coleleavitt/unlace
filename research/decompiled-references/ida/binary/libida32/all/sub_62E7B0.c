void *__fastcall sub_62E7B0(__int64 a1)
{
  const char *v1; // rbx
  unsigned int v2; // ebp
  int v3; // r12d

  v1 = *(const char **)(a1 + 32);
  if ( *(_DWORD *)(a1 + 12) )
  {
    v2 = 0;
    v3 = 1;
    do
    {
      if ( *(_DWORD *)v1 != 2147483646 )
        *(_DWORD *)&v1[strlen(v1 + 4) + 5] = v3++;
      ++v2;
      v1 = (const char *)sub_62A040(v1);
    }
    while ( v2 < *(_DWORD *)(a1 + 12) );
  }
  else
  {
    v3 = 1;
  }
  *(_DWORD *)(*(_QWORD *)a1 + 32LL) |= 0x10u;
  *(_DWORD *)(a1 + 8) |= 2u;
  *(_DWORD *)(a1 + 48) = v3;
  return sub_62D8C0(a1, 0);
}

