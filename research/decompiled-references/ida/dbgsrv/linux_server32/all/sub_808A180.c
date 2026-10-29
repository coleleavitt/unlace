/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808A180
// Address: 0x0808A180

//----- (0808A180) --------------------------------------------------------
char *__cdecl sub_808A180(int a1, char *src, unsigned __int8 *a3)
{
  char *v3; // esi
  int v4; // eax
  char *v5; // edx
  void *v7; // eax
  char *v8; // [esp+0h] [ebp-44h]
  unsigned __int8 v9[4]; // [esp+14h] [ebp-30h] BYREF
  __int128 v10; // [esp+18h] [ebp-2Ch]
  unsigned int v11; // [esp+28h] [ebp-1Ch]

  v11 = __readgsdword(0x14u);
  v3 = src;
  v9[0] = 2;
  v10 = 0;
  sub_8089810(v9, a3);
  v4 = *(_DWORD *)(a1 + 4);
  v5 = &src[-*(_DWORD *)a1];
  if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v4 + 1) )
  {
    v8 = &src[-*(_DWORD *)a1];
    v7 = sub_80CF920(a1, *(void **)a1, v4 + 1, 0x14u);
    v5 = v8;
    *(_DWORD *)a1 = v7;
    v3 = &v8[(_DWORD)v7];
    v4 = *(_DWORD *)(a1 + 4);
  }
  memmove(v3 + 20, v3, 20 * v4 - (_DWORD)v5);
  *v3 = 2;
  *(_OWORD *)(v3 + 4) = 0;
  sub_8089810((unsigned __int8 *)v3, v9);
  ++*(_DWORD *)(a1 + 4);
  sub_8089430((int)v9);
  if ( v11 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v3;
}
