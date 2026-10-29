__int64 __fastcall sub_177C990(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // r12
  unsigned int *v6; // rax

  v3 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v3 == 1 )
    return 1;
  v5 = v3;
  v6 = sub_177C940(a1, *(unsigned int **)(a2 + 24), a3);
  if ( v6 == (unsigned int *)((char *)&dword_0 + 1) )
    return 1;
  else
    return sub_1C3AFE0(
             *a1,
             *(unsigned int *)(a2 + 8),
             v5 & 0xFFFFFFFFFFFFFFFELL,
             (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFELL);
}
