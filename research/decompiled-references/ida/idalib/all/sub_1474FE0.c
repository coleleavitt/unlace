void __fastcall sub_1474FE0(__int64 a1)
{
  unsigned int v1; // edx
  char v2; // al
  __int64 v3; // rax
  __int64 v4; // rax
  __int16 v5; // cx
  __int16 v6; // dx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  void (__fastcall *v10)(__int64); // rdx
  __int64 v11; // rbx
  __int64 *v12; // rdi
  int *v13; // rsi
  unsigned __int8 *v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  char *v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // r12
  void *v20; // rax
  _BYTE *v21; // rsi
  signed __int64 v22; // r14
  __int64 v23; // rax
  _BYTE *v24; // rdi
  void (__fastcall *v25)(__int64); // rax
  _QWORD *v26; // rdi
  __int64 v27; // rdx
  int v28; // eax
  unsigned __int8 *v29; // r14
  __int64 v30; // r12
  unsigned __int8 *v31; // rdi
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // r14
  __int64 v36; // r12
  void *v37; // rdi
  __int64 v38; // r12
  unsigned __int8 *v39; // rdi
  int v40; // r15d
  __int64 v41; // rax
  _BYTE *v42; // [rsp+0h] [rbp-128h]
  char *v43; // [rsp+0h] [rbp-128h]
  int v44; // [rsp+8h] [rbp-120h]
  __int64 v45; // [rsp+18h] [rbp-110h] BYREF
  _BYTE *v46; // [rsp+20h] [rbp-108h] BYREF
  char v47; // [rsp+28h] [rbp-100h]
  __int64 v48; // [rsp+30h] [rbp-F8h]
  int v49; // [rsp+38h] [rbp-F0h]
  __int16 v50; // [rsp+3Ch] [rbp-ECh]
  void (__fastcall *v51)(__int64); // [rsp+40h] [rbp-E8h]
  __int64 v52; // [rsp+48h] [rbp-E0h]
  __int64 v53; // [rsp+50h] [rbp-D8h]
  _DWORD v54[2]; // [rsp+60h] [rbp-C8h] BYREF
  char v55; // [rsp+68h] [rbp-C0h]
  __int64 v56; // [rsp+6Ch] [rbp-BCh]
  char v57; // [rsp+74h] [rbp-B4h]
  void *v58; // [rsp+78h] [rbp-B0h]
  __int64 v59; // [rsp+80h] [rbp-A8h]
  _BYTE v60[24]; // [rsp+88h] [rbp-A0h] BYREF
  unsigned __int8 *v61; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-80h]

  if ( *(_WORD *)(a1 + 32) == 22 )
  {
    v1 = *(unsigned __int16 *)(a1 + 88);
    v46 = (_BYTE *)(a1 + 1952);
    v2 = *(_BYTE *)(a1 + 1952);
    *(_BYTE *)(a1 + 1952) = 1;
    v47 = v2;
    v50 = 63;
    v51 = (void (__fastcall *)(__int64))sub_146A990;
    v3 = *(_QWORD *)(a1 + 8);
    v48 = a1;
    v4 = *(_QWORD *)(v3 + 56);
    v49 = 1507350;
    v52 = 0;
    v53 = 0;
    if ( v1 >= *(_DWORD *)(v4 + 144) )
      sub_1568800(&v46);
    else
      LODWORD(v53) = sub_146A990(a1);
    LODWORD(v61) = (_DWORD)&byte_420017;
    sub_15680D0(a1, &v61, 2, 3);
    if ( *(_WORD *)(a1 + 32) != 23 )
      goto LABEL_5;
    v5 = HIWORD(v49);
    v6 = *(_WORD *)(v48 + 32);
    if ( HIWORD(v49) == v6 )
    {
      v10 = v51;
      if ( ((unsigned __int8)v51 & 1) != 0 )
        v10 = *(void (__fastcall **)(__int64))((char *)v51 + *(_QWORD *)(v52 + v48) - 1);
      v10(v52 + v48);
      goto LABEL_5;
    }
    if ( v6 != 63
      || ((v7 = *(_QWORD *)(v48 + 8), v8 = *(_QWORD *)(v7 + 2944), v8 >= *(unsigned int *)(v7 + 2912))
        ? (v9 = sub_14180A0(v7, 1u), v5 = HIWORD(v49))
        : (v9 = *(_QWORD *)(v7 + 2904) + 24 * v8),
          *(_WORD *)(v9 + 16) != v5) )
    {
      sub_15688B0(&v46);
LABEL_5:
      *v46 = v47;
      return;
    }
    v11 = v48;
    v12 = *(__int64 **)(v48 + 8);
    v13 = (int *)(v48 + 16);
    *(_DWORD *)(v48 + 40) = *(_DWORD *)(v48 + 16);
    sub_14634E0(v12, v13);
    LODWORD(v11) = *(_DWORD *)(v11 + 40);
    sub_1564820(&v61, v48, (unsigned int)v11, 1917);
    sub_AE9DF0(&v61, HIWORD(v49), 4u);
    v56 = 0;
    v57 = 0;
    v58 = v60;
    v59 = 0;
    v60[0] = 0;
    v60[16] = 0;
    v54[0] = v11;
    v54[1] = v11;
    v55 = 1;
    if ( !(_DWORD)v11 )
    {
LABEL_27:
      sub_AEA040((__int64)&v61);
      v25 = v51;
      v26 = (_QWORD *)(v48 + v52);
      if ( ((unsigned __int8)v51 & 1) != 0 )
        v25 = *(void (__fastcall **)(__int64))((char *)v51 + *v26 - 1);
      v25((__int64)v26);
      goto LABEL_5;
    }
    v14 = v61;
    if ( !v61 )
    {
      v27 = v62;
      v28 = *(_DWORD *)(v62 + 14976);
      if ( v28 )
      {
        v33 = (unsigned int)(v28 - 1);
        *(_DWORD *)(v62 + 14976) = v33;
        v14 = *(unsigned __int8 **)(v27 + 8 * v33 + 14848);
        v34 = *((unsigned int *)v14 + 134);
        *v14 = 0;
        v35 = *((_QWORD *)v14 + 66);
        *((_DWORD *)v14 + 106) = 0;
        v36 = v35 + (v34 << 6);
        while ( v35 != v36 )
        {
          while ( 1 )
          {
            v36 -= 64;
            v37 = *(void **)(v36 + 24);
            if ( v37 == (void *)(v36 + 40) )
              break;
            operator delete(v37);
            if ( v35 == v36 )
              goto LABEL_46;
          }
        }
LABEL_46:
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
        v14[112] = 0;
        *((_QWORD *)v14 + 13) = 0;
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
      v61 = v14;
    }
    v15 = *((unsigned int *)v14 + 134);
    v16 = *((_QWORD *)v14 + 66);
    v17 = (char *)v54;
    v18 = v15 + 1;
    v19 = v16 + (v15 << 6);
    if ( v15 + 1 > (unsigned __int64)*((unsigned int *)v14 + 135) )
    {
      v29 = v14 + 544;
      if ( v16 > (unsigned __int64)v54 || v19 <= (unsigned __int64)v54 )
      {
        v38 = sub_2237400(v14 + 528, v14 + 544, v18, 64, &v45);
        sub_9EF810((__int64 *)v14 + 66, v38);
        v39 = *((unsigned __int8 **)v14 + 66);
        v40 = v45;
        if ( v39 != v29 )
          free(v39);
        v41 = *((unsigned int *)v14 + 134);
        *((_QWORD *)v14 + 66) = v38;
        *((_DWORD *)v14 + 135) = v40;
        v17 = (char *)v54;
        v19 = (v41 << 6) + v38;
      }
      else
      {
        v43 = (char *)v54 - v16;
        v30 = sub_2237400(v14 + 528, v14 + 544, v18, 64, &v45);
        sub_9EF810((__int64 *)v14 + 66, v30);
        v31 = *((unsigned __int8 **)v14 + 66);
        v32 = v45;
        if ( v31 == v29 )
        {
          *((_QWORD *)v14 + 66) = v30;
          *((_DWORD *)v14 + 135) = v32;
        }
        else
        {
          v44 = v45;
          free(v31);
          *((_QWORD *)v14 + 66) = v30;
          *((_DWORD *)v14 + 135) = v44;
        }
        v17 = &v43[v30];
        v19 = ((unsigned __int64)*((unsigned int *)v14 + 134) << 6) + v30;
      }
    }
    *(_QWORD *)v19 = *(_QWORD *)v17;
    *(_DWORD *)(v19 + 8) = *((_DWORD *)v17 + 2);
    *(_QWORD *)(v19 + 12) = *(_QWORD *)(v17 + 12);
    *(_DWORD *)(v19 + 20) = *((_DWORD *)v17 + 5);
    v20 = (void *)(v19 + 40);
    *(_QWORD *)(v19 + 24) = v19 + 40;
    v21 = *((_BYTE **)v17 + 3);
    v22 = *((_QWORD *)v17 + 4);
    if ( &v21[v22] && !v21 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v22 > 0xF )
    {
      if ( v22 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v42 = *((_BYTE **)v17 + 3);
      v20 = (void *)operator new(v22 + 1);
      *(_QWORD *)(v19 + 40) = v22;
      v21 = v42;
      *(_QWORD *)(v19 + 24) = v20;
    }
    else
    {
      if ( v22 == 1 )
      {
        *(_BYTE *)(v19 + 40) = *v21;
        goto LABEL_25;
      }
      if ( !v22 )
      {
LABEL_25:
        v23 = *(_QWORD *)(v19 + 24);
        *(_QWORD *)(v19 + 32) = v22;
        *(_BYTE *)(v23 + v22) = 0;
        v24 = v58;
        *(_BYTE *)(v19 + 56) = v17[56];
        ++*((_DWORD *)v14 + 134);
        if ( v24 != v60 )
          operator delete(v24);
        goto LABEL_27;
      }
    }
    memcpy(v20, v21, v22);
    goto LABEL_25;
  }
}
