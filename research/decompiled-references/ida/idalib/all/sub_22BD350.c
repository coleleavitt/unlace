__int64 __fastcall sub_22BD350(__int64 *a1, char *a2, int **a3)
{
  int v3; // r8d
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // r10
  int v8; // ebx
  int *v9; // rbp
  unsigned int i; // eax
  int *v11; // r9
  int v12; // edi
  unsigned int v13; // eax
  unsigned __int64 v14; // rax

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = nullptr;
    return 0;
  }
  v4 = *(unsigned int *)a2;
  v5 = (unsigned int)v4;
  if ( a2[7] >= 0 )
  {
    if ( a2[11] >= 0 )
      goto LABEL_4;
LABEL_16:
    v14 = 0xBF58476D1CE4E5B9LL * (*((_DWORD *)a2 + 2) & 0x7FFFFFFF | (v5 << 32));
    v5 = (unsigned int)(v14 >> 31) ^ (unsigned int)v14;
    if ( a2[15] >= 0 )
      goto LABEL_5;
    goto LABEL_15;
  }
  v5 = (unsigned int)((0xBF58476D1CE4E5B9LL * (*((_DWORD *)a2 + 1) & 0x7FFFFFFF | (unsigned __int64)(v4 << 32))) >> 31)
     ^ (484763065 * (*((_DWORD *)a2 + 1) & 0x7FFFFFFF));
  if ( a2[11] < 0 )
    goto LABEL_16;
LABEL_4:
  if ( a2[15] < 0 )
  {
LABEL_15:
    v5 = 0xBF58476D1CE4E5B9LL * (*((_DWORD *)a2 + 3) & 0x7FFFFFFF | (v5 << 32));
    LODWORD(v5) = (v5 >> 31) ^ v5;
  }
LABEL_5:
  v6 = v3 - 1;
  v7 = *a1;
  v8 = 1;
  v9 = nullptr;
  for ( i = v6 & v5; ; i = v6 & v13 )
  {
    v11 = (int *)(v7 + 20LL * i);
    v12 = *v11;
    if ( *v11 == (_DWORD)v4
      && ((*((_DWORD *)a2 + 1) ^ v11[1]) & 0x7FFFFFFF) == 0
      && ((v11[2] ^ *((_DWORD *)a2 + 2)) & 0x7FFFFFFF) == 0
      && ((v11[3] ^ *((_DWORD *)a2 + 3)) & 0x7FFFFFFF) == 0 )
    {
      *a3 = v11;
      return 1;
    }
    if ( v12 == 0x7FFFFFFF )
      break;
    if ( v12 == 2147483646
      && (v11[1] & 0x7FFFFFFF) == 0
      && (v11[2] & 0x7FFFFFFF) == 0
      && (v11[3] & 0x7FFFFFFF) == 0
      && !v9 )
    {
      v9 = (int *)(v7 + 20LL * i);
    }
LABEL_14:
    v13 = v8 + i;
    ++v8;
  }
  if ( (v11[1] & 0x7FFFFFFF) != 0 || (v11[2] & 0x7FFFFFFF) != 0 || (v11[3] & 0x7FFFFFFF) != 0 )
    goto LABEL_14;
  if ( !v9 )
    v9 = (int *)(v7 + 20LL * i);
  *a3 = v9;
  return 0;
}
