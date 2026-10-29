__int64 __fastcall sub_A31960(__int64 a1, unsigned __int64 a2)
{
  char v2; // al
  __int64 result; // rax

  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = (2 * (v2 & 1)) | ((v2 & 2) != 0) | *(_BYTE *)(a1 + 4) & 0xFC | 4;
  *(_QWORD *)(a1 + 8) = a2 | 4;
  result = 2 * (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) == 0);
  *(_DWORD *)(a1 + 16) = result;
  return result;
}

