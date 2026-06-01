__int64 __fastcall sub_C2F320(__int64 *a1, __int64 a2, _WORD *a3)
{
  int v3; // eax
  unsigned int v5; // eax

  v3 = *(_DWORD *)(a2 + 48);
  if ( v3 )
  {
    *(_DWORD *)(a2 + 48) = v3 - 1;
    return sub_C2CC70(a1, a2, a3, 0);
  }
  else
  {
    v5 = sub_EC7AA0(a3);
    sub_E0FF40(a2, v5, 2484, 0);
    return 0;
  }
}

