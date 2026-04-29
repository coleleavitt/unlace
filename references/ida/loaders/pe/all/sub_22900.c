__int64 __fastcall sub_22900(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  unsigned int v5; // eax
  _BYTE *v7; // r9
  unsigned __int16 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // esi
  int v12; // eax

  if ( a2 )
  {
    *a2 = 0;
    v5 = *(_DWORD *)(a3 + 4);
    if ( a4 >= v5 )
    {
      sub_6F70((__int64)"decode_row: Out of bounds: %u (table has %u rows).\n", a4, v5);
    }
    else
    {
      v7 = *(_BYTE **)(a3 + 32);
      v8 = (unsigned __int16 *)(*(_QWORD *)(a3 + 24) + *(unsigned __int8 *)(a3 + 8) * a4);
      if ( *v7 == 0x8A )
      {
LABEL_17:
        sub_6F70((__int64)"No such column: %d.\n", a5);
      }
      else
      {
        v9 = 1;
        while ( v9 != a5 + 1LL )
        {
          v10 = *(unsigned __int8 *)(a3 + v9++ + 8);
          v8 = (unsigned __int16 *)((char *)v8 + v10);
          if ( v7[v9 - 1] == 0x8A )
            goto LABEL_17;
        }
        v11 = *(unsigned __int8 *)(a3 + (int)v9 - 1 + 9);
        switch ( (_BYTE)v11 )
        {
          case 2:
            v12 = *v8;
            goto LABEL_11;
          case 4:
            v12 = *(_DWORD *)v8;
            goto LABEL_11;
          case 1:
            v12 = *(unsigned __int8 *)v8;
LABEL_11:
            *a2 = v12;
            return 1;
        }
        sub_6F70((__int64)"Invalid column size: %d.\n", v11);
      }
    }
    return 0;
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_22A20(20029);
  }
}
