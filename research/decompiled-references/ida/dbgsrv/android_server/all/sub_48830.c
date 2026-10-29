/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48830
// Address: 0x0000000000048830

//----- (0000000000048830) ----------------------------------------------------
void __fastcall sub_48830(pthread_mutex_t *a1, __int64 a2)
{
  __int64 v2; // x8
  int owner; // w10
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x12
  _DWORD *i; // x10

  v2 = *(_QWORD *)(a2 + 1744);
  if ( !v2 )
    goto LABEL_8;
  owner = a1->__owner;
  v4 = a2 + 1744;
  do
  {
    if ( *(_DWORD *)(v2 + 32) >= owner )
      v4 = v2;
    v2 = *(_QWORD *)(v2 + 8LL * (*(_DWORD *)(v2 + 32) < owner));
  }
  while ( v2 );
  if ( v4 != a2 + 1744 && owner >= *(_DWORD *)(v4 + 32) )
  {
    if ( *(_BYTE *)(v4 + 65) && !*(_BYTE *)(a2 + 1853) && (a1->__size[12] & 0x7F) != 0 )
    {
      if ( !under_debugger )
        a1 = interr(30185);
      __break(1u);
      sub_48970((__int64)a1, (_QWORD *)a2);
    }
    else if ( *(_BYTE *)(v4 + 64) && (a1->__nusers & 0xFF7F) == 0x137F )
    {
      *(_BYTE *)(v4 + 64) = 0;
      *(_DWORD *)(v4 + 60) = 1;
    }
    else
    {
      *(_BYTE *)(v4 + 65) = 1;
      *(_DWORD *)(v4 + 68) = a1->__nusers;
      ++*(_DWORD *)(a2 + 1928);
    }
  }
  else
  {
LABEL_8:
    v5 = 4LL * *(_QWORD *)(a2 + 1768);
    if ( v5 )
    {
      v6 = 4LL * *(_QWORD *)(a2 + 1768);
      for ( i = *(_DWORD **)(a2 + 1760); a1->__owner != *i; ++i )
      {
        v6 -= 4;
        if ( !v6 )
          return;
      }
    }
    else
    {
      i = *(_DWORD **)(a2 + 1760);
    }
    if ( i != (_DWORD *)(*(_QWORD *)(a2 + 1760) + v5) )
      ptrace(PTRACE_CONT, (unsigned int)a1->__owner, 0, 0);
  }
}
// 4896D: variable 'a2' is possibly undefined
// 168DF0: using guessed type char under_debugger;
