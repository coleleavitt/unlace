void __fastcall sub_1C3DC80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int16 v6; // dx
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned __int16 v10; // dx
  unsigned __int64 *v11; // rax
  unsigned __int64 *v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // eax
  _QWORD *v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // r12
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // [rsp+0h] [rbp-148h]
  __int64 v48[2]; // [rsp+8h] [rbp-140h] BYREF
  __int64 v49; // [rsp+18h] [rbp-130h] BYREF
  unsigned __int64 v50; // [rsp+20h] [rbp-128h] BYREF
  unsigned __int64 v51; // [rsp+28h] [rbp-120h] BYREF
  unsigned __int64 v52; // [rsp+30h] [rbp-118h] BYREF
  __int64 v53; // [rsp+38h] [rbp-110h] BYREF
  __int64 v54; // [rsp+40h] [rbp-108h] BYREF
  char v55; // [rsp+48h] [rbp-100h]
  __int64 v56; // [rsp+4Ch] [rbp-FCh]
  char v57; // [rsp+54h] [rbp-F4h]
  void *v58; // [rsp+58h] [rbp-F0h]
  __int64 v59; // [rsp+60h] [rbp-E8h]
  _BYTE v60[24]; // [rsp+68h] [rbp-E0h] BYREF
  _QWORD v61[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+90h] [rbp-B8h]
  unsigned __int8 *v63[11]; // [rsp+A0h] [rbp-A8h] BYREF
  char v64; // [rsp+F8h] [rbp-50h]
  unsigned int v65; // [rsp+100h] [rbp-48h]
  char v66; // [rsp+104h] [rbp-44h]

  v48[0] = a3;
  v5 = sub_B73640(a2);
  if ( v5 )
  {
    v49 = *(_QWORD *)(a2 + 48);
    v6 = *(_WORD *)v5 & 0x1FF;
    if ( v6 == 60 )
    {
      if ( (*(_DWORD *)v5 & 0x80000) != 0 )
        return;
      v5 = *(_QWORD *)(v5 + 16);
      v6 = *(_WORD *)v5 & 0x1FF;
    }
    if ( v6 == 48 )
    {
      v7 = *(_QWORD *)(v5 + 16);
      v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v7 & 4) != 0 )
        v8 = *(_QWORD *)(v8 + 40);
      v9 = sub_BFB840(v8);
      v10 = *(_WORD *)v9 & 0x1FF;
      if ( v10 != 4 && v10 != 91 )
      {
        do
        {
          if ( (unsigned int)v10 - 113 <= 1 )
          {
            v11 = (unsigned __int64 *)(v9 + 48);
            v12 = (unsigned __int64 *)(v9 + 40);
            if ( v10 == 114 )
              v12 = v11;
            v13 = *v12;
          }
          else if ( v10 == 92 )
          {
            v13 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 16LL);
          }
          else
          {
            v13 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
              v13 = *(_QWORD *)(v13 + 40);
          }
          v9 = sub_BFB840(v13);
          v10 = *(_WORD *)v9 & 0x1FF;
        }
        while ( v10 != 91 && v10 != 4 );
      }
      v50 = 0;
      if ( (*(_WORD *)v9 & 0x1FF) == 4 )
      {
        v50 = sub_A73030(*(_QWORD *)(a1 + 248), *(_QWORD *)(v9 + 8), 1u);
        v19 = v50 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v14 = sub_BFBC70(*(_QWORD *)(v9 + 32));
        if ( !v14 || (*(_BYTE *)(v14 + 28) & 0x7Fu) - 34 > 5 )
          BUG();
        v16 = *(_QWORD *)(*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        v17 = (unsigned int)*(unsigned __int8 *)(v16 + 16) - 25;
        if ( (unsigned int)v17 > 1 )
          v16 = sub_F63050(v16, a2, v17, v15);
        v18 = *(_QWORD *)(v16 + 24);
        v19 = v18 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 > 1 )
          goto LABEL_27;
        v50 = v18;
      }
      if ( v19 )
      {
        sub_168B9F0((__int64)v61, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x1AF5u, 0);
        if ( v64 )
        {
          sub_AE9DF0(v63, a2, 0xAu);
        }
        else if ( v66 )
        {
          v34 = sub_168B9E0(v61);
          v38 = v62;
          if ( v62 )
          {
            v47 = v34;
            v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 32LL))(v62);
            v34 = v47;
          }
          v54 = v38;
          v39 = sub_1587BC0(v34, &v54, v34, v35, v36, v37);
          sub_AE9DF0((unsigned __int8 **)(*v39 + 32LL * v65 + 8), a2, 0xAu);
        }
        v28 = sub_1605D30((__int64)v61, &v49);
        sub_1605D30(v28, (__int64 *)&v50);
        sub_15F7200(v61);
        v30 = sub_C1BEF0((__int64)&v49, (__int64)&v50, (__int64)&v49, v29);
        v31 = *(_QWORD *)(a1 + 248);
        v32 = *(_QWORD *)(v9 + 8) | 1LL;
        v51 = v30 & 0xFFFFFFFFFFFFFFFELL;
        v52 = sub_A73030(v31, v32, 1u);
        v33 = sub_B73090(a2);
        sub_168B9F0((__int64)v61, (__int64 *)(a1 + 8), v33, 0x1933u, 0);
        v24 = (_QWORD *)sub_1605D30((__int64)v61, (__int64 *)&v51);
LABEL_31:
        v25 = sub_1605D30((__int64)v24, (__int64 *)&v52);
        v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
        v26 = sub_1587DB0(v25, &v53);
        v27 = sub_B73040(a2);
        v57 = 0;
        v56 = 0;
        v58 = v60;
        v59 = 0;
        v60[0] = 0;
        v60[16] = 0;
        LODWORD(v54) = v27;
        HIDWORD(v54) = v27;
        v55 = 1;
        sub_1589170(v26, &v54);
        if ( v58 != v60 )
          operator delete(v58);
        sub_15F7200(v61);
        return;
      }
LABEL_27:
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 44 )
        return;
      v20 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v61, v20, *(_DWORD *)(a2 + 24), 0x1AF7u, 0);
      if ( v64 )
      {
        sub_AE9DF0(v63, a2, 0xAu);
      }
      else if ( v66 )
      {
        v42 = sub_168B9E0(v61);
        v45 = v62;
        if ( v62 )
          v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 32LL))(v62);
        v54 = v45;
        v46 = sub_1587BC0(v42, &v54, v40, v41, v43, v44);
        sub_AE9DF0((unsigned __int8 **)(*v46 + 32LL * v65 + 8), a2, 0xAu);
      }
      sub_1605D30((__int64)v61, v48);
      sub_15F7200(v61);
      v52 = sub_C1BEF0((__int64)&v49, (__int64)v48, v21, v22) & 0xFFFFFFFFFFFFFFFELL;
      v23 = sub_B73090(a2);
      sub_168B9F0((__int64)v61, v20, v23, 0x1930u, 0);
      v24 = v61;
      goto LABEL_31;
    }
  }
}
