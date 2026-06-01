/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67560
// Address: 0x0000000000067560

//----- (0000000000067560) ----------------------------------------------------
__int64 __fastcall sub_67560(__int64 a1)
{
  size_t v1; // rdx
  const char *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rcx
  char *v5; // rax

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
  {
    --v1;
    v2 = *(const char **)(a1 + 40);
  }
  else
  {
    v2 = s1;
  }
  sub_61790(a1, v2, v1);
  *(_BYTE *)(a1 + 212) = -80;
  v3 = *(_QWORD *)(a1 + 200);
  v4 = *(_QWORD *)(v3 + 8);
  if ( *(_QWORD *)(v3 + 16) >= (unsigned __int64)(v4 + 1) )
  {
    v5 = *(char **)v3;
  }
  else
  {
    v5 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v3, v4 + 1, 1u);
    *(_QWORD *)v3 = v5;
    v4 = *(_QWORD *)(v3 + 8);
  }
  v5[v4] = -80;
  ++*(_QWORD *)(v3 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
