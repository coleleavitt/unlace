__int64 __fastcall sub_813CC0(unsigned __int16 *a1, __int64 a2, int a3, _QWORD *a4)
{
  int v4; // r14d
  _QWORD *v6; // r12
  unsigned int v7; // ebp
  unsigned __int16 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  _DWORD *v23; // rax
  int v24; // r9d
  int v25; // r14d
  __int64 i; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // r14
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // r14
  __int64 v36; // r15
  __int64 v37; // rax
  char v38; // dl
  _DWORD *v39; // rax
  unsigned __int16 **v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r14
  __int64 v46; // r15
  __int64 v47; // rbp
  unsigned int v48; // eax
  void *v49; // rdi
  char v50; // dl
  unsigned __int8 v51; // dl
  char v52; // r14
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdi
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  char v59; // al
  __int64 v60; // rdi
  char v61; // al
  char v62; // dl
  unsigned int v63; // eax
  __int64 v64; // rdi
  int v65; // edx
  __int64 v66; // rax
  __int64 v67; // rdi
  int v68; // edx
  unsigned __int8 v69; // [rsp+8h] [rbp-B0h]
  unsigned int v70; // [rsp+8h] [rbp-B0h]
  unsigned int v71; // [rsp+8h] [rbp-B0h]
  unsigned int v72; // [rsp+8h] [rbp-B0h]
  __int64 v73; // [rsp+8h] [rbp-B0h]
  __int64 v74; // [rsp+8h] [rbp-B0h]
  int v75; // [rsp+10h] [rbp-A8h]
  void *v76; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v77; // [rsp+28h] [rbp-90h]
  char v78; // [rsp+2Ch] [rbp-8Ch]
  void *v79; // [rsp+30h] [rbp-88h] BYREF
  __int64 v80; // [rsp+38h] [rbp-80h]
  unsigned int v81; // [rsp+40h] [rbp-78h] BYREF
  char v82; // [rsp+44h] [rbp-74h]
  int v83; // [rsp+A8h] [rbp-10h]

  while ( 1 )
  {
    v6 = a4;
    v7 = a3;
    v8 = a1;
    v9 = *a1;
    LOWORD(v9) = v9 & 0x1FF;
    if ( !(_BYTE)v7 )
      break;
    if ( (_WORD)v9 == 61 )
    {
      a1 = *((unsigned __int16 **)a1 + 2);
      a3 = 1;
      goto LABEL_4;
    }
    if ( (_WORD)v9 != 49 )
    {
      LOWORD(v79) = 0;
      v82 &= ~1u;
      v80 = 0;
      v81 = 0;
      result = sub_870920(a1, &v79, a2, 0);
      if ( !(_BYTE)result || (_BYTE)v79 )
      {
        if ( v6 )
          *v6 = a1;
        result = 0;
      }
      if ( v81 > 1 )
      {
        v69 = result;
        sub_69F740((__int64)&v81);
        return v69;
      }
      return result;
    }
LABEL_7:
    v10 = *((_QWORD *)a1 + 2);
    a1 = (unsigned __int16 *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v10 & 4) != 0 )
      a1 = *((unsigned __int16 **)a1 + 5);
LABEL_9:
    a4 = v6;
    a3 = 0;
LABEL_4:
    v4 = v83;
  }
  LOWORD(v9) = (v9 + 508) & 0x1FF;
  switch ( v9 )
  {
    case 0LL:
      if ( *((_BYTE *)a1 + 2) >> 3 != 12 )
        goto LABEL_11;
      goto LABEL_25;
    case 5LL:
    case 57LL:
    case 58LL:
      goto LABEL_25;
    case 6LL:
    case 34LL:
    case 42LL:
    case 51LL:
      return 1;
    case 17LL:
      goto LABEL_68;
    case 18LL:
      if ( *((char *)a1 + 1) < 0 )
        goto LABEL_83;
      v47 = *((_QWORD *)a1 + 4);
      if ( ((*(_BYTE *)(v47 + 2) >> 3) & 3) == 1 )
      {
        v49 = *(void **)(v47 + 24);
        v51 = *(_BYTE *)(v47 + 3) & 2;
        v48 = *(_BYTE *)(v47 + 4) & 0x7F;
        LODWORD(v80) = v48;
        v52 = v51 >> 1;
        if ( v48 <= 0x40 )
        {
          v77 = v48;
          v76 = v49;
          v78 = v51 >> 1;
          if ( v51 )
            goto LABEL_87;
          goto LABEL_90;
        }
        sub_2585A50(&v79, v49, 0);
        v48 = v80;
        v78 = v52;
        v77 = v80;
        v76 = v79;
      }
      else
      {
        v48 = *(_DWORD *)(v47 + 40);
        v77 = v48;
        if ( v48 <= 0x40 )
        {
          v49 = *(void **)(v47 + 32);
          v50 = *(_BYTE *)(v47 + 44);
          v76 = v49;
          v78 = v50;
          if ( v50 )
            goto LABEL_87;
          goto LABEL_90;
        }
        sub_2585B30(&v76);
        v52 = *(_BYTE *)(v47 + 44);
        v48 = v77;
        v78 = v52;
      }
      v49 = v76;
      if ( v52 )
      {
        if ( v48 <= 0x40 )
        {
LABEL_87:
          v4 = (int)v49;
          goto LABEL_83;
        }
LABEL_109:
        v4 = *(_DWORD *)v76;
        operator delete[](v76);
        goto LABEL_83;
      }
      if ( v48 > 0x40 )
        goto LABEL_109;
LABEL_90:
      v4 = 0;
      if ( v48 )
        v4 = (__int64)((_QWORD)v49 << (64 - (unsigned __int8)v48)) >> (64 - (unsigned __int8)v48);
LABEL_83:
      a1 = *(unsigned __int16 **)&v8[4 * v4 + 24];
      goto LABEL_9;
    case 45LL:
      goto LABEL_7;
    case 50LL:
      v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned __int8)(*(_BYTE *)(v42 + 16) - 2) <= 4u )
      {
        v43 = *((_QWORD *)v8 + 2);
        v44 = (*((_QWORD *)v8 + 3) - v43) >> 3;
        if ( !(_DWORD)v44 )
          return 1;
        v45 = 0;
        v46 = 8LL * (unsigned int)(v44 - 1);
        while ( 1 )
        {
          if ( !(unsigned __int8)sub_813CC0(*(_QWORD *)(v43 + v45), a2, 0, v6) )
            return v7;
          if ( v45 == v46 )
            break;
          v43 = *((_QWORD *)v8 + 2);
          v45 += 8;
        }
        return 1;
      }
      if ( *(_BYTE *)(v42 + 16) != 47 )
        goto LABEL_11;
      v14 = sub_B14A40(v42);
      if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 57 > 2 )
        goto LABEL_122;
      v15 = *(_QWORD *)(v14 + 104);
      v16 = *(_QWORD *)(v15 + 96);
      if ( (v16 & 1) != 0 || (v16 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
        goto LABEL_37;
      if ( (v16 & 2) != 0 )
      {
        v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
        v18 = *(_QWORD *)(v17 + 18200);
        v19 = (_QWORD *)v17;
        v20 = v15 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v18 )
        {
          v21 = v19[274];
          v19[284] += 24LL;
          v22 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v19[275] >= v22 + 24 && v21 )
          {
            v19[274] = v22 + 24;
          }
          else
          {
            v74 = v18;
            v22 = sub_804090((__int64)(v19 + 274), 24, 3);
            v18 = v74;
          }
          *(_QWORD *)v22 = v18;
          *(_DWORD *)(v22 + 8) = 0;
          *(_QWORD *)(v22 + 16) = v15;
          v20 = v22 | 4;
        }
        v16 = v20 | 1;
        *(_QWORD *)(v15 + 96) = v16;
LABEL_37:
        if ( (v16 & 0xFFFFFFFFFFFFFFFELL) != 0 && (v16 & 4) != 0 )
        {
          v23 = (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v23 )
          {
            v67 = *(_QWORD *)v23;
            v68 = *(_DWORD *)(*(_QWORD *)v23 + 12LL);
            if ( v23[2] != v68 )
            {
              v23[2] = v68;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v67 + 144LL))(v67, v15);
            }
          }
        }
      }
      v24 = *(_DWORD *)(*(_QWORD *)(v14 + 128) + 16LL);
      if ( v24 )
      {
        v25 = 0;
        for ( i = 0; ; i = v71 )
        {
          v27 = *((_QWORD *)v8 + 2);
          if ( (unsigned int)i >= (unsigned int)((*((_QWORD *)v8 + 3) - v27) >> 3) )
            goto LABEL_43;
          v75 = v24;
          v71 = i + 1;
          v59 = sub_813CC0(*(_QWORD *)(v27 + 8 * i), a2, 0, v6);
          v24 = v75;
          if ( !v59 )
            return v7;
          if ( v75 == ++v25 )
            break;
        }
        LODWORD(i) = v71;
      }
      else
      {
LABEL_122:
        LODWORD(i) = 0;
      }
LABEL_43:
      v70 = i;
      v28 = sub_7868A0(v14);
      if ( !v28 )
        return 1;
      v29 = v70;
      break;
    case 54LL:
      a1 = *(unsigned __int16 **)&a1[4 * ((*((_DWORD *)a1 + 4) >> 15) & 0x7FFF)
                                   + 16
                                   + 4 * ((*((_BYTE *)a1 + 19) & 0x40) != 0)];
      goto LABEL_9;
    case 64LL:
      if ( (unsigned __int8)sub_813CC0(*((_QWORD *)a1 + 2), a2, 0, a4) )
        goto LABEL_68;
      return v7;
    case 73LL:
      goto LABEL_71;
    case 74LL:
      if ( ((**((_DWORD **)a1 + 2) >> 14) & 0xC) != 0 )
        goto LABEL_12;
      if ( *((_BYTE *)a1 + 48) )
LABEL_68:
        a1 = *((unsigned __int16 **)a1 + 3);
      else
LABEL_71:
        a1 = *((unsigned __int16 **)a1 + 4);
      goto LABEL_9;
    case 76LL:
    case 77LL:
    case 78LL:
    case 79LL:
    case 80LL:
    case 81LL:
    case 82LL:
    case 83LL:
    case 84LL:
      v12 = ((unsigned __int8)(a1[1] >> 3) + 124) & 0x7F;
      if ( (unsigned __int8)v12 > 0x3Cu )
        goto LABEL_11;
      v13 = 0x10C0000000010243LL;
      if ( !_bittest64(&v13, v12) )
        goto LABEL_11;
LABEL_25:
      a1 = *((unsigned __int16 **)a1 + 2);
      goto LABEL_9;
    case 108LL:
      v41 = sub_8C4900(a1);
      goto LABEL_73;
    case 109LL:
      v41 = sub_8C4680(a1);
LABEL_73:
      a1 = (unsigned __int16 *)v41;
      goto LABEL_9;
    case 110LL:
    case 111LL:
      v33 = *((_QWORD *)a1 + 2);
      if ( *(char *)(v33 + 82) >= 0 )
        goto LABEL_11;
      v34 = *(_QWORD *)(sub_79A2E0(v33 + 72) + 16);
      v35 = (_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v34 & 4) != 0 )
        v35 = (_QWORD *)*v35;
      if ( !v35 )
        BUG();
      v36 = v35[5];
      v37 = *(_QWORD *)(v36 + 96);
      if ( (v37 & 1) != 0 )
      {
        v38 = v37 & 0xFE;
        if ( (v37 & 0xFFFFFFFFFFFFFFFELL) == 0 )
          goto LABEL_62;
      }
      else
      {
        if ( (v37 & 0xFFFFFFFFFFFFFFFELL) <= 3 || (v37 & 2) == 0 )
          goto LABEL_62;
        v53 = (_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
        v54 = v53[2275];
        if ( !v54 )
        {
          *(_QWORD *)(v36 + 96) = v36 & 0xFFFFFFFFFFFFFFFALL | 1;
          goto LABEL_62;
        }
        v55 = v53[274];
        v53[284] += 24LL;
        v56 = (v55 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v53[275] >= v56 + 24 && v55 )
        {
          v53[274] = v56 + 24;
        }
        else
        {
          v73 = v54;
          v66 = sub_804090((__int64)(v53 + 274), 24, 3);
          v54 = v73;
          v56 = v66;
        }
        *(_QWORD *)v56 = v54;
        *(_DWORD *)(v56 + 8) = 0;
        v37 = v56 | 5;
        *(_QWORD *)(v56 + 16) = v36;
        *(_QWORD *)(v36 + 96) = v56 | 5;
        v38 = v56 & 0xFA | 4;
      }
      if ( (v38 & 4) != 0 )
      {
        v39 = (_DWORD *)(v37 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v39 )
        {
          v64 = *(_QWORD *)v39;
          v65 = *(_DWORD *)(*(_QWORD *)v39 + 12LL);
          if ( v39[2] != v65 )
          {
            v39[2] = v65;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v64 + 144LL))(v64, v36);
          }
        }
      }
LABEL_62:
      if ( ((*(_WORD *)(v35[8] + 4LL) >> 7) & 0x3Fu) > 0x1F )
      {
        if ( !*((_DWORD *)v8 + 8) )
          return 1;
        v40 = (unsigned __int16 **)(v8 + 24);
        if ( (*v8 & 0x1FF) != 0x73 )
          v40 = (unsigned __int16 **)(v8 + 20);
        a1 = *v40;
        goto LABEL_9;
      }
LABEL_11:
      if ( (unsigned __int8)sub_863C90(v8, a2, 1) )
        return 1;
LABEL_12:
      if ( v6 )
        *v6 = v8;
      return v7;
    default:
      goto LABEL_11;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(v14 + 73) >> 5 == 2 )
    {
      v58 = *((_QWORD *)v8 + 7);
      if ( !v58 || (v58 & 2) == 0 || v28 != (v58 & 0xFFFFFFFFFFFFFFFCLL) )
        goto LABEL_52;
    }
    if ( (*(_BYTE *)(v28 + 68) & 1) != 0 )
      break;
    v57 = *((_QWORD *)v8 + 2);
    if ( (unsigned int)v29 < (unsigned int)((*((_QWORD *)v8 + 3) - v57) >> 3) )
    {
      v72 = v29 + 1;
      if ( !(unsigned __int8)sub_813CC0(
                               *(_QWORD *)(v57 + 8 * v29),
                               a2,
                               (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 48) & 0xFFFFFFFFFFFFFFF0LL)
                                                                                        + 8LL)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 16LL)
                             - 42 <= 1,
                               v6) )
        return v7;
LABEL_101:
      v29 = v72;
      goto LABEL_52;
    }
    do
    {
LABEL_52:
      v32 = *(_QWORD *)(v28 + 8);
      v28 = v32 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v32 <= 7 )
        return 1;
    }
    while ( (*(_BYTE *)(v28 + 28) & 0x7Fu) - 47 > 2 );
  }
  v30 = *(_QWORD *)(v28 + 40);
  if ( v30 <= 7 && !(_DWORD)v30 )
    goto LABEL_52;
  v31 = *((_QWORD *)v8 + 2);
  if ( (unsigned int)v29 >= (unsigned int)((*((_QWORD *)v8 + 3) - v31) >> 3) )
    goto LABEL_52;
  v60 = *(_QWORD *)(v31 + 8 * v29);
  v72 = v29 + 1;
  v81 = 0;
  v82 &= ~1u;
  LOWORD(v79) = 0;
  v80 = 0;
  v61 = sub_865F40(v60, &v79, a2, 0, 0);
  v62 = v61;
  v63 = v81;
  if ( !v62 )
  {
    if ( v6 )
      *v6 = v60;
    if ( v63 > 1 )
      sub_69F740((__int64)&v81);
    return v7;
  }
  if ( v81 > 1 )
    sub_69F740((__int64)&v81);
  goto LABEL_101;
}

