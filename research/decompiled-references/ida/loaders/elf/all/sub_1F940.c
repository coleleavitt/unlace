__int64 __fastcall sub_1F940(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax

  if ( *(_DWORD *)(a2 + 4) != 1 )
    return 1;
  v7 = *(_QWORD *)(a1 + 16);
  if ( !*(_BYTE *)(v7 + 248) || !*(_QWORD *)(v7 + 120) || *(_WORD *)(v7 + 520) != 1 )
    return 1;
  *a4 = (sub_41B70(*(_QWORD *)(a1 + 8), v7, a2, a4, a5, a6) + 1) & 0xFFFFFFFFFFFFFFFELL;
  return 1;
}

