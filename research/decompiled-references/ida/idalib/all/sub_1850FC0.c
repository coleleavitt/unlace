void __fastcall sub_1850FC0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx

  if ( !(unsigned __int8)sub_B8E180(a3 + 64) && *(_BYTE *)(a3 + 73) >> 5 != 2 )
  {
    v8 = sub_B7E900(a3, a2, v4, v5, v6, v7);
    if ( v8 )
    {
LABEL_4:
      while ( 1 )
      {
        sub_1845320(a1, a2, v8);
        v9 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v8 = v9;
        if ( !v9 )
          break;
        if ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 49 > 2 )
        {
          while ( 1 )
          {
            v10 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v8 = v10;
            if ( !v10 )
              goto LABEL_9;
            if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_4;
          }
        }
      }
    }
LABEL_9:
    sub_18508B0(a1, a2, (_QWORD *)a3);
  }
}
