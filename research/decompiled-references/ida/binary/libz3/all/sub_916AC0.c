__int64 __fastcall sub_916AC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  unsigned int v4; // ebp
  _DWORD *v5; // rax
  int v7; // eax
  __int64 v8; // r12
  unsigned int v9; // eax
  __int64 v10; // r12
  unsigned int v11; // eax
  unsigned int v12; // eax

  v2 = a2;
  v3 = *(unsigned int *)(a2 + 24);
  v4 = sub_9169D0((_QWORD *)a1, a2, 1);
  if ( !*(_WORD *)(a2 + 4) )
  {
    v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v5 )
    {
      if ( !*v5 )
      {
        v7 = v5[1];
        switch ( v7 )
        {
          case 5:
            if ( (_DWORD)v3 )
            {
              v10 = a2 + 8 * v3;
              do
              {
                if ( !*(_WORD *)(*(_QWORD *)(v2 + 32) + 4LL) )
                  v4 += sub_916AC0(a1);
                v2 += 8;
              }
              while ( v10 != v2 );
            }
            break;
          case 8:
            v4 = 0;
            if ( *(_WORD *)(*(_QWORD *)(a2 + 32) + 4LL) )
              return v4;
            v4 = sub_916C00(a1);
            break;
          case 9:
            if ( !*(_WORD *)(*(_QWORD *)(a2 + 32) + 4LL) )
            {
              v11 = sub_916C00(a1);
              if ( v4 < v11 )
                v4 = v11;
            }
            if ( !*(_WORD *)(*(_QWORD *)(a2 + 40) + 4LL) )
            {
              v12 = sub_916AC0(a1);
              if ( v4 < v12 )
                v4 = v12;
            }
            break;
          default:
            if ( v7 == 6 && (_DWORD)v3 )
            {
              v8 = a2 + 8 * v3;
              do
              {
                if ( !*(_WORD *)(*(_QWORD *)(v2 + 32) + 4LL) )
                {
                  v9 = sub_916AC0(a1);
                  if ( v4 < v9 )
                    v4 = v9;
                }
                v2 += 8;
              }
              while ( v2 != v8 );
            }
            break;
        }
      }
    }
  }
  if ( v4 > 1 && *(_BYTE *)(a1 + 8) )
    *(_BYTE *)(a1 + 8) = 0;
  return v4;
}

