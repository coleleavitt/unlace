__int64 __fastcall sub_1E4C5A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int64 *v5; // rax

  if ( *(char *)(a2 + 21) >= 0 || *(_DWORD *)(a1 + 28) <= (*(_WORD *)(a2 + 20) & 0x7FFFu) )
    return 1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned int *)(v3 + 8);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(v3 + 12) )
  {
    sub_2237220(*(_QWORD *)(a1 + 16), v3 + 16, v4 + 1, 16);
    v4 = *(unsigned int *)(v3 + 8);
  }
  v5 = (unsigned __int64 *)(*(_QWORD *)v3 + 16 * v4);
  *v5 = a2 & 0xFFFFFFFFFFFFFFFBLL;
  v5[1] = 0;
  ++*(_DWORD *)(v3 + 8);
  return 1;
}
