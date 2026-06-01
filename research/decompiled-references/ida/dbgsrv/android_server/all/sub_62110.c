/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62110
// Address: 0x0000000000062110

//----- (0000000000062110) ----------------------------------------------------
__int64 __fastcall sub_62110(__int64 a1, const char *a2)
{
  __int64 v2; // x21
  __int64 v4; // x8
  _BYTE *v6; // x0

  if ( dword_164A74 < 1 )
    return 1611;
  v2 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -44;
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) >= (unsigned __int64)(v4 + 1) )
  {
    v6 = *(_BYTE **)v2;
  }
  else
  {
    v6 = qvector_reserve((pthread_mutex_t *)v2, *(void **)v2, v4 + 1, 1u);
    v4 = *(_QWORD *)(v2 + 8);
    *(_QWORD *)v2 = v6;
  }
  v6[v4] = -44;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 208);
  sub_5EC14(a1, a2, 0);
  sub_5EE24(a1, 0, dword_164A74);
  return 0;
}
// 48: using guessed type __int64;
// 164A74: using guessed type int dword_164A74;
