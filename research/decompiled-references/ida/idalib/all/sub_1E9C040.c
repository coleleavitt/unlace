__int64 __fastcall sub_1E9C040(__int64 *a1, unsigned __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  unsigned __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rsi
  char v13; // al
  char v14; // dl
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r12
  unsigned __int8 v21; // al
  unsigned int v22; // ebp
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r14
  __int64 v33; // rax
  unsigned int v34; // esi
  unsigned int v35; // r15d
  unsigned int v36; // r8d
  __int64 *v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // r15
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r15
  void *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  void *v56; // rdi
  int v57; // r11d
  __int64 v58; // r8
  bool v59; // zf
  int v60; // edi
  int v61; // edi
  int v62; // r8d
  __int64 *v63; // rsi
  unsigned int i; // edx
  __int64 v65; // r10
  int v66; // edx
  int v67; // edx
  int v68; // edi
  unsigned int v69; // r15d
  __int64 v70; // r8
  unsigned int v71; // r15d
  unsigned int v72; // edx
  unsigned __int8 v73; // [rsp+0h] [rbp-108h]
  __int64 v74; // [rsp+0h] [rbp-108h]
  __int64 v75; // [rsp+0h] [rbp-108h]
  __int64 v76; // [rsp+0h] [rbp-108h]
  __int64 v77; // [rsp+0h] [rbp-108h]
  __int64 v78; // [rsp+8h] [rbp-100h]
  int v79; // [rsp+18h] [rbp-F0h] BYREF
  int v80; // [rsp+1Ch] [rbp-ECh] BYREF
  __int64 v81; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v82; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v83; // [rsp+34h] [rbp-D4h]
  int v84; // [rsp+3Ch] [rbp-CCh]
  _BYTE v85[200]; // [rsp+40h] [rbp-C8h] BYREF

  result = sub_16EC930(*a1, a2, 5u, a3);
  if ( !(_BYTE)result )
  {
    v6 = *a1;
    v81 = 0;
    if ( (unsigned __int8)sub_1E92530(v6, a2, 0, &v81, a3) )
      return 1;
    v7 = *a1;
    v82 = 0;
    if ( (unsigned __int8)sub_1E92530(v7, a2, 1u, &v82, a3) )
      return 1;
    v8 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
    sub_168B6C0((__int64)a1);
    v11 = *(_QWORD *)&byte_8[v82 & 0xFFFFFFFFFFFFFFF0LL];
    v12 = *(_QWORD *)&byte_8[v81 & 0xFFFFFFFFFFFFFFF0LL];
    v13 = v11 | v82;
    v14 = v12 | v81;
    v15 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    v16 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v16 | v14 & 7) == (v15 | v13 & 7) )
    {
      v22 = 2;
      while ( 1 )
      {
        result = sub_1E930E0(*a1, a2, v22, v15, v9, v10, a3);
        if ( (_BYTE)result )
          break;
        if ( ++v22 == 5 )
          return result;
      }
      return 1;
    }
    v17 = sub_EEB7E0(v8, v16, a3);
    sub_168B9F0((__int64)v85, a1, v17, 0x1558u, 0);
    v79 = 2;
    v18 = sub_1587D10((__int64)v85, &v79);
    v80 = 1;
    v19 = sub_1587D10(v18, &v80);
    v20 = sub_EEC8C0(v8, (__int64)&v80, a3);
    if ( *(_BYTE *)(v19 + 120) )
    {
      v23 = *(_QWORD *)(v19 + 32);
      if ( !v23 )
      {
        v44 = *(_QWORD *)(v19 + 40);
        v45 = *(_DWORD *)(v44 + 14976);
        if ( v45 )
        {
          v47 = (unsigned int)(v45 - 1);
          *(_DWORD *)(v44 + 14976) = v47;
          v23 = *(_QWORD *)(v44 + 8 * v47 + 14848);
          v48 = *(unsigned int *)(v23 + 536);
          *(_BYTE *)v23 = 0;
          v49 = *(_QWORD *)(v23 + 528);
          *(_DWORD *)(v23 + 424) = 0;
          v48 <<= 6;
          v50 = v49 + v48;
          v74 = v49;
          while ( v74 != v50 )
          {
            while ( 1 )
            {
              v50 -= 64;
              v51 = *(void **)(v50 + 24);
              if ( v51 == (void *)(v50 + 40) )
                break;
              operator delete(v51);
              if ( v74 == v50 )
                goto LABEL_33;
            }
          }
LABEL_33:
          v24 = *(unsigned int *)(v23 + 424);
          v25 = *(unsigned int *)(v23 + 428);
          *(_DWORD *)(v23 + 536) = 0;
          v26 = v24 + 1;
        }
        else
        {
          v46 = operator new(0x3A0u);
          v25 = 8;
          v26 = 1;
          v23 = v46;
          *(_BYTE *)v46 = 0;
          *(_QWORD *)(v46 + 96) = v46 + 112;
          *(_QWORD *)(v46 + 128) = v46 + 144;
          *(_QWORD *)(v46 + 160) = v46 + 176;
          *(_QWORD *)(v46 + 192) = v46 + 208;
          *(_QWORD *)(v46 + 224) = v46 + 240;
          *(_QWORD *)(v46 + 256) = v46 + 272;
          *(_QWORD *)(v46 + 288) = v46 + 304;
          *(_QWORD *)(v46 + 320) = v46 + 336;
          *(_QWORD *)(v46 + 352) = v46 + 368;
          *(_QWORD *)(v46 + 384) = v46 + 400;
          *(_QWORD *)(v46 + 416) = v46 + 432;
          *(_QWORD *)(v46 + 104) = 0;
          *(_BYTE *)(v46 + 112) = 0;
          *(_QWORD *)(v46 + 136) = 0;
          *(_BYTE *)(v46 + 144) = 0;
          *(_QWORD *)(v46 + 168) = 0;
          *(_BYTE *)(v46 + 176) = 0;
          *(_QWORD *)(v46 + 200) = 0;
          *(_BYTE *)(v46 + 208) = 0;
          *(_QWORD *)(v46 + 232) = 0;
          *(_BYTE *)(v46 + 240) = 0;
          *(_QWORD *)(v46 + 264) = 0;
          *(_BYTE *)(v46 + 272) = 0;
          *(_QWORD *)(v46 + 296) = 0;
          *(_BYTE *)(v46 + 304) = 0;
          *(_QWORD *)(v46 + 328) = 0;
          *(_BYTE *)(v46 + 336) = 0;
          *(_QWORD *)(v46 + 360) = 0;
          *(_BYTE *)(v46 + 368) = 0;
          *(_QWORD *)(v46 + 392) = 0;
          *(_BYTE *)(v46 + 400) = 0;
          *(_QWORD *)(v46 + 424) = 0x800000000LL;
          *(_QWORD *)(v46 + 528) = v46 + 544;
          *(_QWORD *)(v46 + 536) = 0x600000000LL;
          v24 = 0;
        }
        *(_QWORD *)(v19 + 32) = v23;
        goto LABEL_15;
      }
      goto LABEL_14;
    }
    v21 = *(_BYTE *)(v19 + 132);
    if ( !v21 )
    {
LABEL_8:
      v73 = v21;
      sub_15F7200(v85);
      return v73;
    }
    v32 = sub_168B9E0((_QWORD *)v19);
    v33 = *(_QWORD *)(v19 + 16);
    if ( v33 )
      v33 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 32LL))(*(_QWORD *)(v19 + 16));
    v34 = *(_DWORD *)(v32 + 16);
    if ( !v34 )
      goto LABEL_48;
    v31 = *(_QWORD *)v32;
    v35 = ((unsigned int)v33 >> 9) ^ ((unsigned int)v33 >> 4);
    v36 = (v34 - 1) & v35;
    v37 = (__int64 *)(*(_QWORD *)v32 + 32LL * v36);
    v38 = *v37;
    if ( v33 == *v37 )
    {
LABEL_22:
      v39 = v37[1];
      goto LABEL_23;
    }
    v57 = 1;
    v29 = nullptr;
    if ( v38 == -4096 )
      goto LABEL_42;
    while ( 1 )
    {
      if ( v38 == -8192 && !v29 )
        v29 = v37;
      v36 = (v34 - 1) & (v57 + v36);
      v37 = (__int64 *)(v31 + 32LL * v36);
      v38 = *v37;
      if ( v33 == *v37 )
        goto LABEL_22;
      if ( v38 == -4096 )
        break;
      ++v57;
    }
    if ( !v29 )
LABEL_42:
      v29 = v37;
    v28 = (unsigned int)(*(_DWORD *)(v32 + 8) + 1);
    v30 = (unsigned int)(4 * v28);
    if ( (unsigned int)v30 < 3 * v34 )
    {
      v58 = v34 >> 3;
      if ( v34 - *(_DWORD *)(v32 + 12) - (unsigned int)v28 > (unsigned int)v58 )
      {
LABEL_45:
        v59 = *v29 == -4096;
        *(_DWORD *)(v32 + 8) = v28;
        if ( !v59 )
          --*(_DWORD *)(v32 + 12);
        *v29 = v33;
        v39 = 0;
        v29[1] = 0;
        v29[2] = 0;
        v29[3] = 0;
LABEL_23:
        v40 = v39 + 32LL * *(unsigned int *)(v19 + 128);
        v23 = *(_QWORD *)(v40 + 8);
        if ( !v23 )
        {
          v41 = *(_QWORD *)(v40 + 16);
          v42 = *(_DWORD *)(v41 + 14976);
          if ( v42 )
          {
            v52 = (unsigned int)(v42 - 1);
            *(_DWORD *)(v41 + 14976) = v52;
            v23 = *(_QWORD *)(v41 + 8 * v52 + 14848);
            v53 = *(unsigned int *)(v23 + 536);
            *(_BYTE *)v23 = 0;
            v54 = *(_QWORD *)(v23 + 528);
            *(_DWORD *)(v23 + 424) = 0;
            v55 = v54 + (v53 << 6);
            while ( v54 != v55 )
            {
              while ( 1 )
              {
                v55 -= 64;
                v56 = *(void **)(v55 + 24);
                if ( v56 == (void *)(v55 + 40) )
                  break;
                v78 = v54;
                v75 = v55;
                operator delete(v56);
                v55 = v75;
                v54 = v78;
                if ( v78 == v75 )
                  goto LABEL_40;
              }
            }
LABEL_40:
            v24 = *(unsigned int *)(v23 + 424);
            v25 = *(unsigned int *)(v23 + 428);
            *(_DWORD *)(v23 + 536) = 0;
            v26 = v24 + 1;
          }
          else
          {
            v43 = operator new(0x3A0u);
            v25 = 8;
            v26 = 1;
            v23 = v43;
            *(_BYTE *)v43 = 0;
            *(_QWORD *)(v43 + 96) = v43 + 112;
            *(_QWORD *)(v43 + 128) = v43 + 144;
            *(_QWORD *)(v43 + 160) = v43 + 176;
            *(_QWORD *)(v43 + 192) = v43 + 208;
            *(_QWORD *)(v43 + 224) = v43 + 240;
            *(_QWORD *)(v43 + 256) = v43 + 272;
            *(_QWORD *)(v43 + 288) = v43 + 304;
            *(_QWORD *)(v43 + 320) = v43 + 336;
            *(_QWORD *)(v43 + 352) = v43 + 368;
            *(_QWORD *)(v43 + 384) = v43 + 400;
            *(_QWORD *)(v43 + 416) = v43 + 432;
            *(_QWORD *)(v43 + 104) = 0;
            *(_BYTE *)(v43 + 112) = 0;
            *(_QWORD *)(v43 + 136) = 0;
            *(_BYTE *)(v43 + 144) = 0;
            *(_QWORD *)(v43 + 168) = 0;
            *(_BYTE *)(v43 + 176) = 0;
            *(_QWORD *)(v43 + 200) = 0;
            *(_BYTE *)(v43 + 208) = 0;
            *(_QWORD *)(v43 + 232) = 0;
            *(_BYTE *)(v43 + 240) = 0;
            *(_QWORD *)(v43 + 264) = 0;
            *(_BYTE *)(v43 + 272) = 0;
            *(_QWORD *)(v43 + 296) = 0;
            *(_BYTE *)(v43 + 304) = 0;
            *(_QWORD *)(v43 + 328) = 0;
            *(_BYTE *)(v43 + 336) = 0;
            *(_QWORD *)(v43 + 360) = 0;
            *(_BYTE *)(v43 + 368) = 0;
            *(_QWORD *)(v43 + 392) = 0;
            *(_BYTE *)(v43 + 400) = 0;
            *(_QWORD *)(v43 + 424) = 0x800000000LL;
            *(_QWORD *)(v43 + 528) = v43 + 544;
            *(_QWORD *)(v43 + 536) = 0x600000000LL;
            v24 = 0;
          }
          *(_QWORD *)(v40 + 8) = v23;
          goto LABEL_15;
        }
LABEL_14:
        v24 = *(unsigned int *)(v23 + 424);
        v25 = *(unsigned int *)(v23 + 428);
        v26 = v24 + 1;
LABEL_15:
        v83 = v20;
        LOBYTE(v84) = 1;
        if ( v26 > v25 )
        {
          sub_2237220(v23 + 416, v23 + 432, v26, 12);
          v24 = *(unsigned int *)(v23 + 424);
        }
        v27 = *(_QWORD *)(v23 + 416) + 12 * v24;
        *(_QWORD *)v27 = v83;
        *(_DWORD *)(v27 + 8) = v84;
        v21 = *(_BYTE *)(v19 + 120);
        ++*(_DWORD *)(v23 + 424);
        goto LABEL_8;
      }
      v77 = v33;
      sub_1587800(v32, v34, v28, (__int64)v29, v58, v31);
      v66 = *(_DWORD *)(v32 + 16);
      if ( v66 )
      {
        v67 = v66 - 1;
        v33 = v77;
        v68 = 1;
        v69 = v67 & v35;
        v63 = nullptr;
        while ( 1 )
        {
          v29 = (__int64 *)(*(_QWORD *)v32 + 32LL * v69);
          v70 = *v29;
          if ( v77 == *v29 )
            break;
          if ( v70 == -4096 )
            goto LABEL_56;
          if ( v63 || v70 != -8192 )
            v29 = v63;
          v71 = v68 + v69;
          v63 = v29;
          ++v68;
          v69 = v67 & v71;
        }
LABEL_51:
        LODWORD(v28) = *(_DWORD *)(v32 + 8) + 1;
        goto LABEL_45;
      }
    }
    else
    {
LABEL_48:
      v76 = v33;
      sub_1587800(v32, 2 * v34, v28, (__int64)v29, v30, v31);
      v60 = *(_DWORD *)(v32 + 16);
      if ( v60 )
      {
        v33 = v76;
        v61 = v60 - 1;
        v62 = 1;
        v63 = nullptr;
        for ( i = v61 & (((unsigned int)v76 >> 9) ^ ((unsigned int)v76 >> 4)); ; i = v61 & v72 )
        {
          v29 = (__int64 *)(*(_QWORD *)v32 + 32LL * i);
          v65 = *v29;
          if ( v76 == *v29 )
            break;
          if ( v65 == -4096 )
          {
LABEL_56:
            LODWORD(v28) = *(_DWORD *)(v32 + 8) + 1;
            if ( v63 )
              v29 = v63;
            goto LABEL_45;
          }
          if ( v65 != -8192 || v63 )
            v29 = v63;
          v72 = v62 + i;
          v63 = v29;
          ++v62;
        }
        goto LABEL_51;
      }
    }
    ++*(_DWORD *)(v32 + 8);
    BUG();
  }
  return result;
}
