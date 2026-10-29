/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EE20
// Address: 0x0007EE20

//----- (0007EE20) --------------------------------------------------------
unsigned int __cdecl sub_7EE20(int a1, _DWORD *a2, signed int a3, int a4)
{
  _BYTE *v4; // eax
  char *v5; // eax
  char *v6; // esi
  size_t v7; // eax
  unsigned int src; // [esp+10h] [ebp-2Ch] BYREF
  int v10; // [esp+14h] [ebp-28h] BYREF
  void *v11; // [esp+18h] [ebp-24h]
  int v12; // [esp+1Ch] [ebp-20h]
  int v13; // [esp+20h] [ebp-1Ch]
  int v14; // [esp+24h] [ebp-18h]
  unsigned int v15; // [esp+28h] [ebp-14h]

  v15 = __readgsdword(0x14u);
  v4 = pack_dd(&src, (unsigned int)&v10 + 1, a3);
  sub_3A950(a2, &src, v4 - (_BYTE *)&src);
  if ( a3 <= 0 )
  {
    if ( *(_DWORD *)(a4 + 4) )
      v5 = *(char **)a4;
    else
      v5 = byte_EF875;
    v6 = &byte_DCEE2;
    if ( v5 )
      v6 = v5;
    v7 = strlen(v6);
    sub_3A950(a2, v6, v7 + 1);
  }
  else
  {
    src = 24;
    v10 = 4;
    v11 = nullptr;
    v12 = 0;
    v13 = 0;
    v14 = -1;
    (*(void (__cdecl **)(_DWORD, unsigned int *))(**(_DWORD **)(a1 + 244) + 276))(*(_DWORD *)(a1 + 244), &src);
    sub_91E00(a2, &src);
    if ( *(_BYTE *)(a1 + 96) )
      sub_1C900();
    sub_91EE0(a2, (int *)(*(_DWORD *)(a1 + 244) + 280));
    if ( v11 )
    {
      v12 = 0;
      qfree(v11);
      v11 = nullptr;
      v13 = 0;
    }
  }
  return __readgsdword(0x14u);
}
// DCEE2: using guessed type char byte_DCEE2;
