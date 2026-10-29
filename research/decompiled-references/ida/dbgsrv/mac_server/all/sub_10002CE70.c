/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002CE70
// Address: 0x000000010002CE70

//----- (000000010002CE70) ----------------------------------------------------
__int64 __fastcall sub_10002CE70(__int64 a1)
{
  __int64 v1; // rax
  const char *v2; // rsi
  size_t v3; // rdx
  bool v4; // cf
  size_t v5; // rax
  __int64 v6; // r14
  void *v7; // rax
  __int64 v8; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
    v2 = *(const char **)(a1 + 40);
  else
    v2 = _s1;
  v3 = 0;
  v4 = v1 == 0;
  v5 = v1 - 1;
  if ( !v4 )
    v3 = v5;
  sub_100026AC0(a1, v2, v3);
  *(_BYTE *)(a1 + 212) = -80;
  v6 = *(_QWORD *)(a1 + 200);
  v7 = *(void **)v6;
  v8 = *(_QWORD *)(v6 + 8);
  if ( *(_QWORD *)(v6 + 16) < (unsigned __int64)(v8 + 1) )
  {
    v7 = qvector_reserve(*(_QWORD *)(a1 + 200), v7, v8 + 1, 1u);
    *(_QWORD *)v6 = v7;
    v8 = *(_QWORD *)(v6 + 8);
  }
  *((_BYTE *)v7 + v8) = -80;
  ++*(_QWORD *)(v6 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
