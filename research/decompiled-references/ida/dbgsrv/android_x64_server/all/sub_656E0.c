/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_656E0
// Address: 0x00000000000656E0

//----- (00000000000656E0) ----------------------------------------------------
__int64 __fastcall sub_656E0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  const char *v4; // rsi
  _QWORD *v5; // rdi
  int v6; // ebp
  __int64 v7; // rcx
  _DWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  _WORD *v11; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352) - 8);
  if ( *(_DWORD *)v2 == 1 )
  {
    v3 = *(_QWORD *)(v2 + 16);
    if ( *(_QWORD *)(v3 + 8) )
      v4 = *(const char **)v3;
    else
      v4 = s1;
  }
  else
  {
    v4 = &byte_EB522;
  }
  sub_657D0(a1 + 160, v4);
  v5 = (_QWORD *)(a1 + 248);
  v6 = *(_DWORD *)(a1 + 208);
  v7 = *(_QWORD *)(a1 + 256);
  if ( *(_QWORD *)(a1 + 264) >= (unsigned __int64)(v7 + 1) )
  {
    v8 = (_DWORD *)*v5;
  }
  else
  {
    v8 = qvector_reserve((__int64)v5, *(char **)(a1 + 248), v7 + 1, 4u);
    *(_QWORD *)(a1 + 248) = v8;
    v7 = *(_QWORD *)(a1 + 256);
  }
  v8[v7] = v6;
  ++*(_QWORD *)(a1 + 256);
  v9 = (_QWORD *)(a1 + 320);
  v10 = *(_QWORD *)(a1 + 328);
  if ( *(_QWORD *)(a1 + 336) >= (unsigned __int64)(v10 + 1) )
  {
    v11 = (_WORD *)*v9;
  }
  else
  {
    v11 = qvector_reserve((__int64)v9, *(char **)(a1 + 320), v10 + 1, 2u);
    *(_QWORD *)(a1 + 320) = v11;
    v10 = *(_QWORD *)(a1 + 328);
  }
  v11[v10] = 0;
  ++*(_QWORD *)(a1 + 328);
  return 0;
}
