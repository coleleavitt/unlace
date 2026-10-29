/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idc_method
// Address: 0x000543A0

//----- (000543A0) --------------------------------------------------------
int __cdecl set_idc_method(int **a1, char *s)
{
  char *v2; // eax
  pthread_mutex_t *v3; // esi
  int v4; // edi
  int v5; // ecx
  const char *v6; // eax
  int v7; // edi
  int v9; // esi
  char **v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // [esp+20h] [ebp-4Ch]
  int *v15; // [esp+20h] [ebp-4Ch]
  int v16; // [esp+20h] [ebp-4Ch]
  pthread_mutex_t *v17; // [esp+24h] [ebp-48h]
  char **v18; // [esp+28h] [ebp-44h]
  char *v19; // [esp+2Ch] [ebp-40h]
  int v20[6]; // [esp+30h] [ebp-3Ch] BYREF
  int *v21; // [esp+48h] [ebp-24h] BYREF
  _DWORD v22[7]; // [esp+50h] [ebp-1Ch] BYREF

  v22[2] = __readgsdword(0x14u);
  v2 = strchr(s, 46);
  if ( !v2 )
    return 0;
  v19 = v2;
  v3 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  if ( !byte_13BD7C && _cxa_guard_acquire((__guard *)&byte_13BD7C) )
  {
    v13 = operator new(0x48u);
    v13[1] = 0;
    *v13 = 0;
    v13[3] = 0;
    v13[2] = 0;
    v13[5] = 0;
    v13[4] = 0;
    v13[7] = 0;
    v13[6] = 0;
    v13[9] = 0;
    v13[8] = 0;
    v13[11] = 0;
    v13[10] = 0;
    v13[13] = 0;
    v13[12] = 0;
    v13[15] = 0;
    v13[14] = 0;
    *(_DWORD *)((char *)v13 + 65) = 0;
    *(_DWORD *)((char *)v13 + 61) = 0;
    dword_13BD78 = (int)v13;
    _cxa_guard_release((__guard *)&byte_13BD7C);
    if ( !s )
      goto LABEL_26;
LABEL_4:
    v17 = v3;
    v14 = (_DWORD *)dword_13BD78;
    v4 = *(_DWORD *)(dword_13BD78 + 4) - 1;
    while ( v4 >= 0 )
    {
      v5 = *(_DWORD *)(*v14 + 4 * v4);
      v6 = byte_EF875;
      if ( *(_DWORD *)(v5 + 4) )
        v6 = *(const char **)v5;
      --v4;
      if ( !strcmp(v6, s) )
      {
        if ( v4 != 2147483646 )
        {
          v7 = v4 + 1;
          goto LABEL_20;
        }
LABEL_23:
        v16 = 0;
        v3 = v17;
        goto LABEL_27;
      }
    }
    v9 = 0;
    v15 = off_13B614;
    if ( !off_13B614 )
      goto LABEL_23;
    v10 = off_13B618;
    v11 = 0;
    v18 = off_13B618;
    while ( strcmp(v10[v9], s) )
    {
      ++v11;
      v9 += 6;
      v10 = v18;
      if ( v11 >= (unsigned int)v15 )
        goto LABEL_23;
    }
    if ( !&v18[v9] || !v18[v9 + 1] )
      goto LABEL_23;
    v7 = v9 * 4 / -24;
LABEL_20:
    sub_1B530((int)v20, v19 + 1);
    v21 = v20;
    sub_56CF0((int)v22, a1, (int)v20, (int)&byte_F458B, &v21);
    *(_DWORD *)(v22[0] + 28) = v7;
    v12 = v20[0];
    v3 = v17;
    if ( v20[0] )
    {
      v20[1] = 0;
      qfree((void *)v20[0]);
      v20[0] = 0;
      v20[2] = 0;
    }
    LOBYTE(v12) = 1;
    v16 = v12;
    goto LABEL_27;
  }
  if ( s )
    goto LABEL_4;
LABEL_26:
  v16 = 0;
LABEL_27:
  qmutex_unlock(v3);
  return v16;
}
// 54559: variable 'v12' is possibly undefined
// F458B: using guessed type char byte_F458B;
// 13B614: using guessed type int *off_13B614;
// 13B618: using guessed type char **off_13B618;
// 13BD5C: using guessed type int dword_13BD5C;
// 13BD78: using guessed type int dword_13BD78;
// 13BD7C: using guessed type char byte_13BD7C;
