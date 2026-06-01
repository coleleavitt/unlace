/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80544E0
// Address: 0x080544E0

//----- (080544E0) --------------------------------------------------------
_BOOL4 __cdecl sub_80544E0(_DWORD *a1, void **a2, int a3)
{
  FILE *v3; // eax
  _BOOL4 v4; // edx
  FILE *v5; // esi
  int v6; // eax
  bool v7; // dl
  size_t v9; // eax
  size_t v10; // ecx
  bool desta; // [esp+0h] [ebp-143Ch]
  void *dest; // [esp+0h] [ebp-143Ch]
  size_t v13; // [esp+4h] [ebp-1438h]
  size_t v14; // [esp+4h] [ebp-1438h]
  size_t v15; // [esp+Ch] [ebp-1430h]
  char v16[7]; // [esp+14h] [ebp-1428h] BYREF
  char s[1025]; // [esp+1Bh] [ebp-1421h] BYREF
  _BYTE v18[4096]; // [esp+41Ch] [ebp-1020h] BYREF
  unsigned int v19; // [esp+141Ch] [ebp-20h]

  v19 = __readgsdword(0x14u);
  sub_80D3B60(v18, 4096, "/proc/%u/stat", a3);
  v3 = sub_80CDA20((int)v18, "r");
  v4 = 0;
  if ( v3 )
  {
    *a1 = 0;
    v5 = v3;
    v6 = sub_80543B0((int)v3, "%d %1024s %c %d", (int)v16);
    v7 = v6 == 4;
    if ( a2 && v6 == 4 )
    {
      v9 = strlen(s);
      v7 = 1;
      v10 = v9;
      if ( v9 )
      {
        v13 = v9 + 1;
        dest = *a2;
        if ( (unsigned int)a2[2] < v9 + 1 )
        {
          v15 = v9;
          dest = sub_80CF920((int)a2, dest, v9 + 1, 1u);
          v10 = v15;
          *a2 = dest;
        }
        a2[1] = (void *)v13;
        v14 = v10;
        memmove(dest, s, v10);
        v7 = 1;
        *((_BYTE *)*a2 + v14) = 0;
      }
      else
      {
        a2[1] = nullptr;
      }
    }
    desta = v7;
    sub_80CF060(v5);
    v4 = desta;
  }
  if ( v19 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v4;
}
