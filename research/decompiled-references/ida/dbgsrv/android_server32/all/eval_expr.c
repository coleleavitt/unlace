/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_expr
// Address: 0x0003F1F8

//----- (0003F1F8) --------------------------------------------------------
int __fastcall eval_expr(int a1, int a2, const char *a3, int a4)
{
  pthread_mutex_t *v6; // r5
  int v7; // r7
  int v8; // r0
  int (__fastcall *v9)(int, int, const char *, int); // r5
  int v10; // r5
  int v11; // r0
  size_t v12; // r5
  unsigned int v13; // r7
  void *v14; // r0
  _DWORD v18[2]; // [sp+14h] [bp-Ch] BYREF

  v6 = (pthread_mutex_t *)dword_DE360;
  qmutex_lock((pthread_mutex_t *)dword_DE360);
  v7 = 0;
  if ( dword_DE370 < (unsigned int)dword_DE368 )
  {
    v8 = *(_DWORD *)(dword_DE364 + 4 * dword_DE370);
    if ( v8 )
    {
      ++*(_DWORD *)(v8 + 8);
      v7 = v8;
    }
  }
  qmutex_unlock(v6);
  if ( !v7 )
  {
    v11 = _strlen_chk("no extlang registered", 22);
    if ( v11 )
    {
      v12 = v11;
      v13 = v11 + 1;
      if ( *(_DWORD *)(a4 + 8) >= (unsigned int)(v11 + 1) )
      {
        v14 = *(void **)a4;
      }
      else
      {
        v14 = qvector_reserve(a4, *(void **)a4, v13, 1u);
        *(_DWORD *)a4 = v14;
      }
      *(_DWORD *)(a4 + 4) = v13;
      memmove(v14, "no extlang registered", v12);
      *(_BYTE *)(*(_DWORD *)a4 + v12) = 0;
      if ( !a1 )
        goto LABEL_18;
    }
    else
    {
      *(_DWORD *)(a4 + 4) = 0;
      if ( !a1 )
        goto LABEL_18;
    }
    free_idcv((unsigned __int8 *)a1);
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)a1 = 2;
LABEL_18:
    v18[1] = a2;
    v18[0] = &off_D9BC0;
    return eval_idc_snippet(a1, a3, a4, (int)v18);
  }
  v9 = *(int (__fastcall **)(int, int, const char *, int))(v7 + 36);
  if ( v9 )
  {
    v10 = v9(a1, a2, a3, a4);
  }
  else
  {
    v10 = 0;
    if ( a4 )
    {
      v10 = 0;
      sub_1DA58(a4, "the '%s' extlang des not implement the 'eval_expr' callback", *(const char **)(v7 + 12));
    }
  }
  --*(_DWORD *)(v7 + 8);
  return v10;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// D9BC0: using guessed type _UNKNOWN *off_D9BC0;
// DE360: using guessed type int dword_DE360;
// DE364: using guessed type int dword_DE364;
// DE368: using guessed type int dword_DE368;
// DE370: using guessed type int dword_DE370;
