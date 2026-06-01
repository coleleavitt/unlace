/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A0A0
// Address: 0x0001A0A0

//----- (0001A0A0) --------------------------------------------------------
int __cdecl sub_1A0A0(_DWORD *a1, int a2, int a3)
{
  FILE *v3; // eax
  FILE *v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  size_t v8; // ecx
  unsigned int v9; // edi
  void *v10; // eax
  _DWORD *v11; // edx
  _DWORD *v13; // edi
  size_t v14; // [esp+4h] [ebp-1428h]
  int v15; // [esp+8h] [ebp-1424h]
  int v16; // [esp+10h] [ebp-141Ch] BYREF
  _BYTE src[1025]; // [esp+17h] [ebp-1415h] BYREF
  int v18[1029]; // [esp+418h] [ebp-1014h] BYREF

  v18[1024] = __readgsdword(0x14u);
  qsnprintf(v18, 4096, "/proc/%u/stat", a3);
  v3 = qfopen((char *)v18, (int)"r");
  if ( !v3 )
    return 0;
  v4 = v3;
  *a1 = 0;
  v5 = sub_1B4A0((int)v3, "%d %1024s %c %d", (int)&v16);
  LOBYTE(v6) = v5 == 4;
  v15 = v6;
  if ( a2 && v5 == 4 )
  {
    v7 = __strlen_chk(src, 1025);
    if ( v7 )
    {
      v8 = v7;
      v9 = v7 + 1;
      v14 = v7;
      if ( *(_DWORD *)(a2 + 8) >= (unsigned int)(v7 + 1) )
      {
        v11 = (_DWORD *)a2;
        v10 = *(void **)a2;
      }
      else
      {
        v10 = qvector_reserve(a2, *(void **)a2, v9, 1u);
        v11 = (_DWORD *)a2;
        v8 = v14;
        *(_DWORD *)a2 = v10;
      }
      v11[1] = v9;
      v13 = v11;
      memmove(v10, src, v8);
      *(_BYTE *)(*v13 + v14) = 0;
    }
    else
    {
      *(_DWORD *)(a2 + 4) = 0;
    }
  }
  qfclose(v4);
  return v15;
}
// 1A135: variable 'v6' is possibly undefined
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
