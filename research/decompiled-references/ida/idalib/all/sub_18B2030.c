__int64 __fastcall sub_18B2030(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbp
  unsigned __int16 v9; // ax
  unsigned int v10; // r12d
  __int64 v12; // r12
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // r13
  int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // r13d
  int v22; // r14d
  __int64 v23; // rsi
  int v24; // eax
  signed int v25; // r15d
  __int64 v26; // rax
  char v27; // dl
  unsigned int v28; // eax
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rsi
  int v32; // eax
  int v33; // r14d
  unsigned int v34; // ecx
  __int64 v35; // r13
  __int64 v36; // r15
  unsigned int v37; // eax
  _QWORD *v38; // r13
  __int64 v39; // rbp
  signed int v40; // eax
  __int64 v41; // rdx
  signed int v42; // eax
  __int64 v43; // rax
  unsigned int *v44; // rax
  _QWORD *v45; // rbp
  __int64 v46; // r13
  __int64 *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r14
  int v50; // edx
  signed int v51; // eax
  __int64 v52; // rax
  __int64 *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // eax
  __int64 v59; // rdx
  unsigned int v60; // eax
  int v61; // r13d
  __int64 v62; // r13
  _QWORD *v63; // rbp
  signed int v64; // eax
  unsigned __int64 v65; // r12
  int v66; // r13d
  __int64 v67; // rsi
  int v68; // eax
  int v69; // edx
  signed int v70; // r14d
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // [rsp+8h] [rbp-40h]
  signed int v74; // [rsp+8h] [rbp-40h]

  v8 = a2;
  while ( 2 )
  {
    v9 = *(_WORD *)v8 & 0x1FF;
    switch ( v9 )
    {
      case 0u:
      case 1u:
      case 2u:
      case 3u:
      case 0xAu:
      case 0xDu:
      case 0x13u:
      case 0x14u:
      case 0x22u:
      case 0x23u:
      case 0x2Eu:
      case 0x31u:
      case 0x32u:
      case 0x35u:
      case 0x3Cu:
      case 0x40u:
      case 0x43u:
      case 0x44u:
      case 0x48u:
      case 0x49u:
      case 0x4Au:
      case 0x63u:
      case 0x65u:
      case 0x67u:
      case 0x7Du:
      case 0x80u:
      case 0x82u:
      case 0x83u:
      case 0x84u:
      case 0x85u:
      case 0x86u:
      case 0x87u:
      case 0x88u:
      case 0x89u:
      case 0x8Au:
      case 0x8Bu:
      case 0x94u:
      case 0x95u:
      case 0x96u:
      case 0x97u:
      case 0x98u:
      case 0x99u:
      case 0x9Au:
      case 0x9Bu:
      case 0x9Eu:
      case 0x9Fu:
      case 0xA0u:
      case 0xA1u:
      case 0xA2u:
      case 0xA3u:
      case 0xA4u:
      case 0xA5u:
      case 0xA6u:
      case 0xA7u:
      case 0xA8u:
      case 0xA9u:
      case 0xAAu:
      case 0xABu:
      case 0xACu:
      case 0xADu:
      case 0xAEu:
      case 0xAFu:
      case 0xB0u:
      case 0xB1u:
      case 0xB2u:
      case 0xB3u:
      case 0xB4u:
      case 0xB5u:
      case 0xB6u:
      case 0xB7u:
      case 0xB8u:
      case 0xB9u:
      case 0xBAu:
      case 0xBBu:
      case 0xBCu:
      case 0xBDu:
      case 0xBEu:
      case 0xBFu:
      case 0xC0u:
      case 0xC1u:
      case 0xC2u:
      case 0xC3u:
      case 0xC4u:
      case 0xC5u:
      case 0xC6u:
      case 0xC7u:
      case 0xC8u:
      case 0xC9u:
      case 0xCAu:
      case 0xCBu:
      case 0xCCu:
      case 0xCDu:
      case 0xCEu:
      case 0xCFu:
      case 0xD0u:
      case 0xD1u:
      case 0xD2u:
      case 0xD3u:
      case 0xD4u:
      case 0xD5u:
      case 0xD6u:
      case 0xD7u:
      case 0xD8u:
      case 0xD9u:
      case 0xDAu:
      case 0xDBu:
      case 0xDCu:
      case 0xDDu:
      case 0xDEu:
      case 0xDFu:
      case 0xE0u:
      case 0xE1u:
      case 0xE2u:
      case 0xE3u:
      case 0xE4u:
      case 0xE5u:
      case 0xE6u:
      case 0xE7u:
      case 0xE8u:
      case 0xE9u:
      case 0xEAu:
      case 0xEBu:
      case 0xECu:
      case 0xEDu:
      case 0xEEu:
      case 0xEFu:
      case 0xF0u:
      case 0xF2u:
      case 0xF3u:
      case 0xF4u:
      case 0xF6u:
      case 0xF7u:
      case 0xF8u:
      case 0xF9u:
      case 0xFAu:
      case 0xFCu:
      case 0xFDu:
      case 0xFEu:
      case 0xFFu:
      case 0x100u:
        return sub_18B2830(a1, v8);
      case 4u:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Fu:
      case 0x30u:
      case 0x46u:
      case 0x4Fu:
      case 0x51u:
      case 0x56u:
      case 0x57u:
      case 0x76u:
      case 0x77u:
      case 0x7Bu:
      case 0x7Cu:
        if ( ((v9 + 433) & 0x1FFu) <= 9
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0 )
        {
          return 2;
        }
        v61 = HIWORD(*(_DWORD *)v8);
        v10 = sub_18B2830(a1, v8);
        if ( (v61 & 1) > (int)v10 )
          return v61 & 1;
        return v10;
      case 5u:
      case 6u:
      case 7u:
      case 8u:
      case 9u:
      case 0xBu:
      case 0xCu:
      case 0xEu:
      case 0xFu:
      case 0x12u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
      case 0x24u:
      case 0x25u:
      case 0x28u:
      case 0x29u:
      case 0x2Du:
      case 0x34u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x3Au:
      case 0x3Bu:
      case 0x3Eu:
      case 0x3Fu:
      case 0x41u:
      case 0x42u:
      case 0x47u:
      case 0x4Bu:
      case 0x4Eu:
      case 0x50u:
      case 0x5Du:
      case 0x5Eu:
      case 0x62u:
      case 0x64u:
      case 0x66u:
      case 0x68u:
      case 0x69u:
      case 0x73u:
      case 0x75u:
      case 0x78u:
      case 0x79u:
      case 0x7Au:
      case 0x7Eu:
      case 0x7Fu:
      case 0x81u:
      case 0x8Cu:
      case 0x8Du:
      case 0x8Eu:
      case 0x8Fu:
      case 0x90u:
      case 0x91u:
      case 0x92u:
      case 0x93u:
        return 0;
      case 0x10u:
      case 0x45u:
      case 0x5Fu:
      case 0x6Cu:
      case 0x6Du:
        return 1;
      case 0x11u:
        v62 = v8 + 24 + 8LL * *(unsigned __int16 *)(v8 + 4) - 8;
        if ( v8 + 24 == v62 )
          return 0;
        v63 = (_QWORD *)(v8 + 24);
        v10 = 0;
        do
        {
          v64 = sub_18B2030(a1, *v63);
          if ( (int)v10 <= v64 )
          {
            if ( v64 == 2 )
              return 2;
            v10 = v64;
          }
          ++v63;
        }
        while ( (_QWORD *)v62 != v63 );
        return v10;
      case 0x1Cu:
      case 0x20u:
      case 0x21u:
      case 0x26u:
      case 0x27u:
      case 0x2Au:
      case 0x61u:
      case 0x9Du:
        return 2;
      case 0x33u:
        v38 = (_QWORD *)(v8 + 32);
        v39 = v8 + 8LL * *(unsigned __int16 *)(v8 + 4) + 32;
        if ( v38 == (_QWORD *)v39 )
          return 0;
        v10 = 0;
        do
        {
          v40 = sub_18B2030(a1, *v38);
          if ( (int)v10 <= v40 )
            v10 = v40;
          ++v38;
        }
        while ( (_QWORD *)v39 != v38 );
        return v10;
      case 0x39u:
        if ( (*(_DWORD *)(v8 + 16) & 0x3FFF8000) == 0x3FFF8000 )
          return 1;
        a6 = (*(_DWORD *)(v8 + 16) >> 15) & 0x7FFF;
        v8 = *(_QWORD *)(v8 + 8LL * (((*(_BYTE *)(v8 + 19) & 0x40) != 0) + (unsigned int)a6) + 32);
        continue;
      case 0x3Du:
        v8 = *(_QWORD *)(v8 + 16);
        continue;
      case 0x4Cu:
      case 0x52u:
      case 0x54u:
      case 0x55u:
      case 0x58u:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) == 0 )
          return sub_18B2830(a1, v8);
        return 2;
      case 0x4Du:
        if ( ((*(_DWORD *)v8 >> 14) & 0xC) != 0 )
          return 1;
        if ( (*(_BYTE *)(v8 + 2) & 8) != 0 )
          v8 = *(_QWORD *)(v8 + 24);
        else
          v8 = *(_QWORD *)(v8 + 32);
        continue;
      case 0x53u:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0 )
          return 2;
        if ( (*(_DWORD *)v8 & 0x10000) != 0 )
          goto LABEL_116;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 > 1 )
          goto LABEL_109;
        if ( (**(_DWORD **)(v8 + 16) & 0x10000) != 0 )
        {
LABEL_116:
          v18 = 1;
          v10 = 1;
          goto LABEL_77;
        }
        if ( ((*(_WORD *)(v8 + 2) >> 3) & 0x7F) == 9 )
          return 2;
        goto LABEL_109;
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Cu:
        if ( (*(_DWORD *)v8 & 0x10000) != 0 )
          goto LABEL_116;
        v65 = *(_QWORD *)(v8 + 32);
        if ( (*(_WORD *)sub_BFB9F0(v65) & 0x1FF) == 0x66 )
          goto LABEL_109;
        v59 = sub_BFBC70(v65);
LABEL_83:
        v60 = sub_18B1C40(a1, v8, v59, 0, a7, a8, a3, a4);
        v10 = v60;
        if ( v60 == 2 )
          return 2;
        v18 = v60;
        goto LABEL_77;
      case 0x60u:
        if ( (*(_BYTE *)(v8 + 16) & 4) != 0 )
          return 0;
        if ( (*(_DWORD *)v8 & 0x20000) != 0 )
          return 1;
        if ( !sub_C960B0(v8) )
          return 0;
        if ( sub_C9A8A0(v8) )
          return 2;
        v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        continue;
      case 0x6Au:
        if ( (*(_DWORD *)v8 & 0x10000) != 0 )
          goto LABEL_116;
        v59 = *(_QWORD *)(v8 + 16);
        goto LABEL_83;
      case 0x6Bu:
        return sub_18B1C40(a1, v8, *(_QWORD *)(v8 + 16), 0, a7, a8, a3, a4);
      case 0x6Eu:
        v53 = (__int64 *)(sub_C93F60(v8, a2, v9, a6) & 0xFFFFFFFFFFFFFFF0LL);
        if ( !v53 )
          goto LABEL_116;
        v18 = 1;
        v10 = 1;
        if ( (*(_BYTE *)(*v53 + 17) & 4) != 0 )
          goto LABEL_77;
        v12 = *(_QWORD *)(v8 + 16);
        v13 = sub_F63270(*v53, a2, v54, v55, v56, v57);
        if ( v13 && (v16 = sub_B97300((__int64)v13), (v17 = v16) != 0) && sub_B994D0(v16, v12) )
        {
          v70 = sub_18B1C40(a1, v8, v17, 0, v14, v15, a3, a4);
          v10 = sub_18B1C40(a1, v8, v12, 0, v71, v72, a3, a4);
          v18 = v10;
          if ( v70 > (int)v10 )
          {
            v18 = v70;
            v10 = v70;
          }
        }
        else
        {
          v10 = sub_18B1C40(a1, v8, v12, 0, v14, v15, a3, a4);
          v18 = v10;
          if ( (v10 & 0x80000000) != 0 )
          {
LABEL_109:
            v18 = 0;
            v10 = 0;
            goto LABEL_77;
          }
        }
        if ( v10 == 2 )
          return 2;
LABEL_77:
        v58 = sub_18B2830(a1, v8);
        if ( v58 >= v18 )
          return (unsigned int)v58;
        return v10;
      case 0x6Fu:
        v8 = sub_C94CC0((_QWORD *)v8);
        continue;
      case 0x70u:
        v8 = sub_C94C80(v8);
        continue;
      case 0x71u:
      case 0x72u:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0 )
          return 2;
        v41 = *(_QWORD *)(v8 + 16);
LABEL_52:
        v10 = sub_18B1C40(a1, v8, v41, 0, a7, a8, a3, a4);
        if ( v10 == 2 )
          return 2;
        v42 = sub_18B2830(a1, v8);
        if ( (int)v10 <= v42 )
          return (unsigned int)v42;
        return v10;
      case 0x74u:
        v41 = **(_QWORD **)(v8 + 16);
        goto LABEL_52;
      case 0x9Cu:
        v29 = *(unsigned __int16 *)(v8 + 12);
        if ( (*(_BYTE *)(v8 + 14) & 1) != 0 )
        {
          v30 = (unsigned __int16)v29;
          v31 = *(_QWORD *)(v8 + 8LL * ((unsigned __int16)v29 + 1) + 16);
          if ( !v31
            || (v32 = sub_18B2030(a1, v31),
                v30 = *(unsigned __int16 *)(v8 + 12),
                v33 = v32,
                v34 = v32,
                v29 = *(unsigned __int16 *)(v8 + 12),
                v33 < 0) )
          {
            v34 = 0;
            v33 = 0;
          }
        }
        else
        {
          v34 = 0;
          v33 = 0;
          v30 = (unsigned __int16)v29;
        }
        if ( !v30 )
        {
          v10 = v33;
LABEL_42:
          v74 = v34;
          v37 = sub_18B2030(a1, *(_QWORD *)(v8 + 16));
          if ( (int)v37 >= v74 )
            return v37;
          return v10;
        }
        v35 = v8 + 8 * v29;
        v73 = v35 - 8 - 8LL * (unsigned int)(v30 - 1);
        while ( 1 )
        {
          v36 = *(_QWORD *)(v35 + 16);
          v10 = sub_18B2030(a1, v36);
          v34 = v10;
          if ( v33 > (int)v10 )
          {
            v34 = v33;
            v10 = v33;
          }
          if ( !*(_QWORD *)(v36 + 8) )
            return v10;
          v35 -= 8;
          v33 = v10;
          if ( v35 == v73 )
            goto LABEL_42;
        }
      case 0xF1u:
        v19 = *(_QWORD *)v8;
        if ( (*(_QWORD *)v8 & 0x4000LL) == 0
          || (v20 = *(_QWORD *)(v8 + 16)) == 0
          || (v21 = sub_18B2030(a1, v20), v22 = v21, v19 = *(_QWORD *)v8, v21 < 0) )
        {
          v22 = 0;
          v21 = 0;
        }
        if ( (v19 & 0x2000) != 0 )
        {
          v23 = *(_QWORD *)(v8 + 8LL * ((v19 & 0x4000) != 0) + 16);
          if ( v23 )
          {
            v24 = sub_18B2030(a1, v23);
            if ( v24 >= v22 )
            {
              v22 = v24;
              v21 = v24;
            }
            v19 = *(_QWORD *)v8;
          }
        }
        v10 = sub_18B2030(a1, *(_QWORD *)(v8 + 8LL * (((v19 & 0x4000) != 0) + ((v19 & 0x2000) != 0)) + 16));
        v25 = v10;
        if ( (int)v10 < v22 )
        {
          v25 = v22;
          v10 = v21;
        }
        sub_EEE000(v8, *(_QWORD *)(a1 + 248));
        if ( v27 )
        {
          if ( v26 )
          {
            v28 = sub_18B2030(a1, v26);
            if ( (int)v28 >= v25 )
              return v28;
          }
        }
        else
        {
          v66 = sub_18B2030(
                  a1,
                  *(_QWORD *)(v8
                            + 8LL
                            * (((*(_QWORD *)v8 & 0x4000) != 0) + (unsigned int)((*(_QWORD *)v8 & 0x2000) != 0) + 1)
                            + 16));
          if ( (*(_QWORD *)v8 & 0x1000LL) != 0
            && (v67 = *(_QWORD *)(v8
                                + 8LL
                                * (((*(_QWORD *)v8 & 0x4000) != 0) + (unsigned int)((*(_QWORD *)v8 & 0x2000) != 0) + 2)
                                + 16)) != 0 )
          {
            v68 = sub_18B2030(a1, v67);
          }
          else
          {
            v68 = 0;
          }
          if ( v68 == v66 )
          {
            if ( v68 >= v25 )
              return (unsigned int)v68;
          }
          else
          {
            if ( ((*(_BYTE *)(v8 + 1) >> 1) & 7) == 1 )
            {
              v69 = 1;
              v68 = 1;
            }
            else
            {
              v69 = v68;
              if ( v66 > v68 )
              {
                v68 = v66;
                v69 = v66;
              }
            }
            if ( v25 <= v69 )
              return (unsigned int)v68;
          }
        }
        return v10;
      case 0xF5u:
        v43 = *(_QWORD *)(v8 + 8);
        v10 = v43 & 1;
        if ( (v43 & 1) != 0 )
        {
          v44 = (unsigned int *)(v43 & 0xFFFFFFFFFFFFFFFELL);
          v45 = v44 + 2;
          v46 = (__int64)&v44[2 * *v44 + 2];
        }
        else
        {
          if ( !v43 )
            return v10;
          v46 = v8 + 16;
          v45 = (_QWORD *)(v8 + 8);
        }
        v10 = 0;
        if ( v45 == (_QWORD *)v46 )
          return v10;
        while ( 1 )
        {
          v49 = *v45;
          v50 = *(_BYTE *)(*v45 + 28LL) & 0x7F;
          if ( (unsigned int)(v50 - 40) <= 6 )
          {
            v51 = sub_18B29F0(a1, *v45);
            v50 = *(_BYTE *)(v49 + 28) & 0x7F;
            if ( (int)v10 <= v51 )
              v10 = v51;
          }
          if ( (unsigned int)(v50 - 64) <= 2 )
            break;
          if ( (unsigned int)(v50 - 26) <= 0x1A )
          {
            v48 = *(_QWORD *)(v49 + 48);
            goto LABEL_62;
          }
LABEL_63:
          if ( (_QWORD *)v46 == ++v45 )
            return v10;
        }
        v47 = (__int64 *)(*(_QWORD *)(v49 + 80) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v49 + 80) & 4) != 0 )
          v48 = v47[1];
        else
          v48 = *v47;
LABEL_62:
        if ( (*(_BYTE *)(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0 )
          return 2;
        goto LABEL_63;
      case 0xFBu:
        v52 = *(_QWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 12) + 16);
        if ( !*(_QWORD *)(v52 + 16) )
        {
          v8 = *(_QWORD *)(v52 + 24);
          continue;
        }
        return sub_18B2830(a1, v8);
    }
  }
}
