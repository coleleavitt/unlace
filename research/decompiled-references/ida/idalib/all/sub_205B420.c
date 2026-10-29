void __fastcall sub_205B420(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  while ( v4 )
  {
    v5 = *(_QWORD **)(v4 + 24);
    if ( *(_BYTE *)v5 <= 0x15u && (unsigned __int8)(*(_BYTE *)v5 - 13) > 3u )
    {
      v6 = v5[2];
      if ( !v6 )
      {
LABEL_11:
        sub_20BD630(v5);
        sub_205B240(v5, a2, v8, v9);
        if ( v3 )
          v4 = *(_QWORD *)(v3 + 8);
        else
          v4 = *(_QWORD *)(a1 + 16);
        continue;
      }
      while ( 1 )
      {
        v7 = *(_QWORD **)(v6 + 24);
        if ( *(_BYTE *)v7 > 0x15u )
          break;
        a2 = 1;
        if ( !(unsigned __int8)sub_205B370(v7, 1) )
          break;
        v6 = v5[2];
        if ( !v6 )
          goto LABEL_11;
      }
    }
    v3 = v4;
    v4 = *(_QWORD *)(v4 + 8);
  }
}
