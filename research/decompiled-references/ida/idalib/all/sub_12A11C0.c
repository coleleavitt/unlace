__int64 __fastcall sub_12A11C0(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = sub_112B370(a1);
  v3 = v2;
  if ( (unsigned int)(v1 - 37) > 1 )
    return v3;
  v3 = v2 | 0x100000003008LL;
  if ( v1 == 38 )
    return v3;
  else
    return v2 | 0x100000003000LL;
}
