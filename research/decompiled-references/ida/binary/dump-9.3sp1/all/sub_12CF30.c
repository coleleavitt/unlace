__int64 __fastcall sub_12CF30(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rax
  unsigned __int8 *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v12; // rax
  unsigned int *v14; // r10
  unsigned int v15; // eax
  unsigned int *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // zf
  int v21; // edi
  __int64 v22; // rdx
  int v23; // eax
  __int16 v24; // si
  __int16 v25; // cx
  int v26; // edi
  __int64 v27; // rax
  __int16 v28; // ax
  __int16 v29; // ax
  int v30; // eax
  __int64 v31; // rax
  char v32; // al
  char v33; // cl
  __int64 v34; // rsi
  char v35; // al
  int v36; // r9d
  int v37; // r10d
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // r9d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int16 v43; // si
  __int16 v44; // cx
  int v45; // edx
  __int64 v46; // rax
  int v47; // edx
  __int64 v48; // rax
  char v49; // cl
  char v50; // cl
  __int16 v51; // cx
  int v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rsi
  __int16 v61; // cx
  int v62; // edx
  __int64 v63; // rax
  unsigned int *v64; // [rsp+0h] [rbp-98h]
  int v65; // [rsp+8h] [rbp-90h]
  int v66; // [rsp+18h] [rbp-80h]
  unsigned __int64 v67; // [rsp+20h] [rbp-78h] BYREF
  __int64 v68; // [rsp+28h] [rbp-70h]
  unsigned __int64 v69; // [rsp+30h] [rbp-68h] BYREF
  __int64 v70; // [rsp+38h] [rbp-60h]
  __int64 v71; // [rsp+40h] [rbp-58h] BYREF
  __int64 v72; // [rsp+48h] [rbp-50h]
  unsigned __int64 v73; // [rsp+58h] [rbp-40h]

  v6 = *(_QWORD *)a3 ^ *(_QWORD *)a2;
  v73 = __readfsqword(0x28u);
  v7 = a3;
  v8 = 0xFFFFFFFF000000FFLL;
  if ( (v6 & 0xFFFFFFFF000000FFLL) != 0 )
    return 0;
  v9 = a2;
  v10 = a4;
  switch ( *(_BYTE *)a2 )
  {
    case 0:
      if ( a4 )
        sub_11CDA0(a4);
      return 1;
    case 1:
      if ( !(unsigned __int8)sub_A92A0(a1, (_BYTE *)a2, v7) )
        return 0;
      goto LABEL_9;
    case 4:
      v14 = *((unsigned int **)v7 + 1);
      v15 = *v14;
      if ( *v7 != 4 || v15 != 11 )
        goto LABEL_13;
      sub_123A40((__int64)&v71, v7, 0xFFFFFFFF000000FFLL, a4);
      v34 = sub_339CA0();
      if ( !sub_1255D0(v7, v34, v9, 0) )
      {
        if ( (unsigned __int8)sub_12CD10((__int16 *)&v71, *(unsigned __int64 **)(a1 + 1504), 0) )
        {
          v57 = sub_339CA0();
          if ( sub_1255D0((unsigned __int8 *)&v71, v57, v9, 0) )
          {
            if ( v10 )
            {
              v60 = *((_QWORD *)v7 + 1);
              v70 = 0;
              sub_123A40((__int64)&v69, (unsigned __int8 *)(v60 + 32), v58, v59);
              LOWORD(v60) = *(_WORD *)v10;
              v61 = *(_WORD *)(v10 + 2);
              v62 = *(_DWORD *)(v10 + 4);
              *(_QWORD *)v10 = v69;
              v63 = *(_QWORD *)(v10 + 8);
              LOWORD(v69) = v60;
              *(_QWORD *)(v10 + 8) = v70;
              WORD1(v69) = v61;
              HIDWORD(v69) = v62;
              v70 = v63;
              sub_11CDA0((__int64)&v69);
            }
            sub_11CDA0((__int64)&v71);
            return 1;
          }
        }
      }
      sub_11CDA0((__int64)&v71);
      v14 = *((unsigned int **)v7 + 1);
      v15 = *v14;
LABEL_13:
      v16 = *(unsigned int **)(v9 + 8);
      if ( *v16 != v15 )
        return 0;
      if ( v15 > 7 )
      {
        if ( v15 - 19 > 2 )
          return 0;
LABEL_48:
        v65 = (int)v14;
        v67 = 0xFFFFFFFF00000000LL;
        v69 = 0xFFFFFFFF00000000LL;
        v66 = (_DWORD)v14 + 32;
        v68 = 0;
        v70 = 0;
        v35 = sub_12CF30(a1, (int)v16 + 32, (int)v14 + 32, (unsigned int)&v67, 0, a6);
        v37 = v65;
        if ( v35 )
        {
          if ( (unsigned __int8)sub_12CF30(a1, (int)v16 + 48, v65 + 48, (unsigned int)&v69, 0, v36) )
          {
LABEL_57:
            if ( v10 )
            {
              if ( a5 )
              {
                sub_12AB50((unsigned __int8 *)&v67, *(_QWORD *)(a1 + 1504), SHIDWORD(v67), 2);
                sub_12AB50((unsigned __int8 *)&v69, *(_QWORD *)(a1 + 1504), SHIDWORD(v69), 2);
              }
              v72 = 0;
              sub_123A40((__int64)&v71, (unsigned __int8 *)v9, v41, v42);
              v43 = *(_WORD *)v10;
              v44 = *(_WORD *)(v10 + 2);
              v45 = *(_DWORD *)(v10 + 4);
              *(_QWORD *)v10 = v71;
              v46 = *(_QWORD *)(v10 + 8);
              LOWORD(v71) = v43;
              *(_QWORD *)(v10 + 8) = v72;
              WORD1(v71) = v44;
              HIDWORD(v71) = v45;
              v72 = v46;
              sub_11CDA0((__int64)&v71);
              v47 = HIDWORD(v67);
              LOBYTE(v43) = v67;
              *(_DWORD *)(*(_QWORD *)(v10 + 8) + 68LL) = HIDWORD(v67);
              v48 = *(_QWORD *)(v10 + 8);
              *(_DWORD *)(v10 + 4) = v47;
              v49 = *(_BYTE *)(v48 + 32);
              *(_BYTE *)(v48 + 32) = v43;
              LOBYTE(v67) = v49;
              v50 = *(_BYTE *)(v48 + 33);
              *(_BYTE *)(v48 + 33) = BYTE1(v67);
              BYTE1(v67) = v50;
              v51 = *(_WORD *)(v48 + 34);
              *(_WORD *)(v48 + 34) = WORD1(v67);
              WORD1(v67) = v51;
              v52 = *(_DWORD *)(v48 + 36);
              *(_DWORD *)(v48 + 36) = v47;
              v53 = *(_QWORD *)(v48 + 40);
              HIDWORD(v67) = v52;
              v54 = v68;
              v68 = v53;
              *(_QWORD *)(v48 + 40) = v54;
              v55 = *(_QWORD *)(v10 + 8);
              LOBYTE(v53) = *(_BYTE *)(v55 + 48);
              *(_BYTE *)(v55 + 48) = v69;
              LOBYTE(v69) = v53;
              LOBYTE(v53) = *(_BYTE *)(v55 + 49);
              *(_BYTE *)(v55 + 49) = BYTE1(v69);
              BYTE1(v69) = v53;
              LOWORD(v53) = *(_WORD *)(v55 + 50);
              *(_WORD *)(v55 + 50) = WORD1(v69);
              WORD1(v69) = v53;
              LODWORD(v53) = *(_DWORD *)(v55 + 52);
              *(_DWORD *)(v55 + 52) = HIDWORD(v69);
              HIDWORD(v69) = v53;
              v56 = *(_QWORD *)(v55 + 56);
              *(_QWORD *)(v55 + 56) = v70;
              v70 = v56;
            }
            sub_11CDA0((__int64)&v69);
            sub_11CDA0((__int64)&v67);
            return 1;
          }
          v37 = v65;
        }
        v38 = *v16;
        if ( (unsigned int)v38 > 0x21
          || (v39 = 0x306385000LL, !_bittest64(&v39, v38))
          || !(unsigned __int8)sub_12CF30(a1, (int)v16 + 32, v37 + 48, (unsigned int)&v67, 0, v36)
          || !(unsigned __int8)sub_12CF30(a1, (int)v16 + 48, v66, (unsigned int)&v69, 0, v40) )
        {
          sub_11CDA0((__int64)&v69);
          sub_11CDA0((__int64)&v67);
          return 0;
        }
        goto LABEL_57;
      }
      if ( v15 > 3 )
        goto LABEL_48;
      if ( v15 != 2 )
        return 0;
      v64 = v14;
      v17 = sub_339CA0();
      if ( !sub_1255D0((unsigned __int8 *)v16 + 32, v17, (__int64)(v64 + 8), 0)
        || !(unsigned __int8)sub_12CAB0(
                               *(unsigned __int64 **)(a1 + 1504),
                               (unsigned __int8 *)v16 + 48,
                               (unsigned __int8 *)v64 + 48,
                               *(unsigned int *)(v9 + 4)) )
      {
        return 0;
      }
      if ( v10 )
      {
        sub_B57F0(a1, *((_QWORD *)v64 + 3), *((_QWORD *)v16 + 3));
        v20 = *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL) == 0;
        v72 = 0;
        if ( v20 )
          v7 = (unsigned __int8 *)v9;
        sub_123A40((__int64)&v71, v7, v18, v19);
        v21 = v71;
        v22 = v72;
        v23 = 2 * *(_DWORD *)(v9 + 4);
        *(_DWORD *)(v72 + 68) = v23;
        v24 = *(_WORD *)v10;
        v25 = *(_WORD *)(v10 + 2);
        *(_DWORD *)v10 = v21;
        v26 = *(_DWORD *)(v10 + 4);
        *(_DWORD *)(v10 + 4) = v23;
        v27 = *(_QWORD *)(v10 + 8);
        *(_QWORD *)(v10 + 8) = v22;
        HIDWORD(v71) = v26;
        LOWORD(v71) = v24;
        WORD1(v71) = v25;
        v72 = v27;
        sub_11CDA0((__int64)&v71);
      }
      return 1;
    case 5:
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL) && sub_11BB90((unsigned __int8 *)a2) )
      {
        v8 = *(_QWORD *)(a2 + 8);
        if ( *(_QWORD *)(*((_QWORD *)v7 + 1) + 8LL) + *((int *)v7 + 1) != *(_QWORD *)(v8 + 8) )
          return 0;
        goto LABEL_30;
      }
      v8 = *((_QWORD *)v7 + 1);
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + *(int *)(a2 + 4) != *(_QWORD *)(v8 + 8) )
        return 0;
      goto LABEL_9;
    case 6:
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL) && sub_11BB90((unsigned __int8 *)a2) )
      {
        if ( *((_QWORD *)v7 + 1) + *((int *)v7 + 1) != *(_QWORD *)(a2 + 8) )
          return 0;
        goto LABEL_30;
      }
      if ( *(_QWORD *)(a2 + 8) + *(int *)(a2 + 4) != *((_QWORD *)v7 + 1) )
        return 0;
      goto LABEL_9;
    case 9:
      v12 = *((_QWORD *)v7 + 1);
      v8 = *(_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(v8 + 16) != *(_DWORD *)(v12 + 16) )
        return 0;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL)
        && (v32 = sub_11BB90((unsigned __int8 *)a2), v8 = *(_QWORD *)(a2 + 8), v33 = v32, v12 = *((_QWORD *)v7 + 1), v33) )
      {
        a4 = *(_QWORD *)(v12 + 8) + *((int *)v7 + 1);
        if ( a4 != *(_QWORD *)(v8 + 8) )
          return 0;
LABEL_30:
        if ( !v10 )
          return 1;
        v9 = (__int64)v7;
      }
      else
      {
        a4 = *(_QWORD *)(v8 + 8) + *(int *)(a2 + 4);
        if ( a4 != *(_QWORD *)(v12 + 8) )
          return 0;
LABEL_9:
        if ( !v10 )
          return 1;
      }
      sub_123A40((__int64)&v71, (unsigned __int8 *)v9, v8, a4);
      if ( !(unsigned __int8)sub_12AB50((unsigned __int8 *)&v71, *(_QWORD *)(a1 + 1504), 2 * HIDWORD(v71), a5) )
      {
        sub_11CDA0((__int64)&v71);
        return 0;
      }
      v28 = *(_WORD *)v10;
      *(_WORD *)v10 = v71;
      LOWORD(v71) = v28;
      v29 = *(_WORD *)(v10 + 2);
      *(_WORD *)(v10 + 2) = WORD1(v71);
      WORD1(v71) = v29;
      v30 = *(_DWORD *)(v10 + 4);
      *(_DWORD *)(v10 + 4) = HIDWORD(v71);
      HIDWORD(v71) = v30;
      v31 = *(_QWORD *)(v10 + 8);
      *(_QWORD *)(v10 + 8) = v72;
      v72 = v31;
      sub_11CDA0((__int64)&v71);
      return 1;
    default:
      return 0;
  }
}
