__int64 __fastcall sub_B27DA0(__int64 a1, int *a2)
{
  int v2; // eax
  void *v3; // rbp
  int *v5; // rdx
  void *v6; // [rsp+8h] [rbp-20h]

  if ( *(_DWORD *)a1 != 1 )
    return a1;
  v2 = *a2;
  if ( *a2 != 1 )
  {
    if ( v2 == 2 )
    {
      *(_DWORD *)a1 = 0;
    }
    else
    {
      if ( v2 )
      {
        sub_1872CE0("");
        sub_1873130(114, 70);
      }
      *(_DWORD *)a1 = 2;
    }
    v3 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, a1 + 8);
    sub_182CBA0(v3, a1 + 24);
    *(_BYTE *)(a1 + 28) &= ~1u;
    *(_DWORD *)(a1 + 24) = 1;
    return a1;
  }
  v5 = a2 + 2;
  if ( (*(_BYTE *)(a1 + 28) & 1) == 0 && *(_DWORD *)(a1 + 24) == 1 && (a2[7] & 1) == 0 && a2[6] == 1 )
  {
    v6 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, a1 + 8, v5);
    sub_182CBA0(v6, a1 + 24);
    *(_BYTE *)(a1 + 28) &= ~1u;
    *(_DWORD *)(a1 + 24) = 1;
    return a1;
  }
  sub_1852000(qword_1C7F2C0, a1 + 8, v5);
  return a1;
}

