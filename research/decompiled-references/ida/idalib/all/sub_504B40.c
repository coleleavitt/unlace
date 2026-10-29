unsigned __int64 __fastcall sub_504B40(__int64 a1)
{
  __int64 v2; // rdi
  __int16 v4; // ax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rdx
  __int64 i; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  __int16 v13; // [rsp+8h] [rbp-40h]
  __int128 v14; // [rsp+Ah] [rbp-3Eh]
  __int16 v15; // [rsp+1Ah] [rbp-2Eh]
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v2 = *(_QWORD *)a1;
  if ( v2 != -1 )
  {
    v15 = 0;
    v4 = *(_WORD *)(a1 + 8);
    v12 = v2;
    v13 = v4;
    v14 = 0;
    netnode_set(v2, &v12, 28);
    v8 = *(__int64 **)(a1 + 32);
    for ( i = v8[6]; i; i = v8[6] )
    {
      v10 = *(_QWORD *)(v8[5] + 8 * i - 8);
      v8[6] = i - 1;
      netnode_supdel(*(_QWORD *)a1, v10, 83);
      v8 = *(__int64 **)(a1 + 32);
    }
    v11 = *v8;
    if ( 16 * v8[1] )
    {
      do
      {
        if ( *(_BYTE *)(v11 + 12) )
        {
          if ( !(unsigned __int8)sub_503C80(a1, *(_QWORD **)v11, (__int64)v8, v5, v6, v7) )
          {
            if ( !under_debugger )
              interr(1092);
            BUG();
          }
          *(_BYTE *)(v11 + 12) = 0;
          sub_504990((__int64 *)(*(_QWORD *)(a1 + 32) + 64LL), *(_QWORD **)v11, 0, 1);
          v8 = *(__int64 **)(a1 + 32);
        }
        v11 += 16;
      }
      while ( v11 != *v8 + 16 * v8[1] );
    }
  }
  return v16 - __readfsqword(0x28u);
}
