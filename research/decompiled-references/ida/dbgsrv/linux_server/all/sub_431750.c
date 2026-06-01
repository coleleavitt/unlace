/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431750
// Address: 0x0000000000431750

//----- (0000000000431750) ----------------------------------------------------
__int64 __fastcall sub_431750(__int64 a1)
{
  __int64 v1; // rax
  const char *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  void **v5; // rbp
  _BYTE *v6; // rax
  void *v7; // rsi
  void *v9; // rax
  unsigned int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 104);
  v11 = __readfsqword(0x28u);
  v2 = (const char *)sub_449A40(*(_QWORD *)(v1 + 32), &v10, nullptr, 0);
  sub_430BC0(a1, v2, v10);
  *(_DWORD *)(*(_QWORD *)(a1 + 192) + 24LL) = *(_QWORD *)(a1 + 144);
  v3 = *(_QWORD *)(a1 + 192);
  if ( *(_DWORD *)(a1 + 216) == 2 && *(_DWORD *)(v3 + 24) != 1 )
    return sub_479EB0(0x631u);
  v4 = *(_QWORD *)(v3 + 72);
  if ( v4 && v4 + *(int *)(a1 + 448) != *(_DWORD *)(v3 + 24) )
    return sub_479EB0(0x4F4u);
  v5 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -91;
  v6 = v5[1];
  v7 = *v5;
  if ( v5[2] < v6 + 1 )
  {
    v9 = sub_481540((__int64)v5, v7, (unsigned __int64)(v6 + 1), 1u);
    *v5 = v9;
    v7 = v9;
    v6 = v5[1];
  }
  v6[(_QWORD)v7] = -91;
  v5[1] = (char *)v5[1] + 1;
  ++*(_DWORD *)(a1 + 208);
  sub_4313E0(a1, 0);
  return 0;
}
