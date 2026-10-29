__int64 __fastcall sub_97D9F0(__int64 a1, int a2)
{
  char *v2; // r8
  unsigned int v3; // esi
  char *v4; // rdi
  __int64 i; // rax
  unsigned int *v6; // rdx

  v2 = *(char **)(a1 + 56);
  v3 = a2 - *(_DWORD *)(a1 + 24);
  v4 = *(char **)(a1 + 48);
  for ( i = (v2 - v4) >> 4; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v6 = (unsigned int *)&v4[16 * (i >> 1)];
      if ( *v6 >= v3 )
        break;
      v4 = (char *)(v6 + 4);
      i = i - (i >> 1) - 1;
      if ( i <= 0 )
        goto LABEL_5;
    }
  }
LABEL_5:
  if ( v2 == v4 )
    return *((_QWORD *)v2 - 1);
  else
    return *((_QWORD *)v4 + 1);
}

