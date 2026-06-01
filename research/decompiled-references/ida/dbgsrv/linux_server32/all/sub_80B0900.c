/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B0900
// Address: 0x080B0900

//----- (080B0900) --------------------------------------------------------
int __cdecl sub_80B0900(_DWORD *a1, _DWORD *a2)
{
  void *v2; // ecx
  int v3; // edx
  int v4; // eax
  void *ptr; // [esp+30D0h] [ebp-28h] BYREF
  int v7; // [esp+30D4h] [ebp-24h]
  int v8; // [esp+30D8h] [ebp-20h]
  unsigned int v9; // [esp+30DCh] [ebp-1Ch]

  v2 = nullptr;
  v3 = -1;
  v9 = __readgsdword(0x14u);
  ptr = nullptr;
  v4 = a1[3];
  v7 = 0;
  v8 = 0;
  if ( v4 != 25 )
  {
    sub_80B07E0((int)(a1 + 4), (int)&ptr);
    v3 = a1[5];
    v4 = a1[3];
    v2 = ptr;
  }
  sub_805ED10(a2, "%s|%d|%d|%s", *a1, v4, v3, v2);
  if ( ptr )
  {
    v7 = 0;
    sub_80CF780(ptr);
  }
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 1;
}
