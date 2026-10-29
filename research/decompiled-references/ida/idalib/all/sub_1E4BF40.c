__int64 __fastcall sub_1E4BF40(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 *v7; // rax

  if ( *(char *)(a2 + 21) >= 0 || *(_DWORD *)(a1 + 28) <= (*(_WORD *)(a2 + 20) & 0x7FFFu) )
    return 1;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *a3;
  v6 = *(unsigned int *)(v4 + 8);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 12) )
  {
    sub_2237220(*(_QWORD *)(a1 + 16), v4 + 16, v6 + 1, 16);
    v6 = *(unsigned int *)(v4 + 8);
  }
  v7 = (unsigned __int64 *)(*(_QWORD *)v4 + 16 * v6);
  *v7 = a2 & 0xFFFFFFFFFFFFFFFBLL;
  v7[1] = v5;
  ++*(_DWORD *)(v4 + 8);
  return 1;
}
