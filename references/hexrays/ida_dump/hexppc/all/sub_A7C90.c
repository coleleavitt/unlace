__int64 __fastcall sub_A7C90(__int64 a1, unsigned int *a2, _DWORD a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  int v8; // ebp
  unsigned int *v10; // rbx
  signed int v11; // edx
  char v12; // al
  unsigned int *v13; // rax
  __int64 v14; // rdi
  int v16; // eax
  __int64 v17; // r13
  int v18; // r9d
  __int64 v19; // rdi
  unsigned int *v20; // rdi
  int v21; // eax
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  _DWORD *v24; // r8
  char v25; // al
  char v26; // al
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // r9d
  int v30; // eax
  __int64 (__fastcall **v31)(); // rdi
  _DWORD *v32; // r8
  char v33; // al
  int v34; // eax
  int v35; // [rsp+0h] [rbp-A8h]
  _DWORD *v36; // [rsp+0h] [rbp-A8h]
  _DWORD *v37; // [rsp+0h] [rbp-A8h]
  unsigned int v38; // [rsp+0h] [rbp-A8h]
  __int64 v39; // [rsp+0h] [rbp-A8h]
  _DWORD *v40; // [rsp+0h] [rbp-A8h]
  unsigned int *v41; // [rsp+8h] [rbp-A0h]
  __int64 v42; // [rsp+8h] [rbp-A0h]
  __int64 v43; // [rsp+8h] [rbp-A0h]
  __int64 v44; // [rsp+8h] [rbp-A0h]
  int v45; // [rsp+10h] [rbp-98h]
  _DWORD *v46; // [rsp+10h] [rbp-98h]
  __int64 v47; // [rsp+10h] [rbp-98h]
  _DWORD *v48; // [rsp+10h] [rbp-98h]
  _DWORD *v49; // [rsp+10h] [rbp-98h]
  __int64 v50; // [rsp+18h] [rbp-90h]
  _DWORD *v51; // [rsp+18h] [rbp-90h]
  __int64 v52; // [rsp+20h] [rbp-88h]
  _BYTE v53[16]; // [rsp+30h] [rbp-78h] BYREF
  __int64 (__fastcall **v54)(); // [rsp+40h] [rbp-68h] BYREF
  __int128 v55; // [rsp+48h] [rbp-60h]
  __int16 v56; // [rsp+58h] [rbp-50h]
  __int64 (__fastcall *v57)(); // [rsp+60h] [rbp-48h]
  unsigned __int64 v58; // [rsp+68h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 480);
  v58 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(v4 + 112);
  v7 = *(_QWORD *)(a1 + 64);
  v8 = *(_DWORD *)(v7 + 892) + 1;
  *(_DWORD *)(v7 + 892) = v8;
  if ( *((_BYTE *)a2 + 64) == 14 )
    return 0;
  v10 = a2;
  while ( 2 )
  {
    v11 = *(_DWORD *)(v6 + 88);
    if ( (int)v10[17] >= v11 )
      return 0;
    switch ( *v10 )
    {
      case 1u:
        if ( (int)v10[9] >= v11 )
          return 0;
        goto LABEL_22;
      case 2u:
LABEL_22:
        if ( (a4 & 1) == 0 )
        {
          if ( (unsigned __int8)sub_A5210(a1, *((int **)v10 + 2), (__int64)v10)
            || (unsigned __int8)sub_A5210(a1, *((int **)v10 + 1), (__int64)v10) )
          {
            goto LABEL_25;
          }
LABEL_7:
          if ( (a4 & 7) != 6 )
            goto LABEL_17;
          v13 = *((unsigned int **)v10 + 2);
          if ( !v13 || *v13 != 11 && (*v10 == 4 || *v13 != 4) )
          {
            v13 = *((unsigned int **)v10 + 1);
            if ( !v13 )
            {
              if ( !(unsigned __int8)sub_32AA30(*v10) )
                goto LABEL_17;
LABEL_76:
              if ( (v10[1] & 0x40010) != 0
                || (*((_BYTE *)v10 + 65) & 2) != 0
                || sub_9EC10(*(_QWORD *)(a1 + 64), (__int64)v10)
                || (signed int)v10[17] >= *(_DWORD *)(v6 + 88) )
              {
                goto LABEL_17;
              }
              sub_120000(v53, v10 + 16);
              if ( (unsigned __int8)sub_1292D0(v53, v6, 1) )
              {
                v55 = 0;
                v54 = nullptr;
                v30 = sub_1DC060(a1, &v54, v10, v53);
                v31 = v54;
                if ( !v30 && (_QWORD)v55 == 1 && v54[1] == (__int64 (__fastcall *)())&byte_1 && !*v54 )
                {
                  if ( (unsigned __int8)sub_127E50(v10, v6, 9, v53, 2 * v10[17]) )
                  {
                    sub_119B90(v10, v6);
                    if ( v54 )
                    {
                      *(_QWORD *)&v55 = 0;
                      qfree(v54);
                    }
                    sub_119360(v53);
LABEL_25:
                    v16 = *(_DWORD *)(a1 + 24);
                    BYTE1(v16) &= ~2u;
                    LOBYTE(v16) = v16 | 0x80;
                    *(_DWORD *)(a1 + 24) = v16;
                    sub_9EAE0(a1, (__int64)"a partial reference has been resolved (try=%d)", v8);
                    goto LABEL_26;
                  }
                  v31 = v54;
                }
                if ( v31 )
                {
                  *(_QWORD *)&v55 = 0;
                  qfree(v31);
                }
              }
              sub_119360(v53);
              goto LABEL_17;
            }
            if ( *v13 != 11 )
            {
              v14 = *v10;
              if ( (_DWORD)v14 == 4 || *v13 != 4 )
              {
                if ( !(unsigned __int8)sub_32AA30(v14) )
                  goto LABEL_17;
                goto LABEL_76;
              }
            }
          }
          a4 |= 1u;
          v10 = v13;
          if ( *((_BYTE *)v13 + 64) == 14 )
            return 0;
          continue;
        }
        if ( (unsigned __int8)sub_A5210(a1, (int *)v10, *((_QWORD *)v10 + 2))
          || (unsigned __int8)sub_A5210(a1, (int *)v10, *((_QWORD *)v10 + 1)) )
        {
          goto LABEL_25;
        }
LABEL_17:
        if ( !(unsigned __int8)sub_1100D0(a1, v10, a4 | 2) )
          return 0;
LABEL_26:
        **(_DWORD **)(a1 + 64) &= ~0x10000u;
        return 1;
      case 4u:
        if ( *((char *)v10 + 4) < 0 )
          goto LABEL_7;
        *(_QWORD *)&v55 = a1;
        v54 = off_4C90D8;
        *((_QWORD *)&v55 + 1) = a4;
        v56 = 257;
        v57 = sub_AC2D0;
        if ( (unsigned __int8)sub_A6F70((__int64)&v54, (__int64)v10) )
          goto LABEL_25;
        if ( (a4 & 4) != 0 )
          goto LABEL_7;
        if ( *((_BYTE *)v10 + 64) == 10 )
          goto LABEL_17;
        if ( (a4 & 1) != 0 )
        {
          v17 = *((_QWORD *)v10 + 2);
          if ( !v17 )
            goto LABEL_17;
        }
        else
        {
          v17 = *((_QWORD *)v10 + 1);
          if ( !v17 )
            goto LABEL_17;
        }
        if ( *(_DWORD *)v17 == 4 && (*(_BYTE *)(v17 + 64) & 0xFB) != 0xA )
        {
          v35 = v17 + 32;
          v41 = v10 + 16;
          if ( !(unsigned __int8)sub_11B5A0(v17 + 32, v10 + 16, 2) )
          {
            v45 = (_DWORD)v10 + 32;
            v50 = v17 + 64;
            if ( !(unsigned __int8)sub_11B5A0(v10 + 8, v17 + 64, 2)
              && (v10[1] & 0x40010) == 0
              && (*((_BYTE *)v10 + 65) & 2) == 0 )
            {
              v52 = *(_QWORD *)(a1 + 64);
              if ( !sub_9EC10(v52, (__int64)v10)
                && (*(_DWORD *)(v17 + 4) & 0x40010) == 0
                && (*(_BYTE *)(v17 + 65) & 2) == 0
                && !sub_9EC10(v52, v17) )
              {
                v19 = *(_QWORD *)(a1 + 64);
                if ( (a4 & 1) != 0 )
                {
                  if ( !(unsigned __int8)sub_1294F0(v19, v35, v45, v45, 1, v18) )
                    goto LABEL_17;
                  sub_1537D0(a1, *(_QWORD *)(v17 + 8), v50, *((_QWORD *)v10 + 1), v41, 1);
                  sub_9D840(v6, (__int64)v10, *(_DWORD *)(v17 + 4));
                  v20 = (unsigned int *)v17;
                }
                else
                {
                  if ( !(unsigned __int8)sub_1294F0(v19, v45, v35, v35, 1, v18) )
                    goto LABEL_17;
                  sub_1537D0(a1, *((_QWORD *)v10 + 1), v41, *(_QWORD *)(v17 + 8), v50, 1);
                  sub_9D840(v6, v17, v10[1]);
                  v20 = v10;
                }
                sub_119B60(v20);
                v21 = *(_DWORD *)(a1 + 24);
                BYTE1(v21) &= ~2u;
                LOBYTE(v21) = v21 | 0x80;
                *(_DWORD *)(a1 + 24) = v21;
                goto LABEL_25;
              }
            }
          }
        }
        goto LABEL_17;
      case 7u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
        *(_QWORD *)&v55 = a1;
        v56 = 257;
        v54 = off_4C90D8;
        *((_QWORD *)&v55 + 1) = a4;
        v57 = sub_AB9F0;
        v12 = sub_A6F70((__int64)&v54, (__int64)v10);
        goto LABEL_6;
      case 0xBu:
        if ( (a4 & 1) == 0 )
          goto LABEL_7;
        v54 = off_4C90D8;
        *(_QWORD *)&v55 = a1;
        *((_QWORD *)&v55 + 1) = a4;
        v56 = 257;
        v57 = (__int64 (__fastcall *)())sub_9ED70;
        if ( (unsigned __int8)sub_A6F70((__int64)&v54, (__int64)v10) )
          goto LABEL_25;
        if ( *v10 != 11 )
          goto LABEL_17;
        if ( *((_BYTE *)v10 + 32) != 4 )
          goto LABEL_17;
        v22 = *((_DWORD **)v10 + 5);
        if ( !v22 || (unsigned int)(*v22 - 8) > 1 )
          goto LABEL_17;
        v36 = *((_DWORD **)v10 + 5);
        sub_120000(&v54, v10 + 16);
        if ( !(unsigned __int8)sub_1292D0(&v54, v6, 0) )
          goto LABEL_101;
        v23 = v36;
        v24 = *((_DWORD **)v10 + 1);
        v37 = v36 + 8;
        if ( !v24
          || *v24 != 4
          || (v46 = v23, v42 = *((_QWORD *)v10 + 1), v25 = sub_122120(v24 + 8, v37, 0), v23 = v46, !v25)
          || (v51 = v46, v47 = v42, v43 = v42 + 64, v26 = sub_122120(v43, &v54, 0), v27 = v47, v23 = v51, !v26) )
        {
          v32 = *((_DWORD **)v10 + 2);
          if ( !v32 )
            goto LABEL_101;
          v49 = v23;
          if ( *v32 != 4 )
            goto LABEL_101;
          v44 = *((_QWORD *)v10 + 2);
          if ( !(unsigned __int8)sub_122120(v32 + 8, v37, 0) )
            goto LABEL_101;
          v39 = v44;
          v43 = v44 + 64;
          v33 = sub_122120(v43, &v54, 0);
          v27 = v39;
          v23 = v49;
          if ( !v33 )
            goto LABEL_101;
        }
        v48 = v23;
        if ( (*(_DWORD *)(v27 + 4) & 0x40010) != 0
          || (*(_BYTE *)(v27 + 65) & 2) != 0
          || (v40 = (_DWORD *)v27, sub_9EC10(*(_QWORD *)(a1 + 64), v27)) )
        {
          sub_119360(&v54);
          return 0;
        }
        if ( !(unsigned __int8)sub_12DDF0(v43, v6, 1) )
        {
LABEL_101:
          sub_119360(&v54);
          goto LABEL_17;
        }
        *v40 = *v48;
        sub_9D840(v6, (__int64)v40, v10[1]);
        sub_119B60(v10);
        v34 = *(_DWORD *)(a1 + 24);
        BYTE1(v34) &= ~2u;
        LOBYTE(v34) = v34 | 0x80;
        *(_DWORD *)(a1 + 24) = v34;
        sub_119360(&v54);
        goto LABEL_25;
      case 0xCu:
        if ( (a4 & 1) != 0 )
          goto LABEL_62;
        goto LABEL_7;
      case 0xDu:
        if ( (a4 & 1) == 0 )
          goto LABEL_7;
        if ( (unsigned __int8)sub_A7840(a1, (__int64)v10) )
          goto LABEL_25;
LABEL_62:
        v28 = sub_118E60(v10, v53);
        if ( !v28 || *(_DWORD *)(v28 + 4) >= *(_DWORD *)(v6 + 88) )
          goto LABEL_17;
        *(_QWORD *)&v55 = a1;
        v56 = 257;
        v54 = off_4C90D8;
        *((_QWORD *)&v55 + 1) = a4;
        v57 = (__int64 (__fastcall *)())sub_A6620;
        v12 = sub_A6F70((__int64)&v54, (__int64)v10);
LABEL_6:
        if ( !v12 )
          goto LABEL_7;
        goto LABEL_25;
      case 0x18u:
        if ( (a4 & 1) == 0 )
          goto LABEL_7;
        v38 = v10[9];
        if ( (unsigned __int8)sub_11C340(v10 + 12, &v54, 1)
          && (__int64 (__fastcall **)())(int)(8 * v38 - 1) == v54
          && (unsigned __int8)sub_1294F0(*(_QWORD *)(a1 + 64), (int)v10 + 32, (int)v10 + 64, (int)v10 + 64, 0, v29) )
        {
          if ( (v10[1] & 0x40010) == 0
            && (*((_BYTE *)v10 + 65) & 2) == 0
            && !sub_9EC10(*(_QWORD *)(a1 + 64), (__int64)v10) )
          {
            sub_9D3D0((__int64)(v10 + 16), v6);
            *v10 = 8;
            sub_119360(v10 + 12);
            goto LABEL_25;
          }
          goto LABEL_17;
        }
        v54 = off_4C90D8;
        *(_QWORD *)&v55 = a1;
        *((_QWORD *)&v55 + 1) = a4;
        v56 = 257;
        v57 = (__int64 (__fastcall *)())sub_A6990;
        if ( !(unsigned __int8)sub_A6F70((__int64)&v54, (__int64)v10) )
          goto LABEL_17;
        goto LABEL_25;
      default:
        goto LABEL_7;
    }
  }
}
