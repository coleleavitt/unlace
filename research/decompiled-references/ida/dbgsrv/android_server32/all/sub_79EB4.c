/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79EB4
// Address: 0x00079EB4

//----- (00079EB4) --------------------------------------------------------
int __fastcall sub_79EB4(int a1)
{
  unsigned int v1; // r6
  unsigned __int8 *v2; // r0
  int **v3; // r7
  size_t v5; // r5
  void *v6; // r2
  int v7; // r5
  _DWORD *v8; // r2
  const void *v9; // r1
  void *v10; // r0
  _DWORD *v11; // r4
  int v13; // [sp+4h] [bp-10h]
  int *v15; // [sp+1Ch] [bp+8h] BYREF
  pthread_mutex_t *mutex; // [sp+20h] [bp+Ch] BYREF
  char v17[4104]; // [sp+24h] [bp+10h] BYREF

  sub_80634(&mutex);
  v1 = dword_DF520;
  if ( (unsigned int)dword_DF520 > 1 )
    goto LABEL_13;
  v15 = &dword_0;
  v2 = (unsigned __int8 *)sub_79DC8();
  qstrncpy((unsigned int)v17, v2, 4096);
  if ( v17[0] )
  {
    if ( ".idapro" )
    {
      v3 = &v15;
      do
      {
        qmakepath(v17, 4096, v17);
        if ( !qfileexist(v17) )
          qmkdir(v17, 0x1FFu);
      }
      while ( *v3++ );
    }
    v5 = _strlen_chk(v17, 4096);
    if ( !v5 )
    {
      v7 = 0;
      dword_DF520 = 0;
      goto LABEL_19;
    }
    v6 = (void *)dword_DF51C;
    if ( dword_DF524 < v5 + 1 )
    {
      v6 = qvector_reserve((int)&dword_DF51C, (void *)dword_DF51C, v5 + 1, 1u);
      dword_DF51C = (int)v6;
    }
    dword_DF520 = v5 + 1;
    memmove(v6, v17, v5);
    *(_BYTE *)(dword_DF51C + v5) = 0;
  }
  v1 = dword_DF520;
  v7 = 0;
  if ( (unsigned int)dword_DF520 >= 2 )
  {
LABEL_13:
    v7 = 1;
    v8 = (_DWORD *)a1;
    if ( (int *)a1 != &dword_DF51C )
    {
      v9 = (const void *)dword_DF51C;
      if ( *(_DWORD *)(a1 + 8) >= v1 )
      {
        v10 = *(void **)a1;
      }
      else
      {
        v13 = dword_DF51C;
        v10 = qvector_reserve(a1, *(void **)a1, v1, 1u);
        *(_DWORD *)a1 = v10;
        v8 = (_DWORD *)a1;
        v9 = (const void *)v13;
      }
      v8[1] = v1;
      v11 = v8;
      memmove(v10, v9, v1 - 1);
      *(_BYTE *)(*v11 + v1 - 1) = 0;
    }
  }
LABEL_19:
  qmutex_unlock(mutex);
  return v7;
}
// 0: using guessed type int dword_0;
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// DF51C: using guessed type int dword_DF51C;
// DF520: using guessed type int dword_DF520;
// DF524: using guessed type int dword_DF524;
