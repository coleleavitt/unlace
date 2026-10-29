__int64 __fastcall sub_994470(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v4; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // r14d
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  unsigned __int64 v22; // r14
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r13
  _QWORD *v26; // r15
  unsigned __int8 **v27; // rbx
  unsigned __int8 v28; // al
  void *v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  void *v32; // rax
  void *v33; // rax
  unsigned __int8 **v34; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  void *v39; // rax
  unsigned int v40; // r15d
  unsigned int v41; // ebp
  _QWORD *v42; // r13
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rbp
  __int64 v46; // rax
  unsigned __int8 **v47; // rax
  void *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned int v52; // r15d
  _QWORD *v53; // rbp
  __int64 v54; // r13
  __int64 v55; // rdx
  _QWORD *v56; // rax
  __int64 v57; // rcx
  unsigned __int64 v58; // r13
  __int64 v59; // rbp
  __int64 v60; // rax
  int v61; // eax
  unsigned int v62; // eax
  __int64 v63; // [rsp+8h] [rbp-E0h]
  unsigned int v64; // [rsp+8h] [rbp-E0h]
  __int64 v65; // [rsp+10h] [rbp-D8h]
  unsigned int v66; // [rsp+10h] [rbp-D8h]
  unsigned int v67; // [rsp+18h] [rbp-D0h]
  unsigned int v68; // [rsp+18h] [rbp-D0h]
  __int64 v69; // [rsp+18h] [rbp-D0h]
  unsigned int v70; // [rsp+34h] [rbp-B4h]
  unsigned __int8 **v71; // [rsp+48h] [rbp-A0h] BYREF
  void *v72; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v73; // [rsp+58h] [rbp-90h]
  void *v74; // [rsp+60h] [rbp-88h] BYREF
  unsigned int v75; // [rsp+68h] [rbp-80h]
  void *v76; // [rsp+70h] [rbp-78h] BYREF
  unsigned int v77; // [rsp+78h] [rbp-70h]
  void *v78; // [rsp+80h] [rbp-68h] BYREF
  unsigned int v79; // [rsp+88h] [rbp-60h]
  void *v80; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v81; // [rsp+98h] [rbp-50h]
  void *v82; // [rsp+A0h] [rbp-48h] BYREF
  unsigned int v83; // [rsp+A8h] [rbp-40h]
  char v84; // [rsp+ACh] [rbp-3Ch]

  v4 = a3;
  if ( !a3 )
    goto LABEL_10;
  while ( 1 )
  {
    v8 = v4[4];
    if ( !v8 )
      goto LABEL_9;
    v9 = *(_QWORD *)(v8 + 8);
    if ( (v9 & 4) != 0 )
      goto LABEL_9;
    v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v10 )
      goto LABEL_9;
    if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 33 > 3 )
      goto LABEL_9;
    v11 = *(_QWORD *)(v10 + 40);
    if ( (v11 & 7) != 0 )
      goto LABEL_9;
    v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v12 )
      goto LABEL_9;
    v13 = *(_QWORD *)(v12 + 16);
    if ( *(_DWORD *)v13 != 8 || *(_QWORD *)(v13 + 16) != 0x657461636F6C6C61LL )
      goto LABEL_9;
    v18 = *(_QWORD *)(sub_79A2E0(v10 + 72) + 16);
    v19 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v18 & 4) != 0 )
      v19 = (_QWORD *)*v19;
    if ( !v19 )
      BUG();
    if ( (*((_BYTE *)v19 - 36) & 0x7Fu) - 58 > 1 )
      goto LABEL_9;
    v20 = *(v19 - 3);
    if ( (v20 & 7) == 0 )
      break;
    sub_79C450((__int64)(v19 - 8));
LABEL_9:
    v4 = (_QWORD *)v4[1];
    if ( !v4 )
      goto LABEL_10;
  }
  v21 = v19[13];
  v22 = v20 & 0xFFFFFFFFFFFFFFF8LL;
  LOBYTE(v23) = sub_79C450((__int64)(v19 - 8)) && (v20 & 0xFFFFFFFFFFFFFFF8LL) != 0;
  if ( !(_BYTE)v23 )
    goto LABEL_9;
  v24 = *(_QWORD *)(v22 + 16);
  if ( *(_DWORD *)v24 != 9
    || *(_QWORD *)(v24 + 16) != 0x6F7461636F6C6C61LL
    || *(_BYTE *)(v24 + 24) != 114
    || !*(_DWORD *)v21
    || (*(_DWORD *)(v21 + 8) & 0x7FFFFFFF) != 1 )
  {
    goto LABEL_9;
  }
  v16 = v23;
  v25 = *(_QWORD *)(v21 + 16);
  v63 = sub_A180F0(v4[1], v4[19]);
  if ( (v25 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
  {
LABEL_10:
    v14 = sub_A2CB40(a1);
    v15 = 2243;
    if ( *(char *)(v14 + 1) < 0 )
      v15 = 2252;
    sub_A2E130(a1, a4, v15, 0);
    return 0;
  }
  v26 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
  if ( !(unsigned __int8)sub_B19120(*(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL), 0)
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v26 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
  {
    v29 = (void *)sub_985340(
                    *(__int64 **)(a1 + 192),
                    *(_QWORD *)(a4 + 8LL * ((*(_BYTE *)(a4 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a4 + 3)));
    v30 = *(_QWORD *)(a1 + 184);
    v82 = v29;
    sub_97E960((__int64)&v72, v30, (unsigned int)v29, 0);
    v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v32 = (void *)sub_70E2F0(v31, v25);
    v75 = 1;
    v65 = (__int64)v32;
    v74 = nullptr;
    v77 = 1;
    v76 = nullptr;
    v79 = v73;
    if ( v73 > 0x40 )
      sub_2585A50(&v78, v32, 0);
    else
      v78 = v32;
    sub_258A1B0(&v72, &v78, &v74, &v76);
    v70 = v77;
    if ( v77 > 0x40 )
    {
      if ( v70 - (unsigned int)sub_2587400(&v76) > 0x40 )
      {
LABEL_38:
        v71 = (unsigned __int8 **)sub_A2E130(a1, a4, 2261, 0);
        v34 = v71;
        if ( v71 )
          sub_97DF50(&v71, (__int64)&v72);
        v81 = v79;
        if ( v79 > 0x40 )
        {
          sub_2585B30(&v80);
          v62 = v81;
          v81 = 0;
          v84 = 1;
          v83 = v62;
          v82 = v80;
          if ( v34 )
          {
LABEL_42:
            sub_97DF50(&v71, (__int64)&v82);
            sub_8356A0(v34, v25, 8u);
            if ( v83 <= 0x40 )
            {
LABEL_45:
              if ( v81 > 0x40 && v80 )
                operator delete[](v80);
              goto LABEL_48;
            }
LABEL_43:
            if ( v82 )
              operator delete[](v82);
            goto LABEL_45;
          }
          if ( v62 > 0x40 )
            goto LABEL_43;
        }
        else
        {
          v83 = v79;
          v81 = 0;
          v80 = v78;
          v82 = v78;
          v84 = 1;
          if ( v34 )
            goto LABEL_42;
        }
LABEL_48:
        v16 = 0;
        goto LABEL_49;
      }
      v33 = *(void **)v76;
    }
    else
    {
      v33 = v76;
    }
    if ( v33 )
      goto LABEL_38;
    if ( v75 > 0x40 )
    {
      v68 = v75;
      v67 = v68 - sub_2587400(&v74);
    }
    else
    {
      if ( !v74 )
      {
        v49 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_B064C0(v49);
LABEL_65:
        v37 = 4294967247LL / v65;
        v66 = v75;
        v38 = v37;
        if ( v75 > 0x40 )
        {
          v69 = v37;
          if ( v66 - (unsigned int)sub_2587400(&v74) > 0x40 )
            goto LABEL_76;
          v38 = v69;
          v39 = *(void **)v74;
        }
        else
        {
          v39 = v74;
        }
        if ( v38 >= (unsigned __int64)v39 )
        {
          v80 = (void *)sub_8CA760(*(__int64 **)(a1 + 192), v25);
          if ( BYTE4(v80) )
          {
            v40 = v75;
            v41 = (unsigned int)v80;
            v42 = v74;
            if ( v75 > 0x40 )
            {
              if ( v40 - (unsigned int)sub_2587400(&v74) > 0x40 || *v42 > 1u )
              {
                v42 = (_QWORD *)*v42;
                v43 = *(unsigned int *)(*(_QWORD *)(a1 + 192) + 32LL);
                goto LABEL_72;
              }
            }
            else if ( (unsigned __int64)v74 > 1 )
            {
              v43 = *(unsigned int *)(*(_QWORD *)(a1 + 192) + 32LL);
LABEL_72:
              v44 = sub_9A30E0(a1 + 48, v63, v41, v42, v43, 2);
LABEL_73:
              v45 = v44;
              v46 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
              sub_A1BF70(v46, v45);
LABEL_49:
              if ( v79 > 0x40 && v78 )
                operator delete[](v78);
              if ( v77 > 0x40 && v76 )
                operator delete[](v76);
              if ( v75 > 0x40 && v74 )
                operator delete[](v74);
              if ( v73 > 0x40 && v72 )
                operator delete[](v72);
              return v16;
            }
            v56 = *(_QWORD **)(a1 + 176);
            v71 = (unsigned __int8 **)(v63 | 2);
            v82 = (void *)0x100000010LL;
            v57 = v56[16];
            v56[26] += 80LL;
            v58 = (v57 + 15) & 0xFFFFFFFFFFFFFFF0LL;
            if ( v56[17] >= v58 + 80 && v57 )
              v56[16] = v58 + 80;
            else
              v58 = sub_97DC20((__int64)(v56 + 16), 80, 4);
            sub_BED680(v58, (unsigned int)&v71, v41, (_DWORD)v82, 0, 0, 0);
            v59 = sub_9A2420(a1 + 48, v58, *(unsigned int *)(*(_QWORD *)(a1 + 192) + 32LL), 2);
            v60 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
            sub_A1BF70(v60, v59);
            goto LABEL_49;
          }
          v50 = *v26;
          v82 = (void *)(a4 | 2);
          v51 = sub_A28870(*(_QWORD *)(a1 + 176), (unsigned int)&v82, v50, 16, 0, 0, 0, 0);
          v52 = v75;
          v53 = v74;
          v54 = v51;
          v55 = *(unsigned int *)(*(_QWORD *)(a1 + 192) + 32LL);
          if ( v75 > 0x40 )
          {
            v64 = *(_DWORD *)(*(_QWORD *)(a1 + 192) + 32LL);
            v61 = sub_2587400(&v74);
            v55 = v64;
            if ( v52 - v61 <= 0x40 && *v53 <= 1u )
              goto LABEL_89;
            v53 = (_QWORD *)*v53;
          }
          else if ( (unsigned __int64)v74 <= 1 )
          {
LABEL_89:
            v44 = sub_9A2420(a1 + 48, v54, v55, 2);
            goto LABEL_73;
          }
          v44 = sub_9A3010(a1 + 48, v54, v53, (unsigned int)v55, 2);
          goto LABEL_73;
        }
LABEL_76:
        v82 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
        v47 = (unsigned __int8 **)sub_A2E0C0(a1, &v82, 2250, 0);
        v48 = v74;
        if ( v75 > 0x40 )
          v48 = *(void **)v74;
        if ( v47 )
          sub_8356A0(v47, (__int64)v48, 3u);
        goto LABEL_48;
      }
      _BitScanReverse64(&v35, (unsigned __int64)v74);
      v67 = v35 + 1;
    }
    v36 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    if ( (unsigned int)sub_B064C0(v36) < v67 )
      goto LABEL_76;
    goto LABEL_65;
  }
  v27 = (unsigned __int8 **)sub_A2E130(a1, a4, 2248, 0);
  v28 = sub_B19120(*v26, 0);
  if ( v27 )
  {
    sub_8356A0(v27, v28 ^ 1u, 2u);
    sub_8356A0(v27, v25, 8u);
  }
  return 0;
}

