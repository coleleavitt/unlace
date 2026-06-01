bool __fastcall sub_17B1BF0(__int64 a1, __int64 a2, unsigned int a3, char a4, unsigned int a5, __int64 a6)
{
  __int64 *v6; // r13
  unsigned int *v8; // rbp
  __int64 v9; // rbx
  unsigned __int8 v10; // al
  int v11; // r14d
  bool result; // al
  unsigned __int64 v13; // r15
  __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // al
  __int64 *v24; // r12
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  char v34; // r15
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  char v39; // dl
  unsigned int v40; // edx
  int v41; // eax
  __int64 v42; // r14
  int v43; // eax
  char *v44; // rax
  int v45; // esi
  __int64 v46; // rdx
  __int64 *v47; // rax
  __int64 *v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // r15
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // edx
  char v57; // al
  unsigned int v58; // eax
  __int64 v59; // rbx
  int v60; // eax
  char *v61; // rax
  __int64 v62; // rdx
  unsigned int *v64; // [rsp+10h] [rbp-358h]
  __int64 *v65; // [rsp+18h] [rbp-350h]
  unsigned int *v66; // [rsp+20h] [rbp-348h]
  char *v67; // [rsp+28h] [rbp-340h]
  char v69; // [rsp+33h] [rbp-335h]
  char v70; // [rsp+34h] [rbp-334h]
  __int64 v71; // [rsp+38h] [rbp-330h] BYREF
  bool v72; // [rsp+47h] [rbp-321h] BYREF
  int v73; // [rsp+48h] [rbp-320h] BYREF
  int v74; // [rsp+4Ch] [rbp-31Ch] BYREF
  int v75; // [rsp+50h] [rbp-318h] BYREF
  __int64 v76; // [rsp+54h] [rbp-314h]
  char v77; // [rsp+5Ch] [rbp-30Ch]
  _BYTE v78[144]; // [rsp+60h] [rbp-308h] BYREF
  unsigned int v79[36]; // [rsp+F0h] [rbp-278h] BYREF
  __int64 v80; // [rsp+180h] [rbp-1E8h] BYREF
  char v81; // [rsp+188h] [rbp-1E0h]
  _DWORD v82[6]; // [rsp+210h] [rbp-158h] BYREF
  void *v83; // [rsp+228h] [rbp-140h]
  __int64 v84; // [rsp+238h] [rbp-130h] BYREF
  unsigned int v85[6]; // [rsp+2A0h] [rbp-C8h] BYREF
  void *v86; // [rsp+2B8h] [rbp-B0h]
  char v87; // [rsp+2C8h] [rbp-A0h] BYREF

  v6 = (__int64 *)a2;
  LODWORD(v8) = a3;
  v9 = a1;
  v10 = *(_BYTE *)(a2 + 73) >> 5;
  v71 = a6;
  v11 = v10;
  if ( a3 == v10 )
  {
    if ( a3 != 3 && a3 > 1 )
      return 1;
  }
  else
  {
    result = v10 == 3 || v10 <= 1u;
    if ( !result )
      return result;
    result = a3 <= 1 || a3 == 3;
    if ( !result )
      return result;
  }
  v13 = *(_QWORD *)(a1 + 264);
  v64 = *(unsigned int **)(v13 + 32);
  if ( (unsigned __int8)sub_FD3830((__int64)v64, 0x1CE4u, a5, v13, (__int64)v64, a6) == 1 )
    return 1;
  v15 = (__int64)v64;
  v16 = v13;
  v17 = (__int64)v64;
  while ( (unsigned __int8)sub_FD3830(v17, 0x1CE4u, *((unsigned int *)v6 + 6), v16, v15, v14) == 1 )
  {
    if ( (v6[12] & 3) != 0 )
      return 1;
    v18 = sub_7052B0(v6 + 12, (__int64)v6, v19, v20, v21, v22);
    v6 = v18;
    if ( !v18 )
      return 1;
    v16 = *(_QWORD *)(v9 + 264);
    v17 = *(_QWORD *)(v16 + 32);
    v11 = *((_BYTE *)v18 + 73) >> 5;
  }
  v23 = *((_BYTE *)v6 + 28);
  v72 = 0;
  if ( (v23 & 0x7Fu) - 59 <= 2 )
    v72 = sub_B97230((__int64)v6) != 0;
  if ( *(_DWORD *)(v9 + 11320) <= *(_DWORD *)(v9 + 12596) )
  {
    if ( a4 )
    {
      if ( !sub_B7E870((__int64)v6, 7396, v19, v20, v21, v22) )
      {
        v69 = 0;
        v33 = 0;
        v66 = v82;
        v34 = 0;
        v64 = v85;
        v67 = &v87;
        v65 = v6;
        v70 = a4;
        v24 = v6;
        v6 = &v80;
        goto LABEL_29;
      }
    }
    else
    {
      v48 = sub_B7E870((__int64)v6, 7396, v19, v20, v21, v22);
      v51 = v48;
      if ( v48 )
      {
        if ( (unsigned __int8)sub_FD3830(
                                *(_QWORD *)(*(_QWORD *)(v9 + 264) + 32LL),
                                0x1CE4u,
                                *((unsigned int *)v48 + 6),
                                *(_QWORD *)(v9 + 264),
                                v49,
                                v50) == 1 )
          v51 = nullptr;
        else
          v6 = v51;
      }
      if ( (_DWORD)v8 != *((_BYTE *)v6 + 73) >> 5 )
      {
        v9 += 8;
        v24 = (__int64 *)v82;
        sub_168B9F0((__int64)v82, (__int64 *)v9, a5, 0x1CE4u, 0);
        if ( (_DWORD)v8 == 1 )
          v52 = 1;
        else
          v52 = (_DWORD)v8 == 3 ? 2 : 0;
        v75 = v52;
        v53 = sub_16CF160((__int64)v82, (unsigned int *)&v75);
        v54 = sub_15890D0(v53, (unsigned __int8 *)&v72);
        v55 = sub_17AE460(v54, &v71);
        if ( v11 == 1 )
          v56 = 1;
        else
          v56 = v11 == 3 ? 2 : 0;
        v8 = v85;
        v85[0] = v56;
        sub_16CF160(v55, v85);
        sub_15F7200(v82);
        sub_168B9F0((__int64)v85, (__int64 *)v9, *((_DWORD *)v6 + 6), 0x73u, 0);
        sub_15F7200(v85);
        if ( v51 )
        {
          sub_168B9F0((__int64)v85, (__int64 *)v9, a5, 0x18E3u, 0);
          v57 = *((_BYTE *)v6 + 73) >> 5;
          if ( v57 == 1 )
          {
            v58 = 1;
          }
          else if ( v57 )
          {
            if ( v57 != 3 )
              goto LABEL_67;
            v58 = 2;
          }
          else
          {
            v58 = 0;
          }
          v79[0] = v58;
          v59 = sub_16CF160((__int64)v85, v79);
          v60 = sub_F58620(*((_BYTE *)v6 + 73) >> 5);
          v61 = sub_F58640(v60);
          v81 = 1;
          LODWORD(v80) = a5;
          HIDWORD(v80) = a5;
          sub_179D680((__int64)v82, v80, 1, v61, v62);
          sub_1589170(v59, v82);
          if ( v83 != &v84 )
            operator delete(v83);
          sub_15F7200(v85);
        }
      }
    }
    return 1;
  }
  if ( v11 == (_DWORD)v8 )
    return 1;
  v24 = (__int64 *)v78;
  sub_168B9F0((__int64)v78, (__int64 *)(v9 + 8), a5, 0x1CE4u, 0);
  switch ( (_DWORD)v8 )
  {
    case 1:
      v25 = 1;
      goto LABEL_22;
    case 3:
      v25 = 2;
LABEL_22:
      v73 = v25;
      v26 = sub_16CF160((__int64)v78, (unsigned int *)&v73);
      v27 = sub_15890D0(v26, (unsigned __int8 *)&v72);
      v28 = sub_17AE460(v27, &v71);
      if ( v11 == 1 )
      {
        v29 = 1;
      }
      else if ( v11 == 3 )
      {
        v29 = 2;
      }
      else
      {
        v29 = 0;
      }
      v85[0] = v29;
      sub_16CF160(v28, v85);
      sub_15F7200(v78);
      return 1;
    case 0:
      v25 = 0;
      goto LABEL_22;
  }
LABEL_67:
  v41 = 0;
LABEL_42:
  v82[0] = v41;
  v42 = sub_16CF160((__int64)v6, v66);
  v43 = sub_F58620((int)v8);
  v44 = sub_F58640(v43);
  v45 = *((_DWORD *)v24 + 14);
  v77 = 1;
  LODWORD(v76) = v45;
  HIDWORD(v76) = v45;
  sub_179D680((__int64)v64, v76, 1, v44, v46);
  sub_1589170(v42, v64);
  if ( v86 != v67 )
    operator delete(v86);
  sub_15F7200(v6);
  v34 = a4;
  while ( 1 )
  {
    if ( (v24[12] & 3) != 0 )
    {
      if ( v69 )
        return v70;
      v69 = 1;
    }
    v47 = sub_7052B0(v24 + 12, (__int64)v24, v30, v33, v31, v32);
    v24 = v47;
    if ( v65 == v47 || !v47 )
      return v70;
LABEL_29:
    if ( (_DWORD)v8 != *((_BYTE *)v24 + 73) >> 5
      && (unsigned __int8)sub_FD3830(
                            *(_QWORD *)(*(_QWORD *)(v9 + 264) + 32LL),
                            0x1CE4u,
                            *((unsigned int *)v24 + 6),
                            *(_QWORD *)(v9 + 264),
                            v31,
                            v32) != 1 )
    {
      if ( !v34 )
      {
        sub_168B9F0((__int64)v79, (__int64 *)(v9 + 8), a5, 0x1CE3u, 0);
        if ( (_DWORD)v8 == 1 )
        {
          v35 = 1;
        }
        else if ( (_DWORD)v8 == 3 )
        {
          v35 = 2;
        }
        else
        {
          if ( (_DWORD)v8 )
            goto LABEL_67;
          v35 = 0;
        }
        v74 = v35;
        v36 = sub_16CF160((__int64)v79, (unsigned int *)&v74);
        v37 = sub_15890D0(v36, (unsigned __int8 *)&v72);
        v38 = sub_17AE460(v37, &v71);
        v39 = *((_BYTE *)v24 + 73) >> 5;
        if ( v39 == 1 )
        {
          v40 = 1;
        }
        else if ( v39 )
        {
          if ( v39 != 3 )
            goto LABEL_67;
          v40 = 2;
        }
        else
        {
          v40 = 0;
        }
        v85[0] = v40;
        sub_16CF160(v38, v64);
        sub_15F7200(v79);
      }
      sub_168B9F0((__int64)v6, (__int64 *)(v9 + 8), *((_DWORD *)v24 + 14), 0x18E3u, 0);
      if ( (_DWORD)v8 == 1 )
      {
        v41 = 1;
      }
      else
      {
        if ( (_DWORD)v8 != 3 )
          goto LABEL_67;
        v41 = 2;
      }
      goto LABEL_42;
    }
  }
}
