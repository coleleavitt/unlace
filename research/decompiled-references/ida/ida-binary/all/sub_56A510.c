__int64 __fastcall sub_56A510(__int64 a1, unsigned int a2)
{
  _DWORD *v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  int v6; // edi

  if ( a2 >= *(_DWORD *)(a1 + 8) )
    __assert_fail(
      "(uint32_t)(version) < (&self->heads)->size",
      "lib/src/./stack.c",
      0x288u,
      "ts_stack_has_advanced_since_error");
  v2 = (_DWORD *)(*(_QWORD *)a1 + 48LL * a2);
  v3 = *(_QWORD *)v2;
  if ( *(_DWORD *)(*(_QWORD *)v2 + 216LL) )
  {
    while ( 1 )
    {
      if ( !*(_WORD *)(v3 + 208) )
        return 0;
      v4 = *(_QWORD *)(v3 + 24);
      if ( !v4 )
        return 0;
      if ( (v4 & 1) != 0 )
      {
        v5 = HIBYTE(v4);
        v6 = BYTE6(v4);
      }
      else
      {
        LODWORD(v5) = *(_DWORD *)(v4 + 16);
        v6 = *(_DWORD *)(v4 + 4);
      }
      if ( v6 + (_DWORD)v5 )
        return 1;
      if ( v2[4] >= *(_DWORD *)(v3 + 220) )
        return 0;
      if ( (v4 & 1) != 0 )
      {
        if ( (v4 & 0x20) != 0 )
          return 0;
      }
      else
      {
        if ( (*(_BYTE *)(v4 + 45) & 2) != 0 )
          return 0;
        if ( *(_DWORD *)(v4 + 32) )
          return 0;
      }
      v3 = *(_QWORD *)(v3 + 16);
      if ( !v3 )
        return 0;
    }
  }
  return 1;
}
