/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49318
// Address: 0x0000000000049318

//----- (0000000000049318) ----------------------------------------------------
__int64 __fastcall sub_49318(__int64 a1, char *s)
{
  __int64 v2; // x24
  size_t v5; // x0
  unsigned __int64 v6; // x22
  size_t v7; // x21
  void **v8; // x23
  void *v9; // x0
  __int64 v10; // x8
  const char *v11; // x3

  v2 = *(_QWORD *)(a1 + 24);
  if ( s && (v5 = strlen(s)) != 0 )
  {
    v6 = v5 + 1;
    v7 = v5;
    v8 = (void **)(v2 + 88);
    if ( *(_QWORD *)(v2 + 104) >= v5 + 1 )
    {
      v9 = *v8;
    }
    else
    {
      v9 = qvector_reserve((pthread_mutex_t *)(v2 + 88), *v8, v6, 1u);
      *v8 = v9;
    }
    *(_QWORD *)(v2 + 96) = v6;
    memmove(v9, s, v7);
    *(_BYTE *)(*(_QWORD *)(v2 + 88) + v7) = 0;
  }
  else
  {
    *(_QWORD *)(v2 + 96) = 0;
  }
  v10 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v10 + 24) )
    v11 = *(const char **)(v10 + 16);
  else
    v11 = &byte_F154B;
  sub_99D18(*(_QWORD *)(a1 + 16), "Build ID '%s' of '%s'\n", s, v11);
  return 0;
}
// F154B: using guessed type char byte_F154B;
