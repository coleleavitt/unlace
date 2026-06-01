bool __fastcall sub_916D30(__int64 a1, __int64 a2)
{
  bool v2; // zf
  bool result; // al
  __int64 v4; // rbx
  __int64 v5; // r13
  unsigned int v6; // r12d
  _DWORD *v7; // rax
  int v8; // eax
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rsi
  unsigned int v18; // eax

  v2 = *(_WORD *)(a2 + 4) == 0;
  *(_BYTE *)(a1 + 8) = 1;
  if ( !v2 )
    return 1;
  v4 = a2;
  v5 = *(unsigned int *)(a2 + 24);
  v6 = sub_9169D0((_QWORD *)a1, a2, 1);
  if ( !*(_WORD *)(a2 + 4) )
  {
    v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v7 )
    {
      if ( !*v7 )
      {
        v8 = v7[1];
        switch ( v8 )
        {
          case 5:
            if ( (_DWORD)v5 )
            {
              v9 = a2 + 8 * v5;
              do
              {
                v10 = *(_QWORD *)(v4 + 32);
                if ( !*(_WORD *)(v10 + 4) )
                  v6 += sub_916AC0(a1, v10);
                v4 += 8;
              }
              while ( v9 != v4 );
            }
            break;
          case 8:
            v11 = *(_QWORD *)(a2 + 32);
            result = 1;
            if ( *(_WORD *)(v11 + 4) )
              return result;
            v6 = sub_916C00(a1, v11);
            break;
          case 9:
            v15 = *(_QWORD *)(a2 + 32);
            if ( !*(_WORD *)(v15 + 4) )
            {
              v16 = sub_916C00(a1, v15);
              if ( v6 < v16 )
                v6 = v16;
            }
            v17 = *(_QWORD *)(v4 + 40);
            if ( !*(_WORD *)(v17 + 4) )
            {
              v18 = sub_916AC0(a1, v17);
              if ( v6 < v18 )
                v6 = v18;
            }
            break;
          default:
            if ( v8 == 6 && (_DWORD)v5 )
            {
              v12 = a2 + 8 * v5;
              do
              {
                v13 = *(_QWORD *)(v4 + 32);
                if ( !*(_WORD *)(v13 + 4) )
                {
                  v14 = sub_916AC0(a1, v13);
                  if ( v6 < v14 )
                    v6 = v14;
                }
                v4 += 8;
              }
              while ( v12 != v4 );
            }
            break;
        }
      }
    }
  }
  if ( v6 > 1 )
  {
    if ( *(_BYTE *)(a1 + 8) )
      *(_BYTE *)(a1 + 8) = 0;
  }
  return v6 <= 1;
}

