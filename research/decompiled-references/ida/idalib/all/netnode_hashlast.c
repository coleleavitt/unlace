__int64 __fastcall netnode_hashlast(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r14
  __int64 v5; // r13
  int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // rax
  char v9; // r15
  __int64 v10; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v18; // rdi

  v18 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( a1 == -1 )
    return -1;
  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = *(_QWORD *)(qword_2CCB598 + 1736);
  v8 = *(_QWORD *)(v18 + 8);
  if ( (_BYTE)a4 == 0xFF )
  {
    v12 = a1 + 1;
    if ( v8 )
    {
      *(_BYTE *)(v7 + 60) = -1;
      *(_WORD *)(v7 + 53) = 6;
      *(_DWORD *)(v7 + 56) = _byteswap_ulong(v12);
    }
    else
    {
      *(_WORD *)(v7 + 53) = 10;
      v13 = swap64(v12);
      *(_BYTE *)(v7 + 64) = -1;
      *(_QWORD *)(v7 + 56) = v13;
    }
  }
  else
  {
    v9 = a4 + 1;
    if ( v8 )
    {
      *(_BYTE *)(v18 + 60) = v9;
      *(_WORD *)(v18 + 53) = 6;
      *(_DWORD *)(v18 + 56) = _byteswap_ulong(a1);
    }
    else
    {
      *(_WORD *)(v18 + 53) = 10;
      v10 = swap64(a1);
      *(_BYTE *)(v18 + 64) = v9;
      *(_QWORD *)(v18 + 56) = v10;
    }
  }
  return sub_7AD990(v7, v6, a1, 0, v4, v5, 0);
}
