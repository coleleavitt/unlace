__int64 __fastcall sub_73D7A0(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int *v5; // rbp
  __int64 v6; // r13
  char v7; // r14
  unsigned int v8; // r15d
  char *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // r14d
  unsigned int *v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // eax
  _DWORD *v18; // rax
  char *v19; // rax
  int v20; // edx
  int v21; // ebx
  char *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  char *v25; // rax
  int v26; // edx
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  char v29; // al
  char *v30; // rax
  bool v31; // bl
  __int64 v32; // rax
  __int64 v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  _DWORD *v39; // rax
  __int64 v40; // rcx
  char *v41; // rax
  char *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  char *v45; // rbx
  unsigned __int8 v46; // al
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  char *v50; // rax
  int v51; // eax
  char *v52; // rdx
  char *v53; // rax
  __int64 v54; // rdx
  const char *v55; // rsi
  __int64 v56; // rbx
  _DWORD *v57; // rbp
  int v58; // eax
  __int64 v59; // rbx
  _DWORD *v60; // rax
  int v61; // edx
  _DWORD *v62; // [rsp+0h] [rbp-278h]
  unsigned int v63; // [rsp+Ch] [rbp-26Ch]
  unsigned int v64; // [rsp+18h] [rbp-260h] BYREF
  unsigned int v65; // [rsp+1Ch] [rbp-25Ch] BYREF
  int v66; // [rsp+20h] [rbp-258h] BYREF
  _BYTE v67[4]; // [rsp+24h] [rbp-254h] BYREF
  int v68; // [rsp+28h] [rbp-250h] BYREF
  unsigned int v69; // [rsp+2Ch] [rbp-24Ch] BYREF
  _QWORD v70[73]; // [rsp+30h] [rbp-248h] BYREF

  v62 = (_DWORD *)a2;
  v70[65] = __readfsqword(0x28u);
  v65 = 0;
  v66 = 0;
  if ( ++BYTE1(xmmword_2CA2E80) > 0x14u )
    goto LABEL_36;
  v64 = 0;
  v5 = a1;
  LODWORD(v6) = 0;
  while ( 2 )
  {
    a3 = (__int64)qword_2CAA5C0++;
    v7 = *(_BYTE *)a3;
    switch ( *(_BYTE *)a3 )
    {
      case 'A':
        a2 = 91;
        sub_74F860(&v65, 91);
        v25 = qword_2CAA5C0;
        BYTE2(v65) |= 1u;
        v26 = (unsigned __int8)*qword_2CAA5C0;
        if ( (_BYTE)v26 != 95 )
        {
          v27 = (unsigned int)(v26 - 48);
          if ( (unsigned __int8)v27 <= 9u )
          {
            a1 = &v65;
            sub_73BC30((__int64)&v65, 91, v27, v23);
          }
          else
          {
            a2 = (__int64)&v69;
            a1 = &v65;
            v69 = sub_73D050(nullptr, (unsigned int *)((char *)&qword_58 + 3), v27, v23, v24);
            sub_7506B0(&v65, &v69);
          }
          v25 = qword_2CAA5C0;
          if ( *qword_2CAA5C0 != 95 )
            goto LABEL_36;
        }
        a2 = 93;
        a1 = &v65;
        qword_2CAA5C0 = v25 + 1;
        sub_74F860(&v65, 93);
        goto LABEL_14;
      case 'C':
      case 'G':
        v8 = v64;
        if ( v64 > 0x3F )
          goto LABEL_36;
        a1 = (unsigned int *)sub_74E510(a1, a2);
        a2 = (__int64)&(&off_2B0EBA0)[2 * (v7 == 71)];
        sub_74F6A0(a1, a2);
        *((_BYTE *)a1 + 2) |= 2u;
        v70[v8] = a1;
        v9 = qword_2CAA5C0;
        v64 = v8 + 1;
        a3 = (__int64)++qword_2CAA5C0;
        v7 = *v9;
        goto LABEL_6;
      case 'D':
        if ( *(_BYTE *)(a3 + 1) == 120 )
          goto LABEL_8;
LABEL_57:
        a3 = (__int64)qword_2CAA5C0;
        v45 = ++qword_2CAA5C0;
        switch ( *(_BYTE *)a3 )
        {
          case 'F':
            v51 = sub_74E4D0(a1, a2, a3, a4, a5);
            a3 = (unsigned int)(v51 - 16);
            if ( (unsigned int)a3 > 0x70 )
              goto LABEL_44;
            a3 = (unsigned int)(v51 - 1);
            if ( (v51 & (unsigned int)a3) != 0 )
              goto LABEL_44;
            v52 = qword_2CAA5C0;
            a4 = (__int64)++qword_2CAA5C0;
            a3 = (unsigned __int8)*v52;
            if ( (_BYTE)a3 == 98 )
            {
              if ( v51 != 16 )
                goto LABEL_36;
              sub_74F560(&v69, "bfloat16_t", 10);
              sub_7506B0(&v65, &v69);
              sub_74F810(&v69, 6583411, 3);
              a2 = (__int64)&v69;
              a1 = &v65;
              sub_750B70(&v65, &v69);
            }
            else
            {
              if ( (_BYTE)a3 != 120 && (_BYTE)a3 != 95 )
                goto LABEL_36;
              sub_74F560(&v69, "_Float", 6);
              sub_7506B0(&v65, &v69);
              sub_74F4C0(
                &v69,
                v45,
                (unsigned __int16)((_WORD)qword_2CAA5C0 - (_WORD)v45 - (*(qword_2CAA5C0 - 1) == 95)));
              a2 = (__int64)&v69;
              a1 = &v65;
              sub_7506B0(&v65, &v69);
            }
            break;
          case 'T':
          case 'n':
          case 't':
            sub_74F560(&v69, "decltype", 8);
            sub_7506B0(&v65, &v69);
            if ( *(qword_2CAA5C0 - 1) == 110 )
            {
              sub_74F560(&v69, "(nullptr)", 9);
              sub_7506B0(&v65, &v69);
              goto LABEL_41;
            }
            v68 = sub_73D050(nullptr, &v69, v47, v48, v49);
            a2 = (__int64)&v69;
            a1 = &v65;
            v69 = sub_752830(&v68);
            sub_7506B0(&v65, &v69);
            v50 = qword_2CAA5C0;
            a3 = (__int64)++qword_2CAA5C0;
            if ( *v50 != 69 )
              goto LABEL_36;
            goto LABEL_44;
          case 'd':
            v54 = 9;
            v55 = "decimal64";
            goto LABEL_87;
          case 'e':
            v54 = 10;
            v55 = "decimal128";
            goto LABEL_87;
          case 'f':
            v54 = 9;
            v55 = "decimal32";
LABEL_87:
            sub_74F560(&v69, v55, v54);
            sub_7506B0(&v65, &v69);
            goto LABEL_41;
          case 'h':
            sub_74F810(&v69, 1718378856, 4);
            sub_7506B0(&v65, &v69);
            goto LABEL_41;
          case 'i':
            sub_750340(&v65, 18);
            goto LABEL_41;
          case 'p':
            a2 = (__int64)&v69;
            a1 = &v65;
            v69 = sub_73D7A0(0, 0);
            sub_7506B0(&v65, &v69);
            goto LABEL_44;
          case 's':
            sub_750340(&v65, 17);
            goto LABEL_41;
          case 'u':
            sub_750340(&v65, 16);
            goto LABEL_41;
          case 'v':
            if ( *(_BYTE *)(a3 + 1) == 95 )
            {
              a1 = nullptr;
              qword_2CAA5C0 = (char *)(a3 + 2);
              v66 = sub_73D050(nullptr, (unsigned int *)a2, a3 + 2, a4, a5);
            }
            else
            {
              a1 = (unsigned int *)&v66;
              sub_73BC30((__int64)&v66, a2, a3, a4);
            }
            if ( !(_WORD)v66 )
              goto LABEL_36;
            v53 = qword_2CAA5C0;
            a3 = (__int64)++qword_2CAA5C0;
            if ( *v53 != 95 )
              goto LABEL_36;
            qword_2CAA5C0 = v53 + 2;
            v29 = v53[1];
            v7 = v29;
            goto LABEL_35;
          default:
            goto LABEL_36;
        }
        goto LABEL_44;
      case 'K':
      case 'V':
      case 'r':
LABEL_8:
        qword_2CAA5C0 = (char *)a3;
        v10 = sub_73BBC0();
        a2 = (__int64)qword_2CAA5C0;
        a3 = v64;
        a4 = (unsigned __int8)v10;
        if ( *qword_2CAA5C0 != 70 )
          goto LABEL_9;
        v21 = v10;
        v22 = qword_2CAA5C0 + 1;
        v6 = v64;
        goto LABEL_25;
      case 'M':
        a2 = (__int64)&v69;
        a1 = &v65;
        v69 = sub_73D7A0(0, 0);
        sub_7506B0(&v65, &v69);
        a4 = v64;
        v63 = v64;
        if ( v64 > 0x3F )
          goto LABEL_36;
        sub_74F810(&v69, 2767418, 3);
        a2 = (__int64)&v69;
        a1 = &v65;
        sub_7506B0(&v65, &v69);
        v18 = (_DWORD *)sub_74E510(&v65, &v69);
        *v18 = v65;
        v6 = v63 + 1;
        v70[v63] = v18;
        v19 = qword_2CAA5C0;
        v65 = 0;
        v20 = (unsigned __int8)*qword_2CAA5C0;
        v64 = v63 + 1;
        if ( (_BYTE)v20 == 70 )
        {
          v21 = 0;
          goto LABEL_24;
        }
        a4 = (unsigned int)(v20 - 75);
        if ( (unsigned __int8)(v20 - 75) <= 0x27u )
        {
          v28 = 0xFFFFFF7FFFFFF7FELL;
          if ( !_bittest64((const __int64 *)&v28, a4) )
            goto LABEL_23;
          continue;
        }
        if ( (_BYTE)v20 != 68 || qword_2CAA5C0[1] != 120 )
          continue;
LABEL_23:
        v21 = sub_73BBC0();
        v19 = qword_2CAA5C0;
        if ( *qword_2CAA5C0 != 70 )
          goto LABEL_36;
LABEL_24:
        v22 = v19 + 1;
LABEL_25:
        qword_2CAA5C0 = v22;
        v68 = 0;
        v69 = sub_73D7A0(0, &v68);
        sub_7506B0(&v65, &v69);
        sub_750270(&v65, 10272);
        v68 = sub_750F10(41, &v68);
        v69 = sub_73E280(0);
        sub_7506B0(&v68, &v69);
        if ( v21 )
          sub_74FB30(&v68);
LABEL_49:
        a2 = (__int64)v70;
        a1 = &v65;
        v65 = sub_73BFA0(&v65, (unsigned __int64)v70, (unsigned __int64)&v70[v6], nullptr, &v68);
        v41 = qword_2CAA5C0;
        a3 = (__int64)++qword_2CAA5C0;
        if ( *v41 != 69 )
LABEL_36:
          sub_74E200(a1, a2, a3, a4);
LABEL_42:
        --BYTE1(xmmword_2CA2E80);
        return v65;
      case 'O':
        v17 = v64;
        if ( v64 > 0x3F )
          goto LABEL_36;
        v70[v64] = 38;
        a3 = v17 + 1;
        a4 = 38;
LABEL_9:
        if ( (unsigned int)a3 > 0x3F )
          goto LABEL_36;
        v70[a3] = a4;
        v64 = a3 + 1;
        continue;
      case 'P':
        a3 = v64;
        a4 = 42;
        goto LABEL_9;
      case 'R':
        a3 = v64;
        a4 = 38;
        goto LABEL_9;
      case 'U':
        dword_2CAA5C8 |= 0x8000000u;
        sub_74F860(&v65, 32);
        v68 = sub_73BE00((__int64)&v65, 32, v11, v12, v13);
        a2 = (__int64)&v69;
        a1 = &v65;
        v69 = sub_752CE0(&v68);
        sub_7506B0(&v65, &v69);
LABEL_14:
        v14 = v64;
        if ( v64 > 0x3F )
          goto LABEL_36;
        v15 = (unsigned int *)sub_74E510(&v65, a2);
        v16 = v65;
        v70[v64] = v15;
        *v15 = v16;
        v64 = v14 + 1;
        v65 = 0;
        continue;
      default:
LABEL_6:
        switch ( v7 )
        {
          case 'D':
            goto LABEL_57;
          case 'F':
            v68 = 0;
            v6 = v64;
            v69 = sub_73D7A0(0, &v68);
            sub_7506B0(&v65, &v69);
            sub_750270(&v65, 10272);
            v68 = sub_750F10(41, &v68);
            v69 = sub_73E280(0);
            sub_7506B0(&v68, &v69);
            goto LABEL_49;
          case 'N':
          case 'Z':
            v30 = qword_2CAA5C0;
            v31 = 1;
            goto LABEL_39;
          case 'S':
            v30 = qword_2CAA5C0;
            a3 = (unsigned __int8)*qword_2CAA5C0;
            if ( (_BYTE)a3 == 116 )
            {
              v31 = 1;
              goto LABEL_39;
            }
            if ( !(_BYTE)a3 )
              goto LABEL_36;
            if ( (_DWORD)v6 )
            {
              v56 = (unsigned int)(v6 - 1);
              v57 = (_DWORD *)sub_74E510(a1, a2);
              v58 = sub_750F10(32, v70[v56]);
              v70[v56] = v57;
              *v57 = v58;
            }
            v69 = sub_73C420((unsigned __int64)v70, &v64);
            sub_7506B0(&v65, &v69);
            if ( *qword_2CAA5C0 == 73 )
            {
LABEL_56:
              a2 = (__int64)&v69;
              a1 = &v65;
              v69 = sub_73D530(nullptr, &v69, v42, v43, v44);
              sub_7506B0(&v65, &v69);
              goto LABEL_44;
            }
            goto LABEL_41;
          case 'T':
            v34 = xmmword_2CA2E90;
            v35 = sub_73BCE0((__int64)a1, a2, a3, a4, a5);
            a2 = (__int64)&v69;
            a1 = &v65;
            v69 = *(_DWORD *)sub_752810(v34, v35, v36, v37);
            sub_7506B0(&v65, &v69);
            if ( *qword_2CAA5C0 != 73 )
              goto LABEL_44;
            if ( !(_WORD)v65 )
              goto LABEL_36;
            v59 = *((_QWORD *)&xmmword_2CA2E90 + 1);
            if ( *(_DWORD *)(*((_QWORD *)&xmmword_2CA2E90 + 1) + 2048LL) > 0x7Fu )
              goto LABEL_36;
            v60 = (_DWORD *)sub_74E510(&v65, &v69);
            *v60 = v65;
            v43 = *(unsigned int *)(v59 + 2048);
            v61 = *(_DWORD *)(v59 + 2048);
            *(_QWORD *)(v59 + 8 * v43) = v60;
            v42 = (char *)(unsigned int)(v61 + 1);
            *(_DWORD *)(v59 + 2048) = (_DWORD)v42;
            *(_QWORD *)(v59 + 8 * v43 + 1024) = 0;
            goto LABEL_56;
          default:
            v29 = v7;
LABEL_35:
            a3 = (unsigned int)v29;
            if ( (unsigned int)a3 > 0x7F )
              goto LABEL_36;
            a3 = (unsigned int)(a3 - 48);
            if ( (unsigned int)a3 <= 9 )
            {
              v30 = qword_2CAA5C0;
              v31 = v7 != 0;
LABEL_39:
              qword_2CAA5C0 = v30 - 1;
              a2 = (__int64)&v69;
              a1 = &v65;
              v69 = sub_73F100(0);
              sub_7506B0(&v65, &v69);
              if ( v5 != (unsigned int *)((char *)&dword_0 + 1) && v31 )
              {
LABEL_44:
                v38 = *((_QWORD *)&xmmword_2CA2E90 + 1);
                if ( !(_WORD)v65 || *(_DWORD *)(*((_QWORD *)&xmmword_2CA2E90 + 1) + 2048LL) > 0x7Fu )
                  goto LABEL_36;
                v39 = (_DWORD *)sub_74E510(a1, a2);
                *v39 = v65;
                v40 = *(unsigned int *)(v38 + 2048);
                *(_QWORD *)(v38 + 8 * v40) = v39;
                v32 = v64;
                *(_DWORD *)(v38 + 2048) = v40 + 1;
                *(_QWORD *)(v38 + 8 * v40 + 1024) = 0;
                if ( !(_DWORD)v32 )
                  goto LABEL_42;
LABEL_47:
                v65 = sub_73BFA0(&v65, (unsigned __int64)v70, (unsigned __int64)&v70[v32], v62, nullptr);
                goto LABEL_42;
              }
            }
            else
            {
              v46 = v29 - 97;
              if ( v46 > 0x19u )
                goto LABEL_36;
              a3 = (__int64)byte_23939F0;
              a2 = byte_23939F0[(char)v46];
              if ( !(_BYTE)a2 )
                goto LABEL_36;
              if ( (_BYTE)a2 == 1 && (unsigned __int64)v5 > 1 )
                ++*(_BYTE *)v5;
              sub_750340(&v65, a2);
              if ( (_WORD)v66 )
              {
                if ( (_WORD)v65 )
                  sub_74F860(&v65, 32);
                v68 = sub_752830(&v66);
                sub_74F560(v67, "__vector", 8);
                a2 = (__int64)&v69;
                a1 = &v65;
                v69 = sub_750E60(v67, &v68);
                sub_7506B0(&v65, &v69);
                goto LABEL_44;
              }
            }
LABEL_41:
            v32 = v64;
            if ( !v64 )
              goto LABEL_42;
            goto LABEL_47;
        }
    }
  }
}

