/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D78EC
// Address: 0x00000000000D78EC

//----- (00000000000D78EC) ----------------------------------------------------
unsigned __int64 __fastcall sub_D78EC(unsigned __int16 **a1, unsigned int a2)
{
  unsigned __int16 *v2; // x10
  unsigned __int64 v3; // x8
  unsigned __int16 *v4; // x9
  int v5; // w11
  __int64 v6; // x11
  char v7; // t1
  unsigned __int64 v9; // x11
  __int64 v10; // x8
  char v11; // w12
  char v12; // t1
  bool v13; // w14
  __int64 v14; // x11

  if ( (_BYTE)a2 == 0xFF )
    return 0;
  v2 = *a1;
  switch ( a2 & 0xF )
  {
    case 0u:
    case 4u:
    case 0xCu:
      v4 = v2 + 4;
      v3 = *(_QWORD *)v2;
      v5 = (a2 >> 4) & 7;
      if ( !v5 )
        goto LABEL_12;
      goto LABEL_9;
    case 1u:
      v6 = 0;
      v3 = 0;
      v4 = *a1;
      do
      {
        v7 = *(_BYTE *)v4;
        v4 = (unsigned __int16 *)((char *)v4 + 1);
        v3 |= (unsigned __int64)(v7 & 0x7F) << v6;
        v6 += 7;
      }
      while ( v7 < 0 );
      v5 = (a2 >> 4) & 7;
      if ( v5 )
        goto LABEL_9;
      goto LABEL_12;
    case 2u:
      v4 = v2 + 1;
      v3 = *v2;
      v5 = (a2 >> 4) & 7;
      if ( !v5 )
        goto LABEL_12;
      goto LABEL_9;
    case 3u:
      v4 = v2 + 2;
      v3 = *(unsigned int *)v2;
      v5 = (a2 >> 4) & 7;
      if ( !v5 )
        goto LABEL_12;
      goto LABEL_9;
    case 9u:
      v9 = 0;
      v10 = 0;
      v4 = *a1;
      do
      {
        v12 = *(_BYTE *)v4;
        v4 = (unsigned __int16 *)((char *)v4 + 1);
        v11 = v12;
        v10 |= (unsigned __int64)(v12 & 0x7F) << v9;
        v9 += 7LL;
      }
      while ( v12 < 0 );
      v13 = v9 < 0x40;
      v14 = -1LL << v9;
      if ( (*(_DWORD *)&v13 & ((unsigned __int8)(v11 & 0x40) >> 6)) == 0 )
        v14 = 0;
      v3 = v10 | v14;
      v5 = (a2 >> 4) & 7;
      if ( !v5 )
        goto LABEL_12;
      goto LABEL_9;
    case 0xAu:
      v4 = v2 + 1;
      v3 = (__int16)*v2;
      v5 = (a2 >> 4) & 7;
      if ( !v5 )
        goto LABEL_12;
      goto LABEL_9;
    case 0xBu:
      v4 = v2 + 2;
      v3 = *(int *)v2;
      v5 = (a2 >> 4) & 7;
      if ( !v5 )
        goto LABEL_12;
LABEL_9:
      if ( v5 != 1 )
        goto LABEL_31;
      if ( v3 )
      {
        v3 += (unsigned __int64)v2;
LABEL_12:
        if ( (char)a2 < 0 && v3 )
          v3 = *(_QWORD *)v3;
      }
      *a1 = v4;
      break;
    default:
LABEL_31:
      abort();
  }
  return v3;
}
