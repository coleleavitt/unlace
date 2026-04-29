void __fastcall sub_5D950(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rbp
  unsigned int v9; // r12d
  __int64 flags; // rax
  unsigned int v11; // [rsp+Ch] [rbp-3Ch]

  if ( *(_QWORD *)(a1 + 72) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8 * v3);
      v5 = 2 - *(unsigned __int8 *)(*(_QWORD *)(a1 + 88) + v3);
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v3++);
      sub_5D7F0(a1, v6, v5, v4, a2);
    }
    while ( v3 < *(_QWORD *)(a1 + 72) );
  }
  v11 = 6;
  if ( *(_BYTE *)(a1 + 136) )
    v11 = *(_DWORD *)(*(_QWORD *)a1 + 540LL);
  if ( !*(_BYTE *)(a1 + 152) )
    v11 |= 0x80u;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v7);
        v9 = 2 - *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + v7);
        flags = get_flags_ex(v8, 0);
        if ( !(unsigned __int8)is_defarg(flags, v9) )
          break;
        if ( ++v7 >= *(_QWORD *)(a1 + 24) )
          return;
      }
      ++v7;
      op_offset(v8, v9, v11, *(_QWORD *)(a1 + 8) - a2, *(_QWORD *)(a1 + 144), a2);
    }
    while ( v7 < *(_QWORD *)(a1 + 24) );
  }
}
