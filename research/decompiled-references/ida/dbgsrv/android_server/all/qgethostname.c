/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgethostname
// Address: 0x00000000000BE64C

//----- (00000000000BE64C) ----------------------------------------------------
__int64 __fastcall qgethostname(__int64 a1)
{
  __int64 v3; // x0
  unsigned __int64 v4; // x21
  size_t v5; // x20
  void *v6; // x0
  char name[4096]; // [xsp+8h] [xbp-1038h] BYREF
  __int64 v8; // [xsp+1008h] [xbp-38h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( gethostname(name, 0x1000u) )
    return 0;
  name[4095] = 0;
  v3 = __strlen_chk(name, 4096);
  if ( v3 )
  {
    v4 = v3 + 1;
    v5 = v3;
    if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v3 + 1) )
    {
      v6 = *(void **)a1;
    }
    else
    {
      v6 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v4, 1u);
      *(_QWORD *)a1 = v6;
    }
    *(_QWORD *)(a1 + 8) = v4;
    memmove(v6, name, v5);
    *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
  }
  return 1;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
