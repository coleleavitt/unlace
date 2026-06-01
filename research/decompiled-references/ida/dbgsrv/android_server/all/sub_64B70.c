/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64B70
// Address: 0x0000000000064B70

//----- (0000000000064B70) ----------------------------------------------------
__int64 __fastcall sub_64B70(__int64 a1)
{
  __int64 v1; // x8
  const char *v3; // x1
  size_t v4; // x2
  __int64 v5; // x20
  __int64 v6; // x8
  _BYTE *v7; // x0

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
    v3 = *(const char **)(a1 + 40);
  else
    v3 = &byte_F154B;
  if ( v1 )
    v4 = v1 - 1;
  else
    v4 = 0;
  sub_5EC14(a1, v3, v4);
  v5 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -80;
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
  v7[v6] = -80;
  ++*(_QWORD *)(v5 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
// F154B: using guessed type char byte_F154B;
