/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64220
// Address: 0x0000000000064220

//----- (0000000000064220) ----------------------------------------------------
__int64 __fastcall sub_64220(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  char *v4; // rax

  if ( *(_DWORD *)(a1 + 216) )
    return set_qerrno(0x604u);
  *(_BYTE *)(a1 + 212) = -81;
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
  v4[v3] = -81;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
