void __fastcall sub_1CDCDC0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // r12
  char v5; // al
  _BYTE *v6; // rax
  _BYTE *v7; // rbx
  __int64 v8; // r13
  __int64 *v9; // r12
  unsigned __int8 *v10; // r14
  unsigned __int8 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r13
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r12
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // rdx
  void *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  void *v58; // rdi
  __int64 v59; // [rsp+0h] [rbp-F8h]
  unsigned __int8 *v60; // [rsp+0h] [rbp-F8h]
  __int64 v61; // [rsp+0h] [rbp-F8h]
  __int64 v62; // [rsp+8h] [rbp-F0h]
  __int64 v63; // [rsp+10h] [rbp-E8h]
  __int64 v64[2]; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v65; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v66[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v67; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v68; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+58h] [rbp-A0h]
  char v70; // [rsp+A8h] [rbp-50h]
  unsigned int v71; // [rsp+B0h] [rbp-48h]
  char v72; // [rsp+B4h] [rbp-44h]

  v64[0] = a2;
  v2 = sub_F22BD0(v64, 0);
  if ( v2 )
  {
    v3 = v2;
    v4 = 0;
    sub_168B9F0((__int64)v66, (__int64 *)(a1 + 8), *(_DWORD *)(v2 + 24), 0x18F6u, 0);
    v5 = *(_BYTE *)(v3 + 28) & 0x7F;
    if ( v5 != 71 )
    {
      v4 = 1;
      if ( v5 != 72 )
      {
        v4 = 2;
        if ( v5 != 69 )
          v4 = (v5 != 70) + 3LL;
      }
    }
    if ( v70 )
    {
      sub_AE9DF0(&v68, v4, 2u);
      v30 = *(_QWORD *)(v3 + 40);
      if ( !v70 )
        goto LABEL_33;
    }
    else
    {
      if ( !v72 )
      {
LABEL_8:
        sub_15F7200(v66);
        return;
      }
      v35 = sub_168B9E0(v66);
      v36 = v67;
      if ( v67 )
        v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
      v65 = v36;
      v37 = sub_1587BC0(v35, &v65, v31, v32, v33, v34);
      sub_AE9DF0((unsigned __int8 **)(*v37 + 32LL * v71 + 8), v4, 2u);
      v30 = *(_QWORD *)(v3 + 40);
      if ( !v70 )
      {
LABEL_33:
        if ( v72 )
        {
          v42 = sub_168B9E0(v66);
          v43 = v67;
          if ( v67 )
            v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
          v65 = v43;
          v44 = sub_1587BC0(v42, &v65, v38, v39, v40, v41);
          sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v71 + 8), v30, 9u);
        }
        goto LABEL_8;
      }
    }
    sub_AE9DF0(&v68, v30, 9u);
    goto LABEL_8;
  }
  v6 = sub_F22E60(v64);
  if ( v6 )
  {
    v7 = v6 + 8;
    v8 = (__int64)&v6[8 * (*((_WORD *)v6 + 1) >> 1) + 8];
    if ( (_BYTE *)v8 != v6 + 8 )
    {
      v9 = (__int64 *)(a1 + 8);
      while ( 1 )
      {
        sub_168B9F0((__int64)v66, v9, *(_DWORD *)(*(_QWORD *)v7 + 24LL), 0x18F6u, 0);
        if ( v70 )
          break;
        if ( v72 )
        {
          v21 = sub_168B9E0(v66);
          v22 = v67;
          if ( v67 )
            v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
          v65 = v22;
          v23 = sub_1587BC0(v21, &v65, v17, v18, v19, v20);
          sub_AE9DF0((unsigned __int8 **)(*v23 + 32LL * v71 + 8), 0, 2u);
LABEL_18:
          v13 = *(_QWORD *)(*(_QWORD *)v7 + 40LL);
          if ( v70 )
          {
            v14 = v68;
            if ( !v68 )
            {
              v45 = v69;
              v46 = *(_DWORD *)(v69 + 14976);
              if ( v46 )
              {
                v49 = (unsigned int)(v46 - 1);
                *(_DWORD *)(v69 + 14976) = v49;
                v14 = *(unsigned __int8 **)(v45 + 8 * v49 + 14848);
                v50 = *((unsigned int *)v14 + 134);
                *v14 = 0;
                v51 = *((_QWORD *)v14 + 66);
                *((_DWORD *)v14 + 106) = 0;
                v52 = v51 + (v50 << 6);
                while ( v51 != v52 )
                {
                  while ( 1 )
                  {
                    v52 -= 64;
                    v53 = *(void **)(v52 + 24);
                    if ( v53 == (void *)(v52 + 40) )
                      break;
                    v63 = v52;
                    v60 = v14;
                    operator delete(v53);
                    v52 = v63;
                    v14 = v60;
                    if ( v51 == v63 )
                      goto LABEL_47;
                  }
                }
LABEL_47:
                *((_DWORD *)v14 + 134) = 0;
              }
              else
              {
                v14 = (unsigned __int8 *)operator new(0x3A0u);
                *v14 = 0;
                *((_QWORD *)v14 + 12) = v14 + 112;
                *((_QWORD *)v14 + 16) = v14 + 144;
                *((_QWORD *)v14 + 20) = v14 + 176;
                *((_QWORD *)v14 + 24) = v14 + 208;
                *((_QWORD *)v14 + 28) = v14 + 240;
                *((_QWORD *)v14 + 32) = v14 + 272;
                *((_QWORD *)v14 + 36) = v14 + 304;
                *((_QWORD *)v14 + 40) = v14 + 336;
                *((_QWORD *)v14 + 44) = v14 + 368;
                *((_QWORD *)v14 + 48) = v14 + 400;
                *((_QWORD *)v14 + 52) = v14 + 432;
                *((_QWORD *)v14 + 13) = 0;
                v14[112] = 0;
                *((_QWORD *)v14 + 17) = 0;
                v14[144] = 0;
                *((_QWORD *)v14 + 21) = 0;
                v14[176] = 0;
                *((_QWORD *)v14 + 25) = 0;
                v14[208] = 0;
                *((_QWORD *)v14 + 29) = 0;
                v14[240] = 0;
                *((_QWORD *)v14 + 33) = 0;
                v14[272] = 0;
                *((_QWORD *)v14 + 37) = 0;
                v14[304] = 0;
                *((_QWORD *)v14 + 41) = 0;
                v14[336] = 0;
                *((_QWORD *)v14 + 45) = 0;
                v14[368] = 0;
                *((_QWORD *)v14 + 49) = 0;
                v14[400] = 0;
                *((_QWORD *)v14 + 53) = 0x800000000LL;
                *((_QWORD *)v14 + 66) = v14 + 544;
                *((_QWORD *)v14 + 67) = 0x600000000LL;
              }
              v68 = v14;
            }
            v14[*v14 + 1] = 9;
            v15 = v68;
            v16 = *v68;
            *v68 = v16 + 1;
            *(_QWORD *)&v15[8 * v16 + 16] = v13;
          }
          else if ( v72 )
          {
            v24 = sub_168B9E0(v66);
            v28 = v67;
            if ( v67 )
            {
              v59 = v24;
              v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
              v24 = v59;
            }
            v65 = v28;
            v29 = sub_1587BC0(v24, &v65, v24, v25, v26, v27);
            sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * v71 + 8), v13, 9u);
          }
        }
        v7 += 8;
        sub_15F7200(v66);
        if ( v7 == (_BYTE *)v8 )
          return;
      }
      v10 = v68;
      if ( !v68 )
      {
        v47 = v69;
        v48 = *(_DWORD *)(v69 + 14976);
        if ( v48 )
        {
          v54 = (unsigned int)(v48 - 1);
          *(_DWORD *)(v69 + 14976) = v54;
          v10 = *(unsigned __int8 **)(v47 + 8 * v54 + 14848);
          v55 = *((unsigned int *)v10 + 134);
          *v10 = 0;
          v56 = *((_QWORD *)v10 + 66);
          *((_DWORD *)v10 + 106) = 0;
          v57 = v56 + (v55 << 6);
          while ( v56 != v57 )
          {
            while ( 1 )
            {
              v57 -= 64;
              v58 = *(void **)(v57 + 24);
              if ( v58 == (void *)(v57 + 40) )
                break;
              v62 = v57;
              v61 = v56;
              operator delete(v58);
              v56 = v61;
              v57 = v62;
              if ( v61 == v62 )
                goto LABEL_52;
            }
          }
LABEL_52:
          *((_DWORD *)v10 + 134) = 0;
        }
        else
        {
          v10 = (unsigned __int8 *)operator new(0x3A0u);
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
          *((_QWORD *)v10 + 67) = 0x600000000LL;
        }
        v68 = v10;
      }
      v10[*v10 + 1] = 2;
      v11 = v68;
      v12 = *v68;
      *v68 = v12 + 1;
      *(_QWORD *)&v11[8 * v12 + 16] = 0;
      goto LABEL_18;
    }
  }
}
