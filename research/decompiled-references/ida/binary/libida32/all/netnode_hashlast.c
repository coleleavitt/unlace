__int64 __fastcall netnode_hashlast(unsigned int a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // eax
  __int64 v5; // r9
  int v6; // esi
  unsigned __int32 v7; // ecx
  __int64 v13; // rdi

  v13 = *(_QWORD *)(qword_2CA1698 + 1544);
  v4 = a1;
  if ( a1 == -1 )
    return -1;
  v5 = a3;
  v6 = a4;
  v7 = _byteswap_ulong(v4 + 1);
  if ( (_BYTE)a4 != 0xFF )
  {
    LOBYTE(a4) = a4 + 1;
    v7 = _byteswap_ulong(v4);
  }
  *(_DWORD *)(v13 + 48) = v7;
  *(_BYTE *)(v13 + 52) = a4;
  *(_WORD *)(v13 + 45) = 6;
  return sub_78D550(v13, v6, v4, 0, a2, v5, 0);
}

