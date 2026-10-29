__int64 __fastcall sub_1FCA6F0(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rdi
  int v6; // eax
  __int16 v7; // dx
  int v8; // ecx
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
  v4 = *(_DWORD *)(a1 + 236);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 232) | (((*(__int64 *)(a2 + 24) >> 2) & 1) << *(_DWORD *)(a1 + 236));
  *(_DWORD *)(a1 + 232) = v6;
  *(_DWORD *)(a1 + 236) = v4 + 1;
  v7 = *(_WORD *)(a2 + 32);
  *(_DWORD *)(a1 + 236) = v4 + 13;
  *(_DWORD *)(a1 + 232) = ((v7 & 0x7FFF) << (v4 + 1)) | v6;
  sub_9B9C90(v5, (*(_DWORD *)(a2 + 32) >> 15) & 0x7FFF);
  v8 = *(_DWORD *)(a1 + 236);
  v9 = *(_QWORD **)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 232) |= ((*(_BYTE *)(a2 + 35) & 0x40) != 0) << v8;
  *(_DWORD *)(a1 + 236) = v8 + 1;
  sub_1F6F570(v9, *(_DWORD *)(a2 + 4), v10);
  result = sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  *(_DWORD *)(a1 + 224) = 286;
  return result;
}
