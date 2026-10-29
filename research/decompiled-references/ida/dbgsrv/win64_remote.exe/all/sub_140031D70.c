/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140031D70
// Address: 0x0000000140031D70

//----- (0000000140031D70) ----------------------------------------------------
__int64 __fastcall sub_140031D70(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  const char *v4; // rdx
  int v5; // esi
  void **v6; // rdi
  unsigned __int64 v7; // r8
  _DWORD *v8; // rax
  void **v9; // rdi
  unsigned __int64 v10; // r8

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 8LL * *(_QWORD *)(a1 + 344) - 8);
  if ( *(_DWORD *)v2 == 1 )
  {
    v3 = *(_QWORD *)(v2 + 16);
    if ( *(_QWORD *)(v3 + 8) )
      v4 = *(const char **)v3;
    else
      v4 = Str1;
  }
  else
  {
    v4 = pNodeName;
  }
  sub_140034D00((_QWORD *)(a1 + 152), v4);
  v5 = *(_DWORD *)(a1 + 200);
  v6 = (void **)(a1 + 240);
  v7 = *(_QWORD *)(a1 + 248) + 1LL;
  if ( v7 > *(_QWORD *)(a1 + 256) )
    *v6 = sub_14005ABE0(a1 + 240, *v6, v7, 4u);
  v8 = *v6;
  v9 = (void **)(a1 + 312);
  v8[(*(_QWORD *)(a1 + 248))++] = v5;
  v10 = *(_QWORD *)(a1 + 320) + 1LL;
  if ( v10 > *(_QWORD *)(a1 + 328) )
    *v9 = sub_14005ABE0(a1 + 312, *v9, v10, 2u);
  *((_WORD *)*v9 + (*(_QWORD *)(a1 + 320))++) = 0;
  return 0;
}
