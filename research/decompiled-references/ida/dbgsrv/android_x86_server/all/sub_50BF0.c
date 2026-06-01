/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50BF0
// Address: 0x00050BF0

//----- (00050BF0) --------------------------------------------------------
_DWORD *__userpurge sub_50BF0@<eax>(int a1, char *file, const char *a3, int a4, int a5, int a6)
{
  _DWORD *v6; // esi
  char *idc_filename; // edi
  char *file_ext; // eax
  const char *v9; // ecx
  int *v10; // esi
  int v11; // edi
  int v12; // ecx
  unsigned __int8 (__cdecl *v13)(char *, _DWORD, void **); // ecx
  const char *v14; // eax
  int v16; // [esp+18h] [ebp-1034h]
  char *v17; // [esp+1Ch] [ebp-1030h]
  pthread_mutex_t *v18; // [esp+20h] [ebp-102Ch]
  const char *v19; // [esp+24h] [ebp-1028h]
  void *v20; // [esp+28h] [ebp-1024h] BYREF
  int v21; // [esp+2Ch] [ebp-1020h]
  int v22; // [esp+30h] [ebp-101Ch]
  char v23[4096]; // [esp+38h] [ebp-1014h] BYREF
  unsigned int v24; // [esp+1038h] [ebp-14h]

  v6 = (_DWORD *)a1;
  idc_filename = file;
  v24 = __readgsdword(0x14u);
  if ( qfileexist(file) || !qisabspath(file) && (idc_filename = get_idc_filename(v23, 4096, (int)file)) != nullptr )
  {
    v17 = idc_filename;
    file_ext = get_file_ext(idc_filename);
    v9 = "idc";
    if ( file_ext )
      v9 = file_ext;
    v19 = v9;
    v18 = (pthread_mutex_t *)dword_13BD48;
    qmutex_lock((pthread_mutex_t *)dword_13BD48);
    if ( (dword_13BD50 & 0x3FFFFFFF) != 0 )
    {
      v10 = (int *)dword_13BD4C;
      v11 = 4 * dword_13BD50;
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          if ( *(_DWORD *)(v12 + 16) )
          {
            v16 = *v10;
            if ( !strcasecmp(v19, *(const char **)(v12 + 16)) )
              break;
          }
        }
        ++v10;
        v11 -= 4;
        if ( !v11 )
        {
          v16 = 0;
          goto LABEL_16;
        }
      }
      ++*(_DWORD *)(v16 + 8);
LABEL_16:
      v6 = (_DWORD *)a1;
    }
    else
    {
      v16 = 0;
    }
    qmutex_unlock(v18);
    if ( v16 )
    {
      v13 = *(unsigned __int8 (__cdecl **)(char *, _DWORD, void **))(v16 + 28);
      if ( !v13 )
      {
        sub_1B530((int)v6, "cannot compile script");
        goto LABEL_30;
      }
      v20 = nullptr;
      v21 = 0;
      v22 = 0;
      if ( v13(v17, 0, &v20) )
      {
        v14 = a3;
        if ( !a3 )
        {
          if ( (*(_BYTE *)(v16 + 4) & 1) == 0 )
          {
LABEL_24:
            *v6 = 0;
            v6[1] = 0;
            v6[2] = 0;
            if ( !v20 )
            {
LABEL_30:
              --*(_DWORD *)(v16 + 8);
              return v6;
            }
            v21 = 0;
            qfree(v20);
            v20 = nullptr;
LABEL_28:
            v22 = 0;
            goto LABEL_30;
          }
          v14 = "main";
        }
        if ( (*(unsigned __int8 (__cdecl **)(int, const char *, int, int, void **))(v16 + 32))(a4, v14, a5, a6, &v20) )
          goto LABEL_24;
      }
      *v6 = v20;
      v20 = nullptr;
      v6[1] = v21;
      v21 = 0;
      v6[2] = v22;
      goto LABEL_28;
    }
    sub_1B530((int)v6, "unknown file extension");
  }
  else
  {
    sub_1B530(a1, "could not locate file");
  }
  return v6;
}
// 13BD48: using guessed type int dword_13BD48;
// 13BD4C: using guessed type int dword_13BD4C;
// 13BD50: using guessed type int dword_13BD50;
