__int64 __fastcall sub_1FC8690(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 0xF);
  if ( *(char *)(a2 + 2) < 0 )
  {
    sub_1F9A760((__int64 *)(a1 + 8), *(__int64 **)(a2 + 16), v2, v3, v4, v5);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(unsigned int *)(v6 + 8);
    if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
    {
      sub_2237220(*(_QWORD *)(a1 + 24), v6 + 16, v7 + 1, 8);
      v7 = *(unsigned int *)(v6 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v6 + 8 * v7) = 0;
    ++*(_DWORD *)(v6 + 8);
    sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  }
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 28), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 183;
  return result;
}
