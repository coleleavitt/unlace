__int64 __fastcall netnode_qhashlast(unsigned int a1, __int64 a2, int a3)
{
  unsigned int v3; // eax
  int v4; // esi
  char v5; // r8
  unsigned __int32 v6; // ecx
  __int64 v11; // rdi

  v11 = *(_QWORD *)(qword_2CA1698 + 1544);
  v3 = a1;
  if ( a1 == -1 )
    return -1;
  v4 = a3;
  v5 = a3;
  v6 = _byteswap_ulong(v3 + 1);
  if ( (_BYTE)v4 != 0xFF )
  {
    v5 = v4 + 1;
    v6 = _byteswap_ulong(v3);
  }
  *(_DWORD *)(v11 + 48) = v6;
  *(_WORD *)(v11 + 45) = 6;
  *(_BYTE *)(v11 + 52) = v5;
  return sub_78D550(v11, v4, v3, a2, 0, 0, 0);
}

