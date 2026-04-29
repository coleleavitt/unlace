unsigned __int64 __fastcall sub_25240(_DWORD *a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 *v4; // r14
  unsigned __int64 v5; // r9
  unsigned __int8 *v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 result; // rax
  unsigned int v10; // esi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  int v13; // r10d
  unsigned __int8 *v14; // rbx
  int v15; // r11d
  unsigned __int8 *v16; // r9
  unsigned int v17; // esi
  unsigned int v18; // r9d
  unsigned __int64 v19; // rsi
  __int64 v20; // r8
  unsigned __int64 v21; // rbx
  unsigned int v22; // r9d
  unsigned int v23; // edx
  unsigned __int64 v24; // rcx
  unsigned __int32 v25; // esi
  unsigned __int64 v26; // r8
  unsigned __int64 *v27; // r10
  unsigned int v28; // r11d
  unsigned int v29; // ebp
  int v30; // r14d
  unsigned __int64 v31; // rcx
  unsigned int v32; // esi
  unsigned __int64 v33; // rcx
  unsigned int *v34; // r8
  int v35; // esi
  int v36; // r9d
  unsigned __int64 v37; // rcx
  unsigned __int32 v38; // esi
  unsigned int v39; // r10d
  __int64 v40; // rsi
  unsigned __int64 v41; // rbx
  unsigned __int8 *v42; // r15
  __int64 v43; // r9
  char v44; // cl
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // rsi
  __int64 v48; // r9
  __int64 v49; // rbx
  __int64 v50; // rsi
  unsigned __int64 v51; // r9
  __int64 v52; // r8
  int v53; // r8d
  int v54; // esi
  unsigned int v55; // r10d
  unsigned int *v56; // r11
  unsigned int v57; // esi
  unsigned int v58; // eax
  unsigned int v59; // esi
  unsigned int v60; // r10d
  unsigned int v61; // ebx
  unsigned int v62; // eax
  int *v63; // r15
  int v64; // r10d
  unsigned int v65; // r8d
  char v66; // r11
  char v67; // bp
  int v68; // r11d
  int v69; // ecx
  char v70; // [rsp+0h] [rbp-3Ch]
  unsigned __int64 v71; // [rsp+4h] [rbp-38h]

  v4 = a3;
  v5 = *a3;
  v6 = (unsigned __int8 *)(a2 + *a3);
  v7 = a4 - v5;
  switch ( *a1 )
  {
    case 4:
      result = 0;
      if ( v7 <= 4 )
        goto LABEL_43;
      v18 = a1[4];
      v19 = v7 - 4;
      v20 = -1;
      result = 0;
      do
      {
        if ( (v6[result] & 0xFE) != 0xE8 )
          goto LABEL_25;
        v21 = result + 4;
        if ( result - v20 <= 3 && (v18 = (v18 << (result - v20 - 1)) & 7) != 0 )
        {
          if ( !byte_6E220[v18]
            || (unsigned __int8)(v6[v21 - byte_6E228[v18]] - 1) > 0xFDu
            || (unsigned __int8)(v6[result + 4] - 1) <= 0xFDu )
          {
            goto LABEL_24;
          }
          v63 = (int *)&v6[result + 1];
          v64 = -5 - a1[3] - result;
          v65 = v64 + *v63;
          v66 = 8 * byte_6E228[v18];
          v67 = 24 - v66;
          if ( (unsigned __int8)((v65 >> (24 - v66)) - 1) > 0xFDu )
          {
            v68 = (1 << (32 - v66)) - 1;
            do
              v65 = v64 + (v68 ^ v65);
            while ( (unsigned __int8)((v65 >> v67) - 1) > 0xFDu );
          }
        }
        else
        {
          if ( (unsigned __int8)(v6[v21] - 1) <= 0xFDu )
          {
            v18 = 0;
LABEL_24:
            v18 = 2 * v18 + 1;
            v20 = result;
            goto LABEL_25;
          }
          v63 = (int *)&v6[result + 1];
          v18 = 0;
          v65 = *v63 + -5 - a1[3] - result;
        }
        v69 = -(v65 & 0x1000000) | v65 & 0x1FFFFFF;
        v20 = result;
        result += 4LL;
        *v63 = v69;
LABEL_25:
        ++result;
      }
      while ( result < v19 );
      v22 = v18 << (result - v20 - 1);
      v23 = 0;
      if ( result - v20 < 4 )
        v23 = v22;
      a1[4] = v23;
      v5 = result + *v4;
LABEL_43:
      *v4 = v5;
      a1[3] += result;
      return result;
    case 5:
      v24 = v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v24 )
        goto LABEL_78;
      for ( result = 0; result < v24; result += 4LL )
      {
        v25 = _byteswap_ulong(*(_DWORD *)&v6[result]);
        if ( (v25 & 0xFC000003) == 0x48000001 )
          *(_DWORD *)&v6[result] = _byteswap_ulong(((v25 & 0x3FFFFFC) - a1[3] - result) & 0x3FFFFFC | 0x48000001);
      }
      goto LABEL_42;
    case 6:
      v26 = v7 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_78;
      result = 0;
      v27 = v4;
      do
      {
        v28 = 5;
        v29 = 0;
        v30 = byte_6E200[v6[result] & 0x1F];
        do
        {
          if ( _bittest(&v30, v29) )
          {
            v40 = 0;
            v70 = v28 & 7;
            v41 = 0;
            v42 = &v6[result + (v28 >> 3)];
            do
            {
              v43 = v42[v40];
              v44 = 8 * v40++;
              v41 |= v43 << v44;
            }
            while ( v40 != 6 );
            v45 = v41 >> v70;
            if ( ((v41 >> v70) & 0x1E000000E00LL) == 0xA000000000LL )
            {
              v46 = v45 & 0xFFFFFFEE00001FFFLL;
              v47 = (16 * ((v45 >> 13) & 0xFFFFF | (v45 >> 36 << 20) & 0x100000) - ((int)result + a1[3])) >> 4;
              v71 = v46;
              v48 = v41 & ((1 << v70) - 1);
              v49 = (v47 << 16) & 0x1000000000LL | (v47 << 13) & 0x1FFFFE000LL;
              v50 = 0;
              v51 = ((v71 | v49) << v70) | v48;
              do
              {
                v42[v50] = v51 >> (8 * (unsigned __int8)v50);
                ++v50;
              }
              while ( v50 != 6 );
            }
          }
          v28 += 41;
          ++v29;
        }
        while ( v28 != 128 );
        result += 16LL;
      }
      while ( result < v26 );
      v4 = v27;
      goto LABEL_42;
    case 7:
      v31 = v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v31 )
        goto LABEL_78;
      for ( result = 0; result < v31; result += 4LL )
      {
        if ( v6[3] == 0xEB )
        {
          v32 = -8 - a1[3] - result + 4 * (*v6 | (v6[2] << 16) | (v6[1] << 8));
          *v6 = v32 >> 2;
          v6[2] = v32 >> 18;
          v6[1] = v32 >> 10;
        }
        v6 += 4;
      }
      goto LABEL_42;
    case 8:
      result = 0;
      if ( v7 <= 3 )
        goto LABEL_43;
      v33 = v7 - 4;
      result = 0;
      do
      {
        if ( (v6[result + 1] & 0xF8) == 0xF0 && (~v6[result + 3] & 0xF8) == 0 )
        {
          v34 = (unsigned int *)&v6[result];
          v35 = (v6[result + 3] << 8) & 0x700 | v6[result + 2] | (v6[result] << 11) | (v6[result + 1] << 19) & 0x380000;
          v36 = -4 - a1[3] - result;
          result += 2LL;
          *v34 = (unsigned __int8)((unsigned int)(v36 + 2 * v35) >> 12)
               | ((((unsigned int)(v36 + 2 * v35) >> 20) & 7
                 | 0xF0
                 | (((unsigned __int8)((unsigned int)(v36 + 2 * v35) >> 1)
                   | (((unsigned __int8)((unsigned int)(v36 + 2 * v35) >> 9) | 0xF8) << 8)) << 8)) << 8);
        }
        result += 2LL;
      }
      while ( v33 >= result );
      goto LABEL_42;
    case 9:
      v37 = v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v37 )
        goto LABEL_78;
      for ( result = 0; result < v37; result += 4LL )
      {
        v38 = _byteswap_ulong(*(_DWORD *)&v6[result]);
        if ( v38 >> 22 == 256 || v38 >> 22 == 511 )
        {
          v39 = (4 * v38 - a1[3] - (unsigned int)result) >> 2;
          *(_DWORD *)&v6[result] = _byteswap_ulong((0x40000000 - (v39 & 0x400000)) | v39 & 0x3FFFFF | 0x40000000);
        }
      }
      goto LABEL_42;
    case 0xA:
      v8 = v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v8 )
      {
LABEL_78:
        result = 0;
        goto LABEL_43;
      }
      for ( result = 0; result < v8; result += 4LL )
      {
        v10 = *(_DWORD *)&v6[result];
        if ( v10 >> 26 == 37 )
        {
          *(_DWORD *)&v6[result] = (v10 - ((unsigned int)(result + a1[3]) >> 2)) & 0x3FFFFFF | 0x94000000;
        }
        else if ( (v10 & 0x9F000000) == 0x90000000 )
        {
          v52 = (v10 >> 3) & 0x1FFFFC | (v10 >> 29) & 3;
          if ( (((unsigned int)&loc_20000 + v52) & 0x1C0000) == 0 )
          {
            v53 = v52 - ((unsigned int)(result + a1[3]) >> 12);
            *(_DWORD *)&v6[result] = v10 & 0x9000001F
                                   | (8 * v53) & 0x1FFFE0
                                   | (v53 << 29) & 0x60000000
                                   | -(v53 & 0x20000) & 0xE00000;
          }
        }
      }
      goto LABEL_42;
    case 0xB:
      result = 0;
      if ( v7 <= 7 )
        goto LABEL_43;
      v11 = v7 - 8;
      v12 = 0;
      break;
    default:
      result = 0;
      goto LABEL_43;
  }
  while ( 1 )
  {
    result = v12 + 2;
    v13 = v6[v12];
    if ( (_BYTE)v13 == 0xEF )
    {
      v14 = &v6[v12 + 1];
      v15 = *v14;
      if ( (v15 & 0xD) == 0 )
      {
        v16 = &v6[v12 + 3];
        v17 = ((v15 << 13) & 0x1E0000 | (2 * *v16) | (v6[result] << 9)) - (a1[3] + v12);
        *v14 = v15 & 0xF
             | ((unsigned __int16)(((2 * *v16) | (v6[result] << 9)) - (*((_WORD *)a1 + 6) + v12)) >> 8) & 0xF0;
        v6[result] = (16 * v17) & 0xE0 | (v17 >> 7) & 0x10 | BYTE2(v17) & 0xF;
        *v16 = (v17 >> 4) & 0x7F | (v17 >> 13) & 0x80;
LABEL_15:
        result = v12 + 4;
      }
    }
    else if ( (v6[v12] & 0x7F) == 0x17 )
    {
      v54 = v13 | (v6[v12 + 2] << 16) | (v6[v12 + 1] << 8);
      v55 = v54 | (v6[v12 + 3] << 24);
      if ( (v54 & 0xE80) == 0 )
      {
        v61 = v55 >> 27;
        if ( (v55 - 12567) << 18 < ((v55 >> 27) & 0x1D) )
        {
          v56 = (unsigned int *)&v6[v12 + 4];
          v62 = _byteswap_ulong(*v56) - (v12 + a1[3]);
          v60 = __PAIR64__(v62, v55) >> 12;
          v59 = (v61 << 7) | (v62 + 2048) & 0xFFFFF000 | 0x17;
          goto LABEL_77;
        }
        goto LABEL_15;
      }
      v56 = (unsigned int *)&v6[v12 + 4];
      v57 = *v56;
      result = v12 + 6;
      if ( (((*v56 - 3) ^ (v55 << 8)) & 0xF8003) == 0 )
      {
        v58 = v57 >> 20;
        v59 = (v57 << 12) | 0x117;
        v60 = v58 + (v55 & 0xFFFFF000);
LABEL_77:
        *(_DWORD *)&v6[v12] = v59;
        result = v12 + 8;
        *v56 = v60;
      }
    }
    v12 = result;
    if ( v11 < result )
    {
LABEL_42:
      v5 = result + *v4;
      goto LABEL_43;
    }
  }
}
