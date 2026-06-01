/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45DAD0
// Address: 0x000000000045DAD0

//----- (000000000045DAD0) ----------------------------------------------------
__int64 __fastcall sub_45DAD0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r13
  _QWORD *v4; // r14
  __int64 v5; // rdx
  char *v6; // rsi
  char *v7; // rbx
  int v8; // eax
  bool v9; // zf
  char *v11; // rax

  v3 = *(_QWORD **)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 16);
  v5 = v3[14];
  v6 = (char *)v3[13];
  if ( v3[15] < (unsigned __int64)(v5 + 1) )
  {
    v11 = (char *)sub_481540((__int64)(v3 + 13), v6, v5 + 1, 0x78u);
    v5 = v3[14];
    v3[13] = v11;
    v6 = v11;
  }
  v7 = &v6[120 * v5];
  *(_QWORD *)v7 = 0;
  *((_QWORD *)v7 + 14) = 0;
  memset(
    (void *)((unsigned __int64)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v7 - (((_DWORD)v7 + 8) & 0xFFFFFFF8) + 120) >> 3));
  ++v3[14];
  *(_QWORD *)v7 = *(unsigned int *)(a2 + 12);
  v8 = *(_DWORD *)(a2 + 8);
  *((_QWORD *)v7 + 5) = 0;
  *((_DWORD *)v7 + 2) = v8;
  *((_QWORD *)v7 + 6) = *(int *)(a2 + 20);
  sub_45D930((__int64)(v7 + 16), (__int64 *)a2, v4);
  v9 = *((_QWORD *)v7 + 3) == 0;
  *(_OWORD *)(v7 + 56) = 0;
  if ( !v9 && !strncmp(*((const char **)v7 + 2), ".debug_", 7u) )
    *(_BYTE *)(a1 + 24) = 1;
  return 0;
}
