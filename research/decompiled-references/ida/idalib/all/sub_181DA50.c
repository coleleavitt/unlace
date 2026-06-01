void __fastcall sub_181DA50(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r9
  __int64 *v3; // rbx
  __int64 *v4; // r15
  __int64 v6; // r13
  int v7; // eax
  unsigned int v8; // r14d
  unsigned int v9; // r13d
  unsigned __int8 *v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rsi
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdx
  void *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdx
  void *v46; // rdi
  __int64 v47; // [rsp+10h] [rbp-108h]
  __int64 v48; // [rsp+10h] [rbp-108h]
  unsigned __int8 *v49; // [rsp+10h] [rbp-108h]
  unsigned __int8 *v50; // [rsp+10h] [rbp-108h]
  __int64 v51; // [rsp+10h] [rbp-108h]
  unsigned __int8 *v52; // [rsp+10h] [rbp-108h]
  unsigned __int8 *v53; // [rsp+18h] [rbp-100h]
  __int64 v54; // [rsp+20h] [rbp-F8h]
  __int64 v55; // [rsp+28h] [rbp-F0h]
  __int64 v56; // [rsp+38h] [rbp-E0h] BYREF
  unsigned __int64 v57; // [rsp+40h] [rbp-D8h] BYREF
  int v58; // [rsp+48h] [rbp-D0h]
  _QWORD v59[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v61; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+78h] [rbp-A0h]
  char v63; // [rsp+C8h] [rbp-50h]
  unsigned int v64; // [rsp+D0h] [rbp-48h]
  char v65; // [rsp+D4h] [rbp-44h]

  v2 = *(__int64 **)(a2 + 8);
  v3 = &v2[*(unsigned int *)(a2 + 16)];
  if ( v2 != v3 )
  {
    v4 = *(__int64 **)(a2 + 8);
    while ( 1 )
    {
      v6 = *v4;
      if ( (*(_BYTE *)(*v4 + 58) & 3) != 0 )
        goto LABEL_3;
      v7 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 72) + 8LL);
      if ( v7 == 419 )
        goto LABEL_3;
      if ( v7 == 420 )
      {
        sub_1815810(a1, *v4);
LABEL_3:
        if ( v3 == ++v4 )
          return;
      }
      else
      {
        sub_168B9F0((__int64)v59, a1 + 1, *(_DWORD *)(v6 + 24), 0x19B3u, 0);
        if ( v63 )
        {
          sub_AE9DF0(&v61, v6, 0x10u);
        }
        else
        {
          if ( !v65 )
            goto LABEL_9;
          v20 = sub_168B9E0(v59);
          v21 = v60;
          if ( v60 )
            v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
          v57 = v21;
          v22 = sub_1587BC0(v20, (__int64 *)&v57, v16, v17, v18, v19);
          sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v64 + 8), v6, 0x10u);
        }
        v8 = *(_DWORD *)(v6 + 24);
        v9 = *(_DWORD *)(v6 + 28);
        if ( v63 )
        {
          v10 = v61;
          if ( v61 )
          {
            v11 = *((unsigned int *)v61 + 106);
            v12 = *((unsigned int *)v61 + 107);
            v13 = v11 + 1;
          }
          else
          {
            v33 = v62;
            v34 = *(_DWORD *)(v62 + 14976);
            if ( v34 )
            {
              v42 = (unsigned int)(v34 - 1);
              *(_DWORD *)(v62 + 14976) = v42;
              v10 = *(unsigned __int8 **)(v33 + 8 * v42 + 14848);
              v43 = *((unsigned int *)v10 + 134);
              *v10 = 0;
              v44 = *((_QWORD *)v10 + 66);
              *((_DWORD *)v10 + 106) = 0;
              v45 = v44 + (v43 << 6);
              if ( v44 == v45 )
              {
                v13 = 1;
                v11 = 0;
              }
              else
              {
                do
                {
                  while ( 1 )
                  {
                    v45 -= 64;
                    v46 = *(void **)(v45 + 24);
                    if ( v46 == (void *)(v45 + 40) )
                      break;
                    v54 = v45;
                    v50 = v10;
                    operator delete(v46);
                    v45 = v54;
                    v10 = v50;
                    if ( v44 == v54 )
                      goto LABEL_43;
                  }
                }
                while ( v44 != v45 );
LABEL_43:
                v11 = *((unsigned int *)v10 + 106);
                v13 = v11 + 1;
              }
              *((_DWORD *)v10 + 134) = 0;
              v12 = *((unsigned int *)v10 + 107);
            }
            else
            {
              v10 = (unsigned __int8 *)operator new(0x3A0u);
              v12 = 8;
              *v10 = 0;
              *((_QWORD *)v10 + 12) = v10 + 112;
              *((_QWORD *)v10 + 16) = v10 + 144;
              *((_QWORD *)v10 + 20) = v10 + 176;
              *((_QWORD *)v10 + 24) = v10 + 208;
              *((_QWORD *)v10 + 28) = v10 + 240;
              *((_QWORD *)v10 + 32) = v10 + 272;
              *((_QWORD *)v10 + 36) = v10 + 304;
              *((_QWORD *)v10 + 40) = v10 + 336;
              *((_QWORD *)v10 + 44) = v10 + 368;
              *((_QWORD *)v10 + 48) = v10 + 400;
              *((_QWORD *)v10 + 52) = v10 + 432;
              *((_QWORD *)v10 + 13) = 0;
              v10[112] = 0;
              *((_QWORD *)v10 + 17) = 0;
              v10[144] = 0;
              *((_QWORD *)v10 + 21) = 0;
              v10[176] = 0;
              *((_QWORD *)v10 + 25) = 0;
              v10[208] = 0;
              *((_QWORD *)v10 + 29) = 0;
              v10[240] = 0;
              *((_QWORD *)v10 + 33) = 0;
              v10[272] = 0;
              *((_QWORD *)v10 + 37) = 0;
              v10[304] = 0;
              *((_QWORD *)v10 + 41) = 0;
              v10[336] = 0;
              *((_QWORD *)v10 + 45) = 0;
              v10[368] = 0;
              *((_QWORD *)v10 + 49) = 0;
              v10[400] = 0;
              *((_QWORD *)v10 + 53) = 0x800000000LL;
              *((_QWORD *)v10 + 66) = v10 + 544;
              v13 = 1;
              *((_QWORD *)v10 + 67) = 0x600000000LL;
              v11 = 0;
            }
            v61 = v10;
          }
          v57 = __PAIR64__(v9, v8);
          LOBYTE(v58) = 1;
          if ( v12 < v13 )
          {
            v49 = v10;
            sub_2237220(v10 + 416, v10 + 432, v13, 12);
            v10 = v49;
            v11 = *((unsigned int *)v49 + 106);
          }
          v14 = 3 * v11;
        }
        else
        {
          if ( !v65 )
            goto LABEL_9;
          v23 = sub_168B9E0(v59);
          v27 = v60;
          if ( v60 )
          {
            v47 = v23;
            v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
            v23 = v47;
          }
          v56 = v27;
          v28 = sub_1587BC0(v23, &v56, v23, v24, v25, v26);
          v29 = *v28 + 32LL * v64;
          v10 = *(unsigned __int8 **)(v29 + 8);
          if ( v10 )
          {
            v30 = *((unsigned int *)v10 + 106);
            v31 = *((unsigned int *)v10 + 107);
            v32 = v30 + 1;
          }
          else
          {
            v35 = *(_QWORD *)(v29 + 16);
            v36 = *(_DWORD *)(v35 + 14976);
            if ( v36 )
            {
              v37 = (unsigned int)(v36 - 1);
              *(_DWORD *)(v35 + 14976) = v37;
              v10 = *(unsigned __int8 **)(v35 + 8 * v37 + 14848);
              v38 = *((unsigned int *)v10 + 134);
              *v10 = 0;
              v39 = *((_QWORD *)v10 + 66);
              *((_DWORD *)v10 + 106) = 0;
              v40 = v39 + (v38 << 6);
              if ( v39 == v40 )
              {
                v32 = 1;
                v30 = 0;
              }
              else
              {
                do
                {
                  while ( 1 )
                  {
                    v40 -= 64;
                    v41 = *(void **)(v40 + 24);
                    if ( v41 == (void *)(v40 + 40) )
                      break;
                    v55 = v40;
                    v53 = v10;
                    v48 = v29;
                    operator delete(v41);
                    v40 = v55;
                    v29 = v48;
                    v10 = v53;
                    if ( v39 == v55 )
                      goto LABEL_38;
                  }
                }
                while ( v39 != v40 );
LABEL_38:
                v30 = *((unsigned int *)v10 + 106);
                v32 = v30 + 1;
              }
              *((_DWORD *)v10 + 134) = 0;
              v31 = *((unsigned int *)v10 + 107);
            }
            else
            {
              v51 = v29;
              v10 = (unsigned __int8 *)operator new(0x3A0u);
              v31 = 8;
              v30 = 0;
              *v10 = 0;
              *((_QWORD *)v10 + 12) = v10 + 112;
              *((_QWORD *)v10 + 16) = v10 + 144;
              *((_QWORD *)v10 + 20) = v10 + 176;
              *((_QWORD *)v10 + 24) = v10 + 208;
              *((_QWORD *)v10 + 28) = v10 + 240;
              *((_QWORD *)v10 + 32) = v10 + 272;
              *((_QWORD *)v10 + 36) = v10 + 304;
              *((_QWORD *)v10 + 40) = v10 + 336;
              *((_QWORD *)v10 + 44) = v10 + 368;
              *((_QWORD *)v10 + 48) = v10 + 400;
              *((_QWORD *)v10 + 52) = v10 + 432;
              *((_QWORD *)v10 + 13) = 0;
              v10[112] = 0;
              *((_QWORD *)v10 + 17) = 0;
              v10[144] = 0;
              *((_QWORD *)v10 + 21) = 0;
              v10[176] = 0;
              *((_QWORD *)v10 + 25) = 0;
              v10[208] = 0;
              *((_QWORD *)v10 + 29) = 0;
              v10[240] = 0;
              *((_QWORD *)v10 + 33) = 0;
              v10[272] = 0;
              *((_QWORD *)v10 + 37) = 0;
              v10[304] = 0;
              *((_QWORD *)v10 + 41) = 0;
              v10[336] = 0;
              *((_QWORD *)v10 + 45) = 0;
              v10[368] = 0;
              *((_QWORD *)v10 + 49) = 0;
              v10[400] = 0;
              *((_QWORD *)v10 + 53) = 0x800000000LL;
              *((_QWORD *)v10 + 67) = 0x600000000LL;
              v29 = v51;
              *((_QWORD *)v10 + 66) = v10 + 544;
              v32 = 1;
            }
            *(_QWORD *)(v29 + 8) = v10;
          }
          v57 = __PAIR64__(v9, v8);
          LOBYTE(v58) = 1;
          if ( v31 < v32 )
          {
            v52 = v10;
            sub_2237220(v10 + 416, v10 + 432, v32, 12);
            v10 = v52;
            v30 = *((unsigned int *)v52 + 106);
          }
          v14 = 3 * v30;
        }
        v15 = *((_QWORD *)v10 + 52) + 4 * v14;
        *(_QWORD *)v15 = v57;
        *(_DWORD *)(v15 + 8) = v58;
        ++*((_DWORD *)v10 + 106);
LABEL_9:
        ++v4;
        sub_15F7200(v59);
        if ( v3 == v4 )
          return;
      }
    }
  }
}
