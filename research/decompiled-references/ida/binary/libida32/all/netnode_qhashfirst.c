__int64 __fastcall netnode_qhashfirst(unsigned int a1, __int64 a2, char a3)
{
  __int64 v3; // r12
  void *v4; // rdi
  __int64 v9; // rdi

  v9 = *(_QWORD *)(qword_2CA1698 + 1544);
  if ( a1 == -1 )
    JUMPOUT(0x78D7D8);
  v3 = a2;
  *(_WORD *)(v9 + 45) = 6;
  *(_DWORD *)(v9 + 48) = _byteswap_ulong(a1);
  *(_BYTE *)(v9 + 52) = a3;
  if ( (unsigned __int64)sub_723E90(*(_QWORD *)v9, (unsigned __int16 *)(v9 + 45)) < 2 )
    JUMPOUT(0x78D7A8);
  if ( v3 )
  {
    v4 = *(void **)v3;
    if ( *(_QWORD *)v3 )
    {
      *(_QWORD *)(v3 + 8) = 0;
      qfree(v4);
      *(_QWORD *)v3 = 0;
      *(_QWORD *)(v3 + 16) = 0;
    }
  }
  return 0;
}

