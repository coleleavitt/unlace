/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_545E8
// Address: 0x000545E8

//----- (000545E8) --------------------------------------------------------
int __fastcall sub_545E8(int a1, unsigned __int8 *a2, int a3)
{
  _DWORD *v5; // r7
  int v6; // r1
  __int64 v7; // r0
  unsigned int v8; // r2
  __int64 v9; // kr00_8
  unsigned int v10; // r2
  int v11; // r0
  unsigned int v12; // r2
  unsigned int v13; // r2
  _BOOL4 v14; // r1
  unsigned __int8 *v16; // [sp+10h] [bp-30h]
  int v17; // [sp+18h] [bp-28h]
  unsigned __int8 v18[8]; // [sp+1Ch] [bp-24h] BYREF
  _BOOL4 v19; // [sp+24h] [bp-1Ch]
  unsigned int v20; // [sp+28h] [bp-18h]
  unsigned __int8 v21[8]; // [sp+2Ch] [bp-14h] BYREF
  __int64 v22; // [sp+34h] [bp-Ch]
  int v23; // [sp+3Ch] [bp-4h]

  sub_539B0(a1, a2, a3);
  v17 = a1 + 444;
  v16 = a2;
  v5 = a2 + 8;
  while ( 1 )
  {
    v21[0] = 1;
    v22 = 0;
    v6 = *(unsigned __int16 *)(*(_DWORD *)v17 + 12);
    if ( v6 != 8509 )
      break;
    sub_539B0(a1, v21, 1);
    v9 = v22;
    v10 = v5[1];
    v5[1] = 0;
    *v5 = v9 != __PAIR64__(v10, *v5);
LABEL_2:
    *v16 = 0;
  }
  if ( v6 == 15677 )
  {
    sub_539B0(a1, v21, 1);
    v7 = v22;
    v8 = v5[1];
    v5[1] = 0;
    *v5 = v7 == __PAIR64__(v8, *v5);
    goto LABEL_2;
  }
  if ( *(_WORD *)(*(_DWORD *)v17 + 12) == 38 )
  {
LABEL_8:
    v18[0] = 1;
    v19 = 0;
    v20 = 0;
    sub_539B0(a1, v18, 1);
    while ( 1 )
    {
      v21[0] = 1;
      v22 = 0;
      v11 = *(unsigned __int16 *)(*(_DWORD *)v17 + 12);
      if ( v11 == 8509 )
      {
        sub_539B0(a1, v21, 1);
        v13 = v20;
        v20 = 0;
        v19 = v22 != __PAIR64__(v13, v19);
      }
      else
      {
        if ( v11 != 15677 )
        {
          v14 = v19;
          v5[1] &= v20;
          *v5 &= v14;
          if ( *(_WORD *)(*(_DWORD *)v17 + 12) != 38 )
            return _stack_chk_guard - v23;
          goto LABEL_8;
        }
        sub_539B0(a1, v21, 1);
        v12 = v20;
        v20 = 0;
        v19 = v22 == __PAIR64__(v12, v19);
      }
      v18[0] = 0;
    }
  }
  return _stack_chk_guard - v23;
}
