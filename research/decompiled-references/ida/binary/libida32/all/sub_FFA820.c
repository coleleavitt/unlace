__int64 __fastcall sub_FFA820(__int64 *a1, unsigned int *a2, int **a3)
{
  int v3; // ecx
  int v4; // r9d
  int v5; // ebx
  int *v6; // r11
  __int64 v7; // r8
  unsigned int v8; // edi
  unsigned __int64 v9; // rax
  int v10; // esi
  unsigned int i; // eax
  int *v12; // rcx
  int v13; // r10d
  unsigned int v14; // eax

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = nullptr;
    return 0;
  }
  v4 = *a2;
  v5 = 1;
  v6 = nullptr;
  v7 = *a1;
  v8 = a2[1];
  v9 = 0xBF58476D1CE4E5B9LL * (v8 | ((unsigned __int64)*a2 << 32));
  v10 = v3 - 1;
  for ( i = (v3 - 1) & ((v9 >> 31) ^ v9); ; i = v10 & v14 )
  {
    v12 = (int *)(v7 + 32LL * i);
    v13 = *v12;
    if ( v4 == *v12 && v8 == v12[1] )
    {
      *a3 = v12;
      return 1;
    }
    if ( !v13 )
      break;
    if ( v13 == -1 && v12[1] == -1 && !v6 )
      v6 = (int *)(v7 + 32LL * i);
LABEL_9:
    v14 = v5 + i;
    ++v5;
  }
  if ( v12[1] )
    goto LABEL_9;
  if ( !v6 )
    v6 = (int *)(v7 + 32LL * i);
  *a3 = v6;
  return 0;
}

