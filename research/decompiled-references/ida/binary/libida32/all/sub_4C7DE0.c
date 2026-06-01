__int64 __fastcall sub_4C7DE0(__int64 a1, unsigned int a2)
{
  _DWORD *v3; // rax
  char **v4; // rdi
  char v6; // dl
  unsigned int v7[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v7[0] = a2;
  v3 = sub_4C7060((_QWORD *)(a1 + 48), a2);
  v4 = (char **)(a1 + 648);
  if ( !v3 || v3[3] == -1 )
  {
    sub_414990(v4, v7);
    if ( v6 )
    {
      *(_BYTE *)(a1 + 704) = 1;
      return sub_4C9EB0(214, a2, 1);
    }
    else
    {
      return sub_4C9EB0(214, a2, 0);
    }
  }
  else
  {
    sub_414990(v4, v7);
    return sub_4C9EB0(214, a2, 0);
  }
}

