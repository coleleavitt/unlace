/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805B750
// Address: 0x0805B750

//----- (0805B750) --------------------------------------------------------
unsigned int __cdecl sub_805B750(int a1)
{
  int i; // ebp
  int v2; // eax
  unsigned int result; // eax
  int v4; // [esp-14h] [ebp-48h]
  int v5; // [esp-10h] [ebp-44h]
  int v6; // [esp-Ch] [ebp-40h]
  int v7; // [esp+10h] [ebp-24h] BYREF
  unsigned int v8; // [esp+14h] [ebp-20h]

  v8 = __readgsdword(0x14u);
  for ( i = *(_DWORD *)(a1 + 668); i != a1 + 660; i = std::_Rb_tree_increment(i) )
  {
    if ( *(_BYTE *)(i + 44) )
    {
      if ( *(_BYTE *)(a1 + 734) )
      {
        *(_BYTE *)(i + 44) = 0;
      }
      else
      {
        if ( *(_DWORD *)(i + 40) != 1 )
        {
          if ( !byte_811F8A1 )
          {
            if ( v8 == __readgsdword(0x14u) )
              sub_80CFF40(30181, v4, v5, v6);
            sub_80D7AB0();
          }
          BUG();
        }
        ptrace(PTRACE_CONT, *(_DWORD *)(i + 20), 0, 0);
        v2 = sub_8068DC0(a1, &v7, *(_DWORD *)(i + 20), -1);
        if ( *(_DWORD *)(i + 20) != v2 )
        {
          v4 = v2;
          sub_8058290();
        }
      }
    }
  }
  result = v8 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 805B849: variable 'v4' is possibly undefined
// 805B849: variable 'v5' is possibly undefined
// 805B849: variable 'v6' is possibly undefined
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 811F8A1: using guessed type char byte_811F8A1;
