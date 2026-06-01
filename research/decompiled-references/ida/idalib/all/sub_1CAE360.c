__int64 __fastcall sub_1CAE360(__int64 *a1, int a2, __int64 a3, double a4)
{
  unsigned int v5; // edx
  int v6; // r8d
  __int64 result; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // r12
  unsigned __int8 v15; // al
  __int64 v16; // rbp
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // r8
  __int64 *v25; // r9
  __int64 v26; // rax
  unsigned int v27; // esi
  __int64 *v28; // rdx
  __int64 v29; // r11
  __int64 v30; // rdx
  __int64 v31; // r15
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rax
  void *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  void *v47; // rdi
  int v48; // r15d
  int v49; // eax
  int v50; // eax
  bool v51; // zf
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int8 v54; // [rsp+0h] [rbp-118h]
  __int64 v55; // [rsp+0h] [rbp-118h]
  __int64 v56; // [rsp+0h] [rbp-118h]
  __int64 v57; // [rsp+8h] [rbp-110h]
  __int64 v58; // [rsp+18h] [rbp-100h] BYREF
  __int64 *v59; // [rsp+20h] [rbp-F8h] BYREF
  int v60; // [rsp+28h] [rbp-F0h]
  __int64 *v61; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v62; // [rsp+38h] [rbp-E0h]
  char v63; // [rsp+40h] [rbp-D8h]
  _QWORD v64[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+60h] [rbp-B8h]
  __int64 v66; // [rsp+70h] [rbp-A8h]
  __int64 v67; // [rsp+78h] [rbp-A0h]
  unsigned __int8 v68; // [rsp+C8h] [rbp-50h]
  unsigned int v69; // [rsp+D0h] [rbp-48h]
  unsigned __int8 v70; // [rsp+D4h] [rbp-44h]

  if ( a2 == 1502 )
  {
    v8 = *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32);
    v9 = sub_168B6C0((__int64)a1);
    sub_C3EB00((__int64)&v61, v8, v9, nullptr, v10, v11);
    if ( !v63 )
    {
LABEL_10:
      sub_98E4B0((__int64)&v61);
      return 0;
    }
    if ( v62 > 0x40 )
    {
      v12 = *v61;
      if ( *v61 < 0 )
        goto LABEL_10;
    }
    else
    {
      if ( !v62 )
        goto LABEL_20;
      v12 = (__int64)((_QWORD)v61 << (64 - (unsigned __int8)v62)) >> (64 - (unsigned __int8)v62);
      if ( v12 < 0 )
        goto LABEL_10;
    }
    if ( v12 > 255 )
      goto LABEL_10;
LABEL_20:
    v13 = sub_EEB7E0(v8, v8, a4);
    sub_168B9F0((__int64)v64, a1, v13, 0x13D0u, 0);
    v14 = sub_EEC8C0(v8, (__int64)a1, a4);
    if ( v68 )
    {
      v16 = v66;
      if ( !v66 )
      {
        v35 = v67;
        v36 = *(_DWORD *)(v67 + 14976);
        if ( v36 )
        {
          v38 = (unsigned int)(v36 - 1);
          *(_DWORD *)(v67 + 14976) = v38;
          v16 = *(_QWORD *)(v35 + 8 * v38 + 14848);
          v39 = *(unsigned int *)(v16 + 536);
          *(_BYTE *)v16 = 0;
          v40 = *(_QWORD *)(v16 + 528);
          *(_DWORD *)(v16 + 424) = 0;
          v41 = v40 + (v39 << 6);
          while ( v40 != v41 )
          {
            while ( 1 )
            {
              v41 -= 64;
              v42 = *(void **)(v41 + 24);
              if ( v42 == (void *)(v41 + 40) )
                break;
              v55 = v41;
              operator delete(v42);
              v41 = v55;
              if ( v40 == v55 )
                goto LABEL_44;
            }
          }
LABEL_44:
          v17 = *(unsigned int *)(v16 + 424);
          v18 = *(unsigned int *)(v16 + 428);
          *(_DWORD *)(v16 + 536) = 0;
          v19 = v17 + 1;
        }
        else
        {
          v37 = operator new(0x3A0u);
          v18 = 8;
          v19 = 1;
          v16 = v37;
          *(_BYTE *)v37 = 0;
          *(_QWORD *)(v37 + 96) = v37 + 112;
          *(_QWORD *)(v37 + 128) = v37 + 144;
          *(_QWORD *)(v37 + 160) = v37 + 176;
          *(_QWORD *)(v37 + 192) = v37 + 208;
          *(_QWORD *)(v37 + 224) = v37 + 240;
          *(_QWORD *)(v37 + 256) = v37 + 272;
          *(_QWORD *)(v37 + 288) = v37 + 304;
          *(_QWORD *)(v37 + 320) = v37 + 336;
          *(_QWORD *)(v37 + 352) = v37 + 368;
          *(_QWORD *)(v37 + 384) = v37 + 400;
          *(_QWORD *)(v37 + 416) = v37 + 432;
          *(_QWORD *)(v37 + 104) = 0;
          *(_BYTE *)(v37 + 112) = 0;
          *(_QWORD *)(v37 + 136) = 0;
          *(_BYTE *)(v37 + 144) = 0;
          *(_QWORD *)(v37 + 168) = 0;
          *(_BYTE *)(v37 + 176) = 0;
          *(_QWORD *)(v37 + 200) = 0;
          *(_BYTE *)(v37 + 208) = 0;
          *(_QWORD *)(v37 + 232) = 0;
          *(_BYTE *)(v37 + 240) = 0;
          *(_QWORD *)(v37 + 264) = 0;
          *(_BYTE *)(v37 + 272) = 0;
          *(_QWORD *)(v37 + 296) = 0;
          *(_BYTE *)(v37 + 304) = 0;
          *(_QWORD *)(v37 + 328) = 0;
          *(_BYTE *)(v37 + 336) = 0;
          *(_QWORD *)(v37 + 360) = 0;
          *(_BYTE *)(v37 + 368) = 0;
          *(_QWORD *)(v37 + 392) = 0;
          *(_BYTE *)(v37 + 400) = 0;
          *(_QWORD *)(v37 + 424) = 0x800000000LL;
          *(_QWORD *)(v37 + 528) = v37 + 544;
          *(_QWORD *)(v37 + 536) = 0x600000000LL;
          v17 = 0;
        }
        v66 = v16;
        goto LABEL_25;
      }
      goto LABEL_24;
    }
    v15 = v70;
    if ( !v70 )
    {
LABEL_22:
      v54 = v15;
      sub_15F7200(v64);
      sub_98E4B0((__int64)&v61);
      return v54;
    }
    v23 = sub_168B9E0(v64);
    v26 = v65;
    if ( v65 )
      v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65 + 32LL))(v65);
    v27 = *(_DWORD *)(v23 + 16);
    v58 = v26;
    if ( v27 )
    {
      v24 = (v27 - 1) & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
      v28 = (__int64 *)(*(_QWORD *)v23 + 32 * v24);
      v29 = *v28;
      if ( v26 == *v28 )
      {
LABEL_32:
        v30 = v28[1];
        goto LABEL_33;
      }
      v48 = 1;
      v25 = nullptr;
      if ( v29 != -4096 )
      {
        while ( 1 )
        {
          if ( !v25 && v29 == -8192 )
            v25 = v28;
          v53 = (v27 - 1) & ((_DWORD)v24 + v48);
          v24 = v53;
          v28 = (__int64 *)(*(_QWORD *)v23 + 32 * v53);
          v29 = *v28;
          if ( v26 == *v28 )
            goto LABEL_32;
          if ( v29 == -4096 )
          {
            if ( v25 )
              goto LABEL_52;
            break;
          }
          ++v48;
        }
      }
      v25 = v28;
LABEL_52:
      v49 = *(_DWORD *)(v23 + 8);
      v21 = 3 * v27;
      v59 = v25;
      v50 = v49 + 1;
      v22 = (unsigned int)(4 * v50);
      if ( (unsigned int)v22 < (unsigned int)v21 )
      {
        v21 = v27 - *(_DWORD *)(v23 + 12) - v50;
        v22 = v27 >> 3;
        if ( (unsigned int)v21 > (unsigned int)v22 )
        {
LABEL_54:
          v51 = *v25 == -4096;
          *(_DWORD *)(v23 + 8) = v50;
          if ( !v51 )
            --*(_DWORD *)(v23 + 12);
          v52 = v58;
          v25[1] = 0;
          v30 = 0;
          v25[2] = 0;
          *v25 = v52;
          v25[3] = 0;
LABEL_33:
          v31 = v30 + 32LL * v69;
          v16 = *(_QWORD *)(v31 + 8);
          if ( !v16 )
          {
            v32 = *(_QWORD *)(v31 + 16);
            v33 = *(_DWORD *)(v32 + 14976);
            if ( v33 )
            {
              v43 = (unsigned int)(v33 - 1);
              *(_DWORD *)(v32 + 14976) = v43;
              v16 = *(_QWORD *)(v32 + 8 * v43 + 14848);
              v44 = *(unsigned int *)(v16 + 536);
              *(_BYTE *)v16 = 0;
              v45 = *(_QWORD *)(v16 + 528);
              *(_DWORD *)(v16 + 424) = 0;
              v46 = v45 + (v44 << 6);
              while ( v45 != v46 )
              {
                while ( 1 )
                {
                  v46 -= 64;
                  v47 = *(void **)(v46 + 24);
                  if ( v47 == (void *)(v46 + 40) )
                    break;
                  v57 = v45;
                  v56 = v46;
                  operator delete(v47);
                  v46 = v56;
                  v45 = v57;
                  if ( v57 == v56 )
                    goto LABEL_49;
                }
              }
LABEL_49:
              v17 = *(unsigned int *)(v16 + 424);
              v18 = *(unsigned int *)(v16 + 428);
              *(_DWORD *)(v16 + 536) = 0;
              v19 = v17 + 1;
            }
            else
            {
              v34 = operator new(0x3A0u);
              v18 = 8;
              v19 = 1;
              v16 = v34;
              *(_BYTE *)v34 = 0;
              *(_QWORD *)(v34 + 96) = v34 + 112;
              *(_QWORD *)(v34 + 128) = v34 + 144;
              *(_QWORD *)(v34 + 160) = v34 + 176;
              *(_QWORD *)(v34 + 192) = v34 + 208;
              *(_QWORD *)(v34 + 224) = v34 + 240;
              *(_QWORD *)(v34 + 256) = v34 + 272;
              *(_QWORD *)(v34 + 288) = v34 + 304;
              *(_QWORD *)(v34 + 320) = v34 + 336;
              *(_QWORD *)(v34 + 352) = v34 + 368;
              *(_QWORD *)(v34 + 384) = v34 + 400;
              *(_QWORD *)(v34 + 416) = v34 + 432;
              *(_QWORD *)(v34 + 104) = 0;
              *(_BYTE *)(v34 + 112) = 0;
              *(_QWORD *)(v34 + 136) = 0;
              *(_BYTE *)(v34 + 144) = 0;
              *(_QWORD *)(v34 + 168) = 0;
              *(_BYTE *)(v34 + 176) = 0;
              *(_QWORD *)(v34 + 200) = 0;
              *(_BYTE *)(v34 + 208) = 0;
              *(_QWORD *)(v34 + 232) = 0;
              *(_BYTE *)(v34 + 240) = 0;
              *(_QWORD *)(v34 + 264) = 0;
              *(_BYTE *)(v34 + 272) = 0;
              *(_QWORD *)(v34 + 296) = 0;
              *(_BYTE *)(v34 + 304) = 0;
              *(_QWORD *)(v34 + 328) = 0;
              *(_BYTE *)(v34 + 336) = 0;
              *(_QWORD *)(v34 + 360) = 0;
              *(_BYTE *)(v34 + 368) = 0;
              *(_QWORD *)(v34 + 392) = 0;
              *(_BYTE *)(v34 + 400) = 0;
              *(_QWORD *)(v34 + 424) = 0x800000000LL;
              *(_QWORD *)(v34 + 528) = v34 + 544;
              *(_QWORD *)(v34 + 536) = 0x600000000LL;
              v17 = 0;
            }
            *(_QWORD *)(v31 + 8) = v16;
            goto LABEL_25;
          }
LABEL_24:
          v17 = *(unsigned int *)(v16 + 424);
          v18 = *(unsigned int *)(v16 + 428);
          v19 = v17 + 1;
LABEL_25:
          v59 = (__int64 *)v14;
          LOBYTE(v60) = 1;
          if ( v19 > v18 )
          {
            sub_2237220(v16 + 416, v16 + 432, v19, 12);
            v17 = *(unsigned int *)(v16 + 424);
          }
          v20 = *(_QWORD *)(v16 + 416) + 12 * v17;
          *(_QWORD *)v20 = v59;
          *(_DWORD *)(v20 + 8) = v60;
          v15 = v68;
          ++*(_DWORD *)(v16 + 424);
          goto LABEL_22;
        }
LABEL_59:
        sub_1587800(v23, v27, v21, v22, v24, (__int64)v25);
        sub_15823C0((__int64 *)v23, &v58, &v59);
        v25 = v59;
        v50 = *(_DWORD *)(v23 + 8) + 1;
        goto LABEL_54;
      }
    }
    else
    {
      v59 = nullptr;
    }
    v27 *= 2;
    goto LABEL_59;
  }
  switch ( a2 )
  {
    case 1507:
    case 1508:
    case 1750:
    case 1751:
    case 1753:
    case 1754:
      v5 = 1;
      v6 = 15;
      goto LABEL_4;
    case 1512:
    case 1640:
    case 1652:
    case 1653:
    case 1654:
    case 1655:
    case 1656:
    case 1657:
    case 1658:
    case 1659:
    case 1660:
    case 1661:
    case 1662:
    case 1663:
    case 1720:
    case 1721:
    case 1728:
    case 1729:
    case 1752:
      v5 = 2;
      v6 = 15;
      goto LABEL_4;
    case 1574:
    case 1575:
    case 1576:
    case 1577:
    case 1768:
      v5 = 3;
      v6 = 255;
      goto LABEL_4;
    case 1694:
    case 1695:
    case 1696:
    case 1697:
    case 1698:
    case 1699:
    case 1700:
    case 1701:
    case 1702:
    case 1703:
    case 1704:
    case 1705:
    case 1719:
      v5 = 3;
      v6 = 15;
      goto LABEL_4;
    case 1709:
    case 1727:
      result = sub_16D5460(*a1, a3, 1u, 0, 15, 1u, a4);
      if ( !(_BYTE)result )
        return sub_16D5460(*a1, a3, 2u, 0, 15, 1u, a4);
      return result;
    case 1715:
    case 1737:
      v5 = 1;
      v6 = 4095;
      goto LABEL_4;
    case 1738:
    case 1739:
      v5 = 2;
      v6 = 7;
LABEL_4:
      result = sub_16D5460(*a1, a3, v5, 0, v6, 1u, a4);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
