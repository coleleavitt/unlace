__int64 __fastcall sub_149FE0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)a2 != 4 )
    return sub_149C40(a1 + 48, a2);
  *(_BYTE *)(a1 + 40) = 1;
  return sub_11AEC0(*(_BYTE **)(a2 + 8), a1 + 48);
}
