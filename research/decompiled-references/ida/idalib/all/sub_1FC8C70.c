__int64 __fastcall sub_1FC8C70(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1FC8A00(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 3) >> 1) & 0x3F);
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  if ( (*(_DWORD *)a2 & 0x200000) == 0 && (*(_BYTE *)(a2 + 2) & 0x10) == 0 )
  {
    result = *(unsigned int *)(*(_QWORD *)a1 + 3576LL);
    *(_DWORD *)(a1 + 228) = result;
  }
  *(_DWORD *)(a1 + 224) = 242;
  return result;
}
