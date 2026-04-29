__int64 __fastcall sub_DDA40(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, int a6, _QWORD *a7)
{
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rbx
  int v11; // r14d
  int v12; // r15d
  __int64 v13; // rbx
  unsigned int v14; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rbp
  __int64 v21; // r13
  int v22; // ebp
  int v23; // r15d
  char v24; // al
  int v25; // ecx
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rbp
  _QWORD *v29; // rax
  __int64 v30; // rbp
  _QWORD *v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // r12
  int v34; // r15d
  __int64 v35; // rbx
  int v36; // eax
  __int64 v37; // rsi
  int v38; // [rsp+8h] [rbp-118h]
  int v40; // [rsp+10h] [rbp-110h]
  __int64 v42; // [rsp+20h] [rbp-100h]
  char v43; // [rsp+2Eh] [rbp-F2h] BYREF
  char v44; // [rsp+2Fh] [rbp-F1h] BYREF
  __int64 v45; // [rsp+30h] [rbp-F0h] BYREF
  __int64 v46[2]; // [rsp+38h] [rbp-E8h] BYREF
  __int64 (__fastcall **v47)(); // [rsp+48h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+50h] [rbp-D0h]
  __int64 v49; // [rsp+58h] [rbp-C8h]
  char v50; // [rsp+60h] [rbp-C0h]
  __int64 v51; // [rsp+68h] [rbp-B8h]
  __int64 v52; // [rsp+70h] [rbp-B0h]
  _QWORD *v53; // [rsp+78h] [rbp-A8h]
  __int64 v54; // [rsp+80h] [rbp-A0h] BYREF
  __int128 v55; // [rsp+88h] [rbp-98h]
  __int64 v56; // [rsp+98h] [rbp-88h] BYREF
  __int128 v57; // [rsp+A0h] [rbp-80h]
  __int64 v58; // [rsp+B0h] [rbp-70h]
  __int64 v59; // [rsp+B8h] [rbp-68h]
  int v60; // [rsp+C0h] [rbp-60h]
  __int64 v61; // [rsp+C4h] [rbp-5Ch]
  __int64 v62; // [rsp+CCh] [rbp-54h]
  __int16 v63; // [rsp+D4h] [rbp-4Ch]
  char v64; // [rsp+D6h] [rbp-4Ah]
  unsigned __int64 v65; // [rsp+E0h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 480);
  v9 = *(_QWORD *)(v8 + 112);
  v65 = __readfsqword(0x28u);
  v42 = v9;
  v10 = a4[1];
  v46[0] = 0;
  v40 = v10;
  v11 = v10;
  v46[1] = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v47 = off_4D73F0;
  v51 = a2;
  v52 = a3;
  v53 = a4;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  v59 = -1;
  v60 = a6;
  v61 = -1;
  v62 = -1;
  v63 = 0;
  v64 = 0;
  v55 = 0;
  v57 = 0;
  if ( !a3 && (a6 & 0x10) == 0 )
  {
    if ( !under_debugger )
      sub_3835A0(52856);
    goto LABEL_68;
  }
  if ( v10 )
  {
    v30 = *(_QWORD *)(v8 + 112);
    v54 = qvector_reserve(&v54, 0, v10, 4);
    memset((void *)(v54 + 4 * v55), 0, 4 * (v10 - v55));
    v31 = v53;
    *(_QWORD *)&v55 = v10;
    v32 = v57;
    v33 = v53[1];
    if ( (unsigned __int64)v57 < v33 )
    {
      v37 = v56;
      if ( *((_QWORD *)&v57 + 1) < v33 )
      {
        v56 = qvector_reserve(&v56, v56, v53[1], 4);
        v32 = v57;
        v37 = v56;
      }
      memset((void *)(v37 + 4 * v32), 0, 4 * (v33 - v32));
      v31 = v53;
      *(_QWORD *)&v57 = v33;
      v33 = v53[1];
    }
    else if ( v33 != (_QWORD)v57 )
    {
      *(_QWORD *)&v57 = v53[1];
    }
    v34 = 0;
    v35 = 0;
    if ( v33 )
    {
      do
      {
        v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 168LL))(
                v30,
                *(unsigned int *)(*v31 + 4 * v35));
        ++v34;
        *(_DWORD *)(v54 + 4 * v35) = v36;
        *(_DWORD *)(v56 + 4 * v35) = -1;
        v31 = v53;
        v35 = v34;
      }
      while ( (unsigned __int64)v34 < v53[1] );
    }
  }
  if ( (v60 & 0x10) != 0
    || (v45 = *(_QWORD *)(v52 + 24), *(char *)(*(_QWORD *)(*(_QWORD *)(v51 + 480) + 8LL) + 10LL) >= 0)
    || (v43 = 1, v44 = 1, sub_CF9B0(0x2Du, &v45, &v43, &v44) != 1)
    || (v27 = a5, v28 = *(_QWORD *)(*(_QWORD *)(v51 + 480) + 112LL), v29 = v53, (unsigned __int64)a5 >= v53[1]) )
  {
LABEL_5:
    v12 = a5;
    v38 = a5 - 1;
  }
  else
  {
    v38 = a5;
    while ( ((*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v28 + 240LL))(
               v28,
               *(unsigned int *)(*v29 + 4 * v27),
               v45)
           & 1) == 0 )
    {
      v29 = v53;
      v27 = ++v38;
      if ( (unsigned __int64)v38 >= v53[1] )
        goto LABEL_5;
    }
    v12 = v38 + 1;
  }
  if ( v40 <= v12 )
  {
LABEL_19:
    if ( a5 <= v38 )
      goto LABEL_28;
LABEL_20:
    v14 = 0;
    goto LABEL_21;
  }
  v13 = 4LL * v12;
  while ( !a7 )
  {
LABEL_12:
    if ( (unsigned __int8)sub_DD750((__int64)&v47, v12) )
    {
      v38 = v12;
      *(_DWORD *)(v56 + v13) = -1;
    }
    else if ( !(_BYTE)v63 )
    {
      if ( (v60 & 6) != 0 && !v12 )
        goto LABEL_19;
      sub_63B90(v46, v12);
      if ( !(_BYTE)v63
        && *(_DWORD *)(v56 + 4LL * (int)v61) == -1
        && !(unsigned __int8)sub_DAED0(*(_QWORD *)(a2 + 64), v12) )
      {
        goto LABEL_19;
      }
    }
    ++v12;
    v13 += 4;
    if ( v11 == v12 )
      goto LABEL_19;
  }
  do
  {
    if ( !sub_64330(a7, *(_DWORD *)(v54 + v13)) )
      goto LABEL_12;
    ++v12;
    v13 += 4;
  }
  while ( v11 != v12 );
  if ( a5 > v38 )
    goto LABEL_20;
LABEL_28:
  sub_63880(a1, a5, 1 - a5 + v38);
  sub_64040(a1, v46, v16, v17, v18, v19);
  v20 = (unsigned int)(v57 - 1);
  v21 = 4 * v20;
  if ( (int)v20 >= 0 )
  {
    do
    {
      while ( *(_DWORD *)(v56 + v21) == -1 || sub_64330(a1, v20) )
      {
LABEL_30:
        LODWORD(v20) = v20 - 1;
        v21 -= 4;
        if ( (_DWORD)v20 == -1 )
          goto LABEL_35;
      }
      if ( !sub_64330(a1, *(_DWORD *)(v56 + v21)) )
      {
        if ( !(unsigned __int8)sub_DAED0(*(_QWORD *)(v51 + 64), v20) )
          sub_63DC0(a1, v20);
        goto LABEL_30;
      }
      sub_63B90(a1, v20);
      LODWORD(v20) = v20 - 1;
      v21 -= 4;
    }
    while ( (_DWORD)v20 != -1 );
  }
LABEL_35:
  v22 = sub_64600(a1);
  if ( a5 > v22 )
    goto LABEL_20;
  if ( !(unsigned __int8)getinf_flag(67, 4) || (*(_BYTE *)(v42 + 48) & 1) != 0 )
  {
LABEL_44:
    v14 = v22 + 1 - a5;
    goto LABEL_21;
  }
  v23 = a5 + 1;
  while ( 1 )
  {
    v26 = v23 - 1;
    if ( sub_64330(a1, v23 - 1) )
    {
      v25 = v23;
      goto LABEL_41;
    }
    if ( (v26 & 1) == 0 )
    {
      if ( !under_debugger )
        sub_3835A0(51359);
LABEL_68:
      BUG();
    }
    v24 = sub_64410(a1, v23, 2);
    v25 = v23;
    if ( !v24 )
      break;
LABEL_41:
    ++v23;
    if ( v22 < v25 )
      goto LABEL_44;
  }
  sub_63E40(a1, v26, v40 - v26);
  v14 = v26 - a5;
LABEL_21:
  v47 = off_4D73F0;
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56);
  }
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  v47 = off_4D61D8;
  qfree(v48);
  qfree(v46[0]);
  return v14;
}
