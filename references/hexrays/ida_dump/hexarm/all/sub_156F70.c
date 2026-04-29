__int64 __fastcall sub_156F70(__int64 a1, const __m128i *a2, unsigned __int8 *a3)
{
  __int64 v5; // rax
  __int64 v6; // r15
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
  __int64 v28; // rax
  __int64 v29; // r14
  int v30; // eax
  char v31; // al
  int v32; // eax
  __int128 v33; // rdi
  __int64 v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rdx
  int v37; // ecx
  int v38; // ecx
  int v39; // eax
  __int64 v40; // [rsp+8h] [rbp-D8h]
  int v41; // [rsp+10h] [rbp-D0h]
  __int64 v42; // [rsp+10h] [rbp-D0h]
  int v43; // [rsp+10h] [rbp-D0h]
  int v44; // [rsp+10h] [rbp-D0h]
  int v45; // [rsp+18h] [rbp-C8h]
  __int64 v46; // [rsp+18h] [rbp-C8h]
  __int64 v47; // [rsp+18h] [rbp-C8h]
  int v48; // [rsp+18h] [rbp-C8h]
  __int64 v49; // [rsp+18h] [rbp-C8h]
  _DWORD *v50; // [rsp+18h] [rbp-C8h]
  int v51; // [rsp+20h] [rbp-C0h]
  __int64 v52; // [rsp+20h] [rbp-C0h]
  int v53; // [rsp+20h] [rbp-C0h]
  _DWORD *v54; // [rsp+20h] [rbp-C0h]
  int v55; // [rsp+20h] [rbp-C0h]
  __int64 v56; // [rsp+28h] [rbp-B8h]
  __int64 v57; // [rsp+28h] [rbp-B8h]
  int v58; // [rsp+28h] [rbp-B8h]
  unsigned __int8 *v59; // [rsp+28h] [rbp-B8h]
  int v60; // [rsp+34h] [rbp-ACh]
  int v61; // [rsp+34h] [rbp-ACh]
  int v62; // [rsp+34h] [rbp-ACh]
  int v64; // [rsp+4Ch] [rbp-94h] BYREF
  __int64 v65; // [rsp+50h] [rbp-90h] BYREF
  int *v66; // [rsp+58h] [rbp-88h] BYREF
  unsigned __int64 *v67; // [rsp+60h] [rbp-80h] BYREF
  unsigned __int8 *v68; // [rsp+68h] [rbp-78h] BYREF
  unsigned __int64 v69; // [rsp+70h] [rbp-70h] BYREF
  _DWORD *v70; // [rsp+78h] [rbp-68h]
  unsigned __int64 v71; // [rsp+80h] [rbp-60h] BYREF
  __int64 v72; // [rsp+88h] [rbp-58h]
  _QWORD v73[10]; // [rsp+90h] [rbp-50h] BYREF

  v5 = a2[30].m128i_i64[0];
  v73[3] = __readfsqword(0x28u);
  v6 = *(_QWORD *)(v5 + 112);
  v7 = sub_B0180((__int64)&v65, &v64, &v66, a1);
  if ( (_BYTE)v7 )
  {
    v69 = 0xFFFFFFFF00000000LL;
    v70 = nullptr;
    v8 = 1LL << v64;
    if ( (unsigned __int64)v64 >= 0x40 )
      v8 = 0;
    v9 = *(_DWORD *)(a1 + 68);
    v10 = *v66;
    if ( *v66 == 11 )
    {
      if ( *((_BYTE *)v66 + 32) != 4 )
        goto LABEL_16;
      v15 = *((_DWORD **)v66 + 5);
      if ( *v15 != 14 )
        goto LABEL_16;
      v57 = v8;
      v62 = v9;
      v16 = sub_11C2E0((__int64)v15, &v67);
      if ( !v16 )
        goto LABEL_16;
      v17 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 16LL), *(unsigned int *)(v16 + 4), 0);
      v8 = v57;
      v9 = v62;
      if ( v57 != v17 )
        goto LABEL_16;
      if ( *(_BYTE *)v67 != 4 )
        goto LABEL_16;
      v18 = (_DWORD *)v67[1];
      if ( *v18 != 9 )
        goto LABEL_16;
      v13 = (unsigned __int64 *)(v18 + 8);
      v67 = (unsigned __int64 *)(v18 + 8);
      v61 = 8 * v62 - v64;
    }
    else if ( v10 == 23 )
    {
      if ( *((_BYTE *)v66 + 48) != 2 )
        goto LABEL_16;
      v61 = *(unsigned __int8 *)(*((_QWORD *)v66 + 7) + 16LL);
      if ( 8 * v9 - v64 != v61 )
        goto LABEL_16;
      v13 = (unsigned __int64 *)(v66 + 8);
      v67 = (unsigned __int64 *)(v66 + 8);
    }
    else
    {
      if ( v10 != 9 )
        goto LABEL_16;
      if ( v64 != 8 * v66[9] )
        goto LABEL_16;
      *((_QWORD *)&v11 + 1) = v65;
      *(_QWORD *)&v11 = a2;
      v56 = v8;
      v60 = v9;
      v73[0] = a3;
      v12 = (_DWORD *)sub_128E80(v11, (__int64)v73, 0);
      if ( v12 )
      {
        if ( *v12 == 9 && v12[9] == v66[9] )
          goto LABEL_16;
      }
      v13 = &v69;
      sub_124BC0((__int64)&v69, (unsigned __int8 *)v66 + 32);
      if ( (_BYTE)v69 == 4 && *v70 == 2 )
        goto LABEL_16;
      if ( !sub_1311C0((unsigned __int64)&v69, v6, *(_DWORD *)(v65 + 4), 1u, 0) )
        goto LABEL_16;
      v9 = v60;
      v67 = &v69;
      v8 = v56;
      v61 = 8 * v60 - v64;
    }
    if ( *((_DWORD *)v13 + 1) == v9 )
    {
      v19 = v65;
      if ( *(_BYTE *)v65 == 4 )
      {
        v68 = a3;
        v52 = v8;
        v58 = v9;
        v26 = sub_30D980(v6, a2, &v68);
        v9 = v58;
        if ( v26 )
        {
          v47 = v52;
          v53 = v58;
          v59 = (unsigned __int8 *)v26;
          v27 = sub_12E4C0(v6, a2, (__int64)v68, v26, (__int64)a3, (__int64)v67, 0);
          v9 = v53;
          if ( v27 )
          {
            sub_123480((__int64)v73, v59);
            sub_120220((char *)v73, v6, 8, *(_QWORD *)(a1 + 24), 2 * v53);
            sub_11C450((char *)(a1 + 32), (char *)v73);
            sub_120450(a1 + 48, v6, v47, *(_DWORD *)(a1 + 36), *(_QWORD *)(a1 + 24), 0);
            v30 = *(_DWORD *)(a1 + 36);
            *(_DWORD *)a1 = 14;
            *(_DWORD *)(a1 + 68) = v30;
            v7 = sub_12B130(a1, v6, 11, v53, 1);
            if ( (_BYTE)v7 )
            {
              sub_11C7E0((__int64)v73);
              goto LABEL_17;
            }
            if ( !under_debugger )
              sub_3835A0(50501);
            goto LABEL_81;
          }
        }
        v13 = v67;
        v19 = v65;
      }
      v72 = 0;
      v71 = 0xFFFFFFFF00000000LL;
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
              v43 = v9;
              v49 = v19;
              v31 = sub_11F7C0(v21 + 48, v73, 1u);
              v19 = v49;
              v9 = v43;
              if ( v31 )
              {
                if ( v73[0] < (unsigned __int64)((1 << v61) - 1) )
                  goto LABEL_45;
                v19 = *(_QWORD *)(v49 + 8) + 32LL;
              }
            }
            goto LABEL_35;
          }
          v19 = (__int64)(v21 + 32);
          if ( v61 > 8 * *((_DWORD *)v21 + 9) )
            goto LABEL_45;
          if ( v21[32] == 4 )
          {
            v21 = *((char **)v21 + 5);
            v22 = *(_DWORD *)v21;
            goto LABEL_34;
          }
LABEL_35:
          v73[1] = 0;
          v73[0] = 0xFFFFFFFF00000000LL;
          v45 = v9;
          v23 = sub_96420(*(_QWORD *)(a2[30].m128i_i64[0] + 112), (__int64)v73, v19, *((_DWORD *)v13 + 1));
          if ( v23 )
          {
            v41 = v45;
            v46 = v23;
            if ( (unsigned __int8)sub_130600(a2, (__int64)a3, (__int64)v13, (__int64)a3, v23, 0) )
            {
              if ( !(unsigned __int8)sub_A96F0((__int64)a2, v46, (__int64)a3, (__int64)a3)
                && (unsigned __int8)sub_156C80((__int64)a2, (__int64)v13, v46) )
              {
                sub_124BC0((__int64)&v71, (unsigned __int8 *)v13);
                sub_B0F60((__int64)a2, (__int64)a3, (__int64)&v71, (__int64)a3, (__int64)&v71, (__int64)a3, v46, 0);
                sub_11C7E0((__int64)v73);
                v24 = v41;
LABEL_40:
                v51 = v24;
                sub_11C450((char *)(a1 + 32), (char *)&v71);
                sub_120450(a1 + 48, v6, v61, 1, *(_QWORD *)(a1 + 24), 0);
                v25 = *(_DWORD *)(a1 + 36);
                *(_DWORD *)a1 = 24;
                *(_DWORD *)(a1 + 68) = v25;
                if ( (unsigned __int8)sub_12B130(a1, v6, 10, v51, 1) )
                {
LABEL_41:
                  sub_11C7E0((__int64)&v71);
                  goto LABEL_17;
                }
                if ( (unsigned __int8)sub_12B130(a1, v6, 10, -1, 1) )
                {
                  *(_DWORD *)(a1 + 68) = v51;
                  goto LABEL_41;
                }
                if ( !under_debugger )
                  sub_3835A0(50500);
LABEL_81:
                BUG();
              }
            }
          }
          sub_11C7E0((__int64)v73);
LABEL_45:
          v7 = 0;
          sub_11C7E0((__int64)&v71);
          goto LABEL_17;
        }
        v48 = v9;
        v54 = *(_DWORD **)(v19 + 8);
        v42 = v13[1];
        v28 = sub_11C2E0((__int64)v54, &v68);
        v9 = v48;
        v29 = v28;
        if ( !v28 || *v54 == 13 && (_DWORD *)v28 != v54 + 12 )
          goto LABEL_52;
        v50 = v54;
        v55 = v9;
        v40 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v28 + 8) + 16LL), *(unsigned int *)(v28 + 4), 1);
        v9 = v55;
        v32 = *((_DWORD *)v68 + 1);
        if ( v32 <= 3 || v40 == 1 || v40 == -1 || *v68 == 4 )
          goto LABEL_68;
        v38 = 8 * v32 - 1;
        v39 = 0;
        if ( (unsigned __int64)v38 <= 0x1F )
          v39 = 1 << v38;
        if ( v40 == v39 )
        {
LABEL_68:
          sub_123480((__int64)v73, v68);
          *((_QWORD *)&v33 + 1) = a3;
          *(_QWORD *)&v33 = a2;
          if ( (unsigned __int8)sub_132C60(v33, (__int64)v73, a3, v42) )
          {
            v44 = HIDWORD(v73[0]);
            v34 = j__qalloc_or_throw(80);
            v35 = *((_QWORD *)v50 + 3);
            *(_QWORD *)(v34 + 56) = 0;
            *(_QWORD *)(v34 + 32) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v34 + 40) = 0;
            *(_QWORD *)(v34 + 48) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v34 + 64) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v34 + 72) = 0;
            sub_330C90(v34, v35);
            *(_DWORD *)v34 = *v50;
            sub_11C450((char *)(v34 + 32), (char *)v73);
            v36 = 0;
            v37 = 8 * *(_DWORD *)(v29 + 4);
            if ( (unsigned __int64)v37 <= 0x3F )
              v36 = v40 << v37;
            sub_120450(v34 + 48, *(_QWORD *)(a2[30].m128i_i64[0] + 112), v36, v44, **(_QWORD **)(v29 + 8), 0);
            *(_DWORD *)(v34 + 68) = v44;
            sub_11C7E0((__int64)&v71);
            LOBYTE(v71) = 4;
            v72 = v34;
            HIDWORD(v71) = v44;
            sub_11C7E0((__int64)v73);
            v24 = v55;
            goto LABEL_40;
          }
          sub_11C7E0((__int64)v73);
          v19 = v65;
          v13 = v67;
          v9 = v55;
          v20 = *(_BYTE *)v65;
        }
        else
        {
LABEL_52:
          v19 = v65;
          v13 = v67;
          v20 = *(_BYTE *)v65;
        }
      }
      if ( v20 != 4 )
        goto LABEL_35;
      goto LABEL_33;
    }
LABEL_16:
    v7 = 0;
LABEL_17:
    sub_11C7E0((__int64)&v69);
  }
  return v7;
}
