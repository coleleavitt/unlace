__int64 __fastcall sub_DE000(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, int a6, _QWORD *a7)
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
  __int64 v36; // rsi
  int v37; // [rsp+8h] [rbp-118h]
  int v39; // [rsp+10h] [rbp-110h]
  __int64 v41; // [rsp+20h] [rbp-100h]
  __int64 v42; // [rsp+30h] [rbp-F0h]
  __int64 v43[2]; // [rsp+38h] [rbp-E8h] BYREF
  _QWORD v44[3]; // [rsp+48h] [rbp-D8h] BYREF
  char v45; // [rsp+60h] [rbp-C0h]
  __int64 v46; // [rsp+68h] [rbp-B8h]
  __int64 v47; // [rsp+70h] [rbp-B0h]
  _QWORD *v48; // [rsp+78h] [rbp-A8h]
  __int64 v49; // [rsp+80h] [rbp-A0h]
  __int128 v50; // [rsp+88h] [rbp-98h]
  __int64 v51; // [rsp+98h] [rbp-88h]
  __int128 v52; // [rsp+A0h] [rbp-80h]
  __int64 v53; // [rsp+B0h] [rbp-70h]
  __int64 v54; // [rsp+B8h] [rbp-68h]
  int v55; // [rsp+C0h] [rbp-60h]
  __int64 v56; // [rsp+C4h] [rbp-5Ch]
  __int64 v57; // [rsp+CCh] [rbp-54h]
  __int16 v58; // [rsp+D4h] [rbp-4Ch]
  char v59; // [rsp+D6h] [rbp-4Ah]
  unsigned __int64 v60; // [rsp+E0h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 480);
  v9 = *(_QWORD *)(v8 + 112);
  v60 = __readfsqword(0x28u);
  v41 = v9;
  v10 = a4[1];
  v43[0] = 0;
  v39 = v10;
  v11 = v10;
  v43[1] = 0;
  v44[1] = 0;
  v44[2] = 0;
  v45 = 0;
  v44[0] = off_4DCD30;
  v46 = a2;
  v47 = a3;
  v48 = a4;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  v54 = -1;
  v55 = a6;
  v56 = -1;
  v57 = -1;
  v58 = 0;
  v59 = 0;
  v50 = 0;
  v52 = 0;
  if ( !a3 && (a6 & 0x10) == 0 )
  {
    if ( !under_debugger )
      sub_383060(52856);
    goto LABEL_68;
  }
  if ( v10 )
  {
    v30 = *(_QWORD *)(v8 + 112);
    v49 = qvector_reserve();
    memset((void *)(v49 + 4 * v50), 0, 4 * (v10 - v50));
    v31 = v48;
    *(_QWORD *)&v50 = v10;
    v32 = v52;
    v33 = v48[1];
    if ( (unsigned __int64)v52 < v33 )
    {
      v36 = v51;
      if ( *((_QWORD *)&v52 + 1) < v33 )
      {
        v51 = qvector_reserve();
        v32 = v52;
        v36 = v51;
      }
      memset((void *)(v36 + 4 * v32), 0, 4 * (v33 - v32));
      v31 = v48;
      *(_QWORD *)&v52 = v33;
      v33 = v48[1];
    }
    else if ( v33 != (_QWORD)v52 )
    {
      *(_QWORD *)&v52 = v48[1];
    }
    v34 = 0;
    v35 = 0;
    if ( v33 )
    {
      do
      {
        ++v34;
        *(_DWORD *)(v49 + 4 * v35) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 168LL))(
                                       v30,
                                       *(unsigned int *)(*v31 + 4 * v35));
        *(_DWORD *)(v51 + 4 * v35) = -1;
        v31 = v48;
        v35 = v34;
      }
      while ( (unsigned __int64)v34 < v48[1] );
    }
  }
  if ( (v55 & 0x10) != 0
    || (v42 = *(_QWORD *)(v47 + 24), *(char *)(*(_QWORD *)(*(_QWORD *)(v46 + 480) + 8LL) + 10LL) >= 0)
    || sub_CFF70() != 1
    || (v27 = a5, v28 = *(_QWORD *)(*(_QWORD *)(v46 + 480) + 112LL), v29 = v48, (unsigned __int64)a5 >= v48[1]) )
  {
LABEL_5:
    v12 = a5;
    v37 = a5 - 1;
  }
  else
  {
    v37 = a5;
    while ( ((*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v28 + 240LL))(
               v28,
               *(unsigned int *)(*v29 + 4 * v27),
               v42)
           & 1) == 0 )
    {
      v29 = v48;
      v27 = ++v37;
      if ( (unsigned __int64)v37 >= v48[1] )
        goto LABEL_5;
    }
    v12 = v37 + 1;
  }
  if ( v39 <= v12 )
  {
LABEL_19:
    if ( a5 <= v37 )
      goto LABEL_28;
LABEL_20:
    v14 = 0;
    goto LABEL_21;
  }
  v13 = 4LL * v12;
  while ( !a7 )
  {
LABEL_12:
    if ( (unsigned __int8)sub_DDD10((__int64)v44, v12) )
    {
      v37 = v12;
      *(_DWORD *)(v51 + v13) = -1;
    }
    else if ( !(_BYTE)v58 )
    {
      if ( (v55 & 6) != 0 && !v12 )
        goto LABEL_19;
      sub_64190(v43, v12);
      if ( !(_BYTE)v58
        && *(_DWORD *)(v51 + 4LL * (int)v56) == -1
        && !(unsigned __int8)sub_DB490(*(_QWORD *)(a2 + 64), v12) )
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
    if ( !sub_64930(a7, *(_DWORD *)(v49 + v13)) )
      goto LABEL_12;
    ++v12;
    v13 += 4;
  }
  while ( v11 != v12 );
  if ( a5 > v37 )
    goto LABEL_20;
LABEL_28:
  sub_63E80(a1, a5, 1 - a5 + v37);
  sub_64640(a1, v43, v16, v17, v18, v19);
  v20 = (unsigned int)(v52 - 1);
  v21 = 4 * v20;
  if ( (int)v20 >= 0 )
  {
    do
    {
      while ( *(_DWORD *)(v51 + v21) == -1 || sub_64930(a1, v20) )
      {
LABEL_30:
        LODWORD(v20) = v20 - 1;
        v21 -= 4;
        if ( (_DWORD)v20 == -1 )
          goto LABEL_35;
      }
      if ( !sub_64930(a1, *(_DWORD *)(v51 + v21)) )
      {
        if ( !(unsigned __int8)sub_DB490(*(_QWORD *)(v46 + 64), v20) )
          sub_643C0(a1, v20);
        goto LABEL_30;
      }
      sub_64190(a1, v20);
      LODWORD(v20) = v20 - 1;
      v21 -= 4;
    }
    while ( (_DWORD)v20 != -1 );
  }
LABEL_35:
  v22 = sub_64C00(a1);
  if ( a5 > v22 )
    goto LABEL_20;
  if ( !(unsigned __int8)getinf_flag() || (*(_BYTE *)(v41 + 48) & 1) != 0 )
  {
LABEL_44:
    v14 = v22 + 1 - a5;
    goto LABEL_21;
  }
  v23 = a5 + 1;
  while ( 1 )
  {
    v26 = v23 - 1;
    if ( sub_64930(a1, v23 - 1) )
    {
      v25 = v23;
      goto LABEL_41;
    }
    if ( (v26 & 1) == 0 )
    {
      if ( !under_debugger )
        sub_383060(51359);
LABEL_68:
      BUG();
    }
    v24 = sub_64A10(a1, v23, 2);
    v25 = v23;
    if ( !v24 )
      break;
LABEL_41:
    ++v23;
    if ( v22 < v25 )
      goto LABEL_44;
  }
  sub_64440(a1, v26, v39 - v26);
  v14 = v26 - a5;
LABEL_21:
  v44[0] = off_4DCD30;
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  v44[0] = off_4DBB18;
  qfree();
  qfree();
  return v14;
}
