/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F8C0
// Address: 0x0005F8C0

//----- (0005F8C0) --------------------------------------------------------
unsigned int __cdecl sub_5F8C0(int a1, unsigned int a2)
{
  unsigned int v2; // ecx
  bool v3; // cf
  unsigned int v4; // ecx
  int v6; // [esp+10h] [ebp-2Ch] BYREF
  void *v7; // [esp+14h] [ebp-28h]
  int v8; // [esp+18h] [ebp-24h]
  int v9; // [esp+1Ch] [ebp-20h]
  int v10; // [esp+20h] [ebp-1Ch]
  unsigned int v11; // [esp+28h] [ebp-14h]

  v11 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 16);
  v3 = v2 < a2;
  v4 = v2 - a2;
  if ( v3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(285);
    BUG();
  }
  if ( a2 )
  {
    LOBYTE(v6) = 2;
    v8 = 0;
    v7 = nullptr;
    v10 = 0;
    v9 = 0;
    sub_4EB10((void **)(a1 + 12), v4, (char *)&v6);
    if ( (char)v6 == 5 )
    {
      sub_59680(v7, (char *)&v6);
    }
    else if ( (char)v6 == 7 && v7 )
    {
      v8 = 0;
      qfree(v7);
      v7 = nullptr;
      v9 = 0;
    }
  }
  return __readgsdword(0x14u);
}
// 13E34C: using guessed type int under_debugger;
