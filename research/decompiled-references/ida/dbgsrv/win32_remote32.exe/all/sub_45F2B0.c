/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F2B0
// Address: 0x0045F2B0

//----- (0045F2B0) --------------------------------------------------------
char __stdcall sub_45F2B0(int a1, char a2, char a3, int a4, int a5)
{
  bool v5; // bl
  int v6; // eax
  int v7; // edi
  int v8; // eax
  char v9; // cl
  unsigned __int16 v10; // dx
  __int16 v11; // bp
  int v12; // ebx
  unsigned __int16 v13; // cx
  int v14; // ebx
  __int16 v15; // dx
  __int16 v16; // ax
  int v17; // ebx
  _WORD *v18; // ecx
  unsigned __int16 v19; // cx
  __int16 v20; // cx
  __int16 v22; // [esp+Ch] [ebp-30h]
  int v23; // [esp+10h] [ebp-2Ch]
  _WORD *v24; // [esp+10h] [ebp-2Ch]
  int v25; // [esp+14h] [ebp-28h]
  __int16 v26; // [esp+18h] [ebp-24h]
  char v27; // [esp+1Ch] [ebp-20h]
  __int128 v28; // [esp+20h] [ebp-1Ch] BYREF
  int v29; // [esp+30h] [ebp-Ch]
  __int16 v30; // [esp+34h] [ebp-8h]

  v5 = *(_WORD *)(a1 + 2) != 0;
  v6 = sub_45DE10((_WORD *)a1);
  if ( v6 > 112 )
    goto LABEL_48;
  v7 = a4 - v6;
  if ( a4 - v6 >= 0x7FFF )
    goto LABEL_47;
  if ( v7 >= 0 )
  {
    v27 = a2;
    goto LABEL_9;
  }
  if ( v7 > -113 )
  {
    v8 = sub_45F7E0((_WORD *)a1, a4 - v6);
    v9 = a2;
    if ( v8 != 1 )
      v9 = 1;
    v27 = v9;
LABEL_9:
    if ( a5 )
    {
      v29 = 0;
      v30 = 0;
      v28 = 0;
      switch ( a5 )
      {
        case 24:
          v15 = 255;
          v25 = 8;
          v26 = 255;
          WORD4(v28) = 256;
          v22 = 256;
          v11 = 128;
          v23 = 8;
          v17 = 5;
          goto LABEL_18;
        case 53:
          v15 = 2047;
          v11 = 1024;
          v26 = 2047;
          v16 = 2048;
          goto LABEL_17;
        case 56:
          v15 = 255;
          v16 = 256;
          v26 = 255;
          v11 = 128;
LABEL_17:
          WORD6(v28) = v16;
          v17 = 7;
          v22 = v16;
          v25 = 12;
          v23 = 12;
          goto LABEL_18;
        case 64:
          v10 = *(_WORD *)(a1 + 14);
          WORD6(v28) = 1;
          v11 = 0x8000;
          v12 = 8;
          v22 = 1;
          do
          {
            v13 = v10 | 1;
            if ( !*(_WORD *)(a1 + 2 * v12) )
              v13 = v10;
            *(_WORD *)(a1 + 2 * v12) = 0;
            v10 = v13;
            ++v12;
          }
          while ( v12 < 11 );
          v14 = 12;
          goto LABEL_26;
        default:
          v15 = -1;
          HIWORD(v29) = 1;
          v23 = 20;
          v11 = 0x8000;
          v26 = -1;
          v17 = 11;
          v22 = 1;
          v25 = 18;
          if ( a5 < 64 )
          {
LABEL_18:
            if ( v7 <= 0 )
              sub_45E090((_WORD *)a1);
            v18 = (_WORD *)(a1 + v23);
            v24 = v18;
            v10 = v15 & *v18;
            if ( (unsigned int)v17 < 0xB )
            {
              do
              {
                v19 = v10 | 1;
                if ( !*(_WORD *)(a1 + 2 * v17) )
                  v19 = v10;
                *(_WORD *)(a1 + 2 * v17) = 0;
                v10 = v19;
                ++v17;
              }
              while ( v17 < 11 );
              v18 = v24;
            }
            v14 = v25;
            *v18 &= ~v26;
LABEL_26:
            v20 = v22;
          }
          else
          {
            v10 = *(_WORD *)(a1 + 20);
            v20 = 1;
            v14 = 18;
          }
          if ( ((unsigned __int16)v11 & v10) == 0 )
            goto LABEL_38;
          if ( v10 != v11 )
            goto LABEL_37;
          if ( v27 )
          {
            if ( a3 )
              goto LABEL_38;
          }
          else if ( ((unsigned __int16)v20 & *(_WORD *)(v14 + a1)) == 0 )
          {
            goto LABEL_38;
          }
LABEL_37:
          sub_45D960(&v28, (_WORD *)a1);
LABEL_38:
          if ( a5 < 64 && v7 <= 0 )
            sub_45E2E0((_WORD *)a1);
          if ( *(_WORD *)(a1 + 4) )
          {
            sub_45E090((_WORD *)a1);
            ++v7;
          }
          break;
      }
    }
    *(_WORD *)(a1 + 20) = 0;
    if ( v7 < 0x7FFF )
    {
      if ( v7 > 0 )
      {
        *(_WORD *)(a1 + 2) = v7;
        return 1;
      }
      goto LABEL_45;
    }
LABEL_47:
    v5 = 1;
    goto LABEL_48;
  }
LABEL_45:
  v5 = 0;
LABEL_48:
  *(_OWORD *)a1 = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_WORD *)(a1 + 20) = 0;
  return v5;
}
// 45F3F8: variable 'v15' is possibly undefined
