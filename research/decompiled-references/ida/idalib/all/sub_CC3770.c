__int64 __fastcall sub_CC3770(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rbp
  __int16 v9; // ax
  __int64 v10; // r12
  unsigned int v11; // esi
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // r15
  unsigned int v15; // esi
  unsigned int v16; // esi
  unsigned int v17; // esi
  unsigned __int16 v18; // ax
  __int64 result; // rax
  unsigned __int64 v20; // r12
  __int64 v21; // rbp
  unsigned int v22; // esi
  int v23; // eax
  unsigned int v24; // r13d
  __int64 v25; // rcx
  int v26; // edx
  int *v27; // rax
  int v28; // edx
  bool v29; // zf
  unsigned int v30; // ebx
  int *v31; // rax
  int v32; // edx
  _DWORD *v33; // rdi
  __int64 v34; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rbp
  unsigned int v39; // eax
  unsigned int v40; // eax
  int v41; // eax
  __int64 v42; // r12
  _QWORD *v43; // rbx
  __int64 v44; // r14
  int v45; // r13d
  int v46; // eax
  unsigned __int64 v47; // rbp
  __int64 v48; // rbx
  __int64 v49; // rsi
  __int64 v50; // rsi
  __int64 v51; // rdi
  unsigned int v52; // eax
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rcx
  int v57; // [rsp+Ch] [rbp-5Ch]
  __int64 v58; // [rsp+10h] [rbp-58h]
  unsigned int v59; // [rsp+18h] [rbp-50h]
  unsigned int v60; // [rsp+1Ch] [rbp-4Ch]
  __int64 v61[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v62[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v63[4]; // [rsp+48h] [rbp-20h] BYREF

  v18 = *(_WORD *)a2 & 0x1FF;
  if ( v18 <= 0x75u )
  {
    if ( v18 == 4 )
      return sub_CCF860();
  }
  else if ( v18 <= 0x77u )
  {
    a3 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
    switch ( (char)a3 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 32:
        return sub_CCE240();
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
        return sub_CC0AF0((_QWORD *)a1, a2, a3, a4);
      default:
        a3 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
        break;
    }
  }
  while ( 2 )
  {
    switch ( v18 )
    {
      case 0u:
      case 1u:
      case 2u:
      case 3u:
      case 7u:
      case 0x13u:
      case 0x16u:
      case 0x17u:
      case 0x18u:
      case 0x19u:
      case 0x1Cu:
      case 0x1Eu:
      case 0x1Fu:
      case 0x20u:
      case 0x21u:
      case 0x22u:
      case 0x23u:
      case 0x24u:
      case 0x26u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Fu:
      case 0x31u:
      case 0x32u:
      case 0x38u:
      case 0x3Bu:
      case 0x43u:
      case 0x44u:
      case 0x45u:
      case 0x46u:
      case 0x48u:
      case 0x49u:
      case 0x5Fu:
      case 0x66u:
      case 0x6Cu:
      case 0x6Du:
        return 0;
      case 4u:
        return sub_CCF860();
      case 5u:
        return sub_CB9B00(a1, a2, a3, a4);
      case 6u:
        if ( *(_BYTE *)(a1 + 584) )
          return nullsub_1542();
        v34 = a2;
        v35 = *(_QWORD *)a2;
        v36 = *(_QWORD *)(a2 + 8);
        if ( (v35 & 0x8000000) != 0 )
        {
          v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v37 + 16) == 13 && ((*(_WORD *)(v37 + 18) >> 3) & 0x1FF) == 0x1B4 )
          {
            v63[0] = v34 | 4;
            return sub_CA5E60(a1, (v35 & 0x10000000) != 0, v63);
          }
          else
          {
            v38 = (v35 >> 28) & 1;
            v39 = sub_CE6180(*(_QWORD *)(a1 + 488), v36);
            return sub_CBA160(a1, v38, v39, v34);
          }
        }
        else
        {
          v40 = sub_CE6180(*(_QWORD *)(a1 + 488), v36);
          return sub_CC6080(a1, v34 + 24, v40, v34);
        }
      case 8u:
        JUMPOUT(0xCD0220);
      case 9u:
        if ( *(_BYTE *)(a1 + 584) )
          return 1;
        v5 = a2;
        v6 = a1;
        if ( !*(_BYTE *)(a1 + 586) )
        {
LABEL_79:
          v13 = sub_E29460(*(_QWORD *)(a1 + 496), a2, 0);
          v61[0] = v5 | 4;
          return sub_CA4B70(v6, v13, v61);
        }
        a2 = *(_QWORD *)(a2 + 8);
        a1 = **(_QWORD **)(a1 + 488);
        v7 = sub_A72040((_QWORD *)a1, a2);
        if ( !v7 || (unsigned int)*(unsigned __int8 *)(v7 + 16) - 2 > 1 )
          BUG();
        v8 = *(_QWORD **)(v7 + 40);
        if ( (*(_BYTE *)(v7 + 19) & 2) != 0 )
        {
          if ( *((_DWORD *)v8 + 2) <= 0x40u )
            v8 = (_QWORD *)*v8;
          else
            v8 = *(_QWORD **)*v8;
        }
        v59 = (unsigned int)v8;
        v60 = *(_DWORD *)(v5 + 16);
        if ( (unsigned int)v8 > v60 )
          LODWORD(v8) = *(_DWORD *)(v5 + 16);
        v9 = (*(_WORD *)(v5 + 2) >> 6) & 7;
        v57 = (*(_WORD *)(v5 + 2) >> 6) & 7;
        if ( !(_DWORD)v8 )
          goto LABEL_82;
        v10 = 0;
        v58 = (unsigned int)((_DWORD)v8 - 1);
        while ( 2 )
        {
          if ( (_BYTE)v9 == 2 )
          {
            v11 = *(unsigned __int16 *)(v5 + 2 * v10 + 4LL * *(unsigned int *)(v5 + 4) + 20);
            if ( v57 != 1 )
              goto LABEL_72;
          }
          else
          {
            if ( (_BYTE)v9 == 4 )
            {
              v11 = *(_DWORD *)(v5 + 4 * (v10 + *(unsigned int *)(v5 + 4)) + 20);
            }
            else
            {
              if ( (_BYTE)v9 != 1 )
                goto LABEL_79;
              v11 = *(unsigned __int8 *)(v10 + v5 + 4LL * *(unsigned int *)(v5 + 4) + 20);
            }
            if ( v57 != 1 )
            {
LABEL_72:
              v61[0] = v5 | 4;
              if ( v57 == 2 )
              {
                sub_CA9200(v6, v11, v61);
                a2 = (unsigned int)v10;
                a1 = v6;
                v61[0] = v5 | 4;
                sub_CA4D20(v6, v10, v61);
              }
              else
              {
                sub_CA4470(v6, v11, v61);
                a2 = (unsigned int)v10;
                a1 = v6;
                v61[0] = v5 | 4;
                sub_CA4D50(v6, v10, v61);
              }
              v12 = v10 + 1;
              if ( v58 != v10 )
                goto LABEL_75;
              break;
            }
          }
          v61[0] = v5 | 4;
          sub_CA8E00(v6, v11, v61);
          a2 = (unsigned int)v10;
          a1 = v6;
          v61[0] = v5 | 4;
          sub_CA4CF0(v6, v10, v61);
          v12 = v10 + 1;
          if ( v58 != v10 )
          {
LABEL_75:
            v10 = v12;
            v9 = (*(_WORD *)(v5 + 2) >> 6) & 7;
            continue;
          }
          break;
        }
LABEL_82:
        if ( v59 > v60 )
        {
          v14 = v5 | 4;
          if ( v57 == 1 )
          {
            do
            {
              v61[0] = v14;
              sub_CA8E00(v6, 0, v61);
              v16 = (unsigned int)v8;
              v61[0] = v14;
              LODWORD(v8) = (_DWORD)v8 + 1;
              sub_CA4CF0(v6, v16, v61);
            }
            while ( v59 != (_DWORD)v8 );
          }
          else if ( v57 == 2 )
          {
            do
            {
              v61[0] = v14;
              sub_CA9200(v6, 0, v61);
              v17 = (unsigned int)v8;
              v61[0] = v14;
              LODWORD(v8) = (_DWORD)v8 + 1;
              sub_CA4D20(v6, v17, v61);
            }
            while ( v59 != (_DWORD)v8 );
          }
          else
          {
            do
            {
              v61[0] = v14;
              sub_CA4470(v6, 0, v61);
              v15 = (unsigned int)v8;
              v61[0] = v14;
              LODWORD(v8) = (_DWORD)v8 + 1;
              sub_CA4D50(v6, v15, v61);
            }
            while ( v59 != (_DWORD)v8 );
          }
        }
        return 1;
      case 0xAu:
        return sub_CCC720();
      case 0xBu:
        return sub_CC6320();
      case 0xCu:
        return sub_CB0A00(a1, a2);
      case 0xDu:
        return sub_CC12C0((_QWORD *)a1, a2, a3, a4);
      case 0xEu:
        return sub_CB0600(a1, a2);
      case 0xFu:
        result = *(unsigned __int8 *)(a1 + 584);
        if ( !(_BYTE)result )
          return sub_CB0E20(a1, a2);
        return result;
      case 0x10u:
        return sub_CB0E90(a1, a2);
      case 0x11u:
        return sub_CD0EB0();
      case 0x12u:
        if ( *(_BYTE *)(a1 + 584) )
          return nullsub_1543();
        v47 = a2;
        v48 = a1;
        if ( *(_BYTE *)(a1 + 586) )
        {
          v49 = 0;
          if ( *(char *)(v47 + 2) < 0 )
            v49 = *(_QWORD *)(v47 + 16);
          return sub_CCC710(a1, v49);
        }
        else
        {
          v50 = 0;
          v51 = *(_QWORD *)(a1 + 496);
          if ( *(char *)(v47 + 2) < 0 )
            v50 = *(_QWORD *)(v47 + 16);
          v52 = sub_E29460(v51, v50, v47);
          v63[0] = v47 | 4;
          return sub_CA4B70(v48, v52, v63);
        }
      case 0x14u:
        return sub_CCC710(a1, *(_QWORD *)(a2 + 24));
      case 0x15u:
        return sub_CD0F50();
      case 0x1Au:
        return sub_CC39A0();
      case 0x1Bu:
        v41 = *(_DWORD *)(a2 + 32);
        if ( !v41 )
          return 0;
        v42 = a2 + 16LL * (unsigned int)(v41 - 1) + 64;
        v43 = (_QWORD *)(a2 + 48);
        do
        {
LABEL_154:
          if ( (*v43 & 3) != 0 )
            goto LABEL_153;
          v44 = *(_QWORD *)(a2 + 16LL * *(unsigned int *)(a2 + 32) + 8LL * (unsigned int)(*v43 >> 2) + 40);
          v45 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(v44 + 8));
          if ( !*(_BYTE *)(a1 + 584) )
          {
            if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v44) )
              return 0;
            if ( v45 != 6 )
            {
              v61[0] = a2 | 4;
              if ( !(unsigned __int8)sub_CA0510(a1, v45, 6, v61) )
                return 0;
            }
LABEL_153:
            v43 += 2;
            if ( (_QWORD *)v42 == v43 )
              break;
            goto LABEL_154;
          }
          if ( !(unsigned __int8)sub_CC7500(a1, v44) )
            return 0;
          v43 += 2;
        }
        while ( (_QWORD *)v42 != v43 );
        result = *(unsigned __int8 *)(a1 + 584);
        if ( !(_BYTE)result )
        {
          v46 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(a2 + 8));
          v61[0] = a2 | 4;
          return sub_CAA110((_QWORD *)a1, v46, a2, v61);
        }
        return result;
      case 0x1Du:
        result = *(unsigned __int8 *)(a1 + 584);
        if ( !(_BYTE)result )
          return sub_CB2740(a1, a2);
        return result;
      case 0x25u:
        return sub_CD0560();
      case 0x27u:
        return sub_CC8AF0();
      case 0x28u:
        result = *(unsigned __int8 *)(a1 + 584);
        if ( !(_BYTE)result )
          return sub_CB0D00(a1, a2);
        return result;
      case 0x2Eu:
        return sub_CD02E0();
      case 0x30u:
        return sub_CD06B0();
      case 0x33u:
        return sub_CC3C30();
      case 0x34u:
        return sub_CB7D50(a1, a2);
      case 0x35u:
        v53 = *(_QWORD *)(a2 + 56);
        v54 = 0;
        if ( v53 && (v53 & 2) == 0 )
          v54 = v53 & 0xFFFFFFFFFFFFFFFCLL;
        return sub_CD1000(
                 a1,
                 *(_QWORD *)(a2 + 16),
                 (unsigned int)((__int64)(*(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16)) >> 3),
                 v54);
      case 0x36u:
        return sub_CB9290(a1, a2);
      case 0x37u:
        return sub_CC7130();
      case 0x39u:
        return sub_CCC710(
                 a1,
                 *(_QWORD *)(a2
                           + 8LL * (((*(_BYTE *)(a2 + 19) & 0x40) != 0) + ((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFFu))
                           + 32));
      case 0x3Au:
        result = *(unsigned __int8 *)(a1 + 584);
        if ( !(_BYTE)result )
          return sub_CAFF70(a1, a2);
        return result;
      case 0x3Cu:
        return sub_CD0610();
      case 0x3Du:
        return sub_CD0230();
      case 0x3Eu:
        return sub_CB2960(a1, a2);
      case 0x3Fu:
        return sub_CAFD10(a1, a2, a3, a4);
      case 0x40u:
        return sub_CC2970((_BYTE *)a1, a2);
      case 0x41u:
        return sub_CB0DE0(a1, a2);
      case 0x42u:
        return sub_CB0B30(a1, a2);
      case 0x47u:
        return sub_CC55C0(a1, *(_QWORD *)(a2 + 16), a2);
      case 0x4Au:
        return sub_CC1050((_QWORD *)a1, a2, a3, a4);
      case 0x4Bu:
        result = *(unsigned __int8 *)(a1 + 584);
        if ( !(_BYTE)result )
          return sub_CB0E60(a1, a2);
        return result;
      case 0x4Cu:
        return sub_CC34A0(a1, a2);
      case 0x4Du:
        if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
          return sub_CCC710(a1, *(_QWORD *)(a2 + 24));
        else
          return sub_CCC710(a1, *(_QWORD *)(a2 + 32));
      case 0x4Eu:
        result = *(unsigned __int8 *)(a1 + 584);
        if ( !(_BYTE)result )
          return sub_CB0780(a1, a2);
        return result;
      case 0x4Fu:
      case 0x50u:
      case 0x51u:
      case 0x54u:
      case 0x55u:
      case 0x56u:
      case 0x57u:
        return sub_CCC8E0();
      case 0x52u:
        return sub_CD0BB0();
      case 0x53u:
        return sub_CCE1D0();
      case 0x58u:
        return sub_CC3490(a1, a2);
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Cu:
      case 0x5Du:
        return sub_CC7540();
      case 0x5Eu:
        return sub_CC6990();
      case 0x60u:
        return sub_CB0FD0((_QWORD *)a1, a2);
      case 0x61u:
        return sub_CC8960();
      case 0x62u:
        if ( *(_BYTE *)(a1 + 584) )
        {
          result = 1;
        }
        else
        {
          v20 = a2;
          v21 = a1;
          v22 = *(_DWORD *)(a1 + 56);
          if ( v22 )
          {
            v29 = *(_BYTE *)(a1 + 60) == 0;
            v62[0] = v20 | 4;
            if ( v29 )
              result = sub_CA4C30(a1, v22, v62);
            else
              result = sub_CA4C60(a1, v22, v62);
          }
          else if ( *(_BYTE *)(a1 + 664) && (v23 = *(_DWORD *)(a1 + 608)) != 0 )
          {
            v24 = v23 - 1;
            if ( v23 == 1 )
              return 1;
            v25 = *(_QWORD *)(a1 + 600);
            v26 = *(_DWORD *)(v25 + 16LL * v24);
            if ( v26 && v26 != 7 )
            {
              v27 = (int *)(v25 + 16LL * (unsigned int)(v23 - 2));
              while ( --v24 )
              {
                v28 = *v27;
                v27 -= 4;
                if ( !v28 || v28 == 7 )
                  goto LABEL_128;
              }
              return 1;
            }
LABEL_128:
            v30 = v24 - 1;
            if ( v24 == 1 )
            {
              v24 = 1;
              goto LABEL_138;
            }
            if ( (*(_DWORD *)(v25 + 16LL * v30) & 0xFFFFFFFB) != 1 && *(_DWORD *)(v25 + 16LL * v30) != 7 )
            {
LABEL_135:
              if ( v30 != v24 )
                goto LABEL_138;
              return 1;
            }
            v31 = (int *)(v25 + 16LL * (v24 - 2));
            while ( --v30 )
            {
              v32 = *v31;
              v31 -= 4;
              if ( (v32 & 0xFFFFFFFB) != 1 && v32 != 7 )
                goto LABEL_135;
            }
LABEL_138:
            while ( 1 )
            {
              v33 = (_DWORD *)(v25 + 16LL * v30);
              if ( *v33 != 7 )
              {
                result = sub_CC5D90(v33, v21, v20);
                if ( !(_BYTE)result )
                  break;
              }
              if ( ++v30 == v24 )
                return 1;
              v25 = *(_QWORD *)(v21 + 600);
            }
          }
          else
          {
            v62[0] = v20 | 4;
            result = sub_CABAE0(a1, v62);
          }
        }
        break;
      case 0x63u:
        return sub_CB7E90((_QWORD ***)a1, a2);
      case 0x64u:
        return sub_CBCA00(a1, a2);
      case 0x65u:
        return sub_CCC710(a1, *(_QWORD *)(a2 + 16));
      case 0x67u:
        v55 = *(_QWORD *)(a2 + 40);
        v56 = 0;
        if ( v55 && (v55 & 2) == 0 )
          v56 = v55 & 0xFFFFFFFFFFFFFFFCLL;
        return sub_CD1000(a1, a2 + 48, *(unsigned int *)(a2 + 16), v56);
      case 0x68u:
        result = *(unsigned __int8 *)(a1 + 584);
        if ( !(_BYTE)result )
          return sub_CAFF10(a1, a2, a3, a4, a5);
        return result;
      case 0x69u:
        result = *(unsigned __int8 *)(a1 + 584);
        if ( !(_BYTE)result )
          return sub_CB09D0(a1, a2);
        return result;
      case 0x6Au:
        return sub_CC8B70();
      case 0x6Bu:
        return sub_CB12C0((_QWORD *)a1, a2);
      case 0x6Eu:
        return sub_CB0EB0((_QWORD *)a1, a2);
      case 0x6Fu:
        return sub_CCEE10();
      case 0x70u:
        return sub_CCEDC0();
      case 0x71u:
      case 0x72u:
        return sub_CC3DB0();
      case 0x73u:
        result = *(unsigned __int8 *)(a1 + 584);
        if ( !(_BYTE)result )
          return sub_CAFED0(a1, a2);
        return result;
      case 0x74u:
        return sub_CD0AB0();
      case 0x75u:
        return sub_CB0F60(a1, a2);
      case 0x76u:
        return sub_CCE240();
      case 0x77u:
        return sub_CC0AF0((_QWORD *)a1, a2, a3, a4);
      default:
        continue;
    }
    return result;
  }
}
