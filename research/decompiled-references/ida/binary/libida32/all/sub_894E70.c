__int64 __fastcall sub_894E70(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(a1 + 88) = a2;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 92) = 1;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = -1;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  if ( a2 != -1 )
    return register_undo_handler(a2, sub_8986B0, a1, 1);
  return result;
}

