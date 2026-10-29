__int64 __fastcall netnode_qhashlast(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r13
  int v4; // r12d
  __int64 v5; // rbx
  __int64 v6; // rax
  char v7; // r14
  __int64 v8; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v15; // rdi

  v15 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( a1 == -1 )
    return -1;
  v3 = a2;
  v4 = a3;
  v5 = *(_QWORD *)(qword_2CCB598 + 1736);
  v6 = *(_QWORD *)(v15 + 8);
  if ( (_BYTE)a3 == 0xFF )
  {
    v10 = a1 + 1;
    if ( v6 )
    {
      *(_BYTE *)(v5 + 60) = -1;
      *(_WORD *)(v5 + 53) = 6;
      *(_DWORD *)(v5 + 56) = _byteswap_ulong(v10);
    }
    else
    {
      *(_WORD *)(v5 + 53) = 10;
      v11 = swap64(v10);
      *(_BYTE *)(v5 + 64) = -1;
      *(_QWORD *)(v5 + 56) = v11;
    }
  }
  else
  {
    v7 = a3 + 1;
    if ( v6 )
    {
      *(_BYTE *)(v15 + 60) = v7;
      *(_WORD *)(v15 + 53) = 6;
      *(_DWORD *)(v15 + 56) = _byteswap_ulong(a1);
    }
    else
    {
      *(_WORD *)(v15 + 53) = 10;
      v8 = swap64(a1);
      *(_BYTE *)(v15 + 64) = v7;
      *(_QWORD *)(v15 + 56) = v8;
    }
  }
  return sub_7AD990(v5, v4, a1, v3, 0, 0, 0);
}
