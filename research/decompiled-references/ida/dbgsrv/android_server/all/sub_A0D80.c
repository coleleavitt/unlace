/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0D80
// Address: 0x00000000000A0D80

//----- (00000000000A0D80) ----------------------------------------------------
__int64 __fastcall sub_A0D80(__int64 a1, __int64 a2, __int64 (__fastcall ***a3)(_QWORD, char *, __int64), char a4)
{
  __int64 v6; // x20
  unsigned int v9; // w8
  int v10; // w22
  unsigned int v11; // w9
  int v12; // w26
  int v13; // w21
  __int64 result; // x0
  unsigned __int16 v15; // w0
  int v16; // w8
  __int64 v17; // x9
  __int64 v18; // x8
  _BOOL4 v19; // w27
  __int64 *v20; // x9
  __int64 v21; // x28
  unsigned __int16 v22; // w8
  int v23; // w24
  unsigned __int64 v24; // x24
  unsigned int v25; // w24
  __int64 v26; // x8
  int v27; // w9
  unsigned int v28; // w24
  __int64 v29; // x28
  unsigned int v30; // w24
  __int64 v31; // x8
  void **p_ptr; // x8
  int v33; // w8
  char *v34; // x1
  char *v35; // x1
  char *v36; // x1
  __int64 v37; // x24
  char *v38; // x1
  __int64 v39; // x0
  __int64 v40; // x9
  unsigned int v41; // w24
  __int64 v42; // x8
  char *v43; // x1
  __int64 v44; // x0
  __int64 v45; // x9
  int v46; // w10
  __int64 v47; // x9
  __int64 v48; // x0
  __int64 v49; // x9
  __int64 v50; // x8
  __int64 v51; // x8
  __int64 v52; // x0
  __int64 v53; // x9
  __int64 v54; // x0
  __int64 v55; // x9
  __int64 v56; // x8
  int v57; // w24
  char v58; // w0
  unsigned int v59; // w8
  int v60; // w23
  int v61; // w9
  int v62; // w8
  char v63[8]; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v64; // [xsp+8h] [xbp-98h] BYREF
  int v65; // [xsp+10h] [xbp-90h]
  void *ptr; // [xsp+18h] [xbp-88h] BYREF
  __int64 v67; // [xsp+20h] [xbp-80h]
  __int64 v68; // [xsp+28h] [xbp-78h]
  __int64 v69; // [xsp+30h] [xbp-70h]
  __int64 v70; // [xsp+38h] [xbp-68h]

  v70 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(_QWORD *)(a1 + 16);
  v9 = *(_DWORD *)((**a3)(a3, byte_1071D3, a2) + 8);
  if ( (a4 & 1) != 0 )
    v10 = HIBYTE(v9) & 1;
  else
    v10 = (v9 >> 5) & 1;
  v11 = *(_BYTE *)(a1 + 32) & 0xF;
  if ( v10 == 1 )
  {
    if ( *(_WORD *)(a1 + 24) == 278 )
      v12 = *(unsigned __int8 *)(a1 + 33) | (32 * v11) | 0x10;
    else
      v12 = (v9 >> 8) & 0xFC | (v9 >> 25) & 3;
    if ( (_BYTE)v12 )
      v11 = (unsigned __int8)v12 >> 5;
  }
  else
  {
    v12 = 0;
    if ( v11 > 0xE )
    {
LABEL_32:
      v13 = 0;
      result = -1;
      if ( !(_BYTE)v12 )
        return result;
      goto LABEL_33;
    }
  }
  switch ( v11 )
  {
    case 0u:
      if ( (v9 & 0x40000000) == 0 )
        goto LABEL_32;
      goto LABEL_42;
    case 1u:
      if ( (v9 & 0x40000000) != 0 )
        goto LABEL_32;
      goto LABEL_42;
    case 2u:
      if ( (v9 & 0x20000000) == 0 )
        goto LABEL_32;
      goto LABEL_42;
    case 3u:
      if ( (v9 & 0x20000000) != 0 )
        goto LABEL_32;
      goto LABEL_42;
    case 4u:
      if ( (v9 & 0x80000000) == 0 )
        goto LABEL_32;
      goto LABEL_42;
    case 5u:
      if ( (v9 & 0x80000000) != 0 )
        goto LABEL_32;
      goto LABEL_42;
    case 6u:
      if ( (v9 & 0x10000000) == 0 )
        goto LABEL_32;
      goto LABEL_42;
    case 7u:
      if ( (v9 & 0x10000000) != 0 )
        goto LABEL_32;
      goto LABEL_42;
    case 8u:
      if ( (v9 & 0x60000000) != 0x20000000 )
        goto LABEL_32;
      goto LABEL_42;
    case 9u:
      if ( (v9 & 0x60000000) == 0x20000000 )
        goto LABEL_32;
      goto LABEL_42;
    case 0xAu:
      goto LABEL_31;
    case 0xBu:
      goto LABEL_16;
    case 0xCu:
      if ( (v9 & 0x40000000) != 0 )
        goto LABEL_32;
LABEL_31:
      if ( v9 >> 31 != ((v9 >> 28) & 1) )
        goto LABEL_32;
      goto LABEL_42;
    case 0xDu:
      if ( (v9 & 0x40000000) != 0 )
        goto LABEL_42;
LABEL_16:
      if ( v9 >> 31 == ((v9 >> 28) & 1) )
        goto LABEL_32;
LABEL_42:
      v18 = *(unsigned __int16 *)(a1 + 24);
      v19 = 1;
      if ( (_DWORD)v18 != 41 && (_DWORD)v18 != 47 )
        v19 = v18 == 166;
      if ( *(unsigned __int16 *)(a1 + 24) <= 0x111u )
      {
        if ( (unsigned int)v18 > 0x2F )
        {
LABEL_76:
          if ( (_DWORD)v18 != 166 )
            goto LABEL_197;
          goto LABEL_77;
        }
        if ( ((1LL << v18) & 0xC20000000018LL) == 0 )
        {
          if ( ((1LL << v18) & 0x40200000000LL) != 0 )
          {
            v20 = (__int64 *)(a1 + 104);
            if ( (_DWORD)v18 != 33 )
              v20 = (__int64 *)(a1 + 64);
            v21 = *v20;
            if ( (*v20 & 0x8000) == 0
              || ((_DWORD)v18 != 33 ? (v22 = 13) : (v22 = *(_WORD *)(a1 + 46)), v23 = v22, v22 > 0xC2u) )
            {
              v24 = -1;
              goto LABEL_196;
            }
            if ( v22 == 160 )
            {
              v37 = 0;
              goto LABEL_191;
            }
            if ( v22 >= 0x10u && (unsigned int)v22 - 61 >= 0x20 )
            {
              if ( (v22 | 2) == 0x12 )
              {
                v38 = byte_1071D3;
                goto LABEL_186;
              }
              if ( (unsigned int)v22 - 129 >= 0x1F && (unsigned int)v22 - 163 >= 0x20 )
              {
                if ( v22 == 161 )
                {
                  v38 = "SP";
                }
                else
                {
                  if ( v22 != 162 )
                  {
                    sub_4EC28((__int64)"Bad register number passed to arm.get_register_value: %d", v22);
                    v37 = 0;
LABEL_191:
                    if ( (*(_DWORD *)(a1 + 28) & 0x90) != 0 || *(_WORD *)(a1 + 24) == 42 )
                      v56 = 4LL * (int)bitcount((unsigned __int16)v21) - 4;
                    else
                      LODWORD(v56) = -4;
                    v24 = ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(_QWORD, char *, __int64), __int64))(*a3)[3])(
                            a3,
                            v37 + (int)v56);
                    v19 = 1;
LABEL_196:
                    v19 = v19;
                    if ( v24 != -1 )
                      goto LABEL_88;
                    goto LABEL_197;
                  }
                  v38 = "PC";
                }
LABEL_186:
                v54 = (**a3)(a3, v38, a2);
                v55 = 8;
                if ( v10 )
                  v55 = 4;
                if ( v23 != 15 )
                  v55 = 0;
                v37 = *(_QWORD *)(v54 + 8) + v55;
                goto LABEL_191;
              }
            }
            v38 = (char *)*(&off_15E6A0 + v22);
            goto LABEL_186;
          }
          if ( v18 == 1 )
          {
            v24 = *(_QWORD *)((**a3)(a3, "X30", a2) + 8);
            if ( v24 != -1 )
              goto LABEL_88;
            goto LABEL_197;
          }
          goto LABEL_76;
        }
LABEL_77:
        v63[0] = 0;
        v64 = -1;
        v65 = -2;
        v67 = 0;
        v68 = 0;
        ptr = (void *)-1LL;
        v69 = 0xFFFFFFFFLL;
        if ( (sub_A1934(a1, 0, v10, (__int64)v63, a2, a3) & 1) != 0 )
        {
          if ( *(_BYTE *)(a1 + 41) == 7 )
            p_ptr = (void **)&v64;
          else
            p_ptr = &ptr;
          v24 = (unsigned __int64)*p_ptr;
        }
        else
        {
          v24 = -1;
        }
        if ( v65 >= -1 )
        {
          if ( ptr )
          {
            v67 = 0;
            qfree(ptr);
            ptr = nullptr;
            v68 = 0;
          }
          v65 = -2;
        }
        if ( v24 != -1 )
          goto LABEL_88;
        goto LABEL_197;
      }
      if ( *(unsigned __int16 *)(a1 + 24) <= 0x1D3u )
      {
        if ( (unsigned int)(v18 - 274) >= 2 )
        {
          if ( (unsigned int)(v18 - 282) >= 2 )
            goto LABEL_197;
          v25 = *(unsigned __int16 *)(a1 + 46);
          if ( v25 == 160 )
            goto LABEL_61;
          if ( v25 < 0x10 || v25 - 61 < 0x20 )
            goto LABEL_169;
          if ( (v25 | 2) == 0x12 )
          {
            v36 = byte_1071D3;
            goto LABEL_170;
          }
          if ( v25 - 129 < 0x1F || v25 - 163 < 0x20 )
          {
LABEL_169:
            v36 = (char *)*(&off_15E6A0 + *(unsigned __int16 *)(a1 + 46));
          }
          else if ( v25 == 161 )
          {
            v36 = "SP";
          }
          else
          {
            if ( v25 != 162 )
            {
              sub_4EC28((__int64)"Bad register number passed to arm.get_register_value: %d", v25);
LABEL_61:
              v26 = 0;
              v27 = *(unsigned __int16 *)(a1 + 24);
LABEL_175:
              if ( v27 == 282 )
              {
LABEL_178:
                v24 = *(_QWORD *)(a1 + 96);
                if ( v24 != -1 )
                  goto LABEL_88;
                goto LABEL_197;
              }
LABEL_176:
              if ( !v26 || v27 == 282 )
                goto LABEL_197;
              goto LABEL_178;
            }
            v36 = "PC";
          }
LABEL_170:
          v52 = (**a3)(a3, v36, a2);
          v53 = 8;
          if ( v10 )
            v53 = 4;
          if ( v25 != 15 )
            v53 = 0;
          v26 = *(_QWORD *)(v52 + 8) + v53;
          v27 = *(unsigned __int16 *)(a1 + 24);
          if ( v26 )
            goto LABEL_176;
          goto LABEL_175;
        }
        v28 = *(unsigned __int16 *)(a1 + 46);
        if ( v28 == 160 )
        {
          LODWORD(v29) = 0;
          goto LABEL_124;
        }
        if ( v28 >= 0x10 && v28 - 61 >= 0x20 )
        {
          if ( (v28 | 2) == 0x12 )
          {
            v34 = byte_1071D3;
            goto LABEL_119;
          }
          if ( v28 - 129 >= 0x1F && v28 - 163 >= 0x20 )
          {
            if ( v28 == 161 )
            {
              v34 = "SP";
            }
            else
            {
              if ( v28 != 162 )
              {
                sub_4EC28((__int64)"Bad register number passed to arm.get_register_value: %d", v28);
                LODWORD(v29) = 0;
                goto LABEL_124;
              }
              v34 = "PC";
            }
LABEL_119:
            v39 = (**a3)(a3, v34, a2);
            v40 = 8;
            if ( v10 )
              v40 = 4;
            if ( v28 != 15 )
              v40 = 0;
            v29 = *(_QWORD *)(v39 + 8) + v40;
LABEL_124:
            v41 = *(unsigned __int8 *)(a1 + 72);
            if ( v41 == 160 )
            {
              LODWORD(v42) = 0;
              goto LABEL_159;
            }
            if ( v41 >= 0x10 && v41 - 61 >= 0x20 )
            {
              if ( (v41 | 2) == 0x12 )
              {
                v43 = byte_1071D3;
                goto LABEL_154;
              }
              if ( v41 - 129 >= 0x1F && v41 - 163 >= 0x20 )
              {
                if ( v41 == 161 )
                {
                  v43 = "SP";
                }
                else
                {
                  if ( v41 != 162 )
                  {
                    sub_4EC28((__int64)"Bad register number passed to arm.get_register_value: %d", v41);
                    LODWORD(v42) = 0;
                    goto LABEL_159;
                  }
                  v43 = "PC";
                }
LABEL_154:
                v48 = (**a3)(a3, v43, a2);
                v49 = 8;
                if ( v10 )
                  v49 = 4;
                if ( v41 != 15 )
                  v49 = 0;
                v42 = *(_QWORD *)(v48 + 8) + v49;
LABEL_159:
                if ( *(_WORD *)(a1 + 24) == 275 )
                  v50 = ((unsigned __int16 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, char *, __int64), _QWORD))(*a3)[2])(
                          a3,
                          (unsigned int)(v29 + 2 * v42));
                else
                  v50 = ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, char *, __int64), _QWORD))(*a3)[1])(
                          a3,
                          (unsigned int)(v42 + v29));
                v51 = v6 + 2 * v50;
                v24 = v51 + 4;
                if ( v51 != -5 )
                  goto LABEL_88;
                goto LABEL_197;
              }
            }
            v43 = (char *)*(&off_15E6A0 + *(unsigned __int8 *)(a1 + 72));
            goto LABEL_154;
          }
        }
        v34 = (char *)*(&off_15E6A0 + *(unsigned __int16 *)(a1 + 46));
        goto LABEL_119;
      }
      if ( (unsigned int)(v18 - 468) >= 2 )
      {
        if ( (unsigned int)(v18 - 470) >= 2 )
          goto LABEL_197;
        goto LABEL_77;
      }
      v30 = *(unsigned __int16 *)(a1 + 46);
      if ( v30 == 160 )
      {
        v31 = 0;
        goto LABEL_141;
      }
      if ( v30 < 0x10 || v30 - 61 < 0x20 )
        goto LABEL_135;
      if ( (v30 | 2) == 0x12 )
      {
        v35 = byte_1071D3;
      }
      else if ( v30 - 129 < 0x1F || v30 - 163 < 0x20 )
      {
LABEL_135:
        v35 = (char *)*(&off_15E6A0 + *(unsigned __int16 *)(a1 + 46));
      }
      else if ( v30 == 161 )
      {
        v35 = "SP";
      }
      else
      {
        if ( v30 != 162 )
        {
          sub_4EC28((__int64)"Bad register number passed to arm.get_register_value: %d", v30);
          v31 = 0;
          goto LABEL_141;
        }
        v35 = "PC";
      }
      v44 = (**a3)(a3, v35, a2);
      v45 = 8;
      if ( v10 )
        v45 = 4;
      if ( v30 != 15 )
        v45 = 0;
      v31 = *(_QWORD *)(v44 + 8) + v45;
LABEL_141:
      v46 = *(unsigned __int16 *)(a1 + 24);
      v47 = *(_QWORD *)(a1 + 88);
      if ( v46 == 469 )
      {
        if ( ((1LL << v47) & v31) == 0 )
          goto LABEL_197;
      }
      else if ( v46 != 468 || ((1LL << v47) & v31) != 0 )
      {
        goto LABEL_197;
      }
      v24 = *(_QWORD *)(a1 + 136);
      if ( v24 != -1 )
        goto LABEL_88;
LABEL_197:
      if ( *(_BYTE *)(a1 + 41) != 1 )
        goto LABEL_216;
      result = -1;
      if ( *(_WORD *)(a1 + 46) != 15 )
        goto LABEL_217;
      v63[0] = 0;
      v64 = -1;
      v65 = -2;
      v67 = 0;
      v68 = 0;
      ptr = (void *)-1LL;
      v69 = 0xFFFFFFFFLL;
      if ( (sub_A1934(a1, 1u, v10, (__int64)v63, a2, a3) & 1) != 0 )
      {
        v57 = (int)ptr;
        v58 = sub_A1934(a1, 2u, v10, (__int64)v63, a2, a3);
        v59 = (unsigned int)ptr;
        v60 = 0;
        if ( (v58 & 1) != 0 )
          v61 = v57;
        else
          v61 = v6;
        if ( (v58 & 1) == 0 )
          v59 = v57;
        v24 = -1;
        switch ( *(_WORD *)(a1 + 24) )
        {
          case 5:
            v62 = v61 >> v59;
            goto LABEL_229;
          case 6:
            v60 = 0;
            v24 = (unsigned int)(v61 << v59);
            break;
          case 7:
            v60 = 0;
            v24 = (unsigned int)v61 >> v59;
            break;
          case 8:
            v24 = rotate_left((unsigned int)v61, -v59, 0x20u, 0);
            v60 = 0;
            break;
          case 9:
            v62 = -v59;
LABEL_229:
            v60 = 0;
            v24 = v62;
            break;
          case 0xA:
            v60 = 0;
            v24 = v59 & v61;
            break;
          case 0xB:
            v60 = 0;
            v24 = v59 ^ v61;
            break;
          case 0xC:
            goto LABEL_227;
          case 0xD:
            v60 = 0;
            v24 = v59 - v61;
            break;
          case 0xE:
            v60 = 0;
            v24 = v59 + v61;
            break;
          case 0xF:
            v60 = 0;
            v24 = v59 + v61 + 125;
            break;
          case 0x10:
            v61 += 124;
LABEL_227:
            v60 = 0;
            v24 = v61 - v59;
            break;
          case 0x11:
            v60 = 0;
            v24 = 124 - v61 + v59;
            break;
          case 0x16:
            v60 = 0;
            v24 = v59 | v61;
            break;
          case 0x17:
          case 0x23:
          case 0x2C:
          case 0x50:
          case 0x51:
            goto LABEL_207;
          case 0x18:
            v60 = 0;
            v24 = v61 & ~v59;
            break;
          case 0x19:
            v60 = 0;
            v24 = ~v59;
            break;
          case 0x1E:
          case 0x1F:
            v19 = 1;
LABEL_207:
            v60 = 0;
            v24 = v59;
            break;
          default:
            break;
        }
      }
      else
      {
        v24 = -1;
        v60 = 1;
      }
      if ( v65 >= -1 )
      {
        if ( ptr )
        {
          v67 = 0;
          qfree(ptr);
          ptr = nullptr;
          v68 = 0;
        }
        v65 = -2;
      }
      if ( v60 )
        return -1;
      if ( v24 == -1 )
      {
LABEL_216:
        result = -1;
        goto LABEL_217;
      }
LABEL_88:
      v33 = v24 & 1;
      if ( !v19 )
        v33 = v10;
      if ( *(_WORD *)(a1 + 24) == 46 )
        v33 = v10 ^ 1;
      if ( v33 )
        result = v24 | 1;
      else
        result = v24 & 0xFFFFFFFFFFFFFFFCLL;
LABEL_217:
      v13 = 1;
      if ( (_BYTE)v12 )
      {
LABEL_33:
        if ( result == -1 )
        {
          do
          {
            v15 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, char *, __int64), __int64))(*a3)[2])(a3, v6);
            v16 = v13 ^ ((unsigned __int8)(v12 & 0x10) >> 4);
            v12 <<= v13 ^ ((unsigned __int8)(v12 & 0x10) >> 4);
            if ( (unsigned int)(v15 >> 11) - 29 >= 3 )
              v17 = 2;
            else
              v17 = 4;
            v6 += v17;
          }
          while ( (v12 & 0x1F) != 0 && v16 );
          return v6 | 1;
        }
      }
      return result;
    case 0xEu:
      goto LABEL_42;
    default:
      goto LABEL_32;
  }
}
// 15E6A0: using guessed type _UNKNOWN *off_15E6A0;
