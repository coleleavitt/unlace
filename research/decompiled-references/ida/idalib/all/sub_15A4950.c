void __fastcall sub_15A4950(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 *v7; // r10
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 *v10; // rbx
  __int64 v11; // r12
  __int64 *v12; // rbx
  signed __int64 v13; // rbp
  __int64 *v14; // r15
  __int64 v15; // r14
  __int64 *v16; // r9
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // r15
  __int64 v21; // r11
  __int64 v22; // r10
  __int64 v23; // r9
  int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // r12
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rax
  _QWORD *v34; // r14
  _QWORD *v35; // r13
  _QWORD *v36; // rbx
  char *v37; // rdi
  char v38; // al
  __int64 v39; // rdx
  __int64 v40; // r14
  __int64 *v41; // r12
  __int64 v42; // rbx
  signed __int64 v43; // rbp
  __int64 v44; // r13
  __int64 *v45; // [rsp+8h] [rbp-D0h]
  __int64 v46; // [rsp+8h] [rbp-D0h]
  __int64 v47; // [rsp+10h] [rbp-C8h]
  __int64 *v48; // [rsp+10h] [rbp-C8h]
  char v49; // [rsp+10h] [rbp-C8h]
  __int64 *v50; // [rsp+10h] [rbp-C8h]
  __int64 v52; // [rsp+20h] [rbp-B8h]
  __int64 v53; // [rsp+20h] [rbp-B8h]
  __int64 v54; // [rsp+28h] [rbp-B0h]
  __int64 v55; // [rsp+30h] [rbp-A8h]
  __int64 v56; // [rsp+30h] [rbp-A8h]
  __int64 v57; // [rsp+38h] [rbp-A0h]
  __int64 v58; // [rsp+48h] [rbp-90h]

  v45 = (__int64 *)a1;
  if ( a4 && a5 )
  {
    v5 = a4;
    if ( a4 + a5 == 2 )
    {
      v18 = a1;
      v20 = (__int64)a2;
LABEL_18:
      if ( (unsigned __int8)sub_15A37B0(v20, v18) )
      {
        v21 = *(_QWORD *)v18;
        v22 = *(_QWORD *)(v18 + 16);
        v23 = *(_QWORD *)(v18 + 24);
        v24 = *(_DWORD *)(v18 + 32);
        v49 = *(_BYTE *)(v18 + 64);
        v25 = *(_QWORD *)(v18 + 88);
        v26 = *(_QWORD *)(v18 + 40);
        v58 = *(_QWORD *)(v18 + 8);
        v27 = *(_QWORD *)(v18 + 48);
        v28 = *(_QWORD *)(v18 + 56);
        *(_QWORD *)(v18 + 40) = 0;
        v29 = *(_QWORD *)(v18 + 72);
        v30 = *(_QWORD *)(v18 + 80);
        v46 = v25;
        v31 = *(_QWORD *)v20;
        *(_QWORD *)(v18 + 48) = 0;
        *(_QWORD *)(v18 + 56) = 0;
        *(_QWORD *)v18 = v31;
        *(_QWORD *)(v18 + 8) = *(_QWORD *)(v20 + 8);
        *(_DWORD *)(v18 + 16) = *(_DWORD *)(v20 + 16);
        *(_DWORD *)(v18 + 20) = *(_DWORD *)(v20 + 20);
        *(_DWORD *)(v18 + 24) = *(_DWORD *)(v20 + 24);
        *(_DWORD *)(v18 + 28) = *(_DWORD *)(v20 + 28);
        *(_DWORD *)(v18 + 32) = *(_DWORD *)(v20 + 32);
        *(_QWORD *)(v18 + 40) = *(_QWORD *)(v20 + 40);
        v32 = *(_QWORD *)(v20 + 48);
        *(_QWORD *)(v20 + 40) = 0;
        v33 = *(_QWORD *)(v18 + 48);
        *(_QWORD *)(v18 + 48) = v32;
        *(_QWORD *)(v20 + 48) = v33;
        *(_QWORD *)(v18 + 56) = *(_QWORD *)(v20 + 56);
        LOBYTE(v33) = *(_BYTE *)(v20 + 64) & 1 | *(_BYTE *)(v18 + 64) & 0xFE;
        *(_BYTE *)(v18 + 64) = v33;
        LOBYTE(v33) = *(_BYTE *)(v20 + 64) & 2 | v33 & 0xFD;
        *(_BYTE *)(v18 + 64) = v33;
        LOBYTE(v33) = *(_BYTE *)(v20 + 64) & 4 | v33 & 0xFB;
        *(_BYTE *)(v18 + 64) = v33;
        LOBYTE(v33) = *(_BYTE *)(v20 + 64) & 8 | v33 & 0xF7;
        *(_BYTE *)(v18 + 64) = v33;
        LOBYTE(v33) = *(_BYTE *)(v20 + 64) & 0x10 | v33 & 0xEF;
        *(_BYTE *)(v18 + 64) = v33;
        LOBYTE(v33) = *(_BYTE *)(v20 + 64) & 0x20 | v33 & 0xDF;
        *(_BYTE *)(v18 + 64) = v33;
        *(_BYTE *)(v18 + 64) = *(_BYTE *)(v20 + 64) & 0x40 | v33 & 0xBF;
        *(_QWORD *)(v18 + 72) = *(_QWORD *)(v20 + 72);
        *(_QWORD *)(v18 + 80) = *(_QWORD *)(v20 + 80);
        *(_QWORD *)(v18 + 88) = *(_QWORD *)(v20 + 88);
        *(_QWORD *)v20 = v21;
        *(_QWORD *)(v20 + 8) = v58;
        *(_QWORD *)(v20 + 16) = v22;
        v34 = *(_QWORD **)(v20 + 40);
        v35 = *(_QWORD **)(v20 + 48);
        *(_QWORD *)(v20 + 24) = v23;
        *(_DWORD *)(v20 + 32) = v24;
        v36 = v34;
        *(_QWORD *)(v20 + 40) = v26;
        *(_QWORD *)(v20 + 48) = v27;
        for ( *(_QWORD *)(v20 + 56) = v28; v35 != v36; v36 += 8 )
        {
          while ( 1 )
          {
            v37 = (char *)v36[3];
            if ( v37 == (char *)(v36 + 5) )
              break;
            operator delete(v37);
            v36 += 8;
            if ( v35 == v36 )
              goto LABEL_22;
          }
        }
LABEL_22:
        if ( v34 )
          operator delete(v34);
        v38 = *(_BYTE *)(v20 + 64);
        *(_QWORD *)(v20 + 72) = v29;
        *(_QWORD *)(v20 + 80) = v30;
        *(_BYTE *)(v20 + 64) = v49 & 0x7F | v38 & 0x80;
        *(_QWORD *)(v20 + 88) = v46;
      }
    }
    else
    {
      v6 = a5;
      v7 = a2;
      while ( 1 )
      {
        if ( v5 <= v6 )
        {
          v10 = v45;
          v39 = v6 / 2;
          v19 = v6 / 2;
          v40 = 96 * (v6 / 2);
          v16 = (__int64 *)((char *)v7 + v40);
          if ( (char *)v7 - (char *)v45 > 0 )
          {
            v41 = v45;
            v53 = v5;
            v42 = (__int64)v7 + v40;
            v43 = 0xAAAAAAAAAAAAAAABLL * (((char *)v7 - (char *)v45) >> 5);
            v50 = v7;
            v54 = v6;
            v56 = v6 / 2;
            v57 = 96 * (v6 / 2);
            while ( 1 )
            {
              v44 = v43 >> 1;
              if ( (unsigned __int8)sub_15A37B0(v42, (__int64)&v41[12 * (v43 >> 1)]) )
              {
                if ( !v44 )
                {
LABEL_32:
                  v16 = (__int64 *)v42;
                  v10 = v41;
                  v7 = v50;
                  v9 = 0xAAAAAAAAAAAAAAABLL * (((char *)v41 - (char *)v45) >> 5);
                  v6 = v54;
                  v39 = v56;
                  v40 = v57;
                  v5 = v53 - v9;
                  goto LABEL_33;
                }
              }
              else
              {
                v41 += 12 * (v43 >> 1) + 12;
                v44 = v43 - v44 - 1;
                if ( v44 <= 0 )
                  goto LABEL_32;
              }
              v43 = v44;
            }
          }
          v9 = 0;
LABEL_33:
          v18 = (__int64)v10 + v40;
          v6 -= v39;
        }
        else
        {
          v8 = v5 / 2;
          v9 = v5 / 2;
          v10 = &v45[12 * (v5 / 2)];
          if ( a3 - (__int64)v7 > 0 )
          {
            v11 = (__int64)&v45[12 * (v5 / 2)];
            v52 = v5;
            v12 = v7;
            v13 = 0xAAAAAAAAAAAAAAABLL * ((a3 - (__int64)v7) >> 5);
            v47 = v8;
            v14 = v7;
            v55 = v8;
            while ( 1 )
            {
              v15 = v13 >> 1;
              if ( (unsigned __int8)sub_15A37B0((__int64)&v12[12 * (v13 >> 1)], v11) )
              {
                v12 += 12 * (v13 >> 1) + 12;
                v15 = v13 - v15 - 1;
                if ( v15 <= 0 )
                  goto LABEL_12;
              }
              else if ( !v15 )
              {
LABEL_12:
                v16 = v12;
                v7 = v14;
                v10 = (__int64 *)v11;
                v9 = v47;
                v5 = v52;
                v8 = v55;
                v17 = (char *)v16 - (char *)v14;
                v18 = (__int64)v10 + v17;
                v19 = 0xAAAAAAAAAAAAAAABLL * (v17 >> 5);
                v6 -= v19;
                goto LABEL_13;
              }
              v13 = v15;
            }
          }
          v18 = (__int64)&v45[12 * (v5 / 2)];
          v16 = v7;
          v19 = 0;
LABEL_13:
          v5 -= v8;
        }
        v48 = v16;
        sub_15A1FD0(v10, v7, v16);
        sub_15A4950(v45, v10, v18, v9, v19);
        if ( !v5 || !v6 )
          break;
        v7 = v48;
        v45 = (__int64 *)v18;
        if ( v6 + v5 == 2 )
        {
          v20 = (__int64)v48;
          goto LABEL_18;
        }
      }
    }
  }
}
