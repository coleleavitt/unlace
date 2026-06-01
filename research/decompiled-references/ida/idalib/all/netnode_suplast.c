__int64 __fastcall netnode_suplast(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // bp
  __int64 v3; // rbx
  __int64 v4; // rax
  char v5; // r13
  __int64 v6; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v12; // rdi

  v12 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( a1 == -1 )
    return -1;
  v2 = a2;
  v3 = *(_QWORD *)(qword_2CCB598 + 1736);
  v4 = *(_QWORD *)(v12 + 8);
  if ( a2 == 0xFF )
  {
    v8 = a1 + 1;
    if ( v4 )
    {
      *(_BYTE *)(v3 + 60) = -1;
      *(_WORD *)(v3 + 53) = 6;
      *(_DWORD *)(v3 + 56) = _byteswap_ulong(v8);
    }
    else
    {
      *(_WORD *)(v3 + 53) = 10;
      v9 = swap64(v8);
      *(_BYTE *)(v3 + 64) = -1;
      *(_QWORD *)(v3 + 56) = v9;
    }
  }
  else
  {
    v5 = a2 + 1;
    if ( v4 )
    {
      *(_BYTE *)(v12 + 60) = v5;
      *(_WORD *)(v12 + 53) = 6;
      *(_DWORD *)(v12 + 56) = _byteswap_ulong(a1);
    }
    else
    {
      *(_WORD *)(v12 + 53) = 10;
      v6 = swap64(a1);
      *(_BYTE *)(v12 + 64) = v5;
      *(_QWORD *)(v12 + 56) = v6;
    }
  }
  return sub_7B5210(v3, v2, a1, 0);
}
