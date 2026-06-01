/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71560
// Address: 0x00071560

//----- (00071560) --------------------------------------------------------
int __fastcall sub_71560(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r9
  int v10; // r0
  int result; // r0
  int v12; // r5
  int v13; // r1
  unsigned __int16 *v14; // r3
  int v16; // r10
  __int16 v17; // r2
  int v18; // r9
  int v19; // r11
  __int16 v20; // r1
  __int16 *v21; // r3
  _WORD *v22; // r9
  int v23; // t1
  __int16 v24; // r0
  _WORD *v25; // r0
  char *v26; // r7
  unsigned int v27; // r3
  int v28; // t1
  unsigned int v29; // r3
  bool v30; // cc
  int v31; // [sp+4h] [bp-38h]
  __int16 v32; // [sp+8h] [bp-34h]
  __int16 v33; // [sp+10h] [bp-2Ch]
  __int16 v34; // [sp+14h] [bp-28h]
  __int16 v35; // [sp+30h] [bp-Ch]
  char v36; // [sp+32h] [bp-Ah] BYREF

  v9 = *(unsigned __int16 *)(a1 + 2);
  v10 = sub_71334((unsigned __int16 *)a1);
  if ( v10 > 112 )
  {
    result = v9;
    if ( v9 )
      result = 1;
    goto LABEL_4;
  }
  v12 = a4 - v10;
  if ( v12 > 32766 )
  {
LABEL_8:
    result = 1;
    goto LABEL_4;
  }
  if ( v12 >= 0 )
    goto LABEL_10;
  if ( v12 >= -112 )
  {
    if ( sub_713F4(a1, v12) != 1 )
      a2 = 1;
LABEL_10:
    if ( a5 )
    {
      v35 = 0;
      switch ( a5 )
      {
        case 24:
          v17 = -256;
          v18 = 5;
          v32 = 256;
          v19 = 8;
          v16 = 128;
          v20 = 255;
          v31 = 4;
          goto LABEL_24;
        case 53:
          v17 = -2048;
          v32 = 2048;
          v18 = 7;
          v19 = 12;
          v16 = 1024;
          v20 = 2047;
          v31 = 6;
          goto LABEL_24;
        case 56:
          v17 = -256;
          v18 = 7;
          v19 = 12;
          v16 = 128;
          v20 = 255;
          v32 = 256;
          v31 = 6;
LABEL_24:
          v21 = (__int16 *)(a1 + v19);
          if ( v12 <= 0 )
          {
            v33 = v20;
            v34 = v17;
            sub_70FFC(a1);
            v17 = v34;
            v21 = (__int16 *)(a1 + v19);
            v13 = (unsigned __int16)(v33 & *(_WORD *)(a1 + v19));
          }
          else
          {
            v13 = (unsigned __int16)(v20 & *(_WORD *)(a1 + v19));
          }
          v22 = (_WORD *)(a1 + 2 * (v18 + 0x7FFFFFFF));
          do
          {
            v23 = (unsigned __int16)v22[1];
            ++v22;
            if ( v23 )
              v13 |= 1u;
            *v22 = 0;
          }
          while ( (_WORD *)(a1 + 20) != v22 );
          v24 = *v21;
          goto LABEL_31;
        case 64:
          v13 = *(unsigned __int16 *)(a1 + 14);
          v14 = (unsigned __int16 *)(a1 + 16);
          do
          {
            if ( *v14++ )
              v13 |= 1u;
            *(v14 - 1) = 0;
          }
          while ( v14 != (unsigned __int16 *)(a1 + 22) );
          if ( (v13 & 0x8000) == 0 )
            goto LABEL_40;
          v31 = 6;
          v32 = 1;
          v16 = 0x8000;
          goto LABEL_32;
        default:
          v21 = (__int16 *)(a1 + 20);
          if ( a5 <= 63 )
          {
            if ( v12 <= 0 )
            {
              v32 = 1;
              v16 = 0x8000;
              sub_70FFC(a1);
              v13 = *(unsigned __int16 *)(a1 + 20);
              v31 = 9;
              v17 = 0;
              v21 = (__int16 *)(a1 + 20);
            }
            else
            {
              v13 = *(unsigned __int16 *)(a1 + 20);
              v32 = 1;
              v16 = 0x8000;
              v31 = 9;
              v17 = 0;
            }
            v24 = *(_WORD *)(a1 + 20);
LABEL_31:
            *v21 = v17 & v24;
            if ( (v13 & v16) == 0 )
              goto LABEL_35;
          }
          else
          {
            v13 = *(unsigned __int16 *)(a1 + 20);
            if ( (v13 & 0x8000) == 0 )
              goto LABEL_40;
            v32 = 1;
            v31 = 9;
            v16 = 0x8000;
          }
LABEL_32:
          if ( v13 == v16 )
          {
            if ( a2 )
            {
              if ( a3 )
                goto LABEL_35;
            }
            else if ( ((unsigned __int16)v32 & *(_WORD *)(a1 + 2 * v31)) == 0 )
            {
              goto LABEL_35;
            }
          }
          v25 = (_WORD *)(a1 + 20);
          v26 = &v36;
          v27 = 0;
          do
          {
            v28 = *((unsigned __int16 *)v26 - 1);
            v26 -= 2;
            v29 = v27 + v28 + (unsigned __int16)*v25;
            *v25-- = v29;
            v27 = HIWORD(v29);
          }
          while ( v25 != (_WORD *)(a1 + 2) );
LABEL_35:
          v30 = a5 <= 63;
          if ( a5 <= 63 )
            v30 = v12 <= 0;
          if ( v30 )
            sub_7103C(a1);
LABEL_40:
          if ( !*(_WORD *)(a1 + 4) )
            break;
          ++v12;
          sub_70FFC(a1);
          *(_WORD *)(a1 + 20) = 0;
          if ( v12 != 0x7FFF )
            goto LABEL_12;
          goto LABEL_8;
      }
    }
    *(_WORD *)(a1 + 20) = 0;
LABEL_12:
    if ( v12 > 0 )
    {
      *(_WORD *)(a1 + 2) = v12;
      return 1;
    }
  }
  result = 0;
LABEL_4:
  if ( a1 )
  {
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_WORD *)(a1 + 20) = 0;
  }
  return result;
}
