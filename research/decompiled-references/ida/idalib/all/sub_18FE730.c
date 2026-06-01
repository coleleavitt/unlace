__int64 __fastcall sub_18FE730(unsigned __int64 a1, unsigned int a2, __int64 *a3, double a4)
{
  __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 result; // rax
  unsigned int v12; // r12d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 (__fastcall ***v15)(); // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rbp
  unsigned int v18; // r12d
  __int64 v19; // r13
  int v20; // r8d
  __int64 v21; // rdx
  bool v22; // zf
  __int16 v23; // cx
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r13
  __int64 v28; // rax
  char v29; // al
  __int64 v30; // rdx
  unsigned int v31; // ecx
  unsigned __int64 v32; // rax
  __int64 v33; // r13
  __int64 *v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r12
  __int64 v45; // r14
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  _QWORD *v50; // rcx
  unsigned __int64 *v51; // rax
  __int64 *v52; // rdx
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rax
  __int64 *v55; // rcx
  __int64 v56; // rax
  unsigned int v57; // [rsp+4h] [rbp-E4h] BYREF
  unsigned __int64 v58; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v59; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v60; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+28h] [rbp-C0h] BYREF
  __int64 (__fastcall **v62)(); // [rsp+30h] [rbp-B8h] BYREF
  int v63; // [rsp+38h] [rbp-B0h]
  unsigned __int64 *v64; // [rsp+40h] [rbp-A8h]

  v58 = a1;
  v57 = a2;
  sub_17BB410((__int64)a3, a1, a2);
  v5 = a3[31];
  v6 = v57;
  v9 = sub_C0EF10(a1, v5, (int *)&v57, v7, v8);
  v10 = v9;
  if ( v9 == 15 )
  {
    v12 = 5270;
    if ( (*(_WORD *)v58 & 0x1FF) == 0x2E && (*(_BYTE *)(*(_QWORD *)(v58 + 24) + 28LL) & 0x7Fu) - 49 <= 2 )
    {
      v13 = sub_BFB900(*(_QWORD *)(v58 + 16));
      v14 = sub_BFBAE0(v13);
      if ( (*(_WORD *)v14 & 0x1FF) == 0x21 && (*(_BYTE *)(v14 + 27) & 1) != 0 )
        v12 = *(_QWORD *)(v14 + 16) == 0 ? 5270 : 4894;
    }
    goto LABEL_9;
  }
  result = 0;
  if ( (_DWORD)v10 )
  {
    switch ( v10 )
    {
      case 1LL:
        v31 = 5300;
        goto LABEL_31;
      case 2LL:
      case 6LL:
        v30 = *(_QWORD *)(v58 + 8);
        v63 = 5279;
        v62 = off_2BC64D8;
        v64 = &v58;
        return sub_1E63C20(a3, v57, v30, 1, &v62);
      case 3LL:
        v12 = 5263;
        goto LABEL_9;
      case 4LL:
      case 12LL:
      case 15LL:
        v12 = 5270;
        goto LABEL_9;
      case 5LL:
        v12 = 5290;
        goto LABEL_9;
      case 7LL:
        v24 = v58;
        v25 = sub_BFB9F0(v58);
        if ( (*(_WORD *)v25 & 0x1FF) != 0x47 )
          goto LABEL_37;
        if ( *(char *)(v25 + 2) >= 0 )
          goto LABEL_37;
        v27 = *(_QWORD *)(v25 + 16);
        if ( !v27 )
          goto LABEL_37;
        v28 = *(_QWORD *)(v27 + 48);
        if ( (v28 & 1) != 0 || (byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
          goto LABEL_37;
        v29 = *(_BYTE *)(v27 + 28);
        if ( (v29 & 0x7F) == 0x34 )
          goto LABEL_28;
        v43 = (v29 & 0x7Fu) - 40;
        if ( (unsigned int)v43 <= 6 )
        {
          v44 = a3[68];
          v45 = 0;
          if ( !v44 )
            goto LABEL_79;
          while ( 1 )
          {
            if ( (*(_BYTE *)(v44 + 8) & 0x7Fu) - 34 > 5
              || v44 == 72
              || (*(_BYTE *)(v27 + 28) & 0x7F) == 0x2B
              || (*(_BYTE *)(v27 + 98) & 1) == 0 )
            {
              v48 = *(_QWORD *)(v27 + 16);
              if ( (v48 & 4) == 0 )
                goto LABEL_64;
            }
            else
            {
              v49 = sub_B7D580(v44 - 72, 1, v43, v26);
              if ( v49 )
                v49 += 72LL;
              v48 = *(_QWORD *)(v27 + 16);
              v50 = (_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF8LL);
              if ( (v48 & 4) == 0 )
              {
                if ( (_QWORD *)v49 == v50 )
                  goto LABEL_78;
LABEL_64:
                v46 = v48 & 0xFFFFFFFFFFFFFFF8LL;
                goto LABEL_65;
              }
              if ( *v50 == v49 )
                goto LABEL_78;
            }
            v46 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_65:
            if ( v44 == v46 )
              goto LABEL_78;
            v45 = v44;
            v47 = sub_B72690(v44);
            if ( !v47 )
            {
              v44 = 0;
LABEL_78:
              v29 = *(_BYTE *)(v27 + 28);
LABEL_79:
              if ( (v29 & 0x7F) != 0x2B && (*(_BYTE *)(v27 + 98) & 1) != 0 )
                v45 = v44;
              v12 = 3329;
              if ( (*(_BYTE *)(v45 + 8) & 0x7F) != 8 )
LABEL_28:
                v12 = 4090;
LABEL_9:
              v60 = 0;
              if ( v6 != v57 )
              {
                LODWORD(v60) = v6;
                HIDWORD(v60) = v6;
              }
LABEL_11:
              sub_168B9F0((__int64)&v62, a3 + 1, v57, v12, 0);
              v15 = &v62;
              v61 = sub_EEC8C0(v58, (__int64)(a3 + 1), a4);
LABEL_12:
              v16 = sub_1587DB0((__int64)v15, &v61);
              sub_15884C0(v16, &v60);
              sub_15F7200(&v62);
              return 1;
            }
            v44 = v47;
          }
        }
LABEL_37:
        if ( (*(_BYTE *)(a3[29] + 107) & 4) == 0 )
          goto LABEL_59;
        v32 = sub_BFD550(v24);
        if ( (*(_WORD *)v32 & 0x1FF) != 0x47 )
          goto LABEL_59;
        v33 = *(_QWORD *)(v32 + 16);
        if ( (*(_BYTE *)(v33 + 28) & 0x7Fu) - 40 > 6 || *(char *)(v33 + 96) >= 0 )
          goto LABEL_59;
        v34 = (__int64 *)(*(_QWORD *)(v33 + 56) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v33 + 56) & 4) != 0 )
          v34 = (__int64 *)v34[4];
        if ( v34 )
        {
          v35 = *v34;
          if ( (v35 & 1) != 0 || (byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
          {
LABEL_59:
            sub_18F32D0((__int64)a3, v24, v57, a4);
            return 1;
          }
        }
        v36 = sub_15F1670((__int64)a3);
        if ( v36 && v33 == *(_QWORD *)(v36 + 120) )
        {
          v41 = ((int)((unsigned int)(*(_QWORD *)(v36 + 56) >> 16) << 30) >> 31) + 5213;
          goto LABEL_50;
        }
        if ( (*(_BYTE *)(v33 + 29) & 1) == 0 )
          goto LABEL_49;
        v51 = sub_B8C3D0(v33, v5, v37, v38, v39, v40);
        v52 = (__int64 *)*v51;
        v53 = *v51 + 8LL * *((unsigned int *)v51 + 2);
        if ( *v51 >= v53 )
        {
          if ( v52 != (__int64 *)v53 )
          {
            if ( *(_WORD *)(*(_QWORD *)v53 + 36LL) == 308 )
              goto LABEL_92;
            v55 = (__int64 *)(v53 + 8);
            while ( v52 != v55 )
            {
              v56 = *v55++;
              if ( *(_WORD *)(v56 + 36) == 308 )
                goto LABEL_92;
            }
          }
        }
        else
        {
          v54 = *v51;
          while ( *(_WORD *)(*(_QWORD *)v54 + 36LL) != 308 )
          {
            v54 += 8LL;
            if ( v53 == v54 )
              goto LABEL_49;
          }
          if ( v53 != v54 )
            goto LABEL_92;
        }
LABEL_49:
        v41 = 5215;
        if ( (*(_BYTE *)(v33 + 28) & 0x7F) != 0x2B )
        {
LABEL_50:
          v60 = 0;
          if ( v6 != v57 )
          {
            LODWORD(v60) = v6;
            HIDWORD(v60) = v6;
          }
          sub_168B9F0((__int64)&v62, a3 + 1, v57, v41, 0);
          v61 = sub_EEC8C0(v58, (__int64)(a3 + 1), a4);
          v42 = sub_1587DB0((__int64)&v62, &v61);
          sub_15884C0(v42, &v60);
          sub_15F7200(&v62);
          return 0;
        }
LABEL_92:
        v41 = 5211;
        goto LABEL_50;
      case 8LL:
        v17 = v58;
        v18 = v57;
        v19 = *(_QWORD *)(v58 + 8);
        v20 = sub_EEC8C0(v58, v5, a4);
        v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
                                    + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        v22 = *(_BYTE *)(v21 + 16) == 48;
        LOBYTE(v62) = 0;
        if ( !v22 )
          LODWORD(v21) = 0;
        v23 = *(_WORD *)v17 & 0x1FF;
        if ( v23 == 46 )
        {
          sub_18F9310((_DWORD)a3, *(_QWORD *)(v17 + 24), v21, v18, v20, 1, (__int64)&v62);
        }
        else if ( v23 == 71 )
        {
          sub_18F9310((_DWORD)a3, *(_QWORD *)(v17 + 16), v21, v18, v20, 0, (__int64)&v62);
        }
        else
        {
          sub_18F9310((_DWORD)a3, 0, v21, v18, v20, 2, (__int64)&v62);
        }
        if ( !(_BYTE)v62 )
          sub_18F32D0((__int64)a3, v17, v18, a4);
        return 1;
      case 9LL:
        sub_18F32D0((__int64)a3, v58, v57, a4);
        return 1;
      case 10LL:
      case 16LL:
        v31 = 5216;
LABEL_31:
        v60 = 0;
        if ( v6 != v57 )
        {
          LODWORD(v60) = v6;
          HIDWORD(v60) = v6;
        }
        sub_168B9F0((__int64)&v62, a3 + 1, v57, v31, 0);
        v59 = *(_QWORD *)(v58 + 8);
        v15 = (__int64 (__fastcall ***)())sub_162B6D0((__int64)&v62, &v59);
        v61 = sub_EEC8C0(v58, (__int64)&v59, a4);
        goto LABEL_12;
      case 13LL:
        v12 = 4280;
        goto LABEL_9;
      case 14LL:
        v12 = 4894;
        goto LABEL_9;
      default:
        v60 = 0;
        if ( v6 != v57 )
        {
          LODWORD(v60) = v6;
          HIDWORD(v60) = v6;
        }
        v12 = 0;
        goto LABEL_11;
    }
  }
  return result;
}
