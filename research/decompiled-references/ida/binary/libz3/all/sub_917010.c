__int64 __fastcall sub_917010(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rbx
  __int64 v5; // r13
  _DWORD *v6; // rax
  int v7; // eax
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rsi
  unsigned int v17; // eax

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v4 = a2;
  v5 = *(unsigned int *)(a2 + 24);
  v2 = sub_9169D0((_QWORD *)a1, a2, 1);
  if ( !*(_WORD *)(a2 + 4) )
  {
    v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v6 )
    {
      if ( !*v6 )
      {
        v7 = v6[1];
        switch ( v7 )
        {
          case 5:
            if ( (_DWORD)v5 )
            {
              v8 = a2 + 8 * v5;
              do
              {
                v9 = *(_QWORD *)(v4 + 32);
                if ( !*(_WORD *)(v9 + 4) )
                  v2 += sub_916AC0(a1, v9);
                v4 += 8;
              }
              while ( v8 != v4 );
            }
            break;
          case 8:
            v10 = *(_QWORD *)(a2 + 32);
            if ( *(_WORD *)(v10 + 4) )
              return 0;
            v2 = sub_916C00(a1, v10);
            break;
          case 9:
            v14 = *(_QWORD *)(a2 + 32);
            if ( !*(_WORD *)(v14 + 4) )
            {
              v15 = sub_916C00(a1, v14);
              if ( v2 < v15 )
                v2 = v15;
            }
            v16 = *(_QWORD *)(v4 + 40);
            if ( !*(_WORD *)(v16 + 4) )
            {
              v17 = sub_916AC0(a1, v16);
              if ( v2 < v17 )
                v2 = v17;
            }
            break;
          default:
            if ( v7 == 6 && (_DWORD)v5 )
            {
              v11 = a2 + 8 * v5;
              do
              {
                v12 = *(_QWORD *)(v4 + 32);
                if ( !*(_WORD *)(v12 + 4) )
                {
                  v13 = sub_916AC0(a1, v12);
                  if ( v2 < v13 )
                    v2 = v13;
                }
                v4 += 8;
              }
              while ( v11 != v4 );
            }
            break;
        }
      }
    }
  }
  if ( v2 <= 1 || !*(_BYTE *)(a1 + 8) )
    return v2;
  *(_BYTE *)(a1 + 8) = 0;
  return v2;
}

