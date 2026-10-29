/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_404F0
// Address: 0x00000000000404F0

//----- (00000000000404F0) ----------------------------------------------------
bool __fastcall sub_404F0(__int64 a1, int a2)
{
  __int64 v2; // x8
  char v5; // w9
  __int64 v6; // x10
  _QWORD *v7; // x24
  _QWORD *v8; // x23
  _QWORD *v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 v12; // x9
  _QWORD *v13; // t1
  int v14; // w0
  _QWORD *v16; // x10
  _QWORD *v17; // x11
  __int64 v18; // x11
  __int64 v19; // x12
  _QWORD *v20; // t1

  v2 = *(_QWORD *)(a1 + 360);
  if ( !v2 )
  {
    if ( *(_QWORD *)(a1 + 160) )
    {
LABEL_4:
      v5 = 0;
      goto LABEL_5;
    }
    v16 = *(_QWORD **)(a1 + 1736);
    while ( v16 != (_QWORD *)(a1 + 1744) )
    {
      if ( *((_BYTE *)v16 + 65) && !*((_DWORD *)v16 + 12) && !*((_DWORD *)v16 + 11) )
        goto LABEL_4;
      v17 = (_QWORD *)v16[1];
      if ( v17 )
      {
        do
        {
          v16 = v17;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
      else
      {
        v18 = (__int64)(v16 + 2);
        if ( *(_QWORD **)v16[2] == v16 )
        {
          v16 = (_QWORD *)v16[2];
        }
        else
        {
          do
          {
            v19 = *(_QWORD *)v18;
            v20 = *(_QWORD **)(*(_QWORD *)v18 + 16LL);
            v18 = *(_QWORD *)v18 + 16LL;
            v16 = v20;
          }
          while ( *v20 != v19 );
        }
      }
    }
  }
  v5 = 1;
LABEL_5:
  v6 = *(_QWORD *)(a1 + 1912);
  *(_BYTE *)(a1 + 1932) = v5;
  if ( v6 && !*(_DWORD *)(a1 + 1928) && !v2 )
  {
    v7 = *(_QWORD **)(a1 + 1896);
    v8 = (_QWORD *)(a1 + 1904);
    if ( v7 != (_QWORD *)(a1 + 1904) )
    {
      do
      {
        while ( 1 )
        {
          sub_4AC94((__int64 **)(a1 + 432), v7 + 4);
          v9 = (_QWORD *)v7[1];
          if ( !v9 )
            break;
          do
          {
            v7 = v9;
            v9 = (_QWORD *)*v9;
          }
          while ( v9 );
LABEL_14:
          if ( v7 == v8 )
            goto LABEL_17;
        }
        v10 = (__int64)(v7 + 2);
        v11 = (_QWORD *)v7[2];
        if ( (_QWORD *)*v11 != v7 )
        {
          do
          {
            v12 = *(_QWORD *)v10;
            v13 = *(_QWORD **)(*(_QWORD *)v10 + 16LL);
            v10 = *(_QWORD *)v10 + 16LL;
            v7 = v13;
          }
          while ( *v13 != v12 );
          goto LABEL_14;
        }
        v7 = (_QWORD *)v7[2];
      }
      while ( v11 != v8 );
    }
LABEL_17:
    sub_475E4(a1 + 1896, *(_QWORD **)(a1 + 1904));
    *(_QWORD *)(a1 + 1896) = v8;
    *(_OWORD *)(a1 + 1904) = 0u;
  }
  if ( a2 )
    v14 = sub_409C0(a1, a2, 0);
  else
    v14 = sub_409C0(a1, 0, 1) != 0;
  return v14 != 0;
}
