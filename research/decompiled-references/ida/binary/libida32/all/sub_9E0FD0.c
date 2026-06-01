_BOOL8 __fastcall sub_9E0FD0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  char v4; // dl
  _BOOL8 result; // rax

  v3 = *(_BYTE *)(a3 + 156);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 12) = 0;
  v4 = v3;
  *(_QWORD *)(a1 + 20) = 0;
  result = (v3 & 0x20) != 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 9) = result;
  *(_BYTE *)(a1 + 8) = (v4 & 8) != 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  return result;
}

