/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B6B0
// Address: 0x000000000009B6B0

//----- (000000000009B6B0) ----------------------------------------------------
__int64 __fastcall sub_9B6B0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r12
  char **v4; // rdi
  __int64 v5; // rax
  char *v6; // r13
  __int64 v7; // rbx
  _QWORD *v8; // rdx
  const char *v9; // rdi

  v3 = *(_QWORD **)(a1 + 8);
  v4 = (char **)(v3 + 13);
  v5 = v3[14];
  if ( v3[15] >= (unsigned __int64)(v5 + 1) )
  {
    v6 = *v4;
  }
  else
  {
    v6 = (char *)qvector_reserve((__int64)v4, (char *)v3[13], v5 + 1, 0x78u);
    v3[13] = v6;
    v5 = v3[14];
  }
  v7 = 120 * v5;
  *(_OWORD *)&v6[v7 + 16] = 0;
  *(_QWORD *)&v6[v7 + 32] = 0;
  *(_OWORD *)&v6[v7] = 0;
  *(_OWORD *)&v6[v7 + 96] = 0;
  *(_OWORD *)&v6[v7 + 80] = 0;
  *(_OWORD *)&v6[v7 + 64] = 0;
  *(_OWORD *)&v6[v7 + 48] = 0;
  *(_OWORD *)&v6[v7 + 32] = 0;
  *(_QWORD *)&v6[v7 + 112] = 0;
  ++v3[14];
  v8 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)&v6[v7] = *(unsigned int *)(a2 + 12);
  *(_DWORD *)&v6[v7 + 8] = *(_DWORD *)(a2 + 8);
  *(_QWORD *)&v6[v7 + 40] = 0;
  *(_QWORD *)&v6[v7 + 48] = *(int *)(a2 + 20);
  sub_90010((__m128i *)&v6[120 * v5 + 16], (_QWORD *)a2, v8);
  *(_OWORD *)&v6[v7 + 56] = 0;
  if ( *(_QWORD *)&v6[v7 + 24] )
    v9 = *(const char **)&v6[v7 + 16];
  else
    v9 = s1;
  if ( !strncmp(v9, ".debug_", 7u) )
    *(_BYTE *)(a1 + 24) = 1;
  return 0;
}
