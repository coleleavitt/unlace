/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F5C0
// Address: 0x0003F5C0

//----- (0003F5C0) --------------------------------------------------------
int __fastcall sub_3F5C0(_DWORD *a1, unsigned __int8 *a2, const char *a3, int a4, int a5, int a6)
{
  unsigned __int8 *idc_filename; // r0
  char *file_ext; // r6
  int v10; // r4
  int *v11; // r5
  int v12; // r7
  const char *v13; // r1
  int (__fastcall *v14)(unsigned __int8 *, _DWORD, void **); // r3
  const char *v15; // r2
  void *v16; // r0
  int v17; // r2
  int v18; // r1
  int v20; // [sp+10h] [bp-1030h]
  unsigned __int8 *v21; // [sp+14h] [bp-102Ch]
  pthread_mutex_t *mutex; // [sp+20h] [bp-1020h]
  void *v25; // [sp+30h] [bp-1010h] BYREF
  int v26; // [sp+34h] [bp-100Ch]
  int v27; // [sp+38h] [bp-1008h]
  char v28[4100]; // [sp+3Ch] [bp-1004h] BYREF

  if ( qfileexist((const char *)a2) )
  {
    idc_filename = a2;
  }
  else if ( qisabspath(a2) || (idc_filename = get_idc_filename(v28, 4096, (int)a2)) == nullptr )
  {
    sub_1B09C((int)a1, "could not locate file");
    return 4156;
  }
  v20 = a4;
  v21 = idc_filename;
  file_ext = get_file_ext(idc_filename);
  mutex = (pthread_mutex_t *)dword_DE360;
  qmutex_lock((pthread_mutex_t *)dword_DE360);
  if ( !file_ext )
    file_ext = "idc";
  v10 = 0;
  if ( 4 * dword_DE368 )
  {
    v11 = (int *)dword_DE364;
    v12 = 4 * dword_DE368;
    while ( 1 )
    {
      v10 = *v11;
      if ( *v11 )
      {
        v13 = *(const char **)(v10 + 16);
        if ( v13 )
        {
          if ( !strcasecmp(file_ext, v13) )
            break;
        }
      }
      v12 -= 4;
      ++v11;
      if ( !v12 )
      {
        v10 = 0;
        goto LABEL_16;
      }
    }
    ++*(_DWORD *)(v10 + 8);
  }
LABEL_16:
  qmutex_unlock(mutex);
  if ( v10 )
  {
    v14 = *(int (__fastcall **)(unsigned __int8 *, _DWORD, void **))(v10 + 28);
    if ( !v14 )
    {
      sub_1B09C((int)a1, "cannot compile script");
      goto LABEL_29;
    }
    v26 = 0;
    v25 = nullptr;
    v27 = 0;
    if ( v14(v21, 0, &v25) )
    {
      v15 = a3;
      if ( !a3 )
      {
        if ( !(*(unsigned __int8 *)(v10 + 4) << 31) )
        {
LABEL_23:
          *a1 = 0;
          a1[1] = 0;
          a1[2] = 0;
          if ( !v25 )
          {
LABEL_29:
            --*(_DWORD *)(v10 + 8);
            return 4156;
          }
          v26 = 0;
          qfree(v25);
          v25 = nullptr;
LABEL_27:
          v27 = 0;
          goto LABEL_29;
        }
        v15 = "main";
      }
      if ( (*(int (__fastcall **)(int, const char *, int, int, void **))(v10 + 32))(v20, v15, a5, a6, &v25) )
        goto LABEL_23;
    }
    v16 = v25;
    v25 = nullptr;
    v17 = v26;
    v26 = 0;
    v18 = v27;
    *a1 = v16;
    a1[1] = v17;
    a1[2] = v18;
    goto LABEL_27;
  }
  sub_1B09C((int)a1, "unknown file extension");
  return 4156;
}
// DE360: using guessed type int dword_DE360;
// DE364: using guessed type int dword_DE364;
// DE368: using guessed type int dword_DE368;
