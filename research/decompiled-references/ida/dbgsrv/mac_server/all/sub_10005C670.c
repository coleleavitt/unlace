/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005C670
// Address: 0x000000010005C670

//----- (000000010005C670) ----------------------------------------------------
__int64 __fastcall sub_10005C670(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  char *v4; // r14
  __int64 v5; // rax
  __int64 v6; // r12
  _QWORD *v7; // rdx
  const char *v8; // rdi

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(char **)(v3 + 104);
  v5 = *(_QWORD *)(v3 + 112);
  if ( *(_QWORD *)(v3 + 120) < (unsigned __int64)(v5 + 1) )
  {
    v4 = (char *)qvector_reserve(v3 + 104, *(void **)(v3 + 104), v5 + 1, 0x78u);
    *(_QWORD *)(v3 + 104) = v4;
    v5 = *(_QWORD *)(v3 + 112);
  }
  v6 = 120 * v5;
  *(_OWORD *)&v4[v6 + 96] = 0;
  *(_OWORD *)&v4[v6 + 80] = 0;
  *(_OWORD *)&v4[v6 + 64] = 0;
  *(_OWORD *)&v4[v6 + 48] = 0;
  *(_OWORD *)&v4[v6 + 32] = 0;
  *(_OWORD *)&v4[v6 + 16] = 0;
  *(_OWORD *)&v4[v6] = 0;
  *(_QWORD *)&v4[v6 + 112] = 0;
  ++*(_QWORD *)(v3 + 112);
  v7 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)&v4[v6] = *(unsigned int *)(a2 + 12);
  *(_DWORD *)&v4[v6 + 8] = *(_DWORD *)(a2 + 8);
  *(_QWORD *)&v4[v6 + 40] = 0;
  *(_QWORD *)&v4[v6 + 48] = *(int *)(a2 + 20);
  sub_1000517A0((__int64)&v4[120 * v5 + 16], (_QWORD *)a2, v7);
  *(_OWORD *)&v4[v6 + 56] = 0;
  if ( *(_QWORD *)&v4[v6 + 24] )
    v8 = *(const char **)&v4[v6 + 16];
  else
    v8 = _s1;
  if ( !strncmp(v8, ".debug_", 7u) )
    *(_BYTE *)(a1 + 24) = 1;
  return 0;
}
