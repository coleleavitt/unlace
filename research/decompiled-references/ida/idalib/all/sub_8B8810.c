__int64 __fastcall sub_8B8810(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 96) = a2;
  *(_BYTE *)(a1 + 100) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 48) = -1;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  if ( a2 != -1 )
    return register_undo_handler(a2, sub_8BC3F0, a1, 1);
  return result;
}
