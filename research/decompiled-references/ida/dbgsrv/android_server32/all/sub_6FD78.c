/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6FD78
// Address: 0x0006FD78

//----- (0006FD78) --------------------------------------------------------
int __fastcall sub_6FD78(int a1, int a2, __int16 a3, unsigned __int8 *a4)
{
  void **v7; // r5
  _DWORD *v8; // r0
  _BYTE *v9; // r0
  int v10; // r0
  size_t v11; // r6
  int v12; // r7
  void *v13; // r0
  char buf[4096]; // [sp+14h] [bp-1004h] BYREF
  int v16; // [sp+1014h] [bp-4h] BYREF

  sub_6BAC0((_DWORD *)a1, a2);
  *(_DWORD *)a1 = &off_DAA54;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  v7 = (void **)(a1 + 60);
  memset((void *)(a1 + 60), 0, 0x22u);
  v8 = operator new(8u);
  *v8 = &off_DAB24;
  v8[1] = a1;
  *(_WORD *)(a1 + 56) = a3;
  *(_DWORD *)(a1 + 88) = v8;
  sub_79808(buf, 0x1000u);
  v9 = qbasename(buf);
  qstrncpy((unsigned int)v9, a4, (char *)&v16 - v9);
  v10 = _strlen_chk(buf, 4096);
  v11 = v10;
  if ( v10 )
  {
    v12 = v10 + 1;
    if ( *(_DWORD *)(a1 + 68) >= (unsigned int)(v10 + 1) )
    {
      v13 = *v7;
    }
    else
    {
      v13 = qvector_reserve(a1 + 60, *v7, v10 + 1, 1u);
      *v7 = v13;
    }
    *(_DWORD *)(a1 + 64) = v12;
    memmove(v13, buf, v11);
    *(_BYTE *)(*(_DWORD *)(a1 + 60) + v11) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 64) = 0;
  }
  return a1;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// DAA54: using guessed type _UNKNOWN *off_DAA54;
// DAB24: using guessed type _UNKNOWN *off_DAB24;
