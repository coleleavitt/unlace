char __fastcall sub_1BC6D00(__int64 a1, _BYTE *a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdx

  if ( a2 == **(_BYTE ***)a1 )
  {
    v3 = *(_DWORD **)(a1 + 16);
    v2 = *(_DWORD **)(a1 + 8);
    *v2 = (*v3)++;
  }
  else
  {
    LOBYTE(v2) = sub_B75670(a2);
    if ( (_BYTE)v2 )
    {
      v2 = *(_DWORD **)(a1 + 24);
      *(_BYTE *)v2 = 1;
    }
    ++**(_DWORD **)(a1 + 16);
  }
  return (char)v2;
}
