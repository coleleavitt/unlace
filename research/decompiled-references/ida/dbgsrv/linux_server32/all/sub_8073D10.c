/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8073D10
// Address: 0x08073D10

//----- (08073D10) --------------------------------------------------------
int __cdecl sub_8073D10(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi
  const char *v4; // edx
  char *v5; // ebx
  char *v6; // eax
  size_t v7; // ecx
  void *v9; // eax
  const char *v10; // [esp+0h] [ebp-38h]
  size_t v11; // [esp+4h] [ebp-34h]
  const char *src; // [esp+8h] [ebp-30h]
  void *srca; // [esp+8h] [ebp-30h]
  _BYTE *srcb; // [esp+8h] [ebp-30h]
  void *ptr; // [esp+10h] [ebp-28h] BYREF
  void *v16; // [esp+14h] [ebp-24h]
  int v17; // [esp+18h] [ebp-20h]
  unsigned int v18; // [esp+1Ch] [ebp-1Ch]

  v18 = __readgsdword(0x14u);
  if ( *(_DWORD *)(a1 + 8) )
  {
    src = *(const char **)(a1 + 4);
    v2 = strchr(src, 61);
    v3 = v2;
    if ( v2 )
    {
      v4 = src;
      v5 = v2 + 1;
      ptr = nullptr;
      v16 = nullptr;
      v6 = (char *)&dword_80DDFD8;
      v17 = 0;
      v7 = v3 - src;
      if ( v3 != src )
      {
        v9 = nullptr;
        srca = (void *)(v7 + 1);
        if ( v7 != -1 )
        {
          v10 = v4;
          v11 = v7;
          v9 = sub_80CF920((int)&ptr, nullptr, v7 + 1, 1u);
          v4 = v10;
          v7 = v11;
          ptr = v9;
        }
        v16 = srca;
        srcb = (_BYTE *)v7;
        memmove(v9, v4, v7);
        v5 = v3 + 1;
        srcb[(_DWORD)ptr] = 0;
        if ( v16 )
          v6 = (char *)ptr;
        else
          v6 = (char *)&dword_80DDFD8;
      }
      *(_DWORD *)(a2 + 4) = (unsigned __int8)sub_80D1F50(v6, v5);
      if ( ptr )
      {
        v16 = nullptr;
        sub_80CF780(ptr);
      }
    }
  }
  if ( v18 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
