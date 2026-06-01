/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8073320
// Address: 0x08073320

//----- (08073320) --------------------------------------------------------
int __cdecl sub_8073320(int a1, int a2)
{
  int v2; // ecx
  char *v3; // eax
  void *v4; // eax
  __int64 v5; // xmm0_8
  void *ptr; // [esp+10h] [ebp-28h] BYREF
  __int64 v8; // [esp+14h] [ebp-24h]
  unsigned int v9; // [esp+1Ch] [ebp-1Ch]

  v9 = __readgsdword(0x14u);
  ptr = nullptr;
  v2 = *(_DWORD *)(a1 + 8);
  v8 = 0;
  v3 = (char *)&dword_80DDFD8;
  if ( v2 )
    v3 = *(char **)(a1 + 4);
  sub_80D2000(v3, &ptr);
  v4 = ptr;
  v5 = v8;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 4) = v4;
  *(_QWORD *)(a2 + 8) = v5;
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
