/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61790
// Address: 0x0000000000061790

//----- (0000000000061790) ----------------------------------------------------
unsigned __int64 __fastcall sub_61790(__int64 a1, const char *a2, size_t a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  char *v6; // rax
  unsigned __int64 result; // rax

  *(_BYTE *)(a1 + 212) = -88;
  v4 = *(_QWORD *)(a1 + 200);
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)(v4 + 16) >= (unsigned __int64)(v5 + 1) )
  {
    v6 = *(char **)v4;
  }
  else
  {
    v6 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v4, v5 + 1, 1u);
    *(_QWORD *)v4 = v6;
    v5 = *(_QWORD *)(v4 + 8);
  }
  v6[v5] = -88;
  ++*(_QWORD *)(v4 + 8);
  ++*(_DWORD *)(a1 + 208);
  if ( !a3 )
    a3 = strlen(a2);
  sub_616A0(a1, a3);
  sub_616A0(a1, SWORD1(a3));
  result = sub_6BDC0(*(_QWORD **)(a1 + 200), a2, a3);
  *(_DWORD *)(a1 + 208) += a3;
  return result;
}
