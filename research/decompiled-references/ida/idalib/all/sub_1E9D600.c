__int64 __fastcall sub_1E9D600(__int64 *a1, unsigned __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r13
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rcx
  char v15; // dl
  unsigned __int64 v16; // rsi
  char v17; // al
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r12
  unsigned __int8 v23; // al
  __int64 v24; // rdx
  __int64 *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r14
  __int64 v29; // rax
  unsigned int v30; // esi
  unsigned int v31; // r15d
  unsigned int v32; // r8d
  __int64 *v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // r14
  __int64 v38; // rax
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r15
  __int64 v51; // rdx
  __int64 v52; // r15
  void *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  void *v58; // rdi
  int v59; // r11d
  __int64 v60; // r8
  bool v61; // zf
  int v62; // edi
  int v63; // edi
  int v64; // r8d
  __int64 *v65; // rsi
  unsigned int i; // edx
  __int64 v67; // r10
  int v68; // edx
  int v69; // edx
  int v70; // edi
  unsigned int v71; // r15d
  __int64 v72; // r8
  unsigned int v73; // edx
  unsigned int v74; // r15d
  unsigned __int8 v75; // [rsp+0h] [rbp-F8h]
  __int64 v76; // [rsp+0h] [rbp-F8h]
  __int64 v77; // [rsp+0h] [rbp-F8h]
  __int64 v78; // [rsp+0h] [rbp-F8h]
  __int64 v79; // [rsp+0h] [rbp-F8h]
  __int64 v80; // [rsp+8h] [rbp-F0h]
  int v81; // [rsp+10h] [rbp-E8h] BYREF
  int v82; // [rsp+14h] [rbp-E4h] BYREF
  __int64 v83; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v84; // [rsp+24h] [rbp-D4h]
  int v85; // [rsp+2Ch] [rbp-CCh]
  _BYTE v86[200]; // [rsp+30h] [rbp-C8h] BYREF

  result = sub_16EC930(*a1, a2, 4u, a3);
  if ( !(_BYTE)result )
  {
    v6 = *a1;
    v83 = 0;
    if ( (unsigned __int8)sub_1E92530(v6, a2, 0, &v83, a3) || (unsigned __int8)sub_1E930E0(*a1, a2, 1u, v7, v8, v9, a3) )
      return 1;
    v10 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 48);
    sub_168B6C0((__int64)a1);
    v13 = *(_QWORD *)&byte_8[v83 & 0xFFFFFFFFFFFFFFF0LL];
    v14 = *(_QWORD *)&byte_8[*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL];
    v15 = v13 | v83;
    v16 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    v17 = v14 | *(_QWORD *)(v10 + 8);
    v18 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v16 | v15 & 7) != (v18 | v17 & 7) )
    {
      v19 = sub_EEB7E0(v10, v16, a3);
      sub_168B9F0((__int64)v86, a1, v19, 0x1558u, 0);
      v81 = 3;
      v20 = sub_1587D10((__int64)v86, &v81);
      v82 = 1;
      v21 = sub_1587D10(v20, &v82);
      v22 = sub_EEC8C0(v10, (__int64)&v82, a3);
      if ( *(_BYTE *)(v21 + 120) )
      {
        v37 = *(_QWORD *)(v21 + 32);
        if ( v37 )
        {
          v38 = *(unsigned int *)(v37 + 424);
          v42 = *(unsigned int *)(v37 + 428);
          v40 = v38 + 1;
        }
        else
        {
          v43 = *(_QWORD *)(v21 + 40);
          v44 = *(_DWORD *)(v43 + 14976);
          if ( v44 )
          {
            v49 = (unsigned int)(v44 - 1);
            *(_DWORD *)(v43 + 14976) = v49;
            v37 = *(_QWORD *)(v43 + 8 * v49 + 14848);
            v50 = *(unsigned int *)(v37 + 536);
            *(_BYTE *)v37 = 0;
            v51 = *(_QWORD *)(v37 + 528);
            *(_DWORD *)(v37 + 424) = 0;
            v52 = v51 + (v50 << 6);
            while ( v51 != v52 )
            {
              while ( 1 )
              {
                v52 -= 64;
                v53 = *(void **)(v52 + 24);
                if ( v53 == (void *)(v52 + 40) )
                  break;
                v76 = v51;
                operator delete(v53);
                v51 = v76;
                if ( v76 == v52 )
                  goto LABEL_33;
              }
            }
LABEL_33:
            v38 = *(unsigned int *)(v37 + 424);
            v42 = *(unsigned int *)(v37 + 428);
            *(_DWORD *)(v37 + 536) = 0;
            v40 = v38 + 1;
          }
          else
          {
            v45 = operator new(0x3A0u);
            v42 = 8;
            v40 = 1;
            v37 = v45;
            *(_BYTE *)v45 = 0;
            *(_QWORD *)(v45 + 96) = v45 + 112;
            *(_QWORD *)(v45 + 128) = v45 + 144;
            *(_QWORD *)(v45 + 160) = v45 + 176;
            *(_QWORD *)(v45 + 192) = v45 + 208;
            *(_QWORD *)(v45 + 224) = v45 + 240;
            *(_QWORD *)(v45 + 256) = v45 + 272;
            *(_QWORD *)(v45 + 288) = v45 + 304;
            *(_QWORD *)(v45 + 320) = v45 + 336;
            *(_QWORD *)(v45 + 352) = v45 + 368;
            *(_QWORD *)(v45 + 384) = v45 + 400;
            *(_QWORD *)(v45 + 416) = v45 + 432;
            *(_QWORD *)(v45 + 104) = 0;
            *(_BYTE *)(v45 + 112) = 0;
            *(_QWORD *)(v45 + 136) = 0;
            *(_BYTE *)(v45 + 144) = 0;
            *(_QWORD *)(v45 + 168) = 0;
            *(_BYTE *)(v45 + 176) = 0;
            *(_QWORD *)(v45 + 200) = 0;
            *(_BYTE *)(v45 + 208) = 0;
            *(_QWORD *)(v45 + 232) = 0;
            *(_BYTE *)(v45 + 240) = 0;
            *(_QWORD *)(v45 + 264) = 0;
            *(_BYTE *)(v45 + 272) = 0;
            *(_QWORD *)(v45 + 296) = 0;
            *(_BYTE *)(v45 + 304) = 0;
            *(_QWORD *)(v45 + 328) = 0;
            *(_BYTE *)(v45 + 336) = 0;
            *(_QWORD *)(v45 + 360) = 0;
            *(_BYTE *)(v45 + 368) = 0;
            *(_QWORD *)(v45 + 392) = 0;
            *(_BYTE *)(v45 + 400) = 0;
            *(_QWORD *)(v45 + 424) = 0x800000000LL;
            *(_QWORD *)(v45 + 528) = v45 + 544;
            *(_QWORD *)(v45 + 536) = 0x600000000LL;
            v38 = 0;
          }
          *(_QWORD *)(v21 + 32) = v37;
        }
        v84 = v22;
        LOBYTE(v85) = 1;
        if ( v40 <= v42 )
          goto LABEL_17;
LABEL_22:
        sub_2237220(v37 + 416, v37 + 432, v40, 12);
        v38 = *(unsigned int *)(v37 + 424);
LABEL_17:
        v41 = *(_QWORD *)(v37 + 416) + 12 * v38;
        *(_QWORD *)v41 = v84;
        *(_DWORD *)(v41 + 8) = v85;
        v23 = *(_BYTE *)(v21 + 120);
        ++*(_DWORD *)(v37 + 424);
        goto LABEL_8;
      }
      v23 = *(_BYTE *)(v21 + 132);
      if ( !v23 )
      {
LABEL_8:
        v75 = v23;
        sub_15F7200(v86);
        return v75;
      }
      v28 = sub_168B9E0((_QWORD *)v21);
      v29 = *(_QWORD *)(v21 + 16);
      if ( v29 )
        v29 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 32LL))(*(_QWORD *)(v21 + 16));
      v30 = *(_DWORD *)(v28 + 16);
      if ( !v30 )
        goto LABEL_47;
      v27 = *(_QWORD *)v28;
      v31 = ((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4);
      v32 = (v30 - 1) & v31;
      v33 = (__int64 *)(*(_QWORD *)v28 + 32LL * v32);
      v34 = *v33;
      if ( v29 == *v33 )
      {
LABEL_13:
        v35 = v33[1];
        goto LABEL_14;
      }
      v59 = 1;
      v25 = nullptr;
      if ( v34 == -4096 )
        goto LABEL_41;
      while ( 1 )
      {
        if ( !v25 && v34 == -8192 )
          v25 = v33;
        v32 = (v30 - 1) & (v59 + v32);
        v33 = (__int64 *)(v27 + 32LL * v32);
        v34 = *v33;
        if ( v29 == *v33 )
          goto LABEL_13;
        if ( v34 == -4096 )
          break;
        ++v59;
      }
      if ( !v25 )
LABEL_41:
        v25 = v33;
      v24 = (unsigned int)(*(_DWORD *)(v28 + 8) + 1);
      v26 = (unsigned int)(4 * v24);
      if ( (unsigned int)v26 < 3 * v30 )
      {
        v60 = v30 >> 3;
        if ( v30 - *(_DWORD *)(v28 + 12) - (unsigned int)v24 > (unsigned int)v60 )
        {
LABEL_44:
          v61 = *v25 == -4096;
          *(_DWORD *)(v28 + 8) = v24;
          if ( !v61 )
            --*(_DWORD *)(v28 + 12);
          *v25 = v29;
          v35 = 0;
          v25[1] = 0;
          v25[2] = 0;
          v25[3] = 0;
LABEL_14:
          v36 = v35 + 32LL * *(unsigned int *)(v21 + 128);
          v37 = *(_QWORD *)(v36 + 8);
          if ( v37 )
          {
            v38 = *(unsigned int *)(v37 + 424);
            v39 = *(unsigned int *)(v37 + 428);
            v40 = v38 + 1;
          }
          else
          {
            v46 = *(_QWORD *)(v36 + 16);
            v47 = *(_DWORD *)(v46 + 14976);
            if ( v47 )
            {
              v54 = (unsigned int)(v47 - 1);
              *(_DWORD *)(v46 + 14976) = v54;
              v37 = *(_QWORD *)(v46 + 8 * v54 + 14848);
              v55 = *(unsigned int *)(v37 + 536);
              *(_BYTE *)v37 = 0;
              v56 = *(_QWORD *)(v37 + 528);
              *(_DWORD *)(v37 + 424) = 0;
              v57 = v56 + (v55 << 6);
              v77 = v56;
              while ( v77 != v57 )
              {
                while ( 1 )
                {
                  v57 -= 64;
                  v58 = *(void **)(v57 + 24);
                  if ( v58 == (void *)(v57 + 40) )
                    break;
                  v80 = v57;
                  operator delete(v58);
                  v57 = v80;
                  if ( v77 == v80 )
                    goto LABEL_37;
                }
              }
LABEL_37:
              v38 = *(unsigned int *)(v37 + 424);
              v39 = *(unsigned int *)(v37 + 428);
              *(_DWORD *)(v37 + 536) = 0;
              v40 = v38 + 1;
            }
            else
            {
              v48 = operator new(0x3A0u);
              v39 = 8;
              v40 = 1;
              v37 = v48;
              *(_BYTE *)v48 = 0;
              *(_QWORD *)(v48 + 96) = v48 + 112;
              *(_QWORD *)(v48 + 128) = v48 + 144;
              *(_QWORD *)(v48 + 160) = v48 + 176;
              *(_QWORD *)(v48 + 192) = v48 + 208;
              *(_QWORD *)(v48 + 224) = v48 + 240;
              *(_QWORD *)(v48 + 256) = v48 + 272;
              *(_QWORD *)(v48 + 288) = v48 + 304;
              *(_QWORD *)(v48 + 320) = v48 + 336;
              *(_QWORD *)(v48 + 352) = v48 + 368;
              *(_QWORD *)(v48 + 384) = v48 + 400;
              *(_QWORD *)(v48 + 416) = v48 + 432;
              *(_QWORD *)(v48 + 104) = 0;
              *(_BYTE *)(v48 + 112) = 0;
              *(_QWORD *)(v48 + 136) = 0;
              *(_BYTE *)(v48 + 144) = 0;
              *(_QWORD *)(v48 + 168) = 0;
              *(_BYTE *)(v48 + 176) = 0;
              *(_QWORD *)(v48 + 200) = 0;
              *(_BYTE *)(v48 + 208) = 0;
              *(_QWORD *)(v48 + 232) = 0;
              *(_BYTE *)(v48 + 240) = 0;
              *(_QWORD *)(v48 + 264) = 0;
              *(_BYTE *)(v48 + 272) = 0;
              *(_QWORD *)(v48 + 296) = 0;
              *(_BYTE *)(v48 + 304) = 0;
              *(_QWORD *)(v48 + 328) = 0;
              *(_BYTE *)(v48 + 336) = 0;
              *(_QWORD *)(v48 + 360) = 0;
              *(_BYTE *)(v48 + 368) = 0;
              *(_QWORD *)(v48 + 392) = 0;
              *(_BYTE *)(v48 + 400) = 0;
              *(_QWORD *)(v48 + 424) = 0x800000000LL;
              *(_QWORD *)(v48 + 528) = v48 + 544;
              *(_QWORD *)(v48 + 536) = 0x600000000LL;
              v38 = 0;
            }
            *(_QWORD *)(v36 + 8) = v37;
          }
          v84 = v22;
          LOBYTE(v85) = 1;
          if ( v40 <= v39 )
            goto LABEL_17;
          goto LABEL_22;
        }
        v79 = v29;
        sub_1587800(v28, v30, v24, (__int64)v25, v60, v27);
        v68 = *(_DWORD *)(v28 + 16);
        if ( v68 )
        {
          v69 = v68 - 1;
          v29 = v79;
          v70 = 1;
          v71 = v69 & v31;
          v65 = nullptr;
          while ( 1 )
          {
            v25 = (__int64 *)(*(_QWORD *)v28 + 32LL * v71);
            v72 = *v25;
            if ( v79 == *v25 )
              break;
            if ( v72 == -4096 )
              goto LABEL_55;
            if ( v65 || v72 != -8192 )
              v25 = v65;
            v74 = v70 + v71;
            v65 = v25;
            ++v70;
            v71 = v69 & v74;
          }
LABEL_50:
          LODWORD(v24) = *(_DWORD *)(v28 + 8) + 1;
          goto LABEL_44;
        }
      }
      else
      {
LABEL_47:
        v78 = v29;
        sub_1587800(v28, 2 * v30, v24, (__int64)v25, v26, v27);
        v62 = *(_DWORD *)(v28 + 16);
        if ( v62 )
        {
          v29 = v78;
          v63 = v62 - 1;
          v64 = 1;
          v65 = nullptr;
          for ( i = v63 & (((unsigned int)v78 >> 9) ^ ((unsigned int)v78 >> 4)); ; i = v63 & v73 )
          {
            v25 = (__int64 *)(*(_QWORD *)v28 + 32LL * i);
            v67 = *v25;
            if ( v78 == *v25 )
              break;
            if ( v67 == -4096 )
            {
LABEL_55:
              LODWORD(v24) = *(_DWORD *)(v28 + 8) + 1;
              if ( v65 )
                v25 = v65;
              goto LABEL_44;
            }
            if ( v65 || v67 != -8192 )
              v25 = v65;
            v73 = v64 + i;
            v65 = v25;
            ++v64;
          }
          goto LABEL_50;
        }
      }
      ++*(_DWORD *)(v28 + 8);
      BUG();
    }
    return sub_1E930E0(*a1, a2, 3u, v18, v11, v12, a3);
  }
  return result;
}
