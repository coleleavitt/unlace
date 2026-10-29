__int64 __fastcall sub_2105C10(__int64 *a1, int *a2, int **a3)
{
  int v3; // ecx
  __int64 v4; // r8
  int v5; // r10d
  int v6; // ebx
  int v7; // edi
  int v8; // esi
  int *v9; // r11
  unsigned int i; // eax
  int *v11; // rcx
  int v12; // r9d
  unsigned int v13; // eax

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = nullptr;
    return 0;
  }
  v4 = *a1;
  v5 = v3 - 1;
  v6 = 1;
  v7 = a2[1];
  v8 = *a2;
  v9 = nullptr;
  for ( i = (v3 - 1)
          & (((0xBF58476D1CE4E5B9LL * ((unsigned int)(37 * v7) | ((unsigned __int64)(unsigned int)(37 * v8) << 32))) >> 31)
           ^ (756364221 * v7)); ; i = v5 & v13 )
  {
    v11 = (int *)(v4 + 16LL * i);
    v12 = *v11;
    if ( v8 == *v11 && v7 == v11[1] )
    {
      *a3 = v11;
      return 1;
    }
    if ( v12 == -1 )
      break;
    if ( v12 == -2 && v11[1] == -2 && !v9 )
      v9 = (int *)(v4 + 16LL * i);
LABEL_9:
    v13 = v6 + i;
    ++v6;
  }
  if ( v11[1] != -1 )
    goto LABEL_9;
  if ( !v9 )
    v9 = (int *)(v4 + 16LL * i);
  *a3 = v9;
  return 0;
}
