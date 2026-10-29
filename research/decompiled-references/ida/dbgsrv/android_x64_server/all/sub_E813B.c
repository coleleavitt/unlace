/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E813B
// Address: 0x00000000000E813B

//----- (00000000000E813B) ----------------------------------------------------
__int64 __fastcall sub_E813B(char *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  int v6; // ecx
  char *v7; // rbp
  char v8; // dl
  __int64 v9; // rsi
  unsigned __int8 *v10; // r9
  bool v11; // zf
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  char *v15; // rax
  char *v16; // rax
  int v17; // esi
  char v18; // bp
  char *v19; // rax
  char *v20; // rax
  char *v21; // rax
  char *v22; // rax
  __int64 GR; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdi
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int8 v35; // al
  __int64 v36; // rcx
  __int64 v37; // rax
  int v40; // [rsp+18h] [rbp-260h]
  __int64 v41; // [rsp+18h] [rbp-260h]
  __int64 v42; // [rsp+20h] [rbp-258h] BYREF
  __int64 v43; // [rsp+28h] [rbp-250h] BYREF
  __int64 v44; // [rsp+30h] [rbp-248h] BYREF
  __int64 v45; // [rsp+38h] [rbp-240h] BYREF
  _QWORD v46[71]; // [rsp+40h] [rbp-238h]

  v4 = 1;
  v46[0] = a4;
  while ( (unsigned __int64)a1 < a2 )
  {
    v6 = (unsigned __int8)*a1;
    v7 = a1 + 1;
    v8 = *a1;
    if ( (unsigned __int8)v6 > 0x20u )
    {
      if ( (unsigned __int8)v6 > 0x4Fu )
      {
        if ( (_BYTE)v6 == 0x90 )
        {
          v22 = sub_E7845(a1 + 1, &v42);
          v14 = v42;
          v7 = v22;
LABEL_63:
          GR = Unwind_GetGR(a3, v14);
        }
        else
        {
          if ( (unsigned __int8)v6 > 0x90u )
          {
            if ( (_BYTE)v6 == 0x94 )
              goto LABEL_81;
            if ( (unsigned __int8)v6 > 0x94u )
            {
              if ( (_BYTE)v6 == 0x96 )
                goto LABEL_132;
              if ( (_BYTE)v6 != 0xF1 )
                goto LABEL_129;
              v18 = a1[1];
              v19 = (char *)sub_E7BE2(v18, a3);
              v20 = sub_E78A7(v18, v19, a1 + 2, (unsigned __int64 *)&v45);
              goto LABEL_61;
            }
            if ( (_BYTE)v6 != 0x92 )
              goto LABEL_129;
            v15 = sub_E7845(a1 + 1, &v42);
            v16 = sub_E786B(v15, &v44);
            v17 = v42;
            v7 = v16;
          }
          else
          {
            if ( (unsigned __int8)v6 <= 0x6Fu )
            {
              v14 = v6 - 80;
              goto LABEL_63;
            }
            v40 = (unsigned __int8)*a1;
            v7 = sub_E786B(a1 + 1, &v44);
            v17 = v40 - 112;
          }
          v24 = Unwind_GetGR(a3, v17);
          GR = v44 + v24;
        }
        v9 = GR;
        goto LABEL_130;
      }
      if ( (unsigned __int8)v6 >= 0x30u )
      {
        v9 = (unsigned int)(v6 - 48);
        goto LABEL_130;
      }
      if ( (unsigned __int8)v6 <= 0x27u )
      {
        if ( (_BYTE)v6 != 35 )
          goto LABEL_104;
        goto LABEL_81;
      }
      if ( (unsigned __int8)v6 > 0x2Eu )
      {
        v7 = &a1[*(__int16 *)(a1 + 1) + 3];
      }
      else
      {
        if ( (unsigned __int8)v6 >= 0x29u )
        {
LABEL_104:
          if ( v4 > 1 )
          {
            v9 = v46[v4 - 2];
            v36 = v46[v4 - 1];
            switch ( v8 )
            {
              case 26:
                v9 &= v36;
                goto LABEL_123;
              case 27:
                v9 /= v36;
                goto LABEL_123;
              case 28:
                v9 -= v36;
                goto LABEL_123;
              case 29:
                v9 %= (unsigned __int64)v36;
                goto LABEL_123;
              case 30:
                v9 *= v36;
                goto LABEL_123;
              case 33:
                v9 |= v36;
                goto LABEL_123;
              case 34:
                v9 += v36;
                goto LABEL_123;
              case 36:
                v9 <<= v36;
                goto LABEL_123;
              case 37:
                v9 = (unsigned __int64)v9 >> v36;
                goto LABEL_123;
              case 38:
                v9 >>= v36;
                goto LABEL_123;
              case 39:
                v9 ^= v36;
                goto LABEL_123;
              case 41:
                LOBYTE(v9) = v9 == v36;
                goto LABEL_122;
              case 42:
                LOBYTE(v9) = v9 >= v36;
                goto LABEL_122;
              case 43:
                LOBYTE(v9) = v9 > v36;
                goto LABEL_122;
              case 44:
                LOBYTE(v9) = v9 <= v36;
                goto LABEL_122;
              case 45:
                LOBYTE(v9) = v9 < v36;
                goto LABEL_122;
              case 46:
                LOBYTE(v9) = v9 != v36;
LABEL_122:
                v9 = (unsigned __int8)v9;
LABEL_123:
                v4 -= 2;
                goto LABEL_130;
              default:
                break;
            }
          }
LABEL_129:
          abort();
        }
        if ( !v4 )
          goto LABEL_129;
        --v4;
        v7 = a1 + 3;
        if ( v46[v4] )
          v7 += *(__int16 *)(a1 + 1);
      }
    }
    else
    {
      if ( (unsigned __int8)v6 >= 0x1Fu )
        goto LABEL_81;
      if ( (_BYTE)v6 == 16 )
      {
        v21 = sub_E7845(a1 + 1, &v43);
        v9 = v43;
        v7 = v21;
        goto LABEL_130;
      }
      if ( (unsigned __int8)v6 <= 0x10u )
      {
        if ( (_BYTE)v6 == 10 )
        {
          v9 = *(unsigned __int16 *)(a1 + 1);
        }
        else
        {
          if ( (unsigned __int8)v6 <= 0xAu )
          {
            if ( (_BYTE)v6 != 6 )
            {
              if ( (unsigned __int8)v6 <= 6u )
              {
                if ( (_BYTE)v6 != 3 )
                  goto LABEL_129;
                v9 = *(_QWORD *)(a1 + 1);
                v7 = a1 + 9;
                goto LABEL_130;
              }
              v10 = (unsigned __int8 *)(a1 + 2);
              if ( (_BYTE)v6 == 8 )
              {
                v9 = (unsigned __int8)a1[1];
              }
              else
              {
                if ( (_BYTE)v6 != 9 )
                  goto LABEL_129;
                v9 = a1[1];
              }
LABEL_53:
              v7 = (char *)v10;
LABEL_130:
              if ( (unsigned int)v4 > 0x3F )
                goto LABEL_129;
              v37 = v4++;
              v46[v37] = v9;
              goto LABEL_132;
            }
LABEL_81:
            if ( !v4 )
              goto LABEL_129;
            v33 = v46[--v4];
            if ( v8 == 31 )
            {
              v34 = -(__int64)v33;
            }
            else
            {
              if ( (unsigned __int8)v8 <= 0x1Fu )
              {
                if ( v8 != 6 )
                {
                  if ( v8 != 25 )
                    goto LABEL_129;
                  v9 = (-(__int64)(v33 >> 63) ^ v33) + (v33 >> 63);
                  goto LABEL_130;
                }
                goto LABEL_100;
              }
              switch ( v8 )
              {
                case 35:
                  v41 = v46[v4];
                  v7 = sub_E7845(a1 + 1, &v43);
                  v34 = v43 + v41;
                  break;
                case -108:
                  v35 = a1[1];
                  v7 = a1 + 2;
                  if ( v35 == 2 )
                  {
                    v9 = *(unsigned __int16 *)v33;
                    goto LABEL_130;
                  }
                  if ( v35 <= 2u )
                  {
                    if ( v35 != 1 )
                      goto LABEL_129;
                    v9 = *(unsigned __int8 *)v33;
                    goto LABEL_130;
                  }
                  if ( v35 == 4 )
                  {
                    v9 = *(unsigned int *)v33;
                    goto LABEL_130;
                  }
                  if ( v35 != 8 )
                    goto LABEL_129;
LABEL_100:
                  v9 = *(_QWORD *)v33;
                  goto LABEL_130;
                case 32:
                  v34 = ~v33;
                  break;
                default:
                  goto LABEL_129;
              }
            }
            v9 = v34;
            goto LABEL_130;
          }
          if ( (_BYTE)v6 == 13 )
          {
            v9 = *(int *)(a1 + 1);
            goto LABEL_58;
          }
          if ( (unsigned __int8)v6 > 0xDu )
          {
            v10 = (unsigned __int8 *)(a1 + 9);
            v9 = *(_QWORD *)(a1 + 1);
            goto LABEL_53;
          }
          if ( (_BYTE)v6 != 11 )
          {
            v9 = *(unsigned int *)(a1 + 1);
LABEL_58:
            v7 = a1 + 5;
            goto LABEL_130;
          }
          v9 = *(__int16 *)(a1 + 1);
        }
        v7 = a1 + 3;
        goto LABEL_130;
      }
      if ( (_BYTE)v6 == 21 )
      {
        v26 = (unsigned __int8)a1[1];
        v27 = v4 - 1;
        v7 = a1 + 2;
        v44 = v26;
        if ( v26 >= v27 )
          goto LABEL_129;
        v25 = v27 - v26;
        goto LABEL_76;
      }
      if ( (unsigned __int8)v6 <= 0x15u )
      {
        if ( (_BYTE)v6 == 18 )
        {
          if ( !v4 )
            goto LABEL_129;
          LODWORD(v25) = v4 - 1;
LABEL_75:
          v25 = (int)v25;
LABEL_76:
          v9 = v46[v25];
          goto LABEL_130;
        }
        if ( (unsigned __int8)v6 >= 0x12u )
        {
          if ( (_BYTE)v6 == 19 )
          {
            if ( !v4 )
              goto LABEL_129;
            --v4;
            goto LABEL_132;
          }
          if ( v4 <= 1 )
            goto LABEL_129;
          LODWORD(v25) = v4 - 2;
          goto LABEL_75;
        }
        v20 = sub_E786B(a1 + 1, &v45);
LABEL_61:
        v9 = v45;
        v7 = v20;
        goto LABEL_130;
      }
      if ( (_BYTE)v6 == 25 )
        goto LABEL_81;
      if ( (unsigned __int8)v6 > 0x19u )
        goto LABEL_104;
      v11 = (_BYTE)v6 == 22;
      v12 = v4 - 2;
      v13 = v4 - 1;
      if ( v11 )
      {
        if ( v4 <= 1 )
          goto LABEL_129;
        v28 = v46[v13];
        v46[v13] = v46[v12];
        v46[v12] = v28;
      }
      else
      {
        if ( v8 != 23 || v4 <= 2 )
          goto LABEL_129;
        v29 = v13;
        v30 = v4 - 3;
        v31 = v46[v29];
        v32 = v46[v30];
        v46[v29] = v46[v12];
        v46[v12] = v32;
        v46[v30] = v31;
      }
    }
LABEL_132:
    a1 = v7;
  }
  if ( !v4 )
    goto LABEL_129;
  return v46[v4 - 1];
}
// E8211: conditional instruction was optimized away because cl.1==C
// E822F: conditional instruction was optimized away because cl.1==F
// E8260: conditional instruction was optimized away because cl.1==14
