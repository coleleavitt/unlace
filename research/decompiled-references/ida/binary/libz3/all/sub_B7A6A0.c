__int64 __fastcall sub_B7A6A0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  v2 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v2 && *v2 == 5 && v2[1] == 1 )
    return *(unsigned int *)(a1 + 948);
  else
    return *(unsigned int *)(a1 + 952);
}

