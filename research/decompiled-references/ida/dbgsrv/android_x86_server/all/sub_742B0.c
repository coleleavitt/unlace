/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_742B0
// Address: 0x000742B0

//----- (000742B0) --------------------------------------------------------
char *__cdecl sub_742B0(int *a1, char *a2, int a3, int a4, char *s2, char a6)
{
  int v6; // ecx
  int v8; // edi
  int v9; // eax
  const char *v10; // eax
  const char *v11; // eax
  unsigned __int8 v12; // al
  int v13; // eax
  int v14; // esi
  _DWORD *v15; // edi
  const char *v16; // eax
  char v17; // al
  char *v19; // [esp+0h] [ebp-1Ch]
  int v20; // [esp+4h] [ebp-18h]
  pthread_mutex_t *v21; // [esp+8h] [ebp-14h]

  v21 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v6 = 12 * a1[4];
  if ( v6 )
  {
    v8 = a1[3];
    do
    {
      v9 = *(_DWORD *)(v8 + 4);
      v20 = v6;
      if ( s2 )
      {
        if ( v9 )
          v10 = *(const char **)v8;
        else
          v10 = byte_EF875;
        if ( !strcasecmp(v10, s2) )
          s2 = nullptr;
      }
      else
      {
        if ( v9 )
          v11 = *(const char **)v8;
        else
          v11 = byte_EF875;
        v19 = qmakepath(a2, a3, v11, a4);
        if ( a6 )
          v12 = (unsigned __int8)sub_744B0(v19, a3);
        else
          v12 = qfileexist(v19);
        s2 = nullptr;
        if ( v12 )
          goto LABEL_31;
      }
      v8 += 12;
      v6 = v20 - 12;
    }
    while ( v20 != 12 );
  }
  v13 = a1[1];
  if ( !v13 )
  {
    get_ida_subdirs(a1, "idc", 0);
    v13 = a1[1];
  }
  v14 = 12 * v13;
  if ( 12 * v13 )
  {
    v15 = (_DWORD *)(*a1 + 4);
    while ( 1 )
    {
      v16 = byte_EF875;
      if ( *v15 )
        v16 = (const char *)*(v15 - 1);
      v19 = qmakepath(a2, a3, v16, a4);
      v17 = a6 ? (unsigned __int8)sub_744B0(v19, a3) : qfileexist(v19);
      if ( v17 )
        break;
      v15 += 3;
      v14 -= 12;
      if ( !v14 )
        goto LABEL_30;
    }
  }
  else
  {
LABEL_30:
    v19 = getsysfile(a2, a3, a4, nullptr);
  }
LABEL_31:
  qmutex_unlock(v21);
  return v19;
}
// 13BD5C: using guessed type int dword_13BD5C;
