__int64 __fastcall sub_780CE0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax

  if ( (*(_WORD *)(a1 + 30) & 0x180) == 0 )
    return 0;
  v2 = (_QWORD *)sub_780C90(a1);
  if ( v2 && (v5 = *v2 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( (*(_WORD *)(v5 + 30) & 0x180) != 0 )
      return sub_77A060((_BYTE *)v5);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 152);
    if ( v7 )
    {
      if ( (v7 & 6) == 0 )
      {
        v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v8 )
        {
          if ( (*(_BYTE *)(v8 + 28) & 0x7F) == 0x45 )
          {
            v9 = *(_QWORD *)sub_7D2DE0(v8, a2, v3, v4);
            if ( v9 > 7 )
            {
              v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_WORD *)(v10 + 30) & 0x180) != 0 )
                return sub_77A060(*(_BYTE **)(v10 + 48));
            }
          }
        }
      }
    }
  }
  return 0;
}

