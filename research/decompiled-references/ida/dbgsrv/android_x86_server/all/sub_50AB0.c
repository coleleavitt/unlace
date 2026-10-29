/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50AB0
// Address: 0x00050AB0

//----- (00050AB0) --------------------------------------------------------
bool __cdecl sub_50AB0(char *a1, int a2, const char *a3, int a4, int a5, int a6)
{
  int v6; // ecx
  unsigned int v7; // esi
  size_t v8; // edx
  void *v9; // eax
  unsigned int v10; // esi
  const void *v12; // [esp+4h] [ebp-28h]
  void *v13; // [esp+8h] [ebp-24h] BYREF
  unsigned int v14; // [esp+Ch] [ebp-20h]
  int v15; // [esp+10h] [ebp-1Ch]
  unsigned int v16; // [esp+18h] [ebp-14h]

  v16 = __readgsdword(0x14u);
  sub_50BF0((int)&v13, a1, a3, a4, a5, a6);
  v6 = a2;
  if ( a2 && &v13 != (void **)a2 )
  {
    v7 = v14;
    if ( !v14 || (v8 = v14 - 1, v14 == 1) )
    {
      *(_DWORD *)(a2 + 4) = 0;
    }
    else
    {
      v12 = v13;
      if ( *(_DWORD *)(a2 + 8) >= v14 )
      {
        v9 = *(void **)a2;
      }
      else
      {
        v9 = qvector_reserve(a2, *(void **)a2, v14, 1u);
        v6 = a2;
        *(_DWORD *)a2 = v9;
        v8 = v7 - 1;
      }
      *(_DWORD *)(v6 + 4) = v7;
      memmove(v9, v12, v8);
      *(_BYTE *)(*(_DWORD *)a2 + v7 - 1) = 0;
    }
  }
  v10 = v14;
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
    v13 = nullptr;
    v15 = 0;
  }
  return v10 < 2;
}
