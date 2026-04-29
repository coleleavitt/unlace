__int64 __fastcall sub_12C970(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int *v14; // r10
  unsigned int v15; // eax
  unsigned int *v16; // r13
  __int64 v17; // rax
  bool v18; // zf
  int v19; // edi
  __int64 v20; // rdx
  int v21; // eax
  __int16 v22; // si
  __int16 v23; // cx
  int v24; // edi
  __int64 v25; // rax
  __int16 v26; // ax
  __int16 v27; // ax
  int v28; // eax
  __int64 v29; // rax
  char v30; // al
  char v31; // cl
  __int64 v32; // rsi
  char v33; // al
  int v34; // r9d
  int v35; // r10d
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // r9d
  __int16 v39; // si
  __int16 v40; // cx
  int v41; // edx
  __int64 v42; // rax
  int v43; // edx
  __int64 v44; // rax
  char v45; // cl
  char v46; // cl
  __int16 v47; // cx
  int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rsi
  __int16 v55; // cx
  int v56; // edx
  __int64 v57; // rax
  unsigned int *v58; // [rsp+0h] [rbp-98h]
  int v59; // [rsp+8h] [rbp-90h]
  int v60; // [rsp+18h] [rbp-80h]
  unsigned __int64 v61; // [rsp+20h] [rbp-78h] BYREF
  __int64 v62; // [rsp+28h] [rbp-70h]
  unsigned __int64 v63; // [rsp+30h] [rbp-68h] BYREF
  __int64 v64; // [rsp+38h] [rbp-60h]
  __int64 v65; // [rsp+40h] [rbp-58h] BYREF
  __int64 v66; // [rsp+48h] [rbp-50h]
  unsigned __int64 v67; // [rsp+58h] [rbp-40h]

  v6 = *(_QWORD *)a3 ^ *(_QWORD *)a2;
  v67 = __readfsqword(0x28u);
  v7 = a3;
  if ( (v6 & 0xFFFFFFFF000000FFLL) != 0 )
    return 0;
  v8 = a2;
  switch ( *(_BYTE *)a2 )
  {
    case 0:
      if ( a4 )
        sub_11C7E0(a4);
      return 1;
    case 1:
      if ( !(unsigned __int8)sub_A8CE0(a1, (_BYTE *)a2, (_BYTE *)a3) )
        return 0;
      goto LABEL_9;
    case 4:
      v14 = *(unsigned int **)(a3 + 8);
      v15 = *v14;
      if ( *(_BYTE *)a3 != 4 || v15 != 11 )
        goto LABEL_13;
      sub_123480((__int64)&v65, (unsigned __int8 *)a3);
      v32 = sub_339DE0();
      if ( !sub_125010((unsigned __int8 *)v7, v32, v8, 0) )
      {
        if ( (unsigned __int8)sub_12C750((__int16 *)&v65, *(_QWORD *)(a1 + 1504), 0) )
        {
          v53 = sub_339DE0();
          if ( sub_125010((unsigned __int8 *)&v65, v53, v8, 0) )
          {
            if ( a4 )
            {
              v54 = *(_QWORD *)(v7 + 8);
              v64 = 0;
              sub_123480((__int64)&v63, (unsigned __int8 *)(v54 + 32));
              LOWORD(v54) = *(_WORD *)a4;
              v55 = *(_WORD *)(a4 + 2);
              v56 = *(_DWORD *)(a4 + 4);
              *(_QWORD *)a4 = v63;
              v57 = *(_QWORD *)(a4 + 8);
              LOWORD(v63) = v54;
              *(_QWORD *)(a4 + 8) = v64;
              WORD1(v63) = v55;
              HIDWORD(v63) = v56;
              v64 = v57;
              sub_11C7E0((__int64)&v63);
            }
            sub_11C7E0((__int64)&v65);
            return 1;
          }
        }
      }
      sub_11C7E0((__int64)&v65);
      v14 = *(unsigned int **)(v7 + 8);
      v15 = *v14;
LABEL_13:
      v16 = *(unsigned int **)(v8 + 8);
      if ( *v16 != v15 )
        return 0;
      if ( v15 > 7 )
      {
        if ( v15 - 19 > 2 )
          return 0;
LABEL_48:
        v59 = (int)v14;
        v61 = 0xFFFFFFFF00000000LL;
        v63 = 0xFFFFFFFF00000000LL;
        v60 = (_DWORD)v14 + 32;
        v62 = 0;
        v64 = 0;
        v33 = sub_12C970(a1, (int)v16 + 32, (int)v14 + 32, (unsigned int)&v61, 0, a6);
        v35 = v59;
        if ( v33 )
        {
          if ( (unsigned __int8)sub_12C970(a1, (int)v16 + 48, v59 + 48, (unsigned int)&v63, 0, v34) )
          {
LABEL_57:
            if ( a4 )
            {
              if ( a5 )
              {
                sub_12A590((unsigned __int64)&v61, *(_QWORD *)(a1 + 1504), SHIDWORD(v61), 2);
                sub_12A590((unsigned __int64)&v63, *(_QWORD *)(a1 + 1504), SHIDWORD(v63), 2);
              }
              v66 = 0;
              sub_123480((__int64)&v65, (unsigned __int8 *)v8);
              v39 = *(_WORD *)a4;
              v40 = *(_WORD *)(a4 + 2);
              v41 = *(_DWORD *)(a4 + 4);
              *(_QWORD *)a4 = v65;
              v42 = *(_QWORD *)(a4 + 8);
              LOWORD(v65) = v39;
              *(_QWORD *)(a4 + 8) = v66;
              WORD1(v65) = v40;
              HIDWORD(v65) = v41;
              v66 = v42;
              sub_11C7E0((__int64)&v65);
              v43 = HIDWORD(v61);
              LOBYTE(v39) = v61;
              *(_DWORD *)(*(_QWORD *)(a4 + 8) + 68LL) = HIDWORD(v61);
              v44 = *(_QWORD *)(a4 + 8);
              *(_DWORD *)(a4 + 4) = v43;
              v45 = *(_BYTE *)(v44 + 32);
              *(_BYTE *)(v44 + 32) = v39;
              LOBYTE(v61) = v45;
              v46 = *(_BYTE *)(v44 + 33);
              *(_BYTE *)(v44 + 33) = BYTE1(v61);
              BYTE1(v61) = v46;
              v47 = *(_WORD *)(v44 + 34);
              *(_WORD *)(v44 + 34) = WORD1(v61);
              WORD1(v61) = v47;
              v48 = *(_DWORD *)(v44 + 36);
              *(_DWORD *)(v44 + 36) = v43;
              v49 = *(_QWORD *)(v44 + 40);
              HIDWORD(v61) = v48;
              v50 = v62;
              v62 = v49;
              *(_QWORD *)(v44 + 40) = v50;
              v51 = *(_QWORD *)(a4 + 8);
              LOBYTE(v49) = *(_BYTE *)(v51 + 48);
              *(_BYTE *)(v51 + 48) = v63;
              LOBYTE(v63) = v49;
              LOBYTE(v49) = *(_BYTE *)(v51 + 49);
              *(_BYTE *)(v51 + 49) = BYTE1(v63);
              BYTE1(v63) = v49;
              LOWORD(v49) = *(_WORD *)(v51 + 50);
              *(_WORD *)(v51 + 50) = WORD1(v63);
              WORD1(v63) = v49;
              LODWORD(v49) = *(_DWORD *)(v51 + 52);
              *(_DWORD *)(v51 + 52) = HIDWORD(v63);
              HIDWORD(v63) = v49;
              v52 = *(_QWORD *)(v51 + 56);
              *(_QWORD *)(v51 + 56) = v64;
              v64 = v52;
            }
            sub_11C7E0((__int64)&v63);
            sub_11C7E0((__int64)&v61);
            return 1;
          }
          v35 = v59;
        }
        v36 = *v16;
        if ( (unsigned int)v36 > 0x21
          || (v37 = 0x306385000LL, !_bittest64(&v37, v36))
          || !(unsigned __int8)sub_12C970(a1, (int)v16 + 32, v35 + 48, (unsigned int)&v61, 0, v34)
          || !(unsigned __int8)sub_12C970(a1, (int)v16 + 48, v60, (unsigned int)&v63, 0, v38) )
        {
          sub_11C7E0((__int64)&v63);
          sub_11C7E0((__int64)&v61);
          return 0;
        }
        goto LABEL_57;
      }
      if ( v15 > 3 )
        goto LABEL_48;
      if ( v15 != 2 )
        return 0;
      v58 = v14;
      v17 = sub_339DE0();
      if ( !sub_125010((unsigned __int8 *)v16 + 32, v17, (__int64)(v58 + 8), 0)
        || !(unsigned __int8)sub_12C4F0(
                               *(_QWORD *)(a1 + 1504),
                               (unsigned __int8 *)v16 + 48,
                               (unsigned __int8 *)v58 + 48,
                               *(_DWORD *)(v8 + 4)) )
      {
        return 0;
      }
      if ( a4 )
      {
        sub_B5230(a1, *((_QWORD *)v58 + 3), *((_QWORD *)v16 + 3));
        v18 = *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL) == 0;
        v66 = 0;
        if ( v18 )
          v7 = v8;
        sub_123480((__int64)&v65, (unsigned __int8 *)v7);
        v19 = v65;
        v20 = v66;
        v21 = 2 * *(_DWORD *)(v8 + 4);
        *(_DWORD *)(v66 + 68) = v21;
        v22 = *(_WORD *)a4;
        v23 = *(_WORD *)(a4 + 2);
        *(_DWORD *)a4 = v19;
        v24 = *(_DWORD *)(a4 + 4);
        *(_DWORD *)(a4 + 4) = v21;
        v25 = *(_QWORD *)(a4 + 8);
        *(_QWORD *)(a4 + 8) = v20;
        HIDWORD(v65) = v24;
        LOWORD(v65) = v22;
        WORD1(v65) = v23;
        v66 = v25;
        sub_11C7E0((__int64)&v65);
      }
      return 1;
    case 5:
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL) && sub_11B5D0((unsigned __int8 *)a2) )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8LL) + *(int *)(v7 + 4) != *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) )
          return 0;
        goto LABEL_30;
      }
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + *(int *)(a2 + 4) != *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8LL) )
        return 0;
      goto LABEL_9;
    case 6:
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL) && sub_11B5D0((unsigned __int8 *)a2) )
      {
        if ( *(_QWORD *)(v7 + 8) + *(int *)(v7 + 4) != *(_QWORD *)(a2 + 8) )
          return 0;
        goto LABEL_30;
      }
      if ( *(_QWORD *)(a2 + 8) + *(int *)(a2 + 4) != *(_QWORD *)(v7 + 8) )
        return 0;
      goto LABEL_9;
    case 9:
      v11 = *(_QWORD *)(a3 + 8);
      v12 = *(_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(v12 + 16) != *(_DWORD *)(v11 + 16) )
        return 0;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL)
        && (v30 = sub_11B5D0((unsigned __int8 *)a2), v12 = *(_QWORD *)(a2 + 8),
                                                     v31 = v30,
                                                     v11 = *(_QWORD *)(v7 + 8),
                                                     v31) )
      {
        if ( *(_QWORD *)(v11 + 8) + *(int *)(v7 + 4) != *(_QWORD *)(v12 + 8) )
          return 0;
LABEL_30:
        if ( !a4 )
          return 1;
        v8 = v7;
      }
      else
      {
        if ( *(_QWORD *)(v12 + 8) + *(int *)(a2 + 4) != *(_QWORD *)(v11 + 8) )
          return 0;
LABEL_9:
        if ( !a4 )
          return 1;
      }
      sub_123480((__int64)&v65, (unsigned __int8 *)v8);
      if ( !(unsigned __int8)sub_12A590((unsigned __int64)&v65, *(_QWORD *)(a1 + 1504), 2 * HIDWORD(v65), a5) )
      {
        sub_11C7E0((__int64)&v65);
        return 0;
      }
      v26 = *(_WORD *)a4;
      *(_WORD *)a4 = v65;
      LOWORD(v65) = v26;
      v27 = *(_WORD *)(a4 + 2);
      *(_WORD *)(a4 + 2) = WORD1(v65);
      WORD1(v65) = v27;
      v28 = *(_DWORD *)(a4 + 4);
      *(_DWORD *)(a4 + 4) = HIDWORD(v65);
      HIDWORD(v65) = v28;
      v29 = *(_QWORD *)(a4 + 8);
      *(_QWORD *)(a4 + 8) = v66;
      v66 = v29;
      sub_11C7E0((__int64)&v65);
      return 1;
    default:
      return 0;
  }
}
