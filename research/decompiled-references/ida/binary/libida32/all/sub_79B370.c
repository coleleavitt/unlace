bool __fastcall sub_79B370(__int64 a1, unsigned int *a2)
{
  unsigned __int32 v2; // ebp
  unsigned __int64 v3; // rax
  unsigned int v5; // esi
  __int64 v6; // rdi

  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 1544);
  if ( v5 == -1 )
    return 0;
  v2 = _byteswap_ulong(v5);
  *(_DWORD *)(v6 + 48) = v2;
  *(_BYTE *)(v6 + 52) = 0;
  *(_WORD *)(v6 + 45) = 5;
  sub_723E90(*(_QWORD *)v6, (unsigned __int16 *)(v6 + 45));
  sub_720F20(*(_QWORD *)v6);
  return v3 >= 2 && *(_DWORD *)(v3 + 3) == v2;
}

