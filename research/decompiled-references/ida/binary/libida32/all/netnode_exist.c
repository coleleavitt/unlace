bool __fastcall netnode_exist(unsigned int *a1)
{
  unsigned __int32 v1; // ebp
  unsigned __int64 v2; // rax
  unsigned int v4; // esi
  __int64 v5; // rdi

  v4 = *a1;
  v5 = *(_QWORD *)(qword_2CA1698 + 1544);
  if ( v4 == -1 )
    JUMPOUT(0x797260);
  v1 = _byteswap_ulong(v4);
  *(_DWORD *)(v5 + 48) = v1;
  *(_BYTE *)(v5 + 52) = 0;
  *(_WORD *)(v5 + 45) = 5;
  sub_723E90(*(_QWORD *)v5, (unsigned __int16 *)(v5 + 45));
  sub_720F20(*(_QWORD *)v5);
  if ( v2 < 2 )
    JUMPOUT(0x797250);
  return *(_DWORD *)(v2 + 3) == v1;
}

