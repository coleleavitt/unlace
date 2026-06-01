__int64 __fastcall sub_157530(__int64 a1, const __m128i *a2, unsigned __int8 *a3)
{
  __int64 v5; // rax
  unsigned __int64 *v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // r10
  int v9; // r11d
  int v10; // eax
  __int128 v11; // rdi
  _DWORD *v12; // rax
  unsigned __int64 *v13; // r14
  _DWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // r8
  char v20; // dl
  char *v21; // rax
  int v22; // edx
  __int64 v23; // r8
  int v24; // r11d
  int v25; // eax
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r14
  int v31; // eax
  char v32; // al
  __int64 v33; // rdx
  int v34; // eax
  __int128 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rdx
  int v41; // ecx
  int v42; // ecx
  int v43; // eax
  __int64 v44; // [rsp+8h] [rbp-D8h]
  int v45; // [rsp+10h] [rbp-D0h]
  __int64 v46; // [rsp+10h] [rbp-D0h]
  int v47; // [rsp+10h] [rbp-D0h]
  int v48; // [rsp+10h] [rbp-D0h]
  int v49; // [rsp+18h] [rbp-C8h]
  __int64 v50; // [rsp+18h] [rbp-C8h]
  __int64 v51; // [rsp+18h] [rbp-C8h]
  int v52; // [rsp+18h] [rbp-C8h]
  __int64 v53; // [rsp+18h] [rbp-C8h]
  _DWORD *v54; // [rsp+18h] [rbp-C8h]
  int v55; // [rsp+20h] [rbp-C0h]
  __int64 v56; // [rsp+20h] [rbp-C0h]
  int v57; // [rsp+20h] [rbp-C0h]
  _DWORD *v58; // [rsp+20h] [rbp-C0h]
  int v59; // [rsp+20h] [rbp-C0h]
  __int64 v60; // [rsp+28h] [rbp-B8h]
  __int64 v61; // [rsp+28h] [rbp-B8h]
  int v62; // [rsp+28h] [rbp-B8h]
  unsigned __int8 *v63; // [rsp+28h] [rbp-B8h]
  int v64; // [rsp+34h] [rbp-ACh]
  int v65; // [rsp+34h] [rbp-ACh]
  int v66; // [rsp+34h] [rbp-ACh]
  int v68; // [rsp+4Ch] [rbp-94h] BYREF
  __int64 v69; // [rsp+50h] [rbp-90h] BYREF
  int *v70; // [rsp+58h] [rbp-88h] BYREF
  unsigned __int64 *v71; // [rsp+60h] [rbp-80h] BYREF
  unsigned __int8 *v72; // [rsp+68h] [rbp-78h] BYREF
  unsigned __int64 v73; // [rsp+70h] [rbp-70h] BYREF
  _DWORD *v74; // [rsp+78h] [rbp-68h]
  unsigned __int64 v75; // [rsp+80h] [rbp-60h] BYREF
  __int64 v76; // [rsp+88h] [rbp-58h]
  _QWORD v77[10]; // [rsp+90h] [rbp-50h] BYREF

  v5 = a2[30].m128i_i64[0];
  v77[3] = __readfsqword(0x28u);
  v6 = *(unsigned __int64 **)(v5 + 112);
  v7 = sub_B0740((__int64)&v69, &v68, &v70, a1);
  if ( (_BYTE)v7 )
  {
    v73 = 0xFFFFFFFF00000000LL;
    v74 = nullptr;
    v8 = 1LL << v68;
    if ( (unsigned __int64)v68 >= 0x40 )
      v8 = 0;
    v9 = *(_DWORD *)(a1 + 68);
    v10 = *v70;
    if ( *v70 == 11 )
    {
      if ( *((_BYTE *)v70 + 32) != 4 )
        goto LABEL_16;
      v15 = *((_DWORD **)v70 + 5);
      if ( *v15 != 14 )
        goto LABEL_16;
      v61 = v8;
      v66 = v9;
      v16 = sub_11C8A0((__int64)v15, &v71);
      if ( !v16 )
        goto LABEL_16;
      v17 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 16LL), *(unsigned int *)(v16 + 4), 0);
      v8 = v61;
      v9 = v66;
      if ( v61 != v17 )
        goto LABEL_16;
      if ( *(_BYTE *)v71 != 4 )
        goto LABEL_16;
      v18 = (_DWORD *)v71[1];
      if ( *v18 != 9 )
        goto LABEL_16;
      v13 = (unsigned __int64 *)(v18 + 8);
      v71 = (unsigned __int64 *)(v18 + 8);
      v65 = 8 * v66 - v68;
    }
    else if ( v10 == 23 )
    {
      if ( *((_BYTE *)v70 + 48) != 2 )
        goto LABEL_16;
      v65 = *(unsigned __int8 *)(*((_QWORD *)v70 + 7) + 16LL);
      if ( 8 * v9 - v68 != v65 )
        goto LABEL_16;
      v13 = (unsigned __int64 *)(v70 + 8);
      v71 = (unsigned __int64 *)(v70 + 8);
    }
    else
    {
      if ( v10 != 9 )
        goto LABEL_16;
      if ( v68 != 8 * v70[9] )
        goto LABEL_16;
      *((_QWORD *)&v11 + 1) = v69;
      *(_QWORD *)&v11 = a2;
      v60 = v8;
      v64 = v9;
      v77[0] = a3;
      v12 = (_DWORD *)sub_129440(v11, (__int64)v77, 0);
      if ( v12 )
      {
        if ( *v12 == 9 && v12[9] == v70[9] )
          goto LABEL_16;
      }
      v13 = &v73;
      sub_125180((__int64)&v73, (unsigned __int8 *)v70 + 32);
      if ( (_BYTE)v73 == 4 && *v74 == 2 )
        goto LABEL_16;
      if ( !sub_131780((__int64)&v73, v6, *(_DWORD *)(v69 + 4), 1u, 0) )
        goto LABEL_16;
      v9 = v64;
      v71 = &v73;
      v8 = v60;
      v65 = 8 * v64 - v68;
    }
    if ( *((_DWORD *)v13 + 1) == v9 )
    {
      v19 = v69;
      if ( *(_BYTE *)v69 == 4 )
      {
        v72 = a3;
        v56 = v8;
        v62 = v9;
        v26 = sub_30D5C0(v6, a2, &v72);
        v9 = v62;
        if ( v26 )
        {
          v51 = v56;
          v57 = v62;
          v63 = (unsigned __int8 *)v26;
          v27 = sub_12EA80((__int64)v6, a2, (__int64)v72, v26, (__int64)a3, (__int64)v71, 0);
          v9 = v57;
          if ( v27 )
          {
            sub_123A40((__int64)v77, v63, v28, (__int64)v63);
            sub_1207E0((char *)v77, (__int64)v6, 8, *(_QWORD *)(a1 + 24), 2 * v57);
            sub_11CA10((char *)(a1 + 32), (char *)v77);
            sub_120A10(a1 + 48, (__int64)v6, v51, *(_DWORD *)(a1 + 36), *(_QWORD *)(a1 + 24), 0);
            v31 = *(_DWORD *)(a1 + 36);
            *(_DWORD *)a1 = 14;
            *(_DWORD *)(a1 + 68) = v31;
            v7 = sub_12B6F0(a1, (__int64)v6, 11, v57, 1);
            if ( (_BYTE)v7 )
            {
              sub_11CDA0((__int64)v77);
              goto LABEL_17;
            }
            if ( !under_debugger )
              sub_383060(50501);
            goto LABEL_81;
          }
        }
        v13 = v71;
        v19 = v69;
      }
      v76 = 0;
      v75 = 0xFFFFFFFF00000000LL;
      v20 = *(_BYTE *)v19;
      if ( *(_DWORD *)(v19 + 4) + *((_DWORD *)v13 + 1) <= 8 )
      {
        if ( v20 != 4 )
          goto LABEL_35;
        if ( *(_BYTE *)v13 != 4 || (unsigned int)(**(_DWORD **)(v19 + 8) - 12) > 1 )
        {
LABEL_33:
          v21 = *(char **)(v19 + 8);
          v22 = *(_DWORD *)v21;
          if ( *(_DWORD *)v21 != 9 )
          {
LABEL_34:
            if ( v22 == 20 )
            {
              v47 = v9;
              v53 = v19;
              v32 = sub_11FD80(v21 + 48, v77, 1u);
              v19 = v53;
              v9 = v47;
              if ( v32 )
              {
                if ( v77[0] < (unsigned __int64)((1 << v65) - 1) )
                  goto LABEL_45;
                v19 = *(_QWORD *)(v53 + 8) + 32LL;
              }
            }
            goto LABEL_35;
          }
          v19 = (__int64)(v21 + 32);
          if ( v65 > 8 * *((_DWORD *)v21 + 9) )
            goto LABEL_45;
          if ( v21[32] == 4 )
          {
            v21 = *((char **)v21 + 5);
            v22 = *(_DWORD *)v21;
            goto LABEL_34;
          }
LABEL_35:
          v77[1] = 0;
          v77[0] = 0xFFFFFFFF00000000LL;
          v49 = v9;
          v23 = sub_969E0(*(_QWORD *)(a2[30].m128i_i64[0] + 112), (__int64)v77, v19, *((_DWORD *)v13 + 1));
          if ( v23 )
          {
            v45 = v49;
            v50 = v23;
            if ( (unsigned __int8)sub_130BC0(a2, (__int64)a3, (__int64)v13, (__int64)a3, v23, 0) )
            {
              if ( !(unsigned __int8)sub_A9CB0((__int64)a2, v50, (__int64)a3, (__int64)a3)
                && (unsigned __int8)sub_157240((__int64)a2, (__int64)v13, v50) )
              {
                sub_125180((__int64)&v75, (unsigned __int8 *)v13);
                sub_B1520((__int64)a2, (__int64)a3, (__int64)&v75, (__int64)a3, (__int64)&v75, (__int64)a3, v50, 0);
                sub_11CDA0((__int64)v77);
                v24 = v45;
LABEL_40:
                v55 = v24;
                sub_11CA10((char *)(a1 + 32), (char *)&v75);
                sub_120A10(a1 + 48, (__int64)v6, v65, 1, *(_QWORD *)(a1 + 24), 0);
                v25 = *(_DWORD *)(a1 + 36);
                *(_DWORD *)a1 = 24;
                *(_DWORD *)(a1 + 68) = v25;
                if ( (unsigned __int8)sub_12B6F0(a1, (__int64)v6, 10, v55, 1) )
                {
LABEL_41:
                  sub_11CDA0((__int64)&v75);
                  goto LABEL_17;
                }
                if ( (unsigned __int8)sub_12B6F0(a1, (__int64)v6, 10, -1, 1) )
                {
                  *(_DWORD *)(a1 + 68) = v55;
                  goto LABEL_41;
                }
                if ( !under_debugger )
                  sub_383060(50500);
LABEL_81:
                BUG();
              }
            }
          }
          sub_11CDA0((__int64)v77);
LABEL_45:
          v7 = 0;
          sub_11CDA0((__int64)&v75);
          goto LABEL_17;
        }
        v52 = v9;
        v58 = *(_DWORD **)(v19 + 8);
        v46 = v13[1];
        v29 = sub_11C8A0((__int64)v58, &v72);
        v9 = v52;
        v30 = v29;
        if ( !v29 || *v58 == 13 && (_DWORD *)v29 != v58 + 12 )
          goto LABEL_52;
        v54 = v58;
        v59 = v9;
        v44 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v29 + 8) + 16LL), *(unsigned int *)(v29 + 4), 1);
        v9 = v59;
        v34 = *((_DWORD *)v72 + 1);
        if ( v34 <= 3 )
          goto LABEL_68;
        LOBYTE(v33) = v44 != 1;
        if ( v44 == 1 || v44 == -1 || *v72 == 4 )
          goto LABEL_68;
        v42 = 8 * v34 - 1;
        v43 = 0;
        v33 = v42;
        if ( (unsigned __int64)v42 <= 0x1F )
          v43 = 1 << v42;
        if ( v44 == v43 )
        {
LABEL_68:
          sub_123A40((__int64)v77, v72, v33, (__int64)&v75);
          *((_QWORD *)&v35 + 1) = a3;
          *(_QWORD *)&v35 = a2;
          if ( (unsigned __int8)sub_133220(v35, (__int64)v77, a3, v46) )
          {
            v48 = HIDWORD(v77[0]);
            v38 = j__qalloc_or_throw(80, (__int64)a3, v36, v37);
            v39 = *((_QWORD *)v54 + 3);
            *(_QWORD *)(v38 + 56) = 0;
            *(_QWORD *)(v38 + 32) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v38 + 40) = 0;
            *(_QWORD *)(v38 + 48) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v38 + 64) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v38 + 72) = 0;
            sub_330970(v38, v39);
            *(_DWORD *)v38 = *v54;
            sub_11CA10((char *)(v38 + 32), (char *)v77);
            v40 = 0;
            v41 = 8 * *(_DWORD *)(v30 + 4);
            if ( (unsigned __int64)v41 <= 0x3F )
              v40 = v44 << v41;
            sub_120A10(v38 + 48, *(_QWORD *)(a2[30].m128i_i64[0] + 112), v40, v48, **(_QWORD **)(v30 + 8), 0);
            *(_DWORD *)(v38 + 68) = v48;
            sub_11CDA0((__int64)&v75);
            LOBYTE(v75) = 4;
            v76 = v38;
            HIDWORD(v75) = v48;
            sub_11CDA0((__int64)v77);
            v24 = v59;
            goto LABEL_40;
          }
          sub_11CDA0((__int64)v77);
          v19 = v69;
          v13 = v71;
          v9 = v59;
          v20 = *(_BYTE *)v69;
        }
        else
        {
LABEL_52:
          v19 = v69;
          v13 = v71;
          v20 = *(_BYTE *)v69;
        }
      }
      if ( v20 != 4 )
        goto LABEL_35;
      goto LABEL_33;
    }
LABEL_16:
    v7 = 0;
LABEL_17:
    sub_11CDA0((__int64)&v73);
  }
  return v7;
}
