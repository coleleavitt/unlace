unsigned __int64 __fastcall sub_1ACD010(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 *v11; // r12
  __int64 v12; // rdx
  __int64 *v13; // r13
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // al
  unsigned int v20; // esi
  __int64 v22; // rax
  __int64 v23; // rax
  char *v24; // rsi
  __int64 *v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rdi
  __int64 v28; // rcx
  __int64 *v29; // rcx
  char v30; // cl
  __int64 *v31; // rdx
  __int64 v32; // rcx
  __int64 *v33; // rdi
  __int64 v34; // rcx
  __int64 *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r15
  __int64 v44; // rax
  _QWORD *v45; // rax
  char v46; // [rsp+5h] [rbp-D3h] BYREF
  char v47; // [rsp+6h] [rbp-D2h] BYREF
  unsigned __int8 v48; // [rsp+7h] [rbp-D1h] BYREF
  __int64 v49; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v50[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v52; // [rsp+30h] [rbp-A8h] BYREF
  char v53; // [rsp+88h] [rbp-50h]
  unsigned int v54; // [rsp+90h] [rbp-48h]
  char v55; // [rsp+94h] [rbp-44h]

  if ( (unsigned __int8)sub_1ACBC90(a1, a2) )
    return 0;
  v6 = *(unsigned __int8 *)(a2 + 1);
  v7 = *(_BYTE *)(a2 + 144);
  if ( (unsigned __int8)v6 <= 0x31u )
  {
    v8 = 0x3400000000001LL;
    if ( _bittest64(&v8, v6) )
    {
      if ( !v7 )
        goto LABEL_19;
    }
  }
  if ( v7 != 3 )
    abort();
  v9 = *(unsigned int *)(a2 + 24);
  if ( !(_DWORD)v9 )
    goto LABEL_19;
  v10 = *(_QWORD *)sub_1741CC0(a2);
  if ( !v10 )
    goto LABEL_19;
  switch ( *(_BYTE *)a2 )
  {
    case 7:
      v13 = *(__int64 **)a1;
      v30 = *(_BYTE *)(*(_QWORD *)a1 + 8LL);
      if ( ((1LL << v30) & 0x100603) != 0 )
      {
        sub_1AC6E80(*(__int64 **)a1, v10, 0, 49, 7, v30, a3);
        v19 = *(_BYTE *)a2;
        goto LABEL_20;
      }
      v31 = (__int64 *)v13[2];
      v32 = v13[3];
      v33 = &v31[v32];
      v34 = (v32 * 8) >> 5;
      if ( v34 > 0 )
      {
        v9 = *v31;
        if ( *(_BYTE *)(*v31 + 8) == 38 )
        {
          v11 = (__int64 *)v13[2];
        }
        else
        {
          v9 = v31[1];
          v11 = v31 + 1;
          if ( *(_BYTE *)(v9 + 8) != 38 )
          {
            v9 = v31[2];
            v11 = v31 + 2;
            if ( *(_BYTE *)(v9 + 8) != 38 )
            {
              v9 = v31[3];
              v11 = v31 + 3;
              v35 = &v31[4 * v34];
              if ( *(_BYTE *)(v9 + 8) != 38 )
              {
                while ( 1 )
                {
                  v11 = v31 + 4;
                  if ( v35 == v31 + 4 )
                    goto LABEL_57;
                  v9 = v31[4];
                  if ( *(_BYTE *)(v9 + 8) == 38 )
                    goto LABEL_63;
                  v9 = v31[5];
                  if ( *(_BYTE *)(v9 + 8) == 38 )
                  {
                    v11 = v31 + 5;
                    goto LABEL_63;
                  }
                  v9 = v31[6];
                  if ( *(_BYTE *)(v9 + 8) == 38 )
                  {
                    v11 = v31 + 6;
                    goto LABEL_63;
                  }
                  v9 = v31[7];
                  if ( *(_BYTE *)(v9 + 8) == 38 )
                    break;
                  v31 += 4;
                }
                v11 = v31 + 7;
              }
            }
          }
        }
        goto LABEL_63;
      }
      v11 = (__int64 *)v13[2];
LABEL_57:
      v36 = v33 - v11;
      switch ( v36 )
      {
        case 2LL:
          goto LABEL_82;
        case 3LL:
          if ( *(_BYTE *)(*v11 + 8) == 38 )
            goto LABEL_63;
          ++v11;
LABEL_82:
          if ( *(_BYTE *)(*v11 + 8) == 38 )
            goto LABEL_63;
          ++v11;
          break;
        case 1LL:
          break;
        default:
LABEL_60:
          v20 = *(_DWORD *)(a2 + 4);
          goto LABEL_22;
      }
      if ( *(_BYTE *)(*v11 + 8) != 38 )
        goto LABEL_60;
LABEL_63:
      if ( v33 == v11 )
        goto LABEL_60;
LABEL_16:
      v14 = sub_EEB7E0(v10, v9, a3);
      sub_168B9F0((__int64)v50, v13, v14, 0xB6Au, 0);
      if ( v53 )
      {
        sub_AE9DF0(&v52, (__int64)"num", 1u);
      }
      else if ( v55 )
      {
        v43 = sub_168B9E0(v50);
        v44 = v51;
        if ( v51 )
          v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51);
        v49 = v44;
        v45 = sub_1587BC0(v43, &v49, v39, v40, v41, v42);
        sub_AE9DF0((unsigned __int8 **)(*v45 + 32LL * v54 + 8), (__int64)"num", 1u);
      }
      v46 = 49;
      v15 = sub_1AA5620((__int64)v50, &v46);
      v47 = *(_BYTE *)a2;
      v16 = sub_1AC3570(v15, &v47);
      v48 = *(_BYTE *)a2 == 7 && *(_BYTE *)(*(_QWORD *)a1 + 8LL) != 20;
      v17 = sub_1588420(v16, &v48);
      v18 = sub_1AA3B30(v17, (char *)(*(_QWORD *)a1 + 8LL));
      LOBYTE(v49) = 38;
      sub_1AA5620(v18, (char *)&v49);
      sub_15F7200(v50);
      sub_168B9F0((__int64)v50, *(__int64 **)a1, *(_DWORD *)(*v11 + 12), 0x1675u, 0);
      LOBYTE(v49) = *(_BYTE *)(*v11 + 8);
      sub_1AA5620((__int64)v50, (char *)&v49);
      sub_15F7200(v50);
LABEL_19:
      v19 = *(_BYTE *)a2;
LABEL_20:
      v20 = *(_DWORD *)(a2 + 4);
      if ( v19 != 7 )
      {
        v10 = 0;
        return sub_EB2D70(*(_QWORD **)(a1 + 8), v20, *(_DWORD *)(a2 + 12), v10, *(unsigned int *)(a2 + 8), v5);
      }
      v13 = *(__int64 **)a1;
      v10 = 0;
LABEL_22:
      if ( *((_DWORD *)v13 + 70) )
      {
        sub_168B9F0((__int64)v50, v13, v20, 0xB3Eu, 0);
        v47 = 49;
        v22 = sub_1AA5620((__int64)v50, &v47);
        v48 = 49;
        v23 = sub_1AA5620(v22, (char *)&v48);
        LODWORD(v49) = 0;
        sub_1587D10(v23, (int *)&v49);
        sub_15F7200(v50);
        sub_168B9F0((__int64)v50, *(__int64 **)a1, *(_DWORD *)(*(_QWORD *)a1 + 280LL), 0x1675u, 0);
        v24 = "worker";
      }
      else
      {
        if ( !*((_DWORD *)v13 + 71) )
          return sub_EB2D70(*(_QWORD **)(a1 + 8), v20, *(_DWORD *)(a2 + 12), v10, *(unsigned int *)(a2 + 8), v5);
        sub_168B9F0((__int64)v50, v13, v20, 0xB3Eu, 0);
        v47 = 49;
        v37 = sub_1AA5620((__int64)v50, &v47);
        v48 = 46;
        v38 = sub_1AA5620(v37, (char *)&v48);
        LODWORD(v49) = 0;
        sub_1587D10(v38, (int *)&v49);
        sub_15F7200(v50);
        sub_168B9F0((__int64)v50, *(__int64 **)a1, *(_DWORD *)(*(_QWORD *)a1 + 284LL), 0x1675u, 0);
        v24 = "vector";
      }
      sub_162BBD0((__int64)v50, (__int64)v24);
      sub_15F7200(v50);
      return 0;
    case 8:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
      goto LABEL_29;
    case 9:
    case 0xA:
    case 0x13:
      sub_1AC6E80(*(__int64 **)a1, v10, 0, 49, *(_BYTE *)a2, *(_BYTE *)(*(_QWORD *)a1 + 8LL), a3);
      v19 = *(_BYTE *)a2;
      goto LABEL_20;
    case 0xB:
      v25 = *(__int64 **)(a1 + 16);
      v26 = *(_QWORD *)(a1 + 24);
      v27 = &v25[v26];
      v28 = (v26 * 8) >> 5;
      if ( v28 <= 0 )
      {
        v11 = *(__int64 **)(a1 + 16);
      }
      else
      {
        v9 = *v25;
        if ( *(_BYTE *)(*v25 + 8) == 38 )
        {
          v11 = *(__int64 **)(a1 + 16);
          goto LABEL_14;
        }
        v9 = v25[1];
        v11 = v25 + 1;
        if ( *(_BYTE *)(v9 + 8) == 38
          || (v9 = v25[2], v11 = v25 + 2, *(_BYTE *)(v9 + 8) == 38)
          || (v9 = v25[3], v11 = v25 + 3, v29 = &v25[4 * v28], *(_BYTE *)(v9 + 8) == 38) )
        {
LABEL_14:
          if ( v27 != v11 )
          {
            v13 = *(__int64 **)a1;
            goto LABEL_16;
          }
LABEL_29:
          v20 = *(_DWORD *)(a2 + 4);
          return sub_EB2D70(*(_QWORD **)(a1 + 8), v20, *(_DWORD *)(a2 + 12), v10, *(unsigned int *)(a2 + 8), v5);
        }
        while ( 1 )
        {
          v11 = v25 + 4;
          if ( v29 == v25 + 4 )
            break;
          v9 = v25[4];
          if ( *(_BYTE *)(v9 + 8) == 38 )
            goto LABEL_14;
          v9 = v25[5];
          if ( *(_BYTE *)(v9 + 8) == 38 )
          {
            v11 = v25 + 5;
            goto LABEL_14;
          }
          v9 = v25[6];
          if ( *(_BYTE *)(v9 + 8) == 38 )
          {
            v11 = v25 + 6;
            goto LABEL_14;
          }
          v9 = v25[7];
          if ( *(_BYTE *)(v9 + 8) == 38 )
          {
            v11 = v25 + 7;
            goto LABEL_14;
          }
          v25 += 4;
        }
      }
      v12 = v27 - v11;
      switch ( v12 )
      {
        case 2LL:
          goto LABEL_78;
        case 3LL:
          if ( *(_BYTE *)(*v11 + 8) == 38 )
            goto LABEL_14;
          ++v11;
LABEL_78:
          if ( *(_BYTE *)(*v11 + 8) == 38 )
            goto LABEL_14;
          ++v11;
          break;
        case 1LL:
          break;
        default:
          goto LABEL_29;
      }
      if ( *(_BYTE *)(*v11 + 8) != 38 )
        goto LABEL_29;
      goto LABEL_14;
  }
}
