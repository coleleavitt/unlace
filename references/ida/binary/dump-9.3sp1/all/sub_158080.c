__int64 __fastcall sub_158080(const __m128i *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r15d
  unsigned int v7; // eax
  char *v8; // rdi
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // r14
  bool v12; // zf
  char v13; // dl
  int v14; // r9d
  unsigned __int8 *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r14
  int v19; // edx
  int v20; // ecx
  _DWORD *v21; // rax
  int v22; // r10d
  __int128 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r10d
  _DWORD *v29; // r14
  int v30; // eax
  char v31; // al
  __int64 v32; // r11
  __int64 v33; // r13
  int v34; // r14d
  char v35; // al
  __int64 v36; // r13
  char *v37; // r11
  char v38; // al
  int v39; // r10d
  __int64 v40; // rax
  char v41; // dl
  int v42; // r11d
  char *v43; // r14
  char v44; // al
  char *v45; // r14
  char v46; // al
  char v47; // al
  char v48; // al
  char v49; // al
  __int32 v50; // eax
  int v51; // [rsp+0h] [rbp-140h]
  int v52; // [rsp+0h] [rbp-140h]
  int v53; // [rsp+4h] [rbp-13Ch]
  int v54; // [rsp+4h] [rbp-13Ch]
  int v55; // [rsp+4h] [rbp-13Ch]
  int v56; // [rsp+4h] [rbp-13Ch]
  __int128 *v57; // [rsp+10h] [rbp-130h]
  __int64 v58; // [rsp+10h] [rbp-130h]
  int v59; // [rsp+20h] [rbp-120h]
  char *v60; // [rsp+20h] [rbp-120h]
  __int64 v61; // [rsp+20h] [rbp-120h]
  int v62; // [rsp+20h] [rbp-120h]
  char *v63; // [rsp+20h] [rbp-120h]
  _QWORD *v64; // [rsp+28h] [rbp-118h]
  __int64 v65; // [rsp+28h] [rbp-118h]
  __int64 v66; // [rsp+28h] [rbp-118h]
  int v67; // [rsp+28h] [rbp-118h]
  __int64 v68; // [rsp+30h] [rbp-110h]
  char *v69; // [rsp+38h] [rbp-108h]
  __int64 v70; // [rsp+38h] [rbp-108h]
  unsigned __int8 *v71; // [rsp+40h] [rbp-100h]
  int v72; // [rsp+40h] [rbp-100h]
  __int64 v74; // [rsp+68h] [rbp-D8h] BYREF
  unsigned __int64 v75; // [rsp+70h] [rbp-D0h] BYREF
  __int64 v76; // [rsp+78h] [rbp-C8h]
  unsigned __int64 v77; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v78; // [rsp+88h] [rbp-B8h]
  _QWORD v79[5]; // [rsp+90h] [rbp-B0h] BYREF
  char v80; // [rsp+B8h] [rbp-88h]
  __int64 v81; // [rsp+C0h] [rbp-80h]
  unsigned int *v82; // [rsp+C8h] [rbp-78h]
  __int128 v83; // [rsp+D0h] [rbp-70h] BYREF
  _QWORD v84[12]; // [rsp+E0h] [rbp-60h] BYREF

  v84[5] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 68) != 4 )
    return 0;
  v81 = a3;
  memset(&v79[1], 0, 32);
  v80 = 0;
  v79[0] = &off_4DDCB0;
  v82 = nullptr;
  if ( !(unsigned int)sub_11E900((_BYTE *)a2, (__int64)v79) || !v82 )
    return 0;
  v7 = *v82;
  if ( *v82 > 0x21 )
  {
    if ( v7 - 43 > 1 )
      return 0;
  }
  else if ( v7 <= 0x1F )
  {
    return 0;
  }
  v8 = (char *)sub_11C8A0((__int64)v82, &v74);
  if ( v8 )
  {
    v3 = sub_11FD80(v8, v79, 0);
    if ( (_BYTE)v3 )
    {
      if ( !v79[0] && v74 && *(_BYTE *)v74 == 4 && *(_QWORD *)(v74 + 8) == a3 )
      {
        v10 = a1[30].m128i_i64[0];
        v11 = 0;
        v12 = *(_BYTE *)(a3 + 32) == 4;
        v76 = 0;
        v78 = 0;
        v13 = *(_BYTE *)(a3 + 48);
        v68 = *(_QWORD *)(v10 + 112);
        v75 = 0xFFFFFFFF00000000LL;
        v77 = 0xFFFFFFFF00000000LL;
        if ( v12 && (v21 = *(_DWORD **)(a3 + 40), *v21 == 21) )
        {
          if ( v13 == 4 )
          {
            v11 = *(_QWORD *)(a3 + 56);
            if ( *(_DWORD *)v11 == 21 )
            {
              if ( v21 && v11 )
              {
                v22 = 0;
                v84[1] = v21 + 12;
                v84[2] = v11 + 32;
                v57 = &v83;
                v84[0] = v21 + 8;
                v84[3] = v11 + 48;
                v64 = v84;
                v83 = -1;
                do
                {
                  *(_QWORD *)&v23 = a1;
                  v59 = v22;
                  *((_QWORD *)&v23 + 1) = *v64;
                  v79[0] = a2;
                  v24 = sub_129440(v23, (__int64)v79, 0);
                  v28 = v59;
                  v29 = (_DWORD *)v24;
                  if ( v24 )
                  {
                    v30 = sub_129FA0(v24 + 64, v68, *((__int64 *)&v23 + 1), v25, v26, v27);
                    v28 = v59;
                    if ( v30 == 2 )
                    {
                      v34 = v59 ^ 2;
                      v47 = *((_BYTE *)v57 + (v59 ^ 2));
                      if ( v47 == -1 )
                      {
                        v47 = sub_130BC0(a1, a2, *((__int64 *)&v23 + 1), a2, v84[v34], 0);
                        v28 = v59;
                        *((_BYTE *)v57 + v34) = v47;
                      }
                      if ( v47 )
                        goto LABEL_68;
                      v34 = v28 ^ 3;
                      v48 = *((_BYTE *)v57 + (v28 ^ 3));
                      if ( v48 == -1 )
                      {
                        v56 = v28;
                        v48 = sub_130BC0(a1, a2, *((__int64 *)&v23 + 1), a2, v84[v34], 0);
                        v28 = v56;
                        *((_BYTE *)v57 + v34) = v48;
                      }
                      if ( v48 )
                        goto LABEL_68;
                    }
                    else if ( v30 == 3 || *v29 == 11 || (v31 = sub_30D8F0(v68, a1, v79[0], v29, 0, 0), v28 = v59, v31) )
                    {
                      v42 = v28 ^ 2;
                      v43 = (char *)&v84[-2] + 4 * (v28 ^ 2);
                      v61 = v28;
                      v44 = v43[v28];
                      if ( v44 == -1 )
                      {
                        v51 = v28;
                        v54 = v28 ^ 2;
                        v44 = sub_130BC0(a1, a2, v84[v42], a2, *((__int64 *)&v23 + 1), 0);
                        v28 = v51;
                        v42 = v54;
                        v43[v61] = v44;
                      }
                      if ( v44 )
                        goto LABEL_82;
                      v42 = v28 ^ 3;
                      v45 = (char *)&v84[-2] + 4 * (v28 ^ 3);
                      v46 = v45[v61];
                      if ( v46 == -1 )
                      {
                        v52 = v28;
                        v55 = v28 ^ 3;
                        v46 = sub_130BC0(a1, a2, v84[v42], a2, *((__int64 *)&v23 + 1), 0);
                        v28 = v52;
                        v42 = v55;
                        v45[v61] = v46;
                      }
                      if ( v46 )
                      {
LABEL_82:
                        v34 = v28;
                        v28 = v42;
                        goto LABEL_68;
                      }
                    }
                  }
                  v22 = v28 + 1;
                  ++v64;
                  v57 = (__int128 *)((char *)v57 + 4);
                }
                while ( v22 != 4 );
                v32 = 0;
LABEL_45:
                v28 = v32;
                v33 = 0;
                v69 = (char *)&v84[-2] + 4 * v32;
                while ( 1 )
                {
                  v34 = v33;
                  if ( (((unsigned __int8)v33 ^ (unsigned __int8)v28) & 2) != 0 )
                  {
                    v35 = v69[v33];
                    if ( v35 == -1 )
                    {
                      v62 = v28;
                      v66 = v32;
                      v35 = sub_130BC0(a1, a2, v84[v32], a2, v84[v33], 0);
                      v28 = v62;
                      v32 = v66;
                      v69[v33] = v35;
                    }
                    if ( v35 )
                    {
                      v40 = v28 ^ 1;
                      v65 = (int)(v33 ^ 1);
                      v41 = *((_BYTE *)&v84[-2] + 4 * v40 + v65);
                      v60 = (char *)&v84[-2] + 4 * v40;
                      if ( v41 == -1 )
                      {
                        v53 = v28;
                        v58 = v32;
                        v41 = sub_130BC0(a1, a2, v84[v40], a2, v84[v65], 0);
                        v28 = v53;
                        v32 = v58;
                        v60[v65] = v41;
                      }
                      if ( v41 )
                        break;
                    }
                  }
                  if ( ++v33 == 4 )
                  {
                    if ( ++v32 != 4 )
                      goto LABEL_45;
                    v70 = 0;
LABEL_53:
                    v36 = 0;
                    v28 = v70;
                    v37 = (char *)&v84[-2] + 4 * v70;
                    while ( 1 )
                    {
                      v34 = v36;
                      if ( (((unsigned __int8)v36 ^ (unsigned __int8)v28) & 2) != 0 )
                      {
                        v38 = v37[v36];
                        if ( v38 == -1 )
                        {
                          v63 = v37;
                          v67 = v28;
                          v38 = sub_130BC0(a1, a2, v84[v70], a2, v84[v36], 0);
                          v37 = v63;
                          v28 = v67;
                          v63[v36] = v38;
                        }
                        if ( v38 )
                          goto LABEL_68;
                      }
                      if ( ++v36 == 4 )
                      {
                        if ( ++v70 != 4 )
                          goto LABEL_53;
                        goto LABEL_57;
                      }
                    }
                  }
                }
LABEL_68:
                v72 = v28;
                sub_125180((__int64)&v75, (unsigned __int8 *)v84[v28]);
                sub_B1520((__int64)a1, a2, (__int64)&v75, a2, (__int64)&v75, a2, v84[v34], 4);
                v39 = v72;
                if ( (_BYTE)v75 != 14 || (v49 = sub_157240((__int64)a1, v76, v76 + 16), v39 = v72, v49) )
                {
                  sub_125180((__int64)&v77, (unsigned __int8 *)v84[v39 ^ 1]);
                  sub_B1520((__int64)a1, a2, (__int64)&v77, a2, (__int64)&v77, a2, v84[v34 ^ 1], 4);
                  if ( (_BYTE)v77 != 14 || (unsigned __int8)sub_157240((__int64)a1, v78, v78 + 16) )
                    goto LABEL_59;
                }
                goto LABEL_57;
              }
            }
            else
            {
              v11 = 0;
            }
          }
          v71 = (unsigned __int8 *)(a3 + 48);
          if ( v21 )
          {
            v11 = *(_QWORD *)(a3 + 40);
            goto LABEL_19;
          }
        }
        else if ( v13 == 4 )
        {
          v11 = *(_QWORD *)(a3 + 56);
          if ( *(_DWORD *)v11 != 21 )
            v11 = 0;
        }
        v71 = (unsigned __int8 *)(a3 + 32);
LABEL_19:
        v15 = (unsigned __int8 *)(v11 + 48);
        if ( (unsigned __int8)sub_12CF30(a1[4].m128i_i64[0], v11 + 32, v71, (__int64)&v75, 0, v9) )
        {
          sub_125180((__int64)&v77, v15);
LABEL_21:
          v18 = *(_QWORD *)(a2 + 16);
          if ( !v18 || *(_DWORD *)v18 != 21 )
            goto LABEL_23;
          sub_123A40((__int64)v79, (unsigned __int8 *)&v75, v16, v17);
          if ( (unsigned __int8)sub_127850((unsigned __int64)v79, v68, SHIDWORD(v75) / 2, 0)
            && sub_125B60((unsigned __int8 *)(v18 + 64), (__int64)v79, 0) )
          {
            if ( sub_125B60((unsigned __int8 *)(v18 + 32), (__int64)v79, 0) )
            {
              sub_B1520((__int64)a1, a2, (__int64)&v77, a2, (__int64)&v77, v18, v18 + 48, 4);
            }
            else if ( sub_125B60((unsigned __int8 *)(v18 + 48), (__int64)v79, 0) )
            {
              sub_B1520((__int64)a1, a2, (__int64)&v77, a2, (__int64)&v77, v18, v18 + 32, 4);
            }
            if ( HIDWORD(v77) == HIDWORD(v75) )
            {
              if ( (_BYTE)v77 == 14 && !(unsigned __int8)sub_157240((__int64)a1, v78, v78 + 16) )
              {
                sub_11CDA0((__int64)v79);
                goto LABEL_57;
              }
              sub_11D5A0(v18);
              v50 = a1[1].m128i_i32[2];
              BYTE1(v50) &= ~2u;
              LOBYTE(v50) = v50 | 0x80;
              a1[1].m128i_i32[2] = v50;
            }
          }
          sub_11CDA0((__int64)v79);
LABEL_23:
          v19 = HIDWORD(v75);
          if ( SHIDWORD(v77) >= SHIDWORD(v75) )
          {
LABEL_24:
            sub_12AB50((unsigned __int8 *)&v75, v68, v19, 2);
            sub_12AB50((unsigned __int8 *)&v77, v68, SHIDWORD(v77), 2);
            sub_11CA10((char *)(a3 + 32), (char *)&v75);
            sub_11CA10((char *)(a3 + 48), (char *)&v77);
            *(_DWORD *)a3 = 32;
            v20 = HIDWORD(v75);
            if ( *(_DWORD *)(a3 + 68) != HIDWORD(v75) )
            {
              if ( !under_debugger )
                sub_383060(51565);
              BUG();
            }
            *(_DWORD *)(a3 + 68) = 1;
            sub_12B6F0(a3, v68, 9, v20, 1);
            goto LABEL_26;
          }
          sub_1207E0((char *)&v77, v68, 9, *(_QWORD *)(a3 + 24), SHIDWORD(v75));
LABEL_59:
          v19 = HIDWORD(v75);
          goto LABEL_24;
        }
        if ( (unsigned __int8)sub_12CF30(a1[4].m128i_i64[0], (__int64)v15, v71, (__int64)&v75, 0, v14) )
        {
          sub_125180((__int64)&v77, (unsigned __int8 *)(v11 + 32));
          goto LABEL_21;
        }
LABEL_57:
        v3 = 0;
LABEL_26:
        sub_11CDA0((__int64)&v77);
        sub_11CDA0((__int64)&v75);
        return v3;
      }
    }
  }
  return 0;
}
