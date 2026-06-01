__int64 __fastcall sub_1FC8DF0(__int64 a1, __int64 a2)
{
  int v3; // esi
  int v4; // eax
  unsigned __int64 v5; // rdx
  __int64 *v6; // rbx
  __int64 result; // rax
  __int64 *i; // r13
  __int64 v9; // rsi
  unsigned int *v10; // rax

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 4));
  sub_1FC23C0((unsigned int *)(a1 + 232));
  v3 = *(_DWORD *)(a1 + 236);
  v4 = *(_DWORD *)(a1 + 232) | (((*(_WORD *)(a2 + 2) >> 3) & 0x7F) << v3);
  *(_DWORD *)(a1 + 236) = v3 + 7;
  *(_DWORD *)(a1 + 232) = v4;
  v5 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 236) = v3 + 8;
  *(_DWORD *)(a1 + 232) = (((v5 >> 27) & 1) << ((unsigned __int8)v3 + 7)) | v4;
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  v6 = (__int64 *)sub_BFA620((_WORD *)a2);
  result = (__int64)sub_BFA620((_WORD *)a2);
  for ( i = (__int64 *)(result + 8LL * *(unsigned int *)(a2 + 4)); i != v6; result = sub_1F9DE70(
                                                                                       (__int64 *)(a1 + 8),
                                                                                       v9) )
    v9 = *v6++;
  if ( (*(_QWORD *)a2 & 0x8000000LL) != 0 )
  {
    v10 = (unsigned int *)sub_BFA6D0(a2);
    return sub_9B9C90(*(_QWORD *)(a1 + 24), v10[1] | ((unsigned __int64)*v10 << 32));
  }
  return result;
}
