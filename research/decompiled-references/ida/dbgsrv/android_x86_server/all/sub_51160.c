/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51160
// Address: 0x00051160

//----- (00051160) --------------------------------------------------------
unsigned int __cdecl sub_51160(int a1)
{
  int v1; // ebx
  unsigned int v2; // edi
  int v3; // edx
  unsigned int v4; // esi
  pthread_mutex_t *v6; // [esp+14h] [ebp-18h]
  int v7; // [esp+18h] [ebp-14h]

  v6 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v7 = *(_DWORD *)(a1 + 28);
  v1 = *(_DWORD *)(a1 + 32);
  v2 = 0;
  v3 = 1;
  v4 = 0;
  while ( v3 & v7 | v2 & v1 )
  {
    ++v4;
    v2 = __PAIR64__(v2, v3) >> 31;
    v3 *= 2;
    if ( v4 >= 0x40 )
    {
      if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
        interr(1443);
      BUG();
    }
  }
  *(_DWORD *)(a1 + 28) = v3 | v7;
  *(_DWORD *)(a1 + 32) = v2 | v1;
  qmutex_unlock(v6);
  return v4;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13BD5C: using guessed type int dword_13BD5C;
