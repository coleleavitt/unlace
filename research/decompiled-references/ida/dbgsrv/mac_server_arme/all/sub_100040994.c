/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100040994
// Address: 0x0000000100040994

//----- (0000000100040994) ----------------------------------------------------
__int64 __fastcall sub_100040994(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x8
  unsigned __int8 *v4; // x8
  int v5; // w10
  unsigned __int8 *v6; // x9
  int v7; // w8
  int v8; // w10
  __int64 v9; // x8
  int v10; // w9
  int v11; // w10
  int v12; // w9
  int v13; // w8
  int v15; // [xsp+4h] [xbp-2Ch] BYREF

  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        v4 = *(unsigned __int8 **)(a1 + 8);
        if ( *(_BYTE *)(a1 + 128) != 1 )
          goto LABEL_19;
        while ( 1 )
        {
          while ( 1 )
          {
            v6 = v4;
            v7 = *v4;
            if ( v7 == 42 )
              break;
            if ( !v7 )
              goto LABEL_3;
            v4 = v6 + 1;
            *(_QWORD *)(a1 + 8) = v6 + 1;
          }
          v4 = v6 + 1;
          *(_QWORD *)(a1 + 8) = v6 + 1;
          v8 = v6[1];
          if ( v8 == 47 )
          {
            v5 = 1;
            goto LABEL_8;
          }
          if ( v8 == 41 )
          {
            v5 = 2;
LABEL_8:
            if ( (*(_DWORD *)(a1 + 612) & v5) != 0 )
              break;
          }
        }
        v4 = v6 + 2;
        *(_QWORD *)(a1 + 8) = v6 + 2;
        *(_BYTE *)(a1 + 128) = 0;
        while ( 1 )
        {
LABEL_19:
          v10 = *v4++;
          if ( (unsigned int)(v10 - 9) < 5 )
            goto LABEL_18;
          if ( *(v4 - 1) > 0x27u )
            break;
          if ( v10 != 32 )
          {
            if ( !*(v4 - 1) )
              goto LABEL_3;
            return 0;
          }
LABEL_18:
          *(_QWORD *)(a1 + 8) = v4;
        }
        if ( v10 == 40 )
        {
          v11 = 2;
          goto LABEL_31;
        }
        if ( v10 == 47 )
        {
          v11 = 1;
LABEL_31:
          v12 = *(_DWORD *)(a1 + 612);
          if ( (v12 & v11) != 0 )
          {
            v13 = *v4;
            if ( v13 == 47 )
            {
              if ( (v12 & 4) != 0 )
                goto LABEL_3;
            }
            else if ( v13 == 42 )
            {
              *(_BYTE *)(a1 + 128) = 1;
              continue;
            }
          }
          return 0;
        }
        break;
      }
      if ( v10 != 59 || (*(_BYTE *)(a1 + 612) & 8) == 0 )
        return 0;
LABEL_3:
      v2 = *(_QWORD *)(a1 + 64);
      if ( v2 )
      {
        v3 = *(_QWORD *)(a1 + 56) + 56 * v2;
        *(_QWORD *)a1 = *(_QWORD *)(v3 - 32);
        *(_QWORD *)(a1 + 8) = *(_QWORD *)(v3 - 24);
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(v3 - 8);
        sub_10003F3C8((__int64 *)(a1 + 56));
        continue;
      }
      break;
    }
    *(_BYTE *)(a1 + 320) = 0;
    v9 = sub_100040B80(a1, &v15);
    if ( !v15 )
    {
      *(_QWORD *)a1 = v9;
      *(_QWORD *)(a1 + 8) = v9;
      *(_QWORD *)(a1 + 16) = v9;
      *(_BYTE *)(a1 + 320) = 1;
      continue;
    }
    break;
  }
  if ( v15 == -1 || v15 == 34 )
    return 34;
  else
    return set_qerrno();
}
