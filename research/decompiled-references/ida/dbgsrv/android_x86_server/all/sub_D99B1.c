/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D99B1
// Address: 0x000D99B1

//----- (000D99B1) --------------------------------------------------------
int __usercall sub_D99B1@<eax>(unsigned __int8 *a1@<eax>, unsigned int a2@<edx>, int a3, int a4)
{
  int v4; // edi
  int v5; // ecx
  unsigned __int8 *v6; // esi
  unsigned __int8 v7; // dl
  bool v8; // zf
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  _BYTE *v12; // eax
  int GR; // eax
  _BYTE *v14; // esi
  _BYTE *v15; // eax
  unsigned __int8 *v16; // eax
  unsigned __int8 *v17; // eax
  unsigned __int8 *v18; // eax
  int v19; // edx
  int v20; // edx
  int v21; // eax
  unsigned int v22; // ecx
  unsigned __int8 v23; // al
  signed int v24; // edi
  int v25; // eax
  int v26; // edi
  int v27; // eax
  int v30; // [esp+4h] [ebp-138h]
  int v31; // [esp+8h] [ebp-134h]
  char v32; // [esp+10h] [ebp-12Ch]
  int v33; // [esp+10h] [ebp-12Ch]
  int v34; // [esp+10h] [ebp-12Ch]
  int v35; // [esp+10h] [ebp-12Ch]
  int v36; // [esp+10h] [ebp-12Ch]
  int v37; // [esp+14h] [ebp-128h] BYREF
  int v38; // [esp+18h] [ebp-124h] BYREF
  int v39; // [esp+1Ch] [ebp-120h] BYREF
  int v40; // [esp+20h] [ebp-11Ch] BYREF
  _DWORD v41[70]; // [esp+24h] [ebp-118h]

  v4 = 1;
  v41[0] = a4;
  while ( (unsigned int)a1 < a2 )
  {
    v5 = *a1;
    v6 = a1 + 1;
    v7 = *a1;
    if ( (unsigned __int8)v5 > 0x20u )
    {
      if ( (unsigned __int8)v5 > 0x4Fu )
      {
        if ( (_BYTE)v5 != 0x90 )
        {
          if ( (unsigned __int8)v5 > 0x90u )
          {
            if ( (_BYTE)v5 == 0x94 )
              goto LABEL_77;
            if ( (unsigned __int8)v5 > 0x94u )
            {
              if ( (_BYTE)v5 == 0x96 )
                goto LABEL_128;
              if ( (_BYTE)v5 != 0xF1 )
                goto LABEL_125;
              v14 = a1 + 2;
              v32 = a1[1];
              v15 = (_BYTE *)sub_D93ED(v32, a3);
              v16 = sub_D9080(v32, v15, v14, &v40);
              v9 = v40;
              v6 = v16;
              goto LABEL_126;
            }
            if ( (_BYTE)v5 != 0x92 )
              goto LABEL_125;
            v12 = sub_D9016(a1 + 1, &v37);
            v6 = sub_D9041(v12, &v39);
            GR = Unwind_GetGR(a3, v37);
          }
          else
          {
            if ( (unsigned __int8)v5 <= 0x6Fu )
            {
              v11 = Unwind_GetGR(a3, v5 - 80);
LABEL_61:
              v9 = v11;
              goto LABEL_126;
            }
            v33 = *a1;
            v6 = sub_D9041(a1 + 1, &v39);
            GR = Unwind_GetGR(a3, v33 - 112);
          }
          v11 = v39 + GR;
          goto LABEL_61;
        }
        v6 = sub_D9016(a1 + 1, &v37);
        v11 = Unwind_GetGR(a3, v37);
        goto LABEL_61;
      }
      if ( (unsigned __int8)v5 >= 0x30u )
      {
        v9 = v5 - 48;
        goto LABEL_126;
      }
      if ( (unsigned __int8)v5 <= 0x27u )
      {
        if ( (_BYTE)v5 != 35 )
          goto LABEL_98;
LABEL_77:
        if ( !v4 )
          goto LABEL_125;
        v22 = v41[--v4];
        if ( v7 == 31 )
        {
          v9 = -v22;
          goto LABEL_126;
        }
        if ( v7 > 0x1Fu )
        {
          if ( v7 == 35 )
          {
            v35 = v41[v4];
            v6 = sub_D9016(a1 + 1, &v38);
            v9 = v38 + v35;
            goto LABEL_126;
          }
          if ( v7 != 0x94 )
          {
            if ( v7 != 32 )
              goto LABEL_125;
            v9 = ~v22;
            goto LABEL_126;
          }
          v6 = a1 + 2;
          v23 = a1[1];
          if ( v23 == 2 )
          {
            v9 = *(unsigned __int16 *)v22;
            goto LABEL_126;
          }
          if ( v23 <= 2u )
          {
            if ( v23 != 1 )
              goto LABEL_125;
            v9 = *(unsigned __int8 *)v22;
            goto LABEL_126;
          }
          if ( v23 != 4 && v23 != 8 )
            goto LABEL_125;
        }
        else if ( v7 != 6 )
        {
          if ( v7 != 25 )
            goto LABEL_125;
          v9 = (v22 >> 31) + (-(v22 >> 31) ^ v22);
          goto LABEL_126;
        }
        v9 = *(_DWORD *)v22;
        goto LABEL_126;
      }
      if ( (unsigned __int8)v5 > 0x2Eu )
      {
        v6 = &a1[*(__int16 *)(a1 + 1) + 3];
      }
      else
      {
        if ( (unsigned __int8)v5 >= 0x29u )
        {
LABEL_98:
          if ( v4 > 1 )
          {
            v36 = v4 - 2;
            v24 = v41[v4 - 1];
            v25 = v41[v36];
            switch ( v7 )
            {
              case 0x1Au:
                v26 = v25 & v24;
                goto LABEL_105;
              case 0x1Bu:
                v27 = v25 / v24;
                goto LABEL_109;
              case 0x1Cu:
                v27 = v25 - v24;
                goto LABEL_109;
              case 0x1Du:
                v9 = v25 % (unsigned int)v24;
                goto LABEL_119;
              case 0x1Eu:
                v26 = v25 * v24;
                goto LABEL_105;
              case 0x21u:
                v26 = v25 | v24;
                goto LABEL_105;
              case 0x22u:
                v9 = v24 + v25;
                goto LABEL_119;
              case 0x24u:
                v27 = v25 << v24;
                goto LABEL_109;
              case 0x25u:
                v27 = (unsigned int)v25 >> v24;
                goto LABEL_109;
              case 0x26u:
                v27 = v25 >> v24;
LABEL_109:
                v9 = v27;
                goto LABEL_119;
              case 0x27u:
                v26 = v25 ^ v24;
LABEL_105:
                v9 = v26;
                goto LABEL_119;
              case 0x29u:
                LOBYTE(v9) = v25 == v24;
                goto LABEL_118;
              case 0x2Au:
                LOBYTE(v9) = v25 >= v24;
                goto LABEL_118;
              case 0x2Bu:
                LOBYTE(v9) = v25 > v24;
                goto LABEL_118;
              case 0x2Cu:
                LOBYTE(v9) = v25 <= v24;
                goto LABEL_118;
              case 0x2Du:
                LOBYTE(v9) = v25 < v24;
                goto LABEL_118;
              case 0x2Eu:
                LOBYTE(v9) = v25 != v24;
LABEL_118:
                v9 = (unsigned __int8)v9;
LABEL_119:
                v4 = v36;
                goto LABEL_126;
              default:
                break;
            }
          }
LABEL_125:
          abort();
        }
        if ( !v4 )
          goto LABEL_125;
        --v4;
        v6 = a1 + 3;
        if ( v41[v4] )
          v6 += *(__int16 *)(a1 + 1);
      }
    }
    else
    {
      if ( (unsigned __int8)v5 >= 0x1Fu )
        goto LABEL_77;
      if ( (_BYTE)v5 == 16 )
      {
        v17 = sub_D9016(a1 + 1, &v38);
        v9 = v38;
        v6 = v17;
        goto LABEL_126;
      }
      if ( (unsigned __int8)v5 <= 0x10u )
      {
        if ( (_BYTE)v5 == 10 )
        {
          v9 = *(unsigned __int16 *)(a1 + 1);
        }
        else
        {
          if ( (unsigned __int8)v5 <= 0xAu )
          {
            if ( (_BYTE)v5 == 6 )
              goto LABEL_77;
            if ( (unsigned __int8)v5 > 6u )
            {
              v6 = a1 + 2;
              if ( (_BYTE)v5 == 8 )
              {
                v9 = a1[1];
              }
              else
              {
                if ( (_BYTE)v5 != 9 )
                  goto LABEL_125;
                v9 = (char)a1[1];
              }
              goto LABEL_126;
            }
            v8 = (_BYTE)v5 == 3;
LABEL_19:
            if ( !v8 )
              goto LABEL_125;
LABEL_57:
            v9 = *(_DWORD *)(a1 + 1);
            v6 = a1 + 5;
LABEL_126:
            if ( (unsigned int)v4 > 0x3F )
              goto LABEL_125;
            v41[v4++] = v9;
            goto LABEL_128;
          }
          if ( (_BYTE)v5 == 13 )
            goto LABEL_57;
          if ( (unsigned __int8)v5 > 0xDu )
          {
            v6 = a1 + 9;
            v9 = *(_DWORD *)(a1 + 1);
            goto LABEL_126;
          }
          if ( (_BYTE)v5 != 11 )
          {
            v8 = (_BYTE)v5 == 12;
            goto LABEL_19;
          }
          v9 = *(__int16 *)(a1 + 1);
        }
        v6 = a1 + 3;
        goto LABEL_126;
      }
      if ( (_BYTE)v5 == 21 )
      {
        v19 = a1[1];
        v6 = a1 + 2;
        v39 = v19;
        if ( v19 >= v4 - 1 )
          goto LABEL_125;
        v9 = v41[v4 - 1 - v19];
        goto LABEL_126;
      }
      if ( (unsigned __int8)v5 <= 0x15u )
      {
        if ( (_BYTE)v5 == 18 )
        {
          if ( !v4 )
            goto LABEL_125;
          v9 = v41[v4 - 1];
        }
        else if ( (unsigned __int8)v5 < 0x12u )
        {
          v18 = sub_D9041(a1 + 1, &v40);
          v9 = v40;
          v6 = v18;
        }
        else
        {
          if ( (_BYTE)v5 == 19 )
          {
            if ( !v4 )
              goto LABEL_125;
            --v4;
            goto LABEL_128;
          }
          if ( v4 <= 1 )
            goto LABEL_125;
          v9 = *(&v39 + v4);
        }
        goto LABEL_126;
      }
      if ( (_BYTE)v5 == 25 )
        goto LABEL_77;
      if ( (unsigned __int8)v5 > 0x19u )
        goto LABEL_98;
      v10 = v4 - 1;
      if ( (_BYTE)v5 == 22 )
      {
        if ( v4 <= 1 )
          goto LABEL_125;
        v20 = v4 - 2;
        v34 = v41[v10];
        v41[v10] = v41[v4 - 2];
        v21 = v34;
      }
      else
      {
        if ( (_BYTE)v5 != 23 || v4 <= 2 )
          goto LABEL_125;
        v20 = v4 - 3;
        v31 = v41[v10];
        v30 = v41[v4 - 3];
        v41[v10] = v41[v4 - 2];
        v41[v4 - 2] = v30;
        v21 = v31;
      }
      v41[v20] = v21;
    }
LABEL_128:
    a1 = v6;
  }
  if ( !v4 )
    goto LABEL_125;
  return v41[v4 - 1];
}
// D9A84: conditional instruction was optimized away because cl.1==F
// D9AB5: conditional instruction was optimized away because cl.1==14
