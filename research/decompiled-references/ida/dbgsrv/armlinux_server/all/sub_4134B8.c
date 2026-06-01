/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4134B8
// Address: 0x00000000004134B8

//----- (00000000004134B8) ----------------------------------------------------
__int64 __fastcall sub_4134B8(__int64 a1, __int64 a2)
{
  __int64 v2; // x5
  __int64 v4; // x3
  int v5; // w2
  __int64 v6; // x0
  bool v7; // w0
  unsigned int v8; // w1
  int v11; // w2
  int v13; // w2
  int v14; // w1

  if ( a2 )
  {
    v2 = a1 + 1920;
    v4 = *(_QWORD *)(a1 + 1928);
    v5 = *(_DWORD *)(a2 + 4);
    if ( !v4 )
      goto LABEL_8;
    v6 = a1 + 1920;
    do
    {
      while ( v5 <= *(_DWORD *)(v4 + 32) )
      {
        v6 = v4;
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v4 )
          goto LABEL_6;
      }
      v4 = *(_QWORD *)(v4 + 24);
    }
    while ( v4 );
LABEL_6:
    if ( v2 != v6 && v5 >= *(_DWORD *)(v6 + 32) )
    {
      if ( v6 != -40 || v5 == 0 )
      {
        if ( v6 != -40 )
        {
          v11 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
          if ( (unsigned int)(v11 - 8) > 1 && (unsigned int)(v11 - 3) > 1 )
          {
            if ( v11 == 7 )
            {
              if ( *(_BYTE *)(a2 + 16) )
                *(_DWORD *)(v6 + 52) = 0;
            }
            else
            {
              *(_DWORD *)(v6 + 52) = 0;
            }
          }
          v13 = *(_DWORD *)(v6 + 60);
          if ( v13 == 2 )
          {
            v14 = *(_DWORD *)(v6 + 40);
            *(_QWORD *)(v6 + 44) = 0;
            sub_412410(a1, v14, 0);
          }
          else if ( v13 == 3 )
          {
            sub_40B690(a1, (_QWORD *)*(unsigned int *)(a2 + 4));
          }
        }
        goto LABEL_11;
      }
    }
    else
    {
LABEL_8:
      if ( !v5 )
        goto LABEL_11;
    }
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 4 && !*(_BYTE *)(a1 + 2053) )
    {
      sub_40AB98(a1, (__int64)"could not find thread %d!\n", v5);
      return (unsigned int)-1;
    }
LABEL_11:
    *(_BYTE *)(a1 + 2118) = 0;
    v7 = sub_4133A8(a1, 0);
    v8 = 1;
    if ( !v7 )
      return (unsigned int)-1;
    return v8;
  }
  return 0xFFFFFFFFLL;
}
