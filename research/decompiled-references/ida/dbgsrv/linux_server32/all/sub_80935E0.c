/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80935E0
// Address: 0x080935E0

//----- (080935E0) --------------------------------------------------------
char *__cdecl sub_80935E0(int a1, char *a2, int a3, char *a4, char a5, char a6)
{
  unsigned int v6; // esi
  unsigned int v7; // esi
  char *v8; // ecx
  int v9; // ebx
  int v10; // eax
  char *v11; // eax
  char *v12; // ebp
  size_t *v13; // eax
  unsigned int v15; // eax
  char v16; // al
  char *v17; // [esp+4h] [ebp-103Ch]
  char dest[4096]; // [esp+20h] [ebp-1020h] BYREF
  unsigned int v19; // [esp+1020h] [ebp-20h]

  v6 = *(_DWORD *)(a1 + 192) & 4;
  v19 = __readgsdword(0x14u);
  if ( (unsigned __int8)sub_80CE7D0(a4) )
  {
    v15 = sub_80D0740((unsigned int)a2, a4, a3);
    v8 = (char *)v15;
    if ( v6 )
    {
      v17 = (char *)v15;
      v16 = sub_8091BB0(a2, a3);
      v8 = v17;
      if ( !v16 )
        v8 = nullptr;
    }
    goto LABEL_10;
  }
  v7 = v6 >> 2;
  if ( a6 == 1 || a5 != 34 )
  {
    if ( a6 )
    {
      v12 = dest;
      if ( (unsigned __int8)sub_80CE6B0(dest, 0x1000u, *(char **)(a1 + 152)) )
        goto LABEL_9;
    }
    goto LABEL_8;
  }
  v8 = sub_8091E80(a2, a3, *(char **)(a1 + 152), (int)a4, v7);
  v9 = *(_DWORD *)(a1 + 140) - 1;
  if ( v8 )
    goto LABEL_10;
  if ( v9 < 0 )
  {
LABEL_8:
    v12 = nullptr;
LABEL_9:
    v13 = (size_t *)off_811DA24();
    v8 = sub_80933E0(v13, a2, a3, (int)a4, v12, v7);
    goto LABEL_10;
  }
  while ( 1 )
  {
    v10 = 3 * v9--;
    v11 = sub_8091E80(a2, a3, *(char **)(*(_DWORD *)(a1 + 136) + 8 * v10), (int)a4, v7);
    if ( v11 )
      break;
    if ( v9 == -1 )
      goto LABEL_8;
  }
  v8 = v11;
LABEL_10:
  if ( v19 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v8;
}
// 80936EA: conditional instruction was optimized away because ecx.4==0
// 811DA24: using guessed type int *(*off_811DA24)();
