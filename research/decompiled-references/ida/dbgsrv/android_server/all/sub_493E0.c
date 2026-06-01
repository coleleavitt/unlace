/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493E0
// Address: 0x00000000000493E0

//----- (00000000000493E0) ----------------------------------------------------
__int64 __fastcall sub_493E0(__int64 a1, char *s, int a3)
{
  __int64 v3; // x25
  size_t v7; // x0
  unsigned __int64 v8; // x23
  size_t v9; // x22
  void **v10; // x24
  void *v11; // x0
  __int64 v12; // x8
  const char *v13; // x3

  v3 = *(_QWORD *)(a1 + 24);
  if ( s && (v7 = strlen(s)) != 0 )
  {
    v8 = v7 + 1;
    v9 = v7;
    v10 = (void **)(v3 + 112);
    if ( *(_QWORD *)(v3 + 128) >= v7 + 1 )
    {
      v11 = *v10;
    }
    else
    {
      v11 = qvector_reserve((pthread_mutex_t *)(v3 + 112), *v10, v8, 1u);
      *v10 = v11;
    }
    *(_QWORD *)(v3 + 120) = v8;
    memmove(v11, s, v9);
    *(_BYTE *)(*(_QWORD *)(v3 + 112) + v9) = 0;
  }
  else
  {
    *(_QWORD *)(v3 + 120) = 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 136LL) = a3;
  v12 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v12 + 24) )
    v13 = *(const char **)(v12 + 16);
  else
    v13 = &byte_F154B;
  sub_99D18(*(_QWORD *)(a1 + 16), "debuglink '%s' of '%s'\n", s, v13);
  return 0;
}
// F154B: using guessed type char byte_F154B;
