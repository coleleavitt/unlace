__int64 __fastcall sub_18E2710(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  bool v17; // bp
  unsigned __int8 *v18; // r13
  unsigned __int8 *v19; // rdx
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int8 *v24; // rbp
  unsigned __int8 *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r13
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // r15
  void *v40; // rdi
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // r15
  __int64 v46; // r14
  void *v47; // rdi
  __int64 v48; // [rsp+8h] [rbp-E0h]
  __int64 v49; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+20h] [rbp-C8h] BYREF
  int v51; // [rsp+28h] [rbp-C0h]
  int v52; // [rsp+2Ch] [rbp-BCh]
  __int64 v53; // [rsp+30h] [rbp-B8h]
  char v54; // [rsp+38h] [rbp-B0h]
  unsigned __int8 *v55; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+48h] [rbp-A0h]
  __int64 v57; // [rsp+88h] [rbp-60h]
  int v58; // [rsp+90h] [rbp-58h]
  char v59; // [rsp+98h] [rbp-50h]
  __int64 v60; // [rsp+A0h] [rbp-48h]

  sub_168B9F0((__int64)&v50, (__int64 *)(a3 + 8), a4, 0xF54u, 0);
  if ( v59 )
  {
    v24 = v55;
    if ( !v55 )
    {
      v34 = v56;
      v35 = *(_DWORD *)(v56 + 14976);
      if ( v35 )
      {
        v36 = (unsigned int)(v35 - 1);
        *(_DWORD *)(v56 + 14976) = v36;
        v24 = *(unsigned __int8 **)(v34 + 8 * v36 + 14848);
        v37 = *((unsigned int *)v24 + 134);
        *v24 = 0;
        v38 = *((_QWORD *)v24 + 66);
        *((_DWORD *)v24 + 106) = 0;
        v39 = v38 + (v37 << 6);
        while ( v38 != v39 )
        {
          while ( 1 )
          {
            v39 -= 64;
            v40 = *(void **)(v39 + 24);
            if ( v40 == (void *)(v39 + 40) )
              break;
            v48 = v38;
            operator delete(v40);
            v38 = v48;
            if ( v48 == v39 )
              goto LABEL_24;
          }
        }
LABEL_24:
        *((_DWORD *)v24 + 134) = 0;
      }
      else
      {
        v24 = (unsigned __int8 *)operator new(0x3A0u);
        *v24 = 0;
        *((_QWORD *)v24 + 12) = v24 + 112;
        *((_QWORD *)v24 + 16) = v24 + 144;
        *((_QWORD *)v24 + 20) = v24 + 176;
        *((_QWORD *)v24 + 24) = v24 + 208;
        *((_QWORD *)v24 + 28) = v24 + 240;
        *((_QWORD *)v24 + 32) = v24 + 272;
        *((_QWORD *)v24 + 36) = v24 + 304;
        *((_QWORD *)v24 + 40) = v24 + 336;
        *((_QWORD *)v24 + 44) = v24 + 368;
        *((_QWORD *)v24 + 48) = v24 + 400;
        *((_QWORD *)v24 + 52) = v24 + 432;
        *((_QWORD *)v24 + 13) = 0;
        v24[112] = 0;
        *((_QWORD *)v24 + 17) = 0;
        v24[144] = 0;
        *((_QWORD *)v24 + 21) = 0;
        v24[176] = 0;
        *((_QWORD *)v24 + 25) = 0;
        v24[208] = 0;
        *((_QWORD *)v24 + 29) = 0;
        v24[240] = 0;
        *((_QWORD *)v24 + 33) = 0;
        v24[272] = 0;
        *((_QWORD *)v24 + 37) = 0;
        v24[304] = 0;
        *((_QWORD *)v24 + 41) = 0;
        v24[336] = 0;
        *((_QWORD *)v24 + 45) = 0;
        v24[368] = 0;
        *((_QWORD *)v24 + 49) = 0;
        v24[400] = 0;
        *((_QWORD *)v24 + 53) = 0x800000000LL;
        *((_QWORD *)v24 + 66) = v24 + 544;
        *((_QWORD *)v24 + 67) = 0x600000000LL;
      }
      v55 = v24;
    }
    v24[*v24 + 1] = 8;
    v25 = v55;
    v26 = *v55;
    *v55 = v26 + 1;
    *(_QWORD *)&v25[8 * v26 + 16] = a5;
  }
  else
  {
    if ( !BYTE4(v60) )
    {
LABEL_3:
      v8 = v50;
      *(_BYTE *)(a1 + 120) = 0;
      *(_QWORD *)a1 = v8;
      *(_DWORD *)(a1 + 8) = v51;
      *(_DWORD *)(a1 + 12) = v52;
      *(_QWORD *)(a1 + 16) = v53;
      *(_BYTE *)(a1 + 24) = v54;
      goto LABEL_4;
    }
    v12 = sub_168B9E0(&v50);
    v15 = v53;
    if ( v53 )
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 32LL))(v53);
    v49 = v15;
    v16 = sub_1587BC0(v12, &v49, v10, v11, v13, v14);
    sub_AE9DF0((unsigned __int8 **)(*v16 + 32LL * (unsigned int)v60 + 8), a5, 8u);
  }
  v17 = (*(_BYTE *)(*(_QWORD *)(a3 + 232) + 1LL) & 8) != 0;
  if ( v59 )
  {
    v18 = v55;
    if ( !v55 )
    {
      v41 = v56;
      v42 = *(_DWORD *)(v56 + 14976);
      if ( v42 )
      {
        v43 = (unsigned int)(v42 - 1);
        *(_DWORD *)(v56 + 14976) = v43;
        v18 = *(unsigned __int8 **)(v41 + 8 * v43 + 14848);
        v44 = *((unsigned int *)v18 + 134);
        *v18 = 0;
        v45 = *((_QWORD *)v18 + 66);
        *((_DWORD *)v18 + 106) = 0;
        v46 = v45 + (v44 << 6);
        while ( v45 != v46 )
        {
          while ( 1 )
          {
            v46 -= 64;
            v47 = *(void **)(v46 + 24);
            if ( v47 == (void *)(v46 + 40) )
              break;
            operator delete(v47);
            if ( v45 == v46 )
              goto LABEL_30;
          }
        }
LABEL_30:
        *((_DWORD *)v18 + 134) = 0;
      }
      else
      {
        v18 = (unsigned __int8 *)operator new(0x3A0u);
        *v18 = 0;
        *((_QWORD *)v18 + 12) = v18 + 112;
        *((_QWORD *)v18 + 16) = v18 + 144;
        *((_QWORD *)v18 + 20) = v18 + 176;
        *((_QWORD *)v18 + 24) = v18 + 208;
        *((_QWORD *)v18 + 28) = v18 + 240;
        *((_QWORD *)v18 + 32) = v18 + 272;
        *((_QWORD *)v18 + 36) = v18 + 304;
        *((_QWORD *)v18 + 40) = v18 + 336;
        *((_QWORD *)v18 + 44) = v18 + 368;
        *((_QWORD *)v18 + 48) = v18 + 400;
        *((_QWORD *)v18 + 52) = v18 + 432;
        *((_QWORD *)v18 + 13) = 0;
        v18[112] = 0;
        *((_QWORD *)v18 + 17) = 0;
        v18[144] = 0;
        *((_QWORD *)v18 + 21) = 0;
        v18[176] = 0;
        *((_QWORD *)v18 + 25) = 0;
        v18[208] = 0;
        *((_QWORD *)v18 + 29) = 0;
        v18[240] = 0;
        *((_QWORD *)v18 + 33) = 0;
        v18[272] = 0;
        *((_QWORD *)v18 + 37) = 0;
        v18[304] = 0;
        *((_QWORD *)v18 + 41) = 0;
        v18[336] = 0;
        *((_QWORD *)v18 + 45) = 0;
        v18[368] = 0;
        *((_QWORD *)v18 + 49) = 0;
        v18[400] = 0;
        *((_QWORD *)v18 + 53) = 0x800000000LL;
        *((_QWORD *)v18 + 66) = v18 + 544;
        *((_QWORD *)v18 + 67) = 0x600000000LL;
      }
      v55 = v18;
    }
    v18[*v18 + 1] = 3;
    v19 = v55;
    v20 = *v55;
    *v55 = v20 + 1;
    *(_QWORD *)&v19[8 * v20 + 16] = v17;
    v21 = v59;
  }
  else
  {
    if ( !BYTE4(v60) )
      goto LABEL_3;
    v31 = sub_168B9E0(&v50);
    v32 = v53;
    if ( v53 )
      v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 32LL))(v53);
    v49 = v32;
    v33 = sub_1587BC0(v31, &v49, v27, v28, v29, v30);
    sub_AE9DF0((unsigned __int8 **)(*v33 + 32LL * (unsigned int)v60 + 8), v17, 3u);
    v21 = v59;
  }
  v22 = v50;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)a1 = v22;
  *(_DWORD *)(a1 + 8) = v51;
  *(_DWORD *)(a1 + 12) = v52;
  *(_QWORD *)(a1 + 16) = v53;
  *(_BYTE *)(a1 + 24) = v54;
  if ( v21 )
  {
    sub_FC70F0(a1 + 32, (__int64)&v55);
    v23 = v57;
    *(_BYTE *)(a1 + 120) = 1;
    *(_QWORD *)(a1 + 104) = v23;
    *(_DWORD *)(a1 + 112) = v58;
  }
LABEL_4:
  *(_QWORD *)(a1 + 128) = v60;
  sub_15F7200(&v50);
  return a1;
}
