unsigned __int64 __fastcall sub_1CCB0(__int64 a1, int a2)
{
  int v3; // edx
  int v4; // ecx
  __int64 v5; // rbp
  int v6; // r8d
  int v7; // r9d
  __int64 i; // rax
  const char *v9; // rsi
  int v10; // eax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  const char *v14; // rsi
  const char *v15; // rdx
  const char *v16; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( (debug & 0x400000) != 0 )
  {
    v5 = sub_1C690(a1);
    if ( (debug & 0x400000) != 0 )
      sub_88B80(
        (unsigned int)"Current state of dw_input_source_t => mappings_netnode lookup table:\n",
        a2,
        v3,
        v4,
        v6,
        v7);
    v16 = nullptr;
    v17 = 0;
    for ( i = netnode_qhashfirst(v5, &v16, 72); i >= 0; i = netnode_qhashnext(v5, &v16, v15, 72) )
    {
      v9 = src;
      if ( (_QWORD)v17 )
        v9 = v16;
      v10 = netnode_hashval_long(v5, v9, 72);
      if ( (debug & 0x400000) != 0 )
      {
        v14 = src;
        if ( (_QWORD)v17 )
          LODWORD(v14) = (_DWORD)v16;
        sub_88B80((unsigned int)"        %s: %a\n", (_DWORD)v14, v10, v11, v12, v13);
      }
      v15 = src;
      if ( (_QWORD)v17 )
        v15 = v16;
    }
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v16);
    }
  }
  return v18 - __readfsqword(0x28u);
}
