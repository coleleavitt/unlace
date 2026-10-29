/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E510
// Address: 0x0006E510

//----- (0006E510) --------------------------------------------------------
char *__cdecl sub_6E510(int a1, char *file, int a3, _BYTE *a4, char a5, char a6)
{
  int v6; // edi
  unsigned int v7; // edx
  unsigned int v8; // esi
  unsigned __int8 v9; // cl
  char *result; // eax
  char *v11; // eax
  char *v12; // edi
  unsigned __int8 v13; // al
  char *v14; // esi
  bool v15; // al
  int v16; // eax
  int v17; // edi
  int v18; // esi
  char *v19; // eax
  unsigned __int8 v20; // al
  bool v21; // al
  char *v23; // esi
  int *v24; // eax
  char *v25; // eax
  char *v26; // [esp+0h] [ebp-101Ch]
  unsigned int v27; // [esp+0h] [ebp-101Ch]
  char v28; // [esp+4h] [ebp-1018h]
  char dest[4096]; // [esp+8h] [ebp-1014h] BYREF
  unsigned int v30; // [esp+1008h] [ebp-14h]

  v30 = __readgsdword(0x14u);
  v6 = *(_DWORD *)(a1 + 184);
  if ( !qisabspath(a4) )
  {
    v28 = v6;
    v7 = 0;
    if ( a5 != 34 || a6 )
      goto LABEL_29;
    if ( *(_DWORD *)(a1 + 144) )
      qdirname(dest, 0x1000u, *(char **)(a1 + 144));
    else
      qgetcwd(dest, 0x1000u);
    v11 = qmakepath(file, a3, dest, (int)a4);
    if ( (v6 & 4) != 0 )
    {
      v12 = v11;
      v13 = (unsigned __int8)sub_744B0(file, a3);
      v7 = (unsigned int)v12;
      if ( v13 )
        goto LABEL_16;
    }
    else
    {
      v14 = v11;
      v15 = qfileexist(v11);
      v7 = (unsigned int)v14;
      if ( v15 )
      {
LABEL_16:
        if ( !v7 )
        {
          v16 = *(_DWORD *)(a1 + 132);
          if ( v16 - 1 >= 0 )
          {
            v17 = v16 - 2;
            v18 = 24 * v16 - 24;
            while ( 1 )
            {
              if ( *(_DWORD *)(*(_DWORD *)(a1 + 128) + v18) )
                qdirname(dest, 0x1000u, *(char **)(*(_DWORD *)(a1 + 128) + v18));
              else
                qgetcwd(dest, 0x1000u);
              v19 = qmakepath(file, a3, dest, (int)a4);
              v26 = v19;
              if ( (v28 & 4) == 0 )
                break;
              v20 = (unsigned __int8)sub_744B0(file, a3);
              v7 = (unsigned int)v26;
              if ( !v20 )
                goto LABEL_26;
LABEL_27:
              if ( !v7 )
              {
                v18 -= 24;
                if ( v17-- >= 0 )
                  continue;
              }
              goto LABEL_29;
            }
            v21 = qfileexist(v19);
            v7 = (unsigned int)v26;
            if ( v21 )
              goto LABEL_27;
LABEL_26:
            v7 = 0;
            goto LABEL_27;
          }
        }
LABEL_29:
        if ( a6 )
        {
          v27 = v7;
          v23 = nullptr;
          if ( (unsigned __int8)qdirname(dest, 0x1000u, *(char **)(a1 + 144)) )
            v23 = dest;
        }
        else
        {
          if ( a5 == 34 && v7 )
            return (char *)v7;
          v27 = v7;
          v23 = nullptr;
        }
        v24 = (int *)off_13B64C();
        v25 = sub_742B0(v24, file, a3, (int)a4, v23, (unsigned __int8)(v28 & 4) >> 2);
        v7 = v27;
        if ( v25 )
          return v25;
        return (char *)v7;
      }
    }
    v7 = 0;
    goto LABEL_16;
  }
  v7 = qstrncpy((unsigned int)file, (int)a4, a3);
  if ( (v6 & 4) == 0 )
    return (char *)v7;
  v8 = v7;
  v9 = (unsigned __int8)sub_744B0(file, a3);
  result = nullptr;
  if ( v9 )
    return (char *)v8;
  return result;
}
// 13B64C: using guessed type int (*off_13B64C)();
