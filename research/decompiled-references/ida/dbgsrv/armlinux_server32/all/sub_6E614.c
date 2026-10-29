/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E614
// Address: 0x0006E614

//----- (0006E614) --------------------------------------------------------
void __fastcall sub_6E614(int a1, int a2)
{
  unsigned int v4; // r3
  bool v5; // zf
  char v6; // r2
  int v7; // r3
  int v8; // r3
  bool v9; // zf
  bool v10; // r2
  unsigned int v12; // r6
  bool v13; // cc
  unsigned int v14; // r3
  bool v15; // cc
  unsigned int v16; // r6
  int v17; // r1
  unsigned int v18; // r6
  const void *v19; // r8
  void *v20; // r0
  const void *v21; // r8
  const void *v22; // r8

  if ( a1 != a2 )
  {
    sub_6E52C((_DWORD *)a1, *(_DWORD *)(a2 + 16) & 0xFFFFFFF);
    v4 = *(_DWORD *)(a2 + 16) & 0xFFFFFFF;
    switch ( v4 )
    {
      case 1u:
      case 8u:
      case 0xBu:
        v5 = v4 == 1;
        if ( v4 != 1 )
          v5 = v4 == 11;
        v6 = !v5;
        if ( v4 == 8 )
          v7 = 0;
        else
          v7 = v6 & 1;
        if ( !v7 )
        {
          v8 = *(_DWORD *)(a1 + 16) & 0xFFFFFFF;
          v9 = v8 == 1;
          if ( v8 != 1 )
            v9 = v8 == 11;
          v10 = !v9;
          if ( v8 == 8 || !v10 )
          {
            if ( a1 + 20 != a2 + 20 )
            {
              v12 = *(_DWORD *)(a2 + 24);
              if ( v12 > 1 )
              {
                v21 = *(const void **)(a2 + 20);
                if ( v12 > *(_DWORD *)(a1 + 28) )
                  *(_DWORD *)(a1 + 20) = sub_78018(a1 + 20, *(void **)(a1 + 20), *(_DWORD *)(a2 + 24), 1u);
                *(_DWORD *)(a1 + 24) = v12;
                memmove(*(void **)(a1 + 20), v21, v12 - 1);
                *(_BYTE *)(*(_DWORD *)(a1 + 20) + v12 - 1) = 0;
              }
              else
              {
                *(_DWORD *)(a1 + 24) = 0;
              }
            }
            *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
            *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
            goto LABEL_25;
          }
        }
        if ( !under_debugger )
          sub_78C64(3295);
        break;
      case 2u:
      case 4u:
        if ( ((v4 - 2) & 0xFFFFFFFD) == 0 && (((*(_DWORD *)(a1 + 16) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
        {
          *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
LABEL_25:
          *(_DWORD *)a1 = *(_DWORD *)a2;
          *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
          *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
          *(_BYTE *)(a1 + 12) = *(_BYTE *)(a2 + 12);
          return;
        }
        if ( !under_debugger )
          sub_78C64(3296);
        return;
      case 3u:
      case 9u:
      case 0xAu:
        v13 = v4 > 3;
        if ( v4 != 3 )
          v13 = v4 - 9 > 1;
        if ( !v13 )
        {
          v14 = *(_DWORD *)(a1 + 16) & 0xFFFFFFF;
          v15 = v14 > 3;
          if ( v14 != 3 )
            v15 = v14 - 9 > 1;
          if ( !v15 )
          {
            v16 = *(_DWORD *)(a2 + 24);
            if ( v16 > 1 )
            {
              v19 = *(const void **)(a2 + 20);
              v20 = *(void **)(a1 + 20);
              if ( v16 > *(_DWORD *)(a1 + 28) )
              {
                v20 = sub_78018(a1 + 20, *(void **)(a1 + 20), *(_DWORD *)(a2 + 24), 1u);
                *(_DWORD *)(a1 + 20) = v20;
              }
              *(_DWORD *)(a1 + 24) = v16;
              memmove(v20, v19, v16 - 1);
              *(_BYTE *)(*(_DWORD *)(a1 + 20) + v16 - 1) = 0;
            }
            else
            {
              *(_DWORD *)(a1 + 24) = 0;
            }
            goto LABEL_25;
          }
        }
        if ( !under_debugger )
          sub_78C64(3297);
        break;
      case 5u:
        if ( (*(_DWORD *)(a1 + 16) & 0xFFFFFFF) == 5 )
        {
          v17 = *(_DWORD *)(a2 + 24);
          *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
          *(_DWORD *)(a1 + 24) = v17;
          goto LABEL_25;
        }
        if ( !under_debugger )
          sub_78C64(3298);
        return;
      case 7u:
        if ( (*(_DWORD *)(a1 + 16) & 0xFFFFFFF) == 7 )
        {
          *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
          *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
          *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
          if ( a1 + 32 != a2 + 32 )
          {
            v18 = *(_DWORD *)(a2 + 36);
            if ( v18 > 1 )
            {
              v22 = *(const void **)(a2 + 32);
              if ( v18 > *(_DWORD *)(a1 + 40) )
                *(_DWORD *)(a1 + 32) = sub_78018(a1 + 32, *(void **)(a1 + 32), *(_DWORD *)(a2 + 36), 1u);
              *(_DWORD *)(a1 + 36) = v18;
              memmove(*(void **)(a1 + 32), v22, v18 - 1);
              *(_BYTE *)(*(_DWORD *)(a1 + 32) + v18 - 1) = 0;
            }
            else
            {
              *(_DWORD *)(a1 + 36) = 0;
            }
          }
          goto LABEL_25;
        }
        if ( !under_debugger )
          sub_78C64(3299);
        break;
      default:
        goto LABEL_25;
    }
    __und(0xFFu);
  }
}
// D6C20: using guessed type char under_debugger;
