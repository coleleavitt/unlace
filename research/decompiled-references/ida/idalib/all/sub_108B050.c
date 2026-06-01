__int64 __fastcall sub_108B050(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 568);
  if ( *(_QWORD *)(a1 + 576) != 3 )
    return *(unsigned __int8 *)(a1 + 8);
  if ( *(_WORD *)v1 == 13167 && *(_BYTE *)(v1 + 2) == 50 )
    return 32;
  if ( (*(_WORD *)v1 != 13166 || *(_BYTE *)(v1 + 2) != 50) && (*(_WORD *)v1 != 13934 || *(_BYTE *)(v1 + 2) != 52) )
    return *(unsigned __int8 *)(a1 + 8);
  return 64;
}
