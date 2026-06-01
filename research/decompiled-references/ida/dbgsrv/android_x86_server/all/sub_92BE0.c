/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92BE0
// Address: 0x00092BE0

//----- (00092BE0) --------------------------------------------------------
int __cdecl sub_92BE0(int a1, int a2, char a3)
{
  int v3; // eax
  int v4; // edx
  int result; // eax
  size_t v6; // esi
  int v7; // ecx
  void *v8; // eax
  void **v9; // [esp+0h] [ebp-1Ch]

  *(_DWORD *)a1 = &off_138A64;
  *(_DWORD *)(a1 + 68) = a2;
  v9 = (void **)(a1 + 72);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  v3 = dword_13BC18++;
  *(_DWORD *)(a1 + 84) = v3;
  *(_DWORD *)(a1 + 88) = qtime64();
  *(_DWORD *)(a1 + 92) = v4;
  *(_BYTE *)(a1 + 96) = a3;
  result = sub_94C90(*(_DWORD *)(a1 + 68), a1 + 72, 0);
  if ( !(_BYTE)result )
  {
    result = __strlen_chk("(unknown)", 10);
    v6 = result;
    if ( result )
    {
      v7 = result + 1;
      if ( *(_DWORD *)(a1 + 80) >= (unsigned int)(result + 1) )
      {
        v8 = *v9;
      }
      else
      {
        v8 = qvector_reserve((int)v9, *v9, result + 1, 1u);
        *v9 = v8;
        v7 = v6 + 1;
      }
      *(_DWORD *)(a1 + 76) = v7;
      memmove(v8, "(unknown)", v6);
      result = *(_DWORD *)(a1 + 72);
      *(_BYTE *)(result + v6) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 76) = 0;
    }
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  return result;
}
// 92C41: variable 'v4' is possibly undefined
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 138A64: using guessed type int (__cdecl *off_138A64)(int);
// 13BC18: using guessed type int dword_13BC18;
