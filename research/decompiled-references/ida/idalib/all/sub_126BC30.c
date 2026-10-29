__int64 __fastcall sub_126BC30(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rax

  v1 = *(_DWORD *)(a1 + 48);
  v2 = sub_112B370(a1);
  if ( v1 == 38 )
    return v2 | 0x10000000080ELL;
  else
    return v2 | 0x10000000000ELL;
}
