__int64 __fastcall sub_14C8D10(__int64 a1, double a2, __m128 a3)
{
  __int16 v4; // ax
  int v5; // eax
  int v6; // r9d
  __int64 v7; // r14
  __int16 v9; // dx
  unsigned __int64 v10; // rax
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r11d
  __int16 v16; // ax
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  bool v22; // zf
  __int64 v23; // r9
  char v24; // al
  __int64 *v25; // rdi
  __int64 *v26; // rdi
  char v27; // al
  int v28; // r11d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-D60h]
  int v35; // [rsp+8h] [rbp-D60h]
  int v36; // [rsp+18h] [rbp-D50h]
  int v37; // [rsp+18h] [rbp-D50h]
  __int64 v38; // [rsp+18h] [rbp-D50h]
  int v39; // [rsp+18h] [rbp-D50h]
  unsigned int v40; // [rsp+20h] [rbp-D48h]
  int v41; // [rsp+20h] [rbp-D48h]
  int v42; // [rsp+20h] [rbp-D48h]
  unsigned int v43; // [rsp+3Ch] [rbp-D2Ch] BYREF
  _QWORD v44[2]; // [rsp+40h] [rbp-D28h] BYREF
  __int64 v45; // [rsp+50h] [rbp-D18h] BYREF
  __int64 *v46; // [rsp+58h] [rbp-D10h]
  void **v47; // [rsp+60h] [rbp-D08h]
  unsigned int *v48; // [rsp+68h] [rbp-D00h]
  _BYTE *v49; // [rsp+70h] [rbp-CF8h] BYREF
  char v50; // [rsp+78h] [rbp-CF0h]
  __int64 v51; // [rsp+80h] [rbp-CE8h]
  int v52; // [rsp+88h] [rbp-CE0h]
  __int16 v53; // [rsp+8Ch] [rbp-CDCh]
  __int64 (__fastcall *v54)(__int64); // [rsp+90h] [rbp-CD8h]
  __int64 v55; // [rsp+98h] [rbp-CD0h]
  __int64 v56; // [rsp+A0h] [rbp-CC8h]
  void *v57; // [rsp+B0h] [rbp-CB8h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-CB0h]
  _BYTE v59[96]; // [rsp+C0h] [rbp-CA8h] BYREF
  void *v60; // [rsp+120h] [rbp-C48h] BYREF
  __int64 v61; // [rsp+128h] [rbp-C40h]
  __int64 v62; // [rsp+130h] [rbp-C38h] BYREF
  int v63; // [rsp+138h] [rbp-C30h]
  __int16 v64; // [rsp+13Ch] [rbp-C2Ch]
  __int64 (__fastcall *v65)(__int64); // [rsp+140h] [rbp-C28h]
  __int64 v66; // [rsp+148h] [rbp-C20h]
  __int64 v67; // [rsp+150h] [rbp-C18h]
  _DWORD v68[10]; // [rsp+190h] [rbp-BD8h] BYREF
  void *v69; // [rsp+1B8h] [rbp-BB0h]
  __int64 v70; // [rsp+1C8h] [rbp-BA0h] BYREF
  __int64 v71; // [rsp+1D8h] [rbp-B90h] BYREF
  void *ptr; // [rsp+1E0h] [rbp-B88h]
  __int64 v73; // [rsp+1F0h] [rbp-B78h] BYREF
  void *v74; // [rsp+210h] [rbp-B58h]
  int v75; // [rsp+21Ch] [rbp-B4Ch]
  __int64 v76; // [rsp+230h] [rbp-B38h]
  __int64 v77[2]; // [rsp+2C0h] [rbp-AA8h] BYREF
  __int128 v78; // [rsp+2D0h] [rbp-A98h]
  __int64 v79; // [rsp+2E0h] [rbp-A88h]
  __int64 v80; // [rsp+2E8h] [rbp-A80h]
  __int64 v81; // [rsp+2F0h] [rbp-A78h]
  int v82; // [rsp+2F8h] [rbp-A70h]
  __int64 v83; // [rsp+300h] [rbp-A68h]
  __int64 v84; // [rsp+310h] [rbp-A58h]
  __int64 v85; // [rsp+318h] [rbp-A50h]
  int v86; // [rsp+320h] [rbp-A48h]
  __int64 v87; // [rsp+328h] [rbp-A40h]
  __int64 v88; // [rsp+330h] [rbp-A38h]
  int v89; // [rsp+338h] [rbp-A30h]
  __int64 *v90; // [rsp+340h] [rbp-A28h]
  __int64 v91; // [rsp+348h] [rbp-A20h]
  __int64 v92; // [rsp+350h] [rbp-A18h] BYREF
  __int16 v93; // [rsp+590h] [rbp-7D8h]
  __int64 v94; // [rsp+598h] [rbp-7D0h]
  _QWORD *v95; // [rsp+5A0h] [rbp-7C8h]
  __int64 v96; // [rsp+5A8h] [rbp-7C0h]
  _QWORD v97[5]; // [rsp+5B0h] [rbp-7B8h] BYREF
  _QWORD v98[242]; // [rsp+5D8h] [rbp-790h] BYREF

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v57 = v59;
  v58 = 0xC00000000LL;
  v34 = 0;
  sub_147A4A0((__int64)v68, a1 + 504);
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v77[0] = (__int64)v68;
  v77[1] = 0;
  v85 = v76;
  v90 = &v92;
  v91 = 0x400000000LL;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  LOBYTE(v93) = (((v68[0] >> 12) & 0x7F) == 69) | v93 & 0xFE;
  v95 = v97;
  v97[2] = v71;
  v96 = 0x200000000LL;
  v97[4] = 0x200000000LL;
  v86 = 13;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v93 &= 0xFC01u;
  v94 = 0;
  v97[3] = v98;
  v98[2] = qword_2CD8AE0;
  memset(&v98[3], 0, 40);
  v4 = *(_WORD *)(a1 + 32);
  v98[232] = 0;
  if ( v4 == 22 )
  {
    v51 = a1;
    v49 = (_BYTE *)(a1 + 1952);
    v11 = *(_BYTE *)(a1 + 1952);
    *(_BYTE *)(a1 + 1952) = 1;
    v53 = 63;
    v50 = v11;
    v52 = 1507350;
    v54 = sub_146A990;
    v55 = 0;
    v56 = 0;
    sub_149FA40((__int64)&v49);
    if ( sub_14C6C90(a1, (__int64)&v57, (__int64)v77, (__m128i)0LL, a3)
      || (sub_14808E0((__int64)&v49, (__int64 *)&v57, v12, (__int64)&v49, v13, v14), (v15 = HIDWORD(v56)) == 0) )
    {
      v7 = 1;
      LOWORD(v60) = 63;
      sub_15680D0(a1, &v60, 1, 3);
      *v49 = v50;
      goto LABEL_8;
    }
    v6 = v58;
    if ( (_DWORD)v58 )
    {
      v16 = *(_WORD *)(a1 + 32);
      if ( v16 == 22 )
      {
        v35 = HIDWORD(v56);
        v62 = a1;
        v60 = (void *)(a1 + 1952);
        v27 = *(_BYTE *)(a1 + 1952);
        *(_BYTE *)(a1 + 1952) = 1;
        LOBYTE(v61) = v27;
        v65 = sub_146A990;
        v63 = 1507350;
        v64 = 63;
        v66 = 0;
        v67 = 0;
        sub_149FA40((__int64)&v60);
        v28 = v35;
        if ( *(_WORD *)(a1 + 32) == 189 )
        {
          sub_14C56A0((const __m128i *)a1, (__int64)v77, (__m128i)0LL, a3);
          v28 = v35;
        }
        v42 = v28;
        sub_148B330(a1, (__int64)v68, 0, 3u, 0, (__m128i)0LL, a3);
        v85 = v76;
        sub_147E3E0(a1, (__int64)v77);
        sub_14808E0((__int64)&v60, v77, v29, v30, v31, v32);
        v34 = v67;
        v6 = v42;
        *(_BYTE *)v60 = v61;
      }
      else
      {
        if ( v16 == 189 )
        {
          v39 = HIDWORD(v56);
          sub_14C56A0((const __m128i *)a1, (__int64)v77, (__m128i)0LL, a3);
          v15 = v39;
        }
        v36 = v15;
        if ( (unsigned __int8)sub_14C6C30(a1, (__int64)v68, 5, (__m128i)0LL, a3) )
        {
          LOBYTE(v93) = v93 | 1;
        }
        else
        {
          v85 = v76;
          sub_1498040((const __m128i *)a1, (__int64)v77, (char *)sub_14D55E0, 0, (__m128i)0LL, a3);
        }
        v6 = v36;
      }
    }
    else
    {
      v34 = v56;
    }
    *v49 = v50;
  }
  else
  {
    if ( v4 == 189 )
      sub_14C56A0((const __m128i *)a1, (__int64)v77, (__m128i)0LL, a3);
    v5 = sub_147E190(a1, 13);
    sub_148B330(a1, (__int64)v68, ((1LL << v5) & 0x22DE) != 0, 3u, v5, (__m128i)0LL, a3);
    sub_15B23A0(v68, *(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 248LL) + 17464LL);
    v85 = v76;
    sub_1498040((const __m128i *)a1, (__int64)v77, (char *)sub_14D55E0, 0, (__m128i)0LL, a3);
    v6 = 0;
  }
  if ( (v93 & 1) != 0 || ((*(_DWORD *)v77[0] >> 12) & 0x7F) == 0x45 )
  {
    v7 = 1;
    LOWORD(v60) = 63;
    sub_15680D0(a1, &v60, 1, 3);
    goto LABEL_8;
  }
  v9 = *(_WORD *)(a1 + 32);
  if ( v9 == 22 )
  {
    v40 = v6;
    v60 = &v62;
    v61 = 0xC00000000LL;
    v49 = (_BYTE *)(a1 + 1952);
    v18 = *(_BYTE *)(a1 + 1952);
    *(_BYTE *)(a1 + 1952) = 1;
    v50 = v18;
    v43 = 0;
    v51 = a1;
    v52 = 1507350;
    v53 = 63;
    v54 = sub_146A990;
    v55 = 0;
    v56 = 0;
    sub_149FA40((__int64)&v49);
    v22 = *(_WORD *)(a1 + 32) == 23;
    v23 = v40;
    v43 = v56;
    if ( v22
      || (v45 = a1,
          v48 = &v43,
          v46 = v77,
          v47 = &v60,
          v44[0] = a1,
          v44[1] = &v45,
          v24 = sub_14BDD40(a1, (__int64)&v60, (void (__fastcall *)(__int64))sub_14C52A0, (__int64)v44, 0, (__m128i)0LL),
          v23 = v40,
          !v24) )
    {
      v41 = v23;
      sub_14808E0((__int64)&v49, (__int64 *)&v60, v19, v20, v21, v23);
      if ( HIDWORD(v56) )
      {
        v17 = sub_18C2A90(*(_QWORD *)(a1 + 96), v43, HIDWORD(v56), v60, (unsigned int)v61);
        v26 = (__int64 *)v60;
        v6 = v41;
        *v49 = v50;
        if ( v26 != &v62 )
        {
          v38 = v17;
          free(v26);
          v17 = v38;
          v6 = v41;
        }
        goto LABEL_36;
      }
      LOWORD(v45) = 63;
      v7 = 1;
      sub_15680D0(a1, &v45, 1, 3);
    }
    else
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 968LL) && !*(_BYTE *)(a1 + 368) )
      {
        v33 = sub_1E85500(*(_QWORD *)(v45 + 96), v46);
        if ( v33 )
          sub_173F990(
            *(_QWORD *)(*(_QWORD *)(v45 + 96) + 656LL),
            *(_QWORD *)(*(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL) + 8LL),
            *((_DWORD *)v46 + 23),
            (unsigned int)*v47,
            *((_DWORD *)v47 + 2),
            *v48,
            0);
        *(_BYTE *)(v45 + 368) = 1;
      }
      LOWORD(v44[0]) = 63;
      v7 = 1;
      sub_15680D0(a1, v44, 1, 3);
    }
    v25 = (__int64 *)v60;
    *v49 = v50;
    if ( v25 != &v62 )
      free(v25);
    goto LABEL_8;
  }
  v10 = 0;
  if ( v9 != 24 || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) == 0 )
    goto LABEL_20;
  v37 = v6;
  sub_1564820(&v60, a1, *(unsigned int *)(a1 + 16), 2118);
  sub_AEA040((__int64)&v60);
  v17 = sub_14EE310(a1);
  v6 = v37;
LABEL_36:
  v7 = 1;
  if ( v17 != 1 )
  {
    v10 = v17 & 0xFFFFFFFFFFFFFFFELL;
LABEL_20:
    v7 = sub_19B9930(*(_QWORD *)(a1 + 96), v6, v34, (__int64)v77, v10);
  }
LABEL_8:
  sub_147A7A0((char *)v77);
  if ( v75 )
    free(v74);
  sub_15DCED0(v71, &v71);
  if ( ptr != &v73 )
    free(ptr);
  if ( v69 != &v70 )
    free(v69);
  if ( v57 != v59 )
    free(v57);
  return v7;
}
