void __fastcall sub_145CC10(__int64 a1, __m128i a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v6; // rbp
  const void *v7; // r14
  __int64 v8; // rdi
  signed __int64 v9; // r12
  unsigned __int64 v10; // rdx
  bool v11; // zf

  if ( *(_DWORD *)(a1 + 1104) == 2 )
  {
    LODWORD(v3) = 0;
    v4 = *(unsigned int *)(a1 + 1064);
    v6 = *(_QWORD *)(a1 + 1120);
    v7 = *(const void **)(a1 + 1056);
    v8 = 0;
    v9 = 8 * v4;
    v10 = *(unsigned int *)(v6 + 76);
    *(_DWORD *)(v6 + 72) = 0;
    if ( v9 >> 3 > v10 )
    {
      sub_2237220(v6 + 64, v6 + 80, v9 >> 3, 8);
      v3 = *(unsigned int *)(v6 + 72);
      v8 = 8 * v3;
    }
    if ( v9 )
    {
      memcpy((void *)(*(_QWORD *)(v6 + 64) + v8), v7, v9);
      LODWORD(v3) = *(_DWORD *)(v6 + 72);
    }
    v11 = *(_BYTE *)(a1 + 1048) == 0;
    *(_DWORD *)(v6 + 72) = v3 + (v9 >> 3);
    *(_DWORD *)(a1 + 1064) = 0;
    *(_DWORD *)(a1 + 1104) = 0;
    if ( !v11 )
      sub_1424590(
        a1,
        *(_DWORD *)(a1 + 1032),
        *(unsigned int *)(a1 + 1036),
        *(_BYTE *)(a1 + 1040),
        *(_BYTE *)(a1 + 1041),
        *(unsigned int *)(a1 + 1044),
        a2,
        a3);
  }
}
