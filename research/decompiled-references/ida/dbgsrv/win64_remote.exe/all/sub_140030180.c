/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140030180
// Address: 0x0000000140030180

//----- (0000000140030180) ----------------------------------------------------
__int64 __fastcall sub_140030180(__int64 a1)
{
  const char *v2; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // r8
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (const char *)sub_14003E690(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL), &v8, nullptr, 0);
  sub_140034290(a1, v2, v8);
  *(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL) = *(_DWORD *)(a1 + 136);
  if ( *(_DWORD *)(a1 + 208) == 2 && *(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL) != 1 )
    return sub_1400640B0(0x631u);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = *(_QWORD *)(v4 + 72);
  if ( v5 && v5 + *(int *)(a1 + 440) != *(_DWORD *)(v4 + 24) )
    return sub_1400640B0(0x4F4u);
  *(_BYTE *)(a1 + 204) = -91;
  v6 = *(_QWORD *)(a1 + 192);
  v7 = *(_QWORD *)(v6 + 8) + 1LL;
  if ( v7 > *(_QWORD *)(v6 + 16) )
    *(_QWORD *)v6 = sub_14005ABE0(*(_QWORD *)(a1 + 192), *(void **)v6, v7, 1u);
  *(_BYTE *)(*(_QWORD *)v6 + (*(_QWORD *)(v6 + 8))++) = -91;
  ++*(_DWORD *)(a1 + 200);
  sub_1400343E0(a1, 0);
  return 0;
}
