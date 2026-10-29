__int64 __fastcall sub_4DEF30(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v3; // rax
  char **v4; // rdi
  char v6; // dl
  unsigned __int64 v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v7[0] = a2;
  v3 = sub_4DE1A0((_QWORD *)(a1 + 48), a2);
  v4 = (char **)(a1 + 648);
  if ( !v3 || *((_DWORD *)v3 + 4) == -1 )
  {
    sub_428330(v4, v7);
    if ( v6 )
    {
      *(_BYTE *)(a1 + 704) = 1;
      return sub_4E1410(214, a2, 1);
    }
    else
    {
      return sub_4E1410(214, a2, 0);
    }
  }
  else
  {
    sub_428330(v4, v7);
    return sub_4E1410(214, a2, 0);
  }
}
