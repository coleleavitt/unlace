/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A300
// Address: 0x0009A300

//----- (0009A300) --------------------------------------------------------
unsigned int __cdecl sub_9A300(int a1, char a2, __int16 a3, int a4)
{
  _DWORD *v4; // eax
  _BYTE *v5; // eax
  int v6; // eax
  size_t v7; // esi
  int v8; // edx
  void *v9; // eax
  void **v11; // [esp+10h] [ebp-101Ch]
  char src[4096]; // [esp+18h] [ebp-1014h] BYREF
  unsigned int v13; // [esp+1018h] [ebp-14h] BYREF

  v13 = __readgsdword(0x14u);
  sub_934C0((_DWORD *)a1, a2);
  *(_DWORD *)a1 = &off_138C08;
  v11 = (void **)(a1 + 60);
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_WORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  v4 = operator new(8u);
  *v4 = &off_138CD8;
  v4[1] = a1;
  *(_DWORD *)(a1 + 88) = v4;
  *(_WORD *)(a1 + 56) = a3;
  sub_A9C40(src, 0x1000u);
  v5 = qbasename(src);
  qstrncpy((unsigned int)v5, a4, (char *)&v13 - v5);
  v6 = __strlen_chk(src, 4096);
  v7 = v6;
  if ( v6 )
  {
    v8 = v6 + 1;
    if ( *(_DWORD *)(a1 + 68) >= (unsigned int)(v6 + 1) )
    {
      v9 = *v11;
    }
    else
    {
      v9 = qvector_reserve((int)v11, *v11, v6 + 1, 1u);
      *v11 = v9;
      v8 = v7 + 1;
    }
    *(_DWORD *)(a1 + 64) = v8;
    memmove(v9, src, v7);
    *(_BYTE *)(*(_DWORD *)(a1 + 60) + v7) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 64) = 0;
  }
  return __readgsdword(0x14u);
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 138C08: using guessed type int (__cdecl *off_138C08)(int);
// 138CD8: using guessed type int (*off_138CD8)();
