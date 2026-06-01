__int64 __fastcall sub_E29460(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r14d
  unsigned __int16 v7; // r15
  __int64 v8; // r9
  size_t v9; // r12
  unsigned __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // rax
  unsigned __int64 v14; // r11
  __int64 v15; // r9
  unsigned __int64 v16; // r11
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // r10
  size_t v21; // rdx
  unsigned __int64 v22; // r10
  void (__fastcall *v23)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _QWORD, unsigned __int64); // rax
  __int64 v24; // rdx
  __int64 *v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // r9
  __int64 v28; // rdi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rsi
  _DWORD *v33; // rdx
  __int64 v35; // rsi
  __int64 v36; // rsi
  _WORD *v37; // rdx
  const void *v38; // rbx
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  void *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _BYTE *v48; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v49; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v50; // [rsp+8h] [rbp-C0h]
  int v51; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v52; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v53; // [rsp+10h] [rbp-B8h]
  __int64 v54; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v55; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v56[24]; // [rsp+30h] [rbp-98h] BYREF
  int v57; // [rsp+48h] [rbp-80h]
  __int64 v58; // [rsp+50h] [rbp-78h]
  __int64 v59; // [rsp+58h] [rbp-70h]
  __int64 v60; // [rsp+60h] [rbp-68h] BYREF
  __int128 v61; // [rsp+68h] [rbp-60h]
  int v62; // [rsp+78h] [rbp-50h]
  __int64 v63; // [rsp+80h] [rbp-48h]
  __int64 v64; // [rsp+88h] [rbp-40h]

  v4 = (unsigned int)a1;
  v7 = *(_WORD *)(a2 + 2);
  sub_CE6650(*a1);
  v9 = *(unsigned int *)(a2 + 16);
  v10 = (v7 >> 6) & 7;
  switch ( (_BYTE)v10 )
  {
    case 2:
      v3 = 3;
      break;
    case 4:
      v3 = 5;
      break;
    case 1:
      v3 = 0;
      break;
    default:
      goto LABEL_50;
  }
  v11 = (unsigned int)(v9 + 1);
  if ( !a3 )
    a3 = a2;
  a1[26] += 88LL;
  v12 = unk_23F44D8;
  v13 = a1[16];
  v60 = a3 | 2;
  v14 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a1[17] >= v14 + 88 && v13 )
  {
    a1[16] = v14 + 88;
  }
  else
  {
    v46 = sub_986170((__int64)(a1 + 16), 88, 88, 4, v11, v8);
    v12 = unk_23F44D8;
    LODWORD(v11) = v9 + 1;
    v14 = v46;
  }
  a3 = (__int64)&v60;
  v49 = v14;
  sub_CEEB50(v14, &v60, v3, v12, v11, 1, 0, 0);
  v16 = v49;
  v54 = (__int64)(a1[29] - a1[28]) >> 3;
  v17 = *(unsigned int *)(v49 + 28) + 40LL;
  v18 = *(unsigned int *)(*a1 + 32LL);
  v19 = a1[16];
  a1[26] += v17;
  v20 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[17] >= v17 + v20 && v19 )
  {
    a1[16] = v17 + v20;
  }
  else
  {
    v53 = v49;
    v51 = v18;
    v47 = sub_986170((__int64)(a1 + 16), v17, v17, 3, v18, v15);
    v16 = v53;
    LODWORD(v18) = v51;
    v20 = v47;
  }
  *(_DWORD *)v20 = v18;
  *(_DWORD *)(v20 + 16) = -1;
  v21 = *(unsigned int *)(v16 + 28);
  *(_QWORD *)(v20 + 32) = v16;
  *(_QWORD *)(v20 + 8) = 0;
  *(_BYTE *)(v20 + 20) = 1;
  *(_DWORD *)(v20 + 24) = 1;
  *(_WORD *)(v20 + 28) = 0;
  v55 = v20;
  v52 = v16;
  v50 = v20;
  memset((void *)(v20 + 40), 0, v21);
  v22 = v50;
  v23 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _QWORD, unsigned __int64))(v52 + 64);
  v24 = v50;
  if ( v23 )
  {
    v23(
      v50,
      v50 + *(unsigned int *)(v52 + 24) + 40,
      *(unsigned __int8 *)(v52 + 56),
      *(unsigned __int8 *)(v52 + 57),
      *(unsigned __int8 *)(v52 + 59),
      1,
      0,
      v52);
    v24 = v55;
    v22 = v50;
  }
  *(_BYTE *)(v22 + 27) = 1;
  v25 = (__int64 *)a1[29];
  *(_DWORD *)(v24 + 40) = 0;
  if ( v25 == (__int64 *)a1[30] )
  {
    sub_E29310((__int64)(a1 + 28), v25, (__int64 *)&v55);
  }
  else
  {
    *v25 = v24;
    a1[29] = v25 + 1;
  }
  v4 = 0;
  v48 = v56;
  sub_E23170((__int64)v56, v55);
  if ( (_BYTE)v10 != 1 )
  {
    while ( 1 )
    {
      v10 = v4;
      if ( v57 == 1 )
      {
        v60 = v4;
        v61 = 0;
        v64 = v59;
        v62 = 1;
        v63 = v58;
        if ( (_DWORD)v9 == v4 )
          goto LABEL_60;
      }
      else
      {
        if ( v57 == 2 )
        {
          v60 = v4;
          v61 = 0;
          v62 = 2;
          v63 = v58;
        }
        else if ( (_DWORD)v59 == -1 )
        {
          if ( v57 == 3 )
            goto LABEL_106;
          sub_E23220(a3, v58, -1, *(unsigned int *)(*(_QWORD *)(v58 + 32) + 20LL));
        }
        else
        {
          if ( v57 )
          {
            if ( v57 == 3 )
              BUG();
            v26 = v58;
            v27 = (unsigned int)v59;
            v28 = *(_QWORD *)(v58 + 32);
            v29 = v4 * (unsigned __int64)*(unsigned int *)(v28 + 16);
          }
          else
          {
            v26 = v58;
            v28 = *(_QWORD *)(v58 + 32);
            if ( *(_DWORD *)(v28 + 24) == (_DWORD)v59 || !(_DWORD)v59 )
            {
              v27 = (unsigned int)v59;
              v29 = v4 * (unsigned __int64)*(unsigned int *)(v28 + 16);
            }
            else
            {
              v27 = (unsigned int)v59;
              v29 = v4 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v58 + (unsigned int)v59 + 32) + 16LL);
            }
            if ( *(_DWORD *)(v28 + 24) != (_DWORD)v59 && (_DWORD)v59 )
              v28 = *(_QWORD *)(v58 + v27 + 32);
          }
          v30 = v29 + 32;
          if ( *(_QWORD *)(v28 + 40) )
            v30 = v29 + 16;
          sub_E23220(a3, v26, v59, v27 + v30);
        }
        if ( (_DWORD)v9 == v4 )
        {
LABEL_60:
          v31 = 0;
          goto LABEL_30;
        }
      }
      if ( ((*(_WORD *)(a2 + 2) >> 6) & 7) == 2 )
      {
        v10 = 2LL * v4;
        v31 = *(unsigned __int16 *)(a2 + v10 + 4LL * *(unsigned int *)(a2 + 4) + 20);
LABEL_30:
        if ( v3 != 3 )
          goto LABEL_31;
LABEL_51:
        if ( v62 )
          goto LABEL_57;
        v36 = *(_QWORD *)(v63 + 32);
        if ( *(_DWORD *)(v36 + 24) != (_DWORD)v64 && (_DWORD)v64 )
          v36 = *(_QWORD *)(v63 + (unsigned int)v64 + 32);
        if ( *(_BYTE *)(v36 + 60) && v60 == (unsigned int)v64 )
          v37 = (_WORD *)(v63 + v60 + 72);
        else
LABEL_57:
          v37 = (_WORD *)(v63 + v60 + 40);
        *v37 = v31;
        goto LABEL_40;
      }
      if ( ((*(_WORD *)(a2 + 2) >> 6) & 7) == 4 )
      {
        v10 = *(unsigned int *)(a2 + 4) + (unsigned __int64)v4;
        v31 = *(_DWORD *)(a2 + 4 * v10 + 20);
        goto LABEL_30;
      }
      while ( 1 )
      {
LABEL_50:
        v31 = *(unsigned __int8 *)(v10 + a2 + 4LL * *(unsigned int *)(a2 + 4) + 20);
        if ( v3 == 3 )
          goto LABEL_51;
LABEL_31:
        if ( v3 == 5 )
          break;
        if ( !v3 )
        {
          if ( v62 )
            goto LABEL_49;
          v35 = *(_QWORD *)(v63 + 32);
          if ( *(_DWORD *)(v35 + 24) != (_DWORD)v64 && (_DWORD)v64 )
            v35 = *(_QWORD *)(v63 + (unsigned int)v64 + 32);
          if ( *(_BYTE *)(v35 + 60) && (unsigned int)v64 == v60 )
            *(_BYTE *)(v63 + v60 + 72) = v31;
          else
LABEL_49:
            *(_BYTE *)(v63 + v60 + 40) = v31;
          goto LABEL_40;
        }
      }
      if ( v62 )
        goto LABEL_38;
      v32 = *(_QWORD *)(v63 + 32);
      if ( *(_DWORD *)(v32 + 24) != (_DWORD)v64 && (_DWORD)v64 )
        v32 = *(_QWORD *)(v63 + (unsigned int)v64 + 32);
      if ( *(_BYTE *)(v32 + 60) && (unsigned int)v64 == v60 )
        v33 = (_DWORD *)(v63 + v60 + 72);
      else
LABEL_38:
        v33 = (_DWORD *)(v63 + v60 + 40);
      *v33 = v31;
LABEL_40:
      ++v4;
      sub_E232A0(a3);
      if ( (unsigned int)v9 < v4 )
        goto LABEL_41;
    }
  }
  v38 = (const void *)(a2 + 4LL * *(unsigned int *)(a2 + 4) + 20);
  if ( v57 == 1 )
  {
    v42 = v58;
    v60 = 0;
    v62 = 1;
    v64 = v59;
    v63 = v58;
    v61 = 0;
LABEL_94:
    v45 = 40;
    goto LABEL_95;
  }
  if ( v57 == 2 )
  {
    v42 = v58;
    v60 = 0;
    v61 = 0;
    v62 = 2;
    v63 = v58;
    goto LABEL_94;
  }
  if ( (_DWORD)v59 == -1 )
  {
    if ( v57 == 3 )
LABEL_106:
      BUG();
    sub_E23220((__int64)&v60, v58, -1, *(unsigned int *)(*(_QWORD *)(v58 + 32) + 20LL));
  }
  else
  {
    if ( v57 )
    {
      if ( v57 == 3 )
        BUG();
      v39 = v58;
      v40 = (unsigned int)v59;
      v41 = *(_QWORD *)(v58 + 32);
    }
    else
    {
      v39 = v58;
      v40 = (unsigned int)v59;
      v41 = *(_QWORD *)(v58 + 32);
      if ( *(_DWORD *)(v41 + 24) != (_DWORD)v59 && (_DWORD)v59 )
        v41 = *(_QWORD *)(v58 + (unsigned int)v59 + 32);
    }
    sub_E23220((__int64)&v60, v39, v59, v40 + (*(_QWORD *)(v41 + 40) == 0 ? 0x10 : 0) + 16);
  }
  v42 = v63;
  if ( v62 )
    goto LABEL_92;
  v43 = *(_QWORD *)(v63 + 32);
  if ( *(_DWORD *)(v43 + 24) != (_DWORD)v64 && (_DWORD)v64 )
    v43 = *(_QWORD *)(v63 + (unsigned int)v64 + 32);
  if ( !*(_BYTE *)(v43 + 60) || (v44 = (void *)(v63 + v60 + 72), v60 != (unsigned int)v64) )
  {
LABEL_92:
    v45 = v60 + 40;
LABEL_95:
    v44 = (void *)(v42 + v45);
  }
  memcpy(v44, v38, v9);
  sub_E232A0((__int64)&v60);
LABEL_41:
  sub_E24D00((__int64)v48);
  sub_E232A0((__int64)v48);
  return (unsigned int)v54;
}
