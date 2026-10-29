/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808B3A0
// Address: 0x0808B3A0

//----- (0808B3A0) --------------------------------------------------------
unsigned int __cdecl sub_808B3A0(int a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int result; // eax
  int v4; // [esp-18h] [ebp-54h]
  int v5; // [esp-14h] [ebp-50h]
  int v6; // [esp-10h] [ebp-4Ch]
  unsigned __int8 v7[4]; // [esp+Ch] [ebp-30h] BYREF
  __int128 v8; // [esp+10h] [ebp-2Ch]
  unsigned int v9; // [esp+20h] [ebp-1Ch]

  v9 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 < a2 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v9 == __readgsdword(0x14u) )
        sub_80CFF40(285, v4, v5, v6);
      sub_80D7AB0();
    }
    JUMPOUT(0x804E6F8);
  }
  if ( v2 - a2 != v2 )
  {
    v7[0] = 2;
    v8 = 0;
    sub_808AF40((void **)(a1 + 12), (char *)(v2 - a2), v7);
    sub_8089430((int)v7);
  }
  result = v9 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 808B41A: control flows out of bounds to 804E6F8
// 808B436: variable 'v4' is possibly undefined
// 808B436: variable 'v5' is possibly undefined
// 808B436: variable 'v6' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
