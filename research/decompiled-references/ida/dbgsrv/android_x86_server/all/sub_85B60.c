/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85B60
// Address: 0x00085B60

//----- (00085B60) --------------------------------------------------------
int __cdecl sub_85B60(int a1, int a2)
{
  char *v2; // edi
  int v3; // eax
  size_t v4; // eax
  int v6; // [esp+0h] [ebp-142Ch]
  int v7; // [esp+0h] [ebp-142Ch]
  int v8; // [esp+4h] [ebp-1428h]
  __int16 v9; // [esp+8h] [ebp-1424h] BYREF
  _BYTE s[4]; // [esp+Ch] [ebp-1420h] BYREF
  __int16 v11; // [esp+10h] [ebp-141Ch]
  _BYTE s1[5126]; // [esp+12h] [ebp-141Ah] BYREF
  unsigned int v13; // [esp+1418h] [ebp-14h]

  v13 = __readgsdword(0x14u);
  v9 = 0;
  memset(s, 0, 0x1408u);
  v2 = (char *)(a1 + 4);
  v3 = 0;
  if ( !a2 )
    v3 = *(_DWORD *)(a1 + 1080);
  v8 = v3;
  v6 = *(_DWORD *)(a1 + 1084);
  sub_1C900();
  if ( qfileexist(v2) && sub_7BA60((int)&v9, v2, v6) )
  {
    v7 = 0;
    if ( !v8 || (v4 = *(unsigned __int16 *)(v8 + 8), (_WORD)v4 == v11) && !memcmp(s1, (const void *)(v8 + 10), v4) )
      v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  sub_1C900();
  return v7;
}
