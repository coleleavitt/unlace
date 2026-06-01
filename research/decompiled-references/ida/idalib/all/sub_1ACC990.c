unsigned __int64 __fastcall sub_1ACC990(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  char v7; // al
  __int64 v8; // rcx
  unsigned __int64 v9; // r13
  char v10; // r12
  __int64 *v11; // r14
  size_t v12; // rax
  char v13; // al
  unsigned int v14; // esi
  __int64 *v15; // r12
  char v17; // r14
  size_t v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  _QWORD *v23; // r12
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 *v26; // r14
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdi
  _QWORD *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdx
  _QWORD *v39; // r14
  _QWORD *v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  char v48; // [rsp+9h] [rbp-CFh] BYREF
  char v49; // [rsp+Ah] [rbp-CEh] BYREF
  unsigned __int8 v50; // [rsp+Bh] [rbp-CDh] BYREF
  int v51; // [rsp+Ch] [rbp-CCh] BYREF
  _BYTE v52[200]; // [rsp+10h] [rbp-C8h] BYREF

  if ( (unsigned __int8)sub_1ACBC90(a1, a2) )
    return 0;
  v6 = *(unsigned __int8 *)(a2 + 1);
  v7 = *(_BYTE *)(a2 + 144);
  if ( (unsigned __int8)v6 > 0x31u || (v8 = 0x3400000000001LL, !_bittest64(&v8, v6)) || v7 )
  {
    if ( v7 != 3 )
      abort();
    if ( *(_DWORD *)(a2 + 24) )
    {
      v9 = *(_QWORD *)sub_1741CC0(a2);
      if ( v9 )
      {
        v10 = *(_BYTE *)a2;
        switch ( *(_BYTE *)a2 )
        {
          case 7:
            v15 = *(__int64 **)a1;
            v17 = *(_BYTE *)(*(_QWORD *)a1 + 8LL);
            if ( ((1LL << v17) & 0x100201) != 0 )
              goto LABEL_42;
            if ( ((1LL << v17) & 0x804) == 0 )
            {
              v18 = j__strlen("length");
              sub_1AC6AC0(v15, v9, "length", v18, 7, v17, a3);
              v13 = *(_BYTE *)a2;
              goto LABEL_11;
            }
            v35 = v15[3];
            v36 = (_QWORD *)v15[2];
            v37 = (__int64)&v36[v35];
            v38 = (8 * v35) >> 5;
            if ( v38 > 0 )
            {
              if ( *(_BYTE *)(*v36 + 8LL) == 47 )
              {
                v39 = (_QWORD *)v15[2];
              }
              else
              {
                v39 = v36 + 1;
                if ( *(_BYTE *)(v36[1] + 8LL) != 47 )
                {
                  v39 = v36 + 2;
                  if ( *(_BYTE *)(v36[2] + 8LL) != 47 )
                  {
                    v39 = v36 + 3;
                    v40 = &v36[4 * v38];
                    if ( *(_BYTE *)(v36[3] + 8LL) != 47 )
                    {
                      while ( 1 )
                      {
                        v39 = v36 + 4;
                        if ( v40 == v36 + 4 )
                          goto LABEL_55;
                        if ( *(_BYTE *)(v36[4] + 8LL) == 47 )
                          goto LABEL_59;
                        if ( *(_BYTE *)(v36[5] + 8LL) == 47 )
                          break;
                        if ( *(_BYTE *)(v36[6] + 8LL) == 47 )
                        {
                          v39 = v36 + 6;
                          goto LABEL_59;
                        }
                        if ( *(_BYTE *)(v36[7] + 8LL) == 47 )
                        {
                          v39 = v36 + 7;
                          goto LABEL_59;
                        }
                        v36 += 4;
                      }
                      v39 = v36 + 5;
                    }
                  }
                }
              }
LABEL_59:
              if ( (_QWORD *)v37 != v39 )
              {
                v42 = sub_EEB7E0(v9, v37, a3);
                sub_168B9F0((__int64)v52, v15, v42, 0xB6Au, 0);
                v43 = sub_162BBD0((__int64)v52, (__int64)"length");
                v48 = 46;
                v44 = sub_1AA5620(v43, &v48);
                v49 = *(_BYTE *)a2;
                v45 = sub_1AC3570(v44, &v49);
                v50 = *(_BYTE *)a2 == 7 && *(_BYTE *)(*(_QWORD *)a1 + 8LL) != 20;
                v46 = sub_1588420(v45, &v50);
                v47 = sub_1AA3B30(v46, (char *)(*(_QWORD *)a1 + 8LL));
                LOBYTE(v51) = 47;
                sub_1AA5620(v47, (char *)&v51);
                sub_15F7200(v52);
                sub_168B9F0((__int64)v52, *(__int64 **)a1, *(_DWORD *)(*v39 + 12LL), 0x1675u, 0);
                LOBYTE(v51) = *(_BYTE *)(*v39 + 8LL);
                goto LABEL_39;
              }
LABEL_42:
              v14 = *(_DWORD *)(a2 + 4);
              goto LABEL_13;
            }
            v39 = (_QWORD *)v15[2];
LABEL_55:
            v41 = (v37 - (__int64)v39) >> 3;
            switch ( v41 )
            {
              case 2LL:
                goto LABEL_73;
              case 3LL:
                if ( *(_BYTE *)(*v39 + 8LL) == 47 )
                  goto LABEL_59;
                ++v39;
LABEL_73:
                if ( *(_BYTE *)(*v39 + 8LL) == 47 )
                  goto LABEL_59;
                ++v39;
                break;
              case 1LL:
                break;
              default:
                goto LABEL_42;
            }
            if ( *(_BYTE *)(*v39 + 8LL) != 47 )
              goto LABEL_42;
            goto LABEL_59;
          case 8:
          case 9:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x14:
            goto LABEL_17;
          case 0xA:
          case 0x13:
            v11 = *(__int64 **)a1;
            v12 = j__strlen("length");
            sub_1AC6AC0(v11, v9, "length", v12, v10, *((_BYTE *)v11 + 8), a3);
            break;
          case 0xB:
            v19 = *(_QWORD *)(a1 + 24);
            v20 = *(_QWORD **)(a1 + 16);
            v21 = (__int64)&v20[v19];
            v22 = (8 * v19) >> 5;
            if ( v22 > 0 )
            {
              if ( *(_BYTE *)(*v20 + 8LL) == 47 )
              {
                v23 = *(_QWORD **)(a1 + 16);
              }
              else
              {
                v23 = v20 + 1;
                if ( *(_BYTE *)(v20[1] + 8LL) != 47 )
                {
                  v23 = v20 + 2;
                  if ( *(_BYTE *)(v20[2] + 8LL) != 47 )
                  {
                    v23 = v20 + 3;
                    v24 = &v20[4 * v22];
                    if ( *(_BYTE *)(v20[3] + 8LL) != 47 )
                    {
                      while ( 1 )
                      {
                        v23 = v20 + 4;
                        if ( v24 == v20 + 4 )
                          goto LABEL_33;
                        if ( *(_BYTE *)(v20[4] + 8LL) == 47 )
                          goto LABEL_37;
                        if ( *(_BYTE *)(v20[5] + 8LL) == 47 )
                        {
                          v23 = v20 + 5;
                          goto LABEL_37;
                        }
                        if ( *(_BYTE *)(v20[6] + 8LL) == 47 )
                        {
                          v23 = v20 + 6;
                          goto LABEL_37;
                        }
                        if ( *(_BYTE *)(v20[7] + 8LL) == 47 )
                          break;
                        v20 += 4;
                      }
                      v23 = v20 + 7;
                    }
                  }
                }
              }
LABEL_37:
              if ( (_QWORD *)v21 != v23 )
              {
                v26 = *(__int64 **)a1;
                v27 = sub_EEB7E0(v9, v21, a3);
                sub_168B9F0((__int64)v52, v26, v27, 0xB6Au, 0);
                v28 = sub_162BBD0((__int64)v52, (__int64)"length");
                v48 = 46;
                v29 = sub_1AA5620(v28, &v48);
                v49 = *(_BYTE *)a2;
                v30 = sub_1AC3570(v29, &v49);
                v50 = *(_BYTE *)a2 == 7 && *(_BYTE *)(*(_QWORD *)a1 + 8LL) != 20;
                v31 = sub_1588420(v30, &v50);
                v32 = sub_1AA3B30(v31, (char *)(*(_QWORD *)a1 + 8LL));
                LOBYTE(v51) = 47;
                sub_1AA5620(v32, (char *)&v51);
                sub_15F7200(v52);
                sub_168B9F0((__int64)v52, *(__int64 **)a1, *(_DWORD *)(*v23 + 12LL), 0x1675u, 0);
                LOBYTE(v51) = *(_BYTE *)(*v23 + 8LL);
LABEL_39:
                sub_1AA5620((__int64)v52, (char *)&v51);
                sub_15F7200(v52);
                v13 = *(_BYTE *)a2;
                goto LABEL_11;
              }
LABEL_17:
              v14 = *(_DWORD *)(a2 + 4);
              return sub_EB2E40(*(_QWORD **)(a1 + 8), v14, *(_DWORD *)(a2 + 12), v9, *(unsigned int *)(a2 + 8), v5);
            }
            v23 = *(_QWORD **)(a1 + 16);
LABEL_33:
            v25 = (v21 - (__int64)v23) >> 3;
            switch ( v25 )
            {
              case 2LL:
                goto LABEL_66;
              case 3LL:
                if ( *(_BYTE *)(*v23 + 8LL) == 47 )
                  goto LABEL_37;
                ++v23;
LABEL_66:
                if ( *(_BYTE *)(*v23 + 8LL) == 47 )
                  goto LABEL_37;
                ++v23;
                break;
              case 1LL:
                break;
              default:
                goto LABEL_17;
            }
            if ( *(_BYTE *)(*v23 + 8LL) != 47 )
              goto LABEL_17;
            goto LABEL_37;
        }
      }
    }
  }
  v13 = *(_BYTE *)a2;
LABEL_11:
  v14 = *(_DWORD *)(a2 + 4);
  if ( v13 != 7 )
  {
    v9 = 0;
    return sub_EB2E40(*(_QWORD **)(a1 + 8), v14, *(_DWORD *)(a2 + 12), v9, *(unsigned int *)(a2 + 8), v5);
  }
  v15 = *(__int64 **)a1;
  v9 = 0;
LABEL_13:
  if ( !*((_DWORD *)v15 + 71) )
    return sub_EB2E40(*(_QWORD **)(a1 + 8), v14, *(_DWORD *)(a2 + 12), v9, *(unsigned int *)(a2 + 8), v5);
  sub_168B9F0((__int64)v52, v15, v14, 0xB3Eu, 0);
  v49 = 46;
  v33 = sub_1AA5620((__int64)v52, &v49);
  v50 = 46;
  v34 = sub_1AA5620(v33, (char *)&v50);
  v51 = 0;
  sub_1587D10(v34, &v51);
  sub_15F7200(v52);
  sub_168B9F0((__int64)v52, *(__int64 **)a1, *(_DWORD *)(*(_QWORD *)a1 + 284LL), 0x1675u, 0);
  sub_162BBD0((__int64)v52, (__int64)"vector");
  sub_15F7200(v52);
  return 0;
}
