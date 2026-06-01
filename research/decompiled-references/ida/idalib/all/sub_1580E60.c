__int64 __fastcall sub_1580E60(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  v2 = (_QWORD *)operator new(0x18u);
  *(_QWORD *)(a1 + 16) = 0;
  v2[2] = 0;
  *v2 = 0;
  v2[1] = 0;
  *(_QWORD *)(a1 + 8) = v2;
  LODWORD(v2) = *(unsigned __int8 *)(a1 + 40);
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  result = (unsigned int)v2 & 0xFFFFFFF0 | 1;
  *(_DWORD *)(a1 + 44) = 0;
  *(_BYTE *)(a1 + 40) = result;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  return result;
}
