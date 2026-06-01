/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C7C30
// Address: 0x080C7C30

//----- (080C7C30) --------------------------------------------------------
int __cdecl sub_80C7C30(int a1)
{
  int v1; // esi
  const char *v2; // eax
  const char *v3; // edi
  size_t v4; // ebp
  unsigned int v5; // eax
  int result; // eax
  unsigned int v7; // eax
  void *dest; // [esp+0h] [ebp-434h]
  _BYTE v9[1024]; // [esp+14h] [ebp-420h] BYREF
  unsigned int v10; // [esp+414h] [ebp-20h]

  v10 = __readgsdword(0x14u);
  v1 = a1;
  if ( a1 == -1 )
    v1 = *__errno_location();
  v2 = (const char *)strerror_r(v1, v9, 1024);
  v3 = v2;
  if ( v2 )
  {
    v4 = strlen(v2);
    v5 = __readgsdword(0);
    if ( v4 )
    {
      v7 = v5 - 132;
      dest = *(void **)(v7 + 88);
      if ( *(_DWORD *)(v7 + 96) < v4 + 1 )
      {
        dest = sub_80CF920(__readgsdword(0) - 132 + 88, dest, v4 + 1, 1u);
        *(_DWORD *)(__readgsdword(0) - 132 + 88) = dest;
      }
      *(_DWORD *)(__readgsdword(0) - 132 + 92) = v4 + 1;
      memmove(dest, v3, v4);
      *(_BYTE *)(*(_DWORD *)(__readgsdword(0) - 132 + 88) + v4) = 0;
    }
    else
    {
      *(_DWORD *)(v5 - 132 + 92) = 0;
    }
  }
  else
  {
    sub_805ED10((_DWORD *)(__readgsdword(0) - 44), "unknown error code %d", v1);
  }
  result = *(_DWORD *)(__readgsdword(0) - 132 + 88);
  if ( v10 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 804B160: using guessed type int __cdecl strerror_r(_DWORD, _DWORD, _DWORD);
