/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FB80
// Address: 0x0005FB80

//----- (0005FB80) --------------------------------------------------------
unsigned int __cdecl sub_5FB80(int a1, int a2, char a3)
{
  pthread_mutex_t *v3; // esi
  int v4; // eax
  int v5; // ecx
  time_t v6; // eax
  _DWORD v8[7]; // [esp+20h] [ebp-1Ch] BYREF

  v8[2] = __readgsdword(0x14u);
  *(_DWORD *)a1 = 289621065;
  *(_DWORD *)(a1 + 4) = sub_50F20();
  *(_DWORD *)(a1 + 8) = get_eah();
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 72) = a2;
  *(_BYTE *)(a1 + 76) = a3;
  *(_BYTE *)(a1 + 77) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  if ( !a3 )
  {
    v3 = (pthread_mutex_t *)dword_13BD5C;
    qmutex_lock((pthread_mutex_t *)dword_13BD5C);
    v4 = *(_DWORD *)(a1 + 4);
    v5 = *(_DWORD *)(v4 + 64);
    *(_DWORD *)(v4 + 64) = v5 + 1;
    if ( !v5 && *(_DWORD *)algn_13B61C )
      (*(void (**)(void))algn_13B61C)();
    *(_BYTE *)(a1 + 77) = 1;
    qmutex_unlock(v3);
  }
  if ( is_main_thread() )
  {
    v6 = -1;
    if ( !*(_BYTE *)(a1 + 76) )
      v6 = time(nullptr);
  }
  else
  {
    *(_BYTE *)(a1 + 76) = 1;
    v6 = -1;
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 4) + 60) = v6;
  if ( !*(_BYTE *)(a1 + 76) )
    callui((int)v8);
  return __readgsdword(0x14u);
}
// 13B61C: using guessed type _BYTE[4];
// 13BC20: using guessed type int (__stdcall *callui)(int);
// 13BD5C: using guessed type int dword_13BD5C;
