/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_expr
// Address: 0x00050600

//----- (00050600) --------------------------------------------------------
int __cdecl eval_expr(int a1, int a2, char *s, int a4)
{
  pthread_mutex_t *v4; // edi
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  int (__cdecl *v7)(int, int, char *, int); // eax
  int result; // eax
  int v9; // eax
  size_t v10; // edi
  int v11; // esi
  int v12; // ecx
  void *v13; // eax
  int v14; // ecx
  int v15[7]; // [esp+10h] [ebp-1Ch] BYREF

  v15[2] = __readgsdword(0x14u);
  v4 = (pthread_mutex_t *)dword_13BD48;
  qmutex_lock((pthread_mutex_t *)dword_13BD48);
  v5 = nullptr;
  if ( dword_13BD58 < (unsigned int)dword_13BD50 )
  {
    v6 = *(_DWORD **)(dword_13BD4C + 4 * dword_13BD58);
    if ( v6 )
    {
      ++v6[2];
      v5 = v6;
    }
  }
  qmutex_unlock(v4);
  if ( v5 )
  {
    v7 = (int (__cdecl *)(int, int, char *, int))v5[9];
    if ( v7 )
    {
      result = v7(a1, a2, s, a4);
    }
    else
    {
      if ( a4 )
        sub_1F400(a4, "the '%s' extlang des not implement the 'eval_expr' callback", v5[3]);
      result = 0;
    }
    --v5[2];
  }
  else
  {
    v9 = __strlen_chk("no extlang registered", 22);
    if ( v9 )
    {
      v10 = v9;
      v11 = v9 + 1;
      v12 = a4;
      if ( *(_DWORD *)(a4 + 8) >= (unsigned int)(v9 + 1) )
      {
        v13 = *(void **)a4;
      }
      else
      {
        v13 = qvector_reserve(a4, *(void **)a4, v9 + 1, 1u);
        v12 = a4;
        *(_DWORD *)a4 = v13;
      }
      *(_DWORD *)(v12 + 4) = v11;
      memmove(v13, "no extlang registered", v10);
      v14 = a4;
      *(_BYTE *)(*(_DWORD *)a4 + v10) = 0;
    }
    else
    {
      v14 = a4;
      *(_DWORD *)(a4 + 4) = 0;
    }
    if ( a1 )
    {
      free_idcv((char *)a1);
      v14 = a4;
      *(_BYTE *)a1 = 2;
      *(_DWORD *)(a1 + 4) = 0;
    }
    v15[0] = (int)&off_137F60;
    v15[1] = a2;
    return eval_idc_snippet((char *)a1, s, v14, (int)v15);
  }
  return result;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 137F60: using guessed type int (__cdecl *off_137F60)(int, int);
// 13BD48: using guessed type int dword_13BD48;
// 13BD4C: using guessed type int dword_13BD4C;
// 13BD50: using guessed type int dword_13BD50;
// 13BD58: using guessed type int dword_13BD58;
