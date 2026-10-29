_BOOL8 __fastcall sub_532A00(__int64 *a1, _BYTE *a2, char a3, __int64 a4, unsigned __int8 a5, unsigned __int8 a6)
{
  _BOOL4 v7; // eax
  _BOOL4 v8; // ebp
  _QWORD *v10; // r15
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rsi

  v7 = sub_524160((__int64)a2, *a1, a3, 1);
  if ( v7 )
  {
    v8 = v7;
    if ( (a2[70] & 0x3F) == 0xD )
    {
      v10 = *(_QWORD **)a2;
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) )
      {
        v11 = 0;
        while ( 1 )
        {
          v13 = *v10 + (v11 << 7);
          if ( (*(_BYTE *)(v13 + 116) & 0x20) == 0 )
            break;
          v14 = *(_QWORD *)(v13 + 64);
          if ( v14 <= 0xFF )
            break;
          v12 = sub_51B750((__int64)a1, *(_QWORD *)(v13 + 64));
          if ( (~(unsigned __int8)*(_WORD *)(v12 + 68) & 0x70) == 0 )
          {
            v15 = *(_QWORD *)v12;
            if ( v15 <= 0xFF )
              break;
            v12 = sub_51B750((__int64)a1, v15);
          }
          if ( !v12 )
            break;
          if ( *(_QWORD *)(v12 + 32) && !sub_51DBC0(a1, v12, a4, 0)
            || (unsigned __int8)sub_532A00(a1, v12, (unsigned __int8)v14, a4, a5, a6) )
          {
            return v8;
          }
          if ( a6 )
          {
            if ( (unsigned __int64)++v11 < v10[1] )
              continue;
          }
          break;
        }
      }
    }
  }
  return 0;
}

