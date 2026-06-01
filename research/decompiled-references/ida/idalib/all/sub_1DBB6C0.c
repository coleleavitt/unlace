__int64 __fastcall sub_1DBB6C0(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v4; // r13d
  unsigned __int64 v5; // r14
  unsigned int v8; // r15d
  unsigned int v9; // ebx
  __int64 v10; // rsi
  unsigned __int8 *v11; // r15
  unsigned __int8 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int8 *v15; // rbx
  unsigned __int8 *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r15
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  void *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // r13
  __int64 v50; // r14
  __int64 v51; // r13
  void *v52; // rdi
  __int64 v53; // [rsp+0h] [rbp-100h]
  __int64 v54; // [rsp+8h] [rbp-F8h]
  __int64 v55; // [rsp+10h] [rbp-F0h]
  __int64 v56; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v57; // [rsp+28h] [rbp-D8h] BYREF
  char v58; // [rsp+30h] [rbp-D0h]
  _QWORD v59[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+48h] [rbp-B8h]
  unsigned __int8 *v61; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+60h] [rbp-A0h]
  char v63; // [rsp+B0h] [rbp-50h]
  unsigned int v64; // [rsp+B8h] [rbp-48h]
  char v65; // [rsp+BCh] [rbp-44h]

  if ( *(unsigned int *)(*(_QWORD *)a1 + 11320LL) - (unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 12596LL) <= *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 128LL) )
    return 0;
  v4 = a3;
  v5 = HIDWORD(a3);
  sub_168B9F0((__int64)v59, (__int64 *)(*(_QWORD *)a1 + 8LL), a2, 0x1421u, 0);
  v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 128LL);
  if ( v63 )
  {
    v10 = v8;
    v11 = v61;
    if ( !v61 )
    {
      v39 = v62;
      v40 = *(_DWORD *)(v62 + 14976);
      if ( v40 )
      {
        v43 = (unsigned int)(v40 - 1);
        *(_DWORD *)(v62 + 14976) = v43;
        v11 = *(unsigned __int8 **)(v39 + 8 * v43 + 14848);
        v44 = *((unsigned int *)v11 + 134);
        *v11 = 0;
        v45 = *((_QWORD *)v11 + 66);
        *((_DWORD *)v11 + 106) = 0;
        v46 = v45 + (v44 << 6);
        while ( v45 != v46 )
        {
          while ( 1 )
          {
            v46 -= 64;
            v47 = *(void **)(v46 + 24);
            if ( v47 == (void *)(v46 + 40) )
              break;
            v55 = v45;
            v54 = v46;
            operator delete(v47);
            v46 = v54;
            v45 = v55;
            if ( v55 == v54 )
              goto LABEL_33;
          }
        }
LABEL_33:
        *((_DWORD *)v11 + 134) = 0;
      }
      else
      {
        v11 = (unsigned __int8 *)operator new(0x3A0u);
        *v11 = 0;
        *((_QWORD *)v11 + 12) = v11 + 112;
        *((_QWORD *)v11 + 16) = v11 + 144;
        *((_QWORD *)v11 + 20) = v11 + 176;
        *((_QWORD *)v11 + 24) = v11 + 208;
        *((_QWORD *)v11 + 28) = v11 + 240;
        *((_QWORD *)v11 + 32) = v11 + 272;
        *((_QWORD *)v11 + 36) = v11 + 304;
        *((_QWORD *)v11 + 40) = v11 + 336;
        *((_QWORD *)v11 + 44) = v11 + 368;
        *((_QWORD *)v11 + 48) = v11 + 400;
        *((_QWORD *)v11 + 52) = v11 + 432;
        *((_QWORD *)v11 + 13) = 0;
        v11[112] = 0;
        *((_QWORD *)v11 + 17) = 0;
        v11[144] = 0;
        *((_QWORD *)v11 + 21) = 0;
        v11[176] = 0;
        *((_QWORD *)v11 + 25) = 0;
        v11[208] = 0;
        *((_QWORD *)v11 + 29) = 0;
        v11[240] = 0;
        *((_QWORD *)v11 + 33) = 0;
        v11[272] = 0;
        *((_QWORD *)v11 + 37) = 0;
        v11[304] = 0;
        *((_QWORD *)v11 + 41) = 0;
        v11[336] = 0;
        *((_QWORD *)v11 + 45) = 0;
        v11[368] = 0;
        *((_QWORD *)v11 + 49) = 0;
        v11[400] = 0;
        *((_QWORD *)v11 + 53) = 0x800000000LL;
        *((_QWORD *)v11 + 66) = v11 + 544;
        *((_QWORD *)v11 + 67) = 0x600000000LL;
      }
      v61 = v11;
    }
    v11[*v11 + 1] = 3;
    v12 = v61;
    v13 = *v61;
    *v61 = v13 + 1;
    *(_QWORD *)&v12[8 * v13 + 16] = v10;
    if ( !v63 )
      goto LABEL_19;
    goto LABEL_10;
  }
  if ( v65 )
  {
    v25 = sub_168B9E0(v59);
    v29 = v60;
    if ( v60 )
    {
      v53 = v25;
      v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
      v25 = v53;
    }
    v57 = v29;
    v30 = sub_1587BC0(v25, (__int64 *)&v57, v25, v26, v27, v28);
    sub_AE9DF0((unsigned __int8 **)(*v30 + 32LL * v64 + 8), v8, 3u);
    if ( !v63 )
    {
LABEL_19:
      if ( v65 )
      {
        v35 = sub_168B9E0(v59);
        v36 = v60;
        if ( v60 )
          v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
        v56 = v36;
        v37 = sub_1587BC0(v35, &v56, v31, v32, v33, v34);
        v38 = *v37 + 32LL * v64;
        v57 = __PAIR64__(v5, v4);
        v58 = 1;
        sub_AEC610((__int64 *)(v38 + 8), (__int64 *)&v57);
      }
      goto LABEL_5;
    }
LABEL_10:
    v57 = __PAIR64__(v5, v4);
    v58 = 1;
    sub_AEC610((__int64 *)&v61, (__int64 *)&v57);
  }
LABEL_5:
  sub_15F7200(v59);
  sub_168B9F0((__int64)v59, (__int64 *)(*(_QWORD *)a1 + 8LL), a2, 0x1909u, 0);
  v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 128LL);
  if ( v63 )
  {
    v14 = v9;
    v15 = v61;
    if ( !v61 )
    {
      v41 = v62;
      v42 = *(_DWORD *)(v62 + 14976);
      if ( v42 )
      {
        v48 = (unsigned int)(v42 - 1);
        *(_DWORD *)(v62 + 14976) = v48;
        v15 = *(unsigned __int8 **)(v41 + 8 * v48 + 14848);
        v49 = *((unsigned int *)v15 + 134);
        *v15 = 0;
        v50 = *((_QWORD *)v15 + 66);
        *((_DWORD *)v15 + 106) = 0;
        v51 = v50 + (v49 << 6);
        while ( v50 != v51 )
        {
          while ( 1 )
          {
            v51 -= 64;
            v52 = *(void **)(v51 + 24);
            if ( v52 == (void *)(v51 + 40) )
              break;
            operator delete(v52);
            if ( v50 == v51 )
              goto LABEL_38;
          }
        }
LABEL_38:
        *((_DWORD *)v15 + 134) = 0;
      }
      else
      {
        v15 = (unsigned __int8 *)operator new(0x3A0u);
        *v15 = 0;
        *((_QWORD *)v15 + 12) = v15 + 112;
        *((_QWORD *)v15 + 16) = v15 + 144;
        *((_QWORD *)v15 + 20) = v15 + 176;
        *((_QWORD *)v15 + 24) = v15 + 208;
        *((_QWORD *)v15 + 28) = v15 + 240;
        *((_QWORD *)v15 + 32) = v15 + 272;
        *((_QWORD *)v15 + 36) = v15 + 304;
        *((_QWORD *)v15 + 40) = v15 + 336;
        *((_QWORD *)v15 + 44) = v15 + 368;
        *((_QWORD *)v15 + 48) = v15 + 400;
        *((_QWORD *)v15 + 52) = v15 + 432;
        *((_QWORD *)v15 + 13) = 0;
        v15[112] = 0;
        *((_QWORD *)v15 + 17) = 0;
        v15[144] = 0;
        *((_QWORD *)v15 + 21) = 0;
        v15[176] = 0;
        *((_QWORD *)v15 + 25) = 0;
        v15[208] = 0;
        *((_QWORD *)v15 + 29) = 0;
        v15[240] = 0;
        *((_QWORD *)v15 + 33) = 0;
        v15[272] = 0;
        *((_QWORD *)v15 + 37) = 0;
        v15[304] = 0;
        *((_QWORD *)v15 + 41) = 0;
        v15[336] = 0;
        *((_QWORD *)v15 + 45) = 0;
        v15[368] = 0;
        *((_QWORD *)v15 + 49) = 0;
        v15[400] = 0;
        *((_QWORD *)v15 + 53) = 0x800000000LL;
        *((_QWORD *)v15 + 66) = v15 + 544;
        *((_QWORD *)v15 + 67) = 0x600000000LL;
      }
      v61 = v15;
    }
    v15[*v15 + 1] = 3;
    v16 = v61;
    v17 = *v61;
    *v61 = v17 + 1;
    *(_QWORD *)&v16[8 * v17 + 16] = v14;
  }
  else if ( v65 )
  {
    v20 = sub_168B9E0(v59);
    v23 = v60;
    if ( v60 )
      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
    v57 = v23;
    v24 = sub_1587BC0(v20, (__int64 *)&v57, v18, v19, v21, v22);
    sub_AE9DF0((unsigned __int8 **)(*v24 + 32LL * v64 + 8), v9, 3u);
  }
  sub_15F7200(v59);
  return 1;
}
