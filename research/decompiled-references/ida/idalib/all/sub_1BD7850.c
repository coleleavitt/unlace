__int64 __fastcall sub_1BD7850(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rax

  LOBYTE(v4) = a1 ^ 1 | (a2 == 0);
  if ( (_BYTE)v4 )
    return 1;
  if ( !sub_B748A0(a2, a2, a3, a4) )
  {
    v6 = sub_B8DC30(a2, 1);
    if ( *(_BYTE *)(v6 + 16) != 26 || !(unsigned __int8)sub_F5D700(v6) )
    {
      v9 = sub_B7D580(a2, 1, v7, v8);
      if ( v9 )
      {
        v10 = sub_B8DC30(v9, 1);
        if ( *(_BYTE *)(v10 + 16) == 26 )
          return (unsigned int)sub_F5D700(v10) ^ 1;
      }
      return 1;
    }
  }
  return v4;
}
