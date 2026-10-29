/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1CA30
// Address: 0x0001CA30

//----- (0001CA30) --------------------------------------------------------
unsigned int __cdecl sub_1CA30(int a1, int a2)
{
  char *v2; // eax
  char *v3; // eax
  int v4; // eax
  int v5; // esi
  void *v6; // eax
  size_t v8; // [esp+4h] [ebp-1018h]
  char src[4096]; // [esp+8h] [ebp-1014h] BYREF
  unsigned int v10; // [esp+1008h] [ebp-14h]

  v10 = __readgsdword(0x14u);
  if ( *(_DWORD *)(a2 + 4) )
    v2 = *(char **)a2;
  else
    v2 = byte_EF875;
  if ( !qisabspath(v2) )
  {
    v3 = *(_DWORD *)(a2 + 4) ? *(char **)a2 : byte_EF875;
    qmakepath(src, 4096, "/system/lib", (int)v3);
    if ( qfileexist(src) )
    {
      v4 = __strlen_chk(src, 4096);
      if ( v4 )
      {
        v8 = v4;
        v5 = v4 + 1;
        if ( *(_DWORD *)(a2 + 8) >= (unsigned int)(v4 + 1) )
        {
          v6 = *(void **)a2;
        }
        else
        {
          v6 = qvector_reserve(a2, *(void **)a2, v4 + 1, 1u);
          *(_DWORD *)a2 = v6;
        }
        *(_DWORD *)(a2 + 4) = v5;
        memmove(v6, src, v8);
        *(_BYTE *)(*(_DWORD *)a2 + v8) = 0;
      }
      else
      {
        *(_DWORD *)(a2 + 4) = 0;
      }
    }
  }
  return __readgsdword(0x14u);
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
