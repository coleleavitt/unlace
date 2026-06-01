__int64 __fastcall sub_13747F0(__int64 *a1, unsigned __int64 *a2, unsigned __int64 **a3)
{
  int v3; // r8d
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  int v9; // eax
  int v10; // r8d
  __int64 v11; // r9
  int v12; // ebp
  unsigned __int64 *v13; // r10
  unsigned int v14; // eax
  unsigned __int64 *v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r11
  __int64 v18; // rbx
  __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r9

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = nullptr;
    return 0;
  }
  v5 = *a2;
  v6 = v5;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    if ( !v7 )
    {
LABEL_7:
      v9 = -1916529075;
      goto LABEL_8;
    }
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v7 & 4) == 0 )
      break;
    v6 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v8 )
      goto LABEL_7;
  }
  v20 = HIDWORD(v8);
  v21 = 0x9DDFEA08EB382D69LL * (v20 ^ (((8 * v7) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
  v9 = -348639895
     * ((-348639895 * ((v21 >> 47) ^ v20 ^ v21))
      ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v21 >> 47) ^ v20 ^ v21)) >> 32) >> 15));
LABEL_8:
  v10 = v3 - 1;
  v11 = *a1;
  v12 = 1;
  v13 = nullptr;
  v14 = v10 & v9;
  v15 = (unsigned __int64 *)(*a1 + 72LL * v14);
  v16 = *v15;
  if ( *v15 == v5 )
  {
LABEL_21:
    *a3 = v15;
    return 1;
  }
  while ( v5 != -4096 && v5 != -8192 )
  {
    if ( v16 == -4096 )
      goto LABEL_29;
    if ( v16 == -8192 )
      goto LABEL_32;
    v17 = v5;
    do
    {
      v18 = *(_QWORD *)(v17 + 8);
      if ( !v18 )
      {
        v17 = 0;
        break;
      }
      v17 = v18 & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( (v18 & 4) != 0 && v17 );
    while ( 1 )
    {
      v19 = *(_QWORD *)(v16 + 8);
      if ( !v19 )
        break;
      v16 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v19 & 4) == 0 || !v16 )
        goto LABEL_20;
    }
    v16 = 0;
LABEL_20:
    if ( v16 == v17 )
      goto LABEL_21;
LABEL_25:
    v14 = v10 & (v12 + v14);
    v15 = (unsigned __int64 *)(v11 + 72LL * v14);
    v16 = *v15;
    if ( v5 == *v15 )
      goto LABEL_21;
    ++v12;
  }
  if ( v16 != -4096 )
  {
    if ( v16 != -8192 )
      goto LABEL_25;
LABEL_32:
    if ( !v13 )
      v13 = v15;
    goto LABEL_25;
  }
LABEL_29:
  if ( !v13 )
    v13 = v15;
  *a3 = v13;
  return 0;
}
