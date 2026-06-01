__int64 __fastcall sub_C00960(__int64 a1)
{
  int *v1; // rcx
  int v2; // edx
  int v3; // eax
  __int64 v4; // rax
  unsigned int v5; // edx
  unsigned int v7; // edx

  v1 = *(int **)(a1 + 24);
  v2 = *v1;
  v3 = *(_WORD *)(a1 + 20) >> 1;
  if ( v3 == 1 )
  {
    v4 = (unsigned int)v1[5];
    if ( v2 )
      goto LABEL_3;
    v7 = v1[4];
    if ( !v7 )
      v7 = v1[5];
    return (v4 << 32) | v7;
  }
  else
  {
    v4 = (unsigned int)v1[6 * (v3 - 1) + 5];
    if ( v2 )
    {
LABEL_3:
      v5 = v1[3];
      return (v4 << 32) | v5;
    }
    v5 = v1[4];
    if ( v5 )
      return (v4 << 32) | v5;
    return (v4 << 32) | (unsigned int)v1[5];
  }
}
