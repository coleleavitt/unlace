/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60194
// Address: 0x0000000000060194

//----- (0000000000060194) ----------------------------------------------------
__int64 __fastcall sub_60194(__int64 a1)
{
  char *file_line; // x0
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x20
  __int64 v6; // x8
  _BYTE *v7; // x0
  unsigned int v9; // w0
  unsigned int v10; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v11; // [xsp+8h] [xbp-28h]

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  file_line = (char *)lex_get_file_line(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL), &v10, nullptr, 0);
  sub_5E370(a1, file_line, v10);
  *(_DWORD *)(*(_QWORD *)(a1 + 192) + 24LL) = *(_QWORD *)(a1 + 144);
  v3 = *(_QWORD *)(a1 + 192);
  if ( *(_DWORD *)(a1 + 216) == 2 && *(_DWORD *)(v3 + 24) != 1 )
  {
    v9 = 1585;
    return set_qerrno(v9);
  }
  v4 = *(_QWORD *)(v3 + 72);
  if ( v4 && v4 + *(int *)(a1 + 448) != *(_DWORD *)(v3 + 24) )
  {
    v9 = 1268;
    return set_qerrno(v9);
  }
  v5 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -91;
  v6 = *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)(v5 + 16) >= (unsigned __int64)(v6 + 1) )
  {
    v7 = *(_BYTE **)v5;
  }
  else
  {
    v7 = qvector_reserve((pthread_mutex_t *)v5, *(void **)v5, v6 + 1, 1u);
    v6 = *(_QWORD *)(v5 + 8);
    *(_QWORD *)v5 = v7;
  }
  v7[v6] = -91;
  ++*(_QWORD *)(v5 + 8);
  ++*(_DWORD *)(a1 + 208);
  sub_5EB14(a1, 0);
  return 0;
}
