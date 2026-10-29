/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E380
// Address: 0x0004E380

//----- (0004E380) --------------------------------------------------------
int __cdecl sub_4E380(char *s2, int a2, void *src, size_t n)
{
  pthread_mutex_t *v4; // edi
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v10; // [esp+10h] [ebp-1Ch]
  char v11; // [esp+17h] [ebp-15h] BYREF
  unsigned int v12; // [esp+18h] [ebp-14h]

  v12 = __readgsdword(0x14u);
  v4 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v5 = (_DWORD *)sub_50F20();
  v6 = sub_52EA0(v5, s2);
  if ( v6 == -1 )
  {
    v10 = 0;
  }
  else
  {
    v7 = *(_DWORD *)(*v5 + 4 * v6);
    v11 = 0;
    sub_43860((char **)(v7 + 16), n, &v11);
    memcpy(*(void **)(v7 + 16), src, n);
    sub_522B0((_DWORD *)(v7 + 16));
    v8 = a2;
    *(_DWORD *)(v7 + 12) = a2;
    *(_DWORD *)(v7 + 68) = 0;
    LOBYTE(v8) = 1;
    v10 = v8;
  }
  qmutex_unlock(v4);
  return v10;
}
// 13BD5C: using guessed type int dword_13BD5C;
