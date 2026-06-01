/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_630D0
// Address: 0x00000000000630D0

//----- (00000000000630D0) ----------------------------------------------------
__int64 __fastcall sub_630D0(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rbx
  __int64 v3; // rcx
  char *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  char *v7; // rax

  v1 = 112;
  if ( *(_DWORD *)(a1 + 216) != 1 )
    v1 = -32;
  *(_BYTE *)(a1 + 212) = v1;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) >= (unsigned __int64)(v3 + 1) )
  {
    v4 = *(char **)v2;
  }
  else
  {
    v4 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v2, v3 + 1, 1u);
    *(_QWORD *)v2 = v4;
    v3 = *(_QWORD *)(v2 + 8);
  }
  v4[v3] = v1;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 208);
  *(_BYTE *)(a1 + 212) = -81;
  v5 = *(_QWORD *)(a1 + 200);
  v6 = *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)(v5 + 16) >= (unsigned __int64)(v6 + 1) )
  {
    v7 = *(char **)v5;
  }
  else
  {
    v7 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v5, v6 + 1, 1u);
    *(_QWORD *)v5 = v7;
    v6 = *(_QWORD *)(v5 + 8);
  }
  v7[v6] = -81;
  ++*(_QWORD *)(v5 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
