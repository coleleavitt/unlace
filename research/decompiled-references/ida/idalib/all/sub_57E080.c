__int64 __fastcall sub_57E080(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  bool v5; // zf

  v3 = 0;
  if ( (*(_BYTE *)(a1 + 146) & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 608);
    if ( v3 )
    {
      v4 = v3 + 8;
      v5 = (*(_BYTE *)(v3 + 280) & 1) == 0;
      v3 = 0;
      if ( !v5 )
        v3 = v4;
    }
  }
  return sub_57C280(a1, a2, a3, v3);
}
