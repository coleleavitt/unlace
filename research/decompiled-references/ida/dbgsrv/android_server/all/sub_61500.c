/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61500
// Address: 0x0000000000061500

//----- (0000000000061500) ----------------------------------------------------
__int64 __fastcall sub_61500(__int64 a1)
{
  __int64 v2; // x20
  __int64 v4; // x8
  _BYTE *v5; // x0

  if ( *(_DWORD *)(a1 + 216) )
    return set_qerrno(0x604u);
  v2 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -81;
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) >= (unsigned __int64)(v4 + 1) )
  {
    v5 = *(_BYTE **)v2;
  }
  else
  {
    v5 = qvector_reserve((pthread_mutex_t *)v2, *(void **)v2, v4 + 1, 1u);
    v4 = *(_QWORD *)(v2 + 8);
    *(_QWORD *)v2 = v5;
  }
  v5[v4] = -81;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
