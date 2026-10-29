__int64 __fastcall sub_D8A3F0(__int64 a1, int a2)
{
  char *v2; // r8
  char *v3; // rdx
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int *v7; // rcx

  v2 = *(char **)(a1 + 64);
  v3 = *(char **)(a1 + 56);
  v4 = a2 - *(_DWORD *)(a1 + 32);
  v5 = (v2 - v3) >> 4;
  if ( v2 - v3 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v6 = v5 >> 1;
        v7 = (unsigned int *)&v3[16 * (v5 >> 1)];
        if ( v4 <= *v7 )
          break;
        v3 = (char *)(v7 + 4);
        v5 = v5 - v6 - 1;
        if ( v5 <= 0 )
          goto LABEL_4;
      }
      v5 >>= 1;
    }
    while ( v6 );
    if ( v2 == v3 )
      return *((_QWORD *)v2 - 1);
    return *((_QWORD *)v3 + 1);
  }
LABEL_4:
  if ( v2 != v3 )
    return *((_QWORD *)v3 + 1);
  return *((_QWORD *)v2 - 1);
}
