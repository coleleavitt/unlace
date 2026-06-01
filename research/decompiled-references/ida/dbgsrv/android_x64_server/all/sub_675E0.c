/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_675E0
// Address: 0x00000000000675E0

//----- (00000000000675E0) ----------------------------------------------------
__int64 __fastcall sub_675E0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  char *v3; // rax
  size_t v4; // rdx
  const char *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  char *v8; // rax

  *(_BYTE *)(a1 + 212) = -86;
  v1 = *(_QWORD *)(a1 + 200);
  v2 = *(_QWORD *)(v1 + 8);
  if ( *(_QWORD *)(v1 + 16) >= (unsigned __int64)(v2 + 1) )
  {
    v3 = *(char **)v1;
  }
  else
  {
    v3 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v1, v2 + 1, 1u);
    *(_QWORD *)v1 = v3;
    v2 = *(_QWORD *)(v1 + 8);
  }
  v3[v2] = -86;
  ++*(_QWORD *)(v1 + 8);
  ++*(_DWORD *)(a1 + 208);
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 )
  {
    --v4;
    v5 = *(const char **)(a1 + 40);
  }
  else
  {
    v5 = s1;
  }
  sub_61790(a1, v5, v4);
  *(_BYTE *)(a1 + 212) = 1;
  v6 = *(_QWORD *)(a1 + 200);
  v7 = *(_QWORD *)(v6 + 8);
  if ( *(_QWORD *)(v6 + 16) >= (unsigned __int64)(v7 + 1) )
  {
    v8 = *(char **)v6;
  }
  else
  {
    v8 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v6, v7 + 1, 1u);
    *(_QWORD *)v6 = v8;
    v7 = *(_QWORD *)(v6 + 8);
  }
  v8[v7] = 1;
  ++*(_QWORD *)(v6 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
