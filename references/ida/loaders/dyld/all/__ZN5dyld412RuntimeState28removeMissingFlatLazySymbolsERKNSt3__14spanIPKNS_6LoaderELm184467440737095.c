__int64 __fastcall dyld4::RuntimeState::removeMissingFlatLazySymbols(__int64 result, __int64 a2)
{
  _QWORD *v2; // x11
  __int64 v3; // x10
  _QWORD *v4; // x9
  _QWORD *v5; // x8
  __int64 v6; // x13
  _QWORD *v7; // x16
  __int64 v8; // x2
  _QWORD *v9; // x12
  __int64 v10; // x11
  __int64 v11; // x15
  _QWORD *v12; // x13
  __int128 v13; // q0

  v2 = *(_QWORD **)(result + 600);
  v3 = *(_QWORD *)(result + 608);
  v4 = &v2[3 * v3];
  v5 = v2;
  if ( v3 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    v5 = *(_QWORD **)(result + 600);
    while ( 1 )
    {
      v7 = *(_QWORD **)a2;
      if ( v6 )
      {
        v8 = 8 * v6;
        v7 = *(_QWORD **)a2;
        while ( *v7 != *v5 )
        {
          ++v7;
          v8 -= 8;
          if ( !v8 )
            goto LABEL_9;
        }
      }
      if ( v7 != (_QWORD *)(*(_QWORD *)a2 + 8 * v6) )
        break;
LABEL_9:
      v5 += 3;
      if ( v5 == v4 )
        goto LABEL_23;
    }
  }
  if ( v5 == v4 )
  {
LABEL_23:
    v5 = &v2[3 * v3];
  }
  else
  {
    v9 = v5 + 3;
    if ( v5 + 3 != v4 )
    {
      do
      {
        v10 = *(_QWORD *)(a2 + 8);
        if ( v10 )
        {
          v11 = 8 * v10;
          v12 = *(_QWORD **)a2;
          while ( *v12 != *v9 )
          {
            ++v12;
            v11 -= 8;
            if ( !v11 )
              goto LABEL_20;
          }
        }
        else
        {
          v12 = *(_QWORD **)a2;
        }
        if ( v12 == (_QWORD *)(*(_QWORD *)a2 + 8 * v10) )
        {
LABEL_20:
          v13 = *(_OWORD *)v9;
          v5[2] = v9[2];
          *(_OWORD *)v5 = v13;
          v5 += 3;
        }
        v9 += 3;
      }
      while ( v9 != v4 );
      v2 = *(_QWORD **)(result + 600);
      v3 = *(_QWORD *)(result + 608);
    }
  }
  *(_QWORD *)(result + 608) = v3 + 0x5555555555555555LL * (&v2[3 * v3] - v5);
  return result;
}
