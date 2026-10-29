/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_425B90
// Address: 0x00425B90

//----- (00425B90) --------------------------------------------------------
bool __userpurge sub_425B90@<al>(__m128i a1@<xmm0>, int a2, int a3, const char *a4)
{
  int *v4; // eax
  const char *v5; // edi
  _DWORD *v6; // eax
  char v8; // bl
  unsigned int v9; // edi
  LPVOID v10; // eax
  unsigned int v11; // [esp-8h] [ebp-30h]
  void *v12; // [esp+10h] [ebp-18h] BYREF
  unsigned int v13; // [esp+14h] [ebp-14h]
  int v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+24h] [ebp-4h]

  v4 = (int *)a3;
  if ( !a3 )
    return sub_423CF0(a1, (__int128 *)a2, v4, a4, 0) == 0;
  if ( *(_BYTE *)a3 == 7 )
  {
    v5 = MultiByteStr;
    if ( *(_DWORD *)(a3 + 12) )
      v5 = *(const char **)(a3 + 8);
    v6 = sub_428030();
    v4 = (int *)sub_427A50(v6, v5);
    if ( !v4 )
    {
      sub_45CC20(1532);
      return 0;
    }
  }
  if ( *(_BYTE *)v4 != 5 || a4 && *a4 )
    return sub_423CF0(a1, (__int128 *)a2, v4, a4, 0) == 0;
  v12 = nullptr;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( sub_424120((int)&v12, (int)v4) )
  {
    v8 = 0;
  }
  else
  {
    sub_423B70(a2);
    v9 = v13;
    *(_BYTE *)a2 = 7;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 16) = 0;
    if ( v9 )
    {
      v10 = sub_4539E0(v9);
      v11 = (unsigned int)v12;
      *(_DWORD *)(a2 + 8) = v10;
      *(_DWORD *)(a2 + 16) = v9;
      sub_464310((unsigned int)v10, v11, v9);
      *(_DWORD *)(a2 + 12) = v9;
    }
    v8 = 1;
  }
  v15 = 2;
  if ( v12 )
  {
    v13 = 0;
    sub_453A20(v12);
  }
  return v8;
}
