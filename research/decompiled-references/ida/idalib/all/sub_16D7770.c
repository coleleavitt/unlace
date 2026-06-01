void __fastcall sub_16D7770(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r13
  __int16 v12; // ax
  _WORD *v13; // rsi
  __int16 v14; // ax
  __int16 v15; // dx
  __int64 v16; // rdi
  __int64 v17; // r13
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r14
  __int64 v20; // r15
  __int16 v21; // ax
  __int16 v22; // cx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rbp
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r14
  char v30; // dl
  bool v31; // zf
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rbx
  size_t v35; // r14
  int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // r15
  int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r15
  __int64 v45; // rax
  _QWORD *v46; // rax
  unsigned __int64 v47; // [rsp+0h] [rbp-188h]
  __int64 v48; // [rsp+18h] [rbp-170h] BYREF
  __int64 v49; // [rsp+20h] [rbp-168h] BYREF
  __int64 v50; // [rsp+28h] [rbp-160h] BYREF
  __int64 v51; // [rsp+30h] [rbp-158h] BYREF
  int v52; // [rsp+38h] [rbp-150h]
  int v53; // [rsp+3Ch] [rbp-14Ch]
  __int64 v54; // [rsp+40h] [rbp-148h]
  char v55; // [rsp+48h] [rbp-140h]
  _QWORD v56[10]; // [rsp+50h] [rbp-138h] BYREF
  int v57; // [rsp+A0h] [rbp-E8h]
  char v58; // [rsp+A8h] [rbp-E0h]
  __int64 v59; // [rsp+B0h] [rbp-D8h]
  __int64 v60[3]; // [rsp+C0h] [rbp-C8h] BYREF
  void *v61; // [rsp+D8h] [rbp-B0h]
  __int64 v62; // [rsp+E8h] [rbp-A0h] BYREF

  if ( (unsigned __int8)sub_FD3830(
                          *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                          0x1CCBu,
                          a4,
                          *(_QWORD *)(a1 + 264),
                          a5,
                          a6) == 1
    || *(_DWORD *)(a1 + 12596) < *(_DWORD *)(a1 + 11320) )
  {
    return;
  }
  v10 = sub_BFBAE0(a2);
  v11 = sub_BFBAE0(a3);
  v12 = *(_WORD *)v11 & 0x1FF;
  if ( ((v12 + 423) & 0x1FFu) > 4 )
    goto LABEL_4;
  if ( *(_DWORD *)(v11 + 16) != 1 )
    return;
  if ( !sub_BFE550(v11) )
  {
    v12 = *(_WORD *)v11 & 0x1FF;
LABEL_4:
    if ( v12 != 81 || ((*(_BYTE *)(v11 + 1) >> 1) & 3) != 2 )
      return;
    v47 = *(_QWORD *)(v11 + 16);
    v13 = (_WORD *)v47;
    goto LABEL_7;
  }
  v47 = *(_QWORD *)(v11 + 8 * (((*(_BYTE *)(v11 + 2) & 8) != 0) + 1LL) + 32);
  v13 = (_WORD *)v47;
LABEL_7:
  v14 = *(_WORD *)v10 & 0x1FF;
  v15 = *v13 & 0x1FF;
  if ( v14 == 71 )
  {
    if ( v15 == 71 )
    {
      v16 = *(_QWORD *)(v10 + 16);
      if ( v16 )
      {
        if ( *(_QWORD *)(v47 + 16) )
        {
          v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
          if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v47 + 16) + 32LL))(*(_QWORD *)(v47 + 16)) == v17 )
          {
            sub_168B9F0((__int64)v60, (__int64 *)(a1 + 8), a4, 0x1CBCu, 0);
            v48 = *(_QWORD *)(v10 + 8);
            v26 = sub_162B6D0((__int64)v60, &v48);
            v49 = sub_EEC8C0(v10, (__int64)&v48, a7);
            v27 = sub_1587DB0(v26, &v49);
            v50 = sub_EEC8C0(v47, (__int64)&v49, a7);
            v28 = sub_1587DB0(v27, &v50);
            v29 = v28;
            v51 = *(_QWORD *)v28;
            v52 = *(_DWORD *)(v28 + 8);
            v53 = *(_DWORD *)(v28 + 12);
            v54 = *(_QWORD *)(v28 + 16);
            v30 = *(_BYTE *)(v28 + 24);
            v58 = 0;
            v31 = *(_BYTE *)(v28 + 120) == 0;
            v55 = v30;
            if ( !v31 )
            {
              sub_FC70F0((__int64)v56, v28 + 32);
              v56[9] = *(_QWORD *)(v29 + 104);
              v39 = *(_DWORD *)(v29 + 112);
              v58 = 1;
              v57 = v39;
            }
            v59 = *(_QWORD *)(v29 + 128);
            sub_15F7200(v60);
            v32 = sub_18C3380(a1, *(_QWORD *)(v47 + 16));
            if ( v32 )
            {
              LODWORD(v50) = 1;
              v33 = sub_1587D10((__int64)&v51, (int *)&v50);
              v34 = v33;
              if ( *(_BYTE *)(v33 + 120) )
              {
                sub_16B73F0((unsigned __int8 **)(v33 + 32), v32);
              }
              else if ( *(_BYTE *)(v33 + 132) )
              {
                v44 = sub_168B9E0((_QWORD *)v33);
                v45 = *(_QWORD *)(v34 + 16);
                if ( v45 )
                  v45 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v45 + 32LL))(*(_QWORD *)(v34 + 16));
                v60[0] = v45;
                v46 = sub_1587BC0(v44, v60, v40, v41, v42, v43);
                sub_16B73F0((unsigned __int8 **)(*v46 + 32LL * *(unsigned int *)(v34 + 128) + 8), v32);
              }
              v35 = j__strlen("this->");
              v36 = sub_16C50A0(v10);
              sub_9EC740((__int64)v60, v36, "this->", v35, 0);
              sub_1589170(v34, v60);
              if ( v61 != &v62 )
                operator delete(v61);
            }
            else
            {
              LODWORD(v60[0]) = 0;
              sub_1587D10((__int64)&v51, (int *)v60);
            }
            sub_15F7200(&v51);
          }
        }
      }
    }
  }
  else if ( v15 != 71 && v14 == 46 && v15 == 46 )
  {
    v18 = v47;
    v19 = v10;
    while ( 1 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v19 + 24) + 32LL))(*(_QWORD *)(v19 + 24));
      if ( v20 != (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 24) + 32LL))(*(_QWORD *)(v18 + 24)) )
        return;
      v19 = *(_QWORD *)(v19 + 16);
      v18 = *(_QWORD *)(v18 + 16);
      v21 = *(_WORD *)v19 & 0x1FF;
      v22 = *(_WORD *)v18 & 0x1FF;
      if ( v21 != 46 )
        break;
      if ( v22 != 46 )
        goto LABEL_23;
    }
    if ( v22 != 46 )
    {
      if ( v21 == 71 )
      {
        if ( v22 != 71 )
          return;
        v37 = *(_QWORD *)(v19 + 16);
        if ( !v37 )
          return;
        if ( !*(_QWORD *)(v18 + 16) )
          return;
        v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
        if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 16) + 32LL))(*(_QWORD *)(v18 + 16)) != v38 )
          return;
      }
      else
      {
LABEL_23:
        if ( v22 == 71 || v21 != 98 || v22 != 98 )
          return;
      }
      sub_168B9F0((__int64)v60, (__int64 *)(a1 + 8), a4, 0x1CBCu, 0);
      v49 = *(_QWORD *)(v10 + 8);
      v23 = sub_162B6D0((__int64)v60, &v49);
      LODWORD(v48) = 0;
      v24 = sub_1587D10(v23, (int *)&v48);
      v50 = sub_EEC8C0(v10, (__int64)&v48, a7);
      v25 = sub_1587DB0(v24, &v50);
      v51 = sub_EEC8C0(v47, (__int64)&v50, a7);
      sub_1587DB0(v25, &v51);
      sub_15F7200(v60);
    }
  }
}
