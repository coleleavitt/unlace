__int64 __fastcall sub_DEB80(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, int a6, _QWORD *a7)
{
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rbx
  int v11; // r14d
  int v12; // r15d
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  __int64 v22; // rbp
  __int64 v23; // r13
  int v24; // ebp
  int v25; // r15d
  char v26; // al
  int v27; // ecx
  int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rbp
  _QWORD *v31; // rax
  __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rbp
  _QWORD *v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // r12
  int v38; // r15d
  __int64 v39; // rbx
  __int64 v40; // rsi
  int v41; // [rsp+8h] [rbp-118h]
  int v43; // [rsp+10h] [rbp-110h]
  __int64 v45; // [rsp+20h] [rbp-100h]
  __int64 v46; // [rsp+30h] [rbp-F0h]
  __int64 v47[2]; // [rsp+38h] [rbp-E8h] BYREF
  _QWORD v48[3]; // [rsp+48h] [rbp-D8h] BYREF
  char v49; // [rsp+60h] [rbp-C0h]
  __int64 v50; // [rsp+68h] [rbp-B8h]
  __int64 v51; // [rsp+70h] [rbp-B0h]
  _QWORD *v52; // [rsp+78h] [rbp-A8h]
  __int64 v53; // [rsp+80h] [rbp-A0h]
  __int128 v54; // [rsp+88h] [rbp-98h]
  __int64 v55; // [rsp+98h] [rbp-88h]
  __int128 v56; // [rsp+A0h] [rbp-80h]
  __int64 v57; // [rsp+B0h] [rbp-70h]
  __int64 v58; // [rsp+B8h] [rbp-68h]
  int v59; // [rsp+C0h] [rbp-60h]
  __int64 v60; // [rsp+C4h] [rbp-5Ch]
  __int64 v61; // [rsp+CCh] [rbp-54h]
  __int16 v62; // [rsp+D4h] [rbp-4Ch]
  char v63; // [rsp+D6h] [rbp-4Ah]
  unsigned __int64 v64; // [rsp+E0h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 480);
  v9 = *(_QWORD *)(v8 + 112);
  v64 = __readfsqword(0x28u);
  v45 = v9;
  v10 = a4[1];
  v47[0] = 0;
  v43 = v10;
  v11 = v10;
  v47[1] = 0;
  v48[1] = 0;
  v48[2] = 0;
  v49 = 0;
  v48[0] = off_4DC470;
  v50 = a2;
  v51 = a3;
  v52 = a4;
  v53 = 0;
  v55 = 0;
  v57 = 0;
  v58 = -1;
  v59 = a6;
  v60 = -1;
  v61 = -1;
  v62 = 0;
  v63 = 0;
  v54 = 0;
  v56 = 0;
  if ( !a3 && (a6 & 0x10) == 0 )
  {
    if ( !under_debugger )
      sub_37EA20(52856);
    goto LABEL_81;
  }
  if ( v10 )
  {
    v34 = *(_QWORD *)(v8 + 112);
    v53 = qvector_reserve();
    memset((void *)(v53 + 4 * v54), 0, 4 * (v10 - v54));
    v35 = v52;
    *(_QWORD *)&v54 = v10;
    v36 = v56;
    v37 = v52[1];
    if ( (unsigned __int64)v56 < v37 )
    {
      v40 = v55;
      if ( *((_QWORD *)&v56 + 1) < v37 )
      {
        v55 = qvector_reserve();
        v36 = v56;
        v40 = v55;
      }
      memset((void *)(v40 + 4 * v36), 0, 4 * (v37 - v36));
      v35 = v52;
      *(_QWORD *)&v56 = v37;
      v37 = v52[1];
    }
    else if ( v37 != (_QWORD)v56 )
    {
      *(_QWORD *)&v56 = v52[1];
    }
    v38 = 0;
    v39 = 0;
    if ( v37 )
    {
      do
      {
        ++v38;
        *(_DWORD *)(v53 + 4 * v39) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v34 + 168LL))(
                                       v34,
                                       *(unsigned int *)(*v35 + 4 * v39));
        *(_DWORD *)(v55 + 4 * v39) = -1;
        v35 = v52;
        v39 = v38;
      }
      while ( (unsigned __int64)v38 < v52[1] );
    }
  }
  if ( (v59 & 0x10) != 0
    || (v46 = *(_QWORD *)(v51 + 24), *(char *)(*(_QWORD *)(*(_QWORD *)(v50 + 480) + 8LL) + 10LL) >= 0)
    || sub_D3E80() != 1
    || (v29 = a5, v30 = *(_QWORD *)(*(_QWORD *)(v50 + 480) + 112LL), v31 = v52, (unsigned __int64)a5 >= v52[1]) )
  {
LABEL_5:
    v12 = a5;
    v41 = a5 - 1;
  }
  else
  {
    v41 = a5;
    while ( ((*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v30 + 240LL))(
               v30,
               *(unsigned int *)(*v31 + 4 * v29),
               v46)
           & 1) == 0 )
    {
      v31 = v52;
      v29 = ++v41;
      if ( (unsigned __int64)v41 >= v52[1] )
        goto LABEL_5;
    }
    v12 = v41 + 1;
  }
  if ( v43 <= v12 )
  {
LABEL_25:
    if ( a5 <= v41 )
      goto LABEL_34;
LABEL_26:
    v16 = 0;
    goto LABEL_27;
  }
  v13 = 4LL * v12;
  while ( !a7 )
  {
LABEL_12:
    if ( (unsigned __int8)sub_DE890((__int64)v48, v12) )
    {
      v41 = v12;
      *(_DWORD *)(v55 + v13) = -1;
    }
    else if ( !(_BYTE)v62 )
    {
      if ( (v59 & 6) != 0 && !v12 )
        goto LABEL_25;
      sub_63890(v47, v12);
      if ( !(_BYTE)v62 && *(_DWORD *)(v55 + 4LL * (int)v60) == -1 )
      {
        v14 = *(_QWORD *)(a2 + 64);
        if ( (*(_BYTE *)(*(_QWORD *)(v14 + 1504) + 48LL) & 1) == 0 )
        {
          v15 = *(_DWORD *)(v14 + 72);
          if ( v15 <= 0x10 )
            v15 = getinf();
          if ( v15 == 176 || v15 == 256 || !(unsigned __int8)getinf_flag() || (v12 & 1) == 0 )
            goto LABEL_25;
        }
      }
    }
    ++v12;
    v13 += 4;
    if ( v11 == v12 )
      goto LABEL_25;
  }
  do
  {
    if ( !sub_64030(a7, *(_DWORD *)(v53 + v13)) )
      goto LABEL_12;
    ++v12;
    v13 += 4;
  }
  while ( v11 != v12 );
  if ( a5 > v41 )
    goto LABEL_26;
LABEL_34:
  sub_63580(a1, a5, 1 - a5 + v41);
  sub_63D40(a1, v47, v18, v19, v20, v21);
  v22 = (unsigned int)(v56 - 1);
  v23 = 4 * v22;
  if ( (int)v22 >= 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(v55 + v23) == -1 || sub_64030(a1, v22) )
            goto LABEL_36;
          if ( !sub_64030(a1, *(_DWORD *)(v55 + v23)) )
            break;
          sub_63890(a1, v22);
          LODWORD(v22) = v22 - 1;
          v23 -= 4;
          if ( (_DWORD)v22 == -1 )
            goto LABEL_41;
        }
        v32 = *(_QWORD *)(v50 + 64);
        if ( (*(_BYTE *)(*(_QWORD *)(v32 + 1504) + 48LL) & 1) == 0 )
          break;
LABEL_36:
        LODWORD(v22) = v22 - 1;
        v23 -= 4;
        if ( (_DWORD)v22 == -1 )
          goto LABEL_41;
      }
      v33 = *(_DWORD *)(v32 + 72);
      if ( v33 <= 0x10 )
        v33 = getinf();
      if ( v33 == 176 || v33 == 256 || !(unsigned __int8)getinf_flag() || (v22 & 1) == 0 )
      {
        sub_63AC0(a1, v22);
        goto LABEL_36;
      }
      LODWORD(v22) = v22 - 1;
      v23 -= 4;
    }
  }
LABEL_41:
  v24 = sub_64300(a1);
  if ( a5 > v24 )
    goto LABEL_26;
  if ( !(unsigned __int8)getinf_flag() || (*(_BYTE *)(v45 + 48) & 1) != 0 )
  {
LABEL_50:
    v16 = v24 + 1 - a5;
    goto LABEL_27;
  }
  v25 = a5 + 1;
  while ( 1 )
  {
    v28 = v25 - 1;
    if ( sub_64030(a1, v25 - 1) )
    {
      v27 = v25;
      goto LABEL_47;
    }
    if ( (v28 & 1) == 0 )
    {
      if ( !under_debugger )
        sub_37EA20(51359);
LABEL_81:
      BUG();
    }
    v26 = sub_64110(a1, v25, 2);
    v27 = v25;
    if ( !v26 )
      break;
LABEL_47:
    ++v25;
    if ( v24 < v27 )
      goto LABEL_50;
  }
  sub_63B40(a1, v28, v43 - v28);
  v16 = v28 - a5;
LABEL_27:
  v48[0] = off_4DC470;
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree();
  }
  v48[0] = off_4DB318;
  qfree();
  qfree();
  return v16;
}
