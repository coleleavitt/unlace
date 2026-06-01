void __fastcall sub_409C30(int *a1, int **a2, int a3)
{
  int *v3; // rcx
  int v4; // eax
  int *i; // rcx
  int *v6; // r9
  int v7; // r8d

  v3 = *a2;
  if ( *a2 && *v3 >= 0 && *v3 <= a3 )
  {
    v4 = *a1;
    for ( i = v3 + 1; ; ++i )
    {
      ++v4;
      v6 = i;
      *a1 = v4;
      if ( !i )
        break;
      v7 = *i;
      if ( *i < 0 )
      {
        *a2 = i;
        return;
      }
      if ( v7 > a3 )
      {
        *a2 = v6;
        return;
      }
    }
    *a2 = nullptr;
  }
}

