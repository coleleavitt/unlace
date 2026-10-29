unsigned __int64 __fastcall sub_7521A0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdx
  unsigned __int64 result; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(_DWORD **)(a2 + 32);
  result = *(_QWORD *)(a2 + 24) - (_QWORD)v2;
  if ( result <= 6 )
    return sub_26240F0(a2, "__ptr32", 7);
  *v2 = 1953521503;
  *(_DWORD *)((char *)v2 + 3) = 842232436;
  *(_QWORD *)(a2 + 32) += 7LL;
  return result;
}

