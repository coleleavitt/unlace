__int64 __fastcall sub_3EF850(__int64 *a1, __int64 *a2, int a3, int a4)
{
  __int64 v5; // r14
  __int64 v6; // rbp
  _QWORD *v7; // rax
  unsigned int *v8; // r13
  unsigned int *v9; // r15
  int v10; // eax
  __int64 v11; // rsi
  int v12; // eax
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // r12
  _QWORD *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rsi
  int v29; // edx
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // r12
  _DWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rsi
  _BYTE *v39; // [rsp+0h] [rbp-178h]
  int v40; // [rsp+8h] [rbp-170h]
  int v41; // [rsp+8h] [rbp-170h]
  __int64 v42; // [rsp+8h] [rbp-170h]
  int v43[2]; // [rsp+8h] [rbp-170h]
  __int64 v44; // [rsp+8h] [rbp-170h]
  char v45; // [rsp+10h] [rbp-168h]
  __int64 v46; // [rsp+10h] [rbp-168h]
  __int64 *v47; // [rsp+18h] [rbp-160h]
  __int64 v48; // [rsp+20h] [rbp-158h]
  __int64 v49; // [rsp+20h] [rbp-158h]
  _QWORD *v50; // [rsp+28h] [rbp-150h]
  __int64 v51; // [rsp+28h] [rbp-150h]
  int v52[2]; // [rsp+30h] [rbp-148h]
  __int64 v53; // [rsp+38h] [rbp-140h]
  __int64 v54; // [rsp+40h] [rbp-138h]
  void *v55; // [rsp+48h] [rbp-130h]
  __int64 v56; // [rsp+58h] [rbp-120h] BYREF
  __int64 v57; // [rsp+60h] [rbp-118h] BYREF
  __int64 v58; // [rsp+68h] [rbp-110h] BYREF
  __int64 v59; // [rsp+70h] [rbp-108h] BYREF
  __int64 v60; // [rsp+78h] [rbp-100h] BYREF
  __int64 v61; // [rsp+80h] [rbp-F8h] BYREF
  unsigned int *v62; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v63; // [rsp+90h] [rbp-E8h] BYREF
  unsigned int *v64; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-D8h] BYREF
  int v66[2]; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v67[2]; // [rsp+B0h] [rbp-C8h] BYREF
  _QWORD v68[3]; // [rsp+C0h] [rbp-B8h] BYREF
  void *v69; // [rsp+D8h] [rbp-A0h]
  __int64 v70; // [rsp+E8h] [rbp-90h]
  void *ptr; // [rsp+F0h] [rbp-88h]
  _BYTE v72[120]; // [rsp+100h] [rbp-78h] BYREF

  v5 = *a1;
  v47 = a1;
  LODWORD(v54) = a3;
  LODWORD(v53) = a4;
  v63 = v5;
  v39 = v72;
  sub_15B8F20(v72, v5);
  v6 = *a2;
  v68[2] = 0;
  v69 = nullptr;
  v70 = 0;
  v68[0] = &off_1C62200;
  ptr = nullptr;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v7 = (_QWORD *)sub_186B270(0x18u);
  v7[1] = v6;
  v8 = (unsigned int *)(v7 + 1);
  v9 = nullptr;
  *v7 = 0x100000002LL;
  v10 = 1;
  while ( 2 )
  {
    v11 = *(_QWORD *)&v8[2 * (v10 - 1)];
    v12 = v10 - 1;
    v48 = v11;
    if ( *(_WORD *)(v11 + 4) )
    {
      *(v8 - 1) = v12;
      v40 = *(_DWORD *)(v11 + 8);
      *(_DWORD *)(v11 + 8) = v40 - 1;
      if ( v40 != 1 )
        goto LABEL_7;
      goto LABEL_18;
    }
    if ( (unsigned __int8)sub_15D37A0(v68, v11) )
    {
      v15 = *(v8 - 1) - 1;
      v16 = *(_QWORD *)&v8[2 * v15];
      *(v8 - 1) = v15;
      v48 = v16;
      if ( !v16 )
        goto LABEL_7;
      v41 = *(_DWORD *)(v16 + 8);
      *(_DWORD *)(v16 + 8) = v41 - 1;
      if ( v41 != 1 )
        goto LABEL_7;
LABEL_18:
      sub_15D7BC0(v5, v48);
      goto LABEL_7;
    }
    v42 = *v47;
    v65 = *v47;
    v23 = (_QWORD *)(v11 + 32);
    v24 = 8LL * *(unsigned int *)(v11 + 24);
    v50 = (_QWORD *)(v11 + 32 + v24);
    if ( !v24 )
    {
      HIBYTE(v55) = 0;
      v31 = sub_15DC610(
              v42,
              *(_QWORD *)(v11 + 16),
              0,
              0,
              v13,
              v14,
              (int)v39,
              v42,
              *(_QWORD *)(v11 + 16),
              (int)v47,
              v11,
              (char)v50,
              0,
              v53,
              v54,
              v55);
      goto LABEL_34;
    }
    HIBYTE(v55) = 0;
    *(_QWORD *)v52 = 0;
    v45 = 1;
    do
    {
      while ( 1 )
      {
        *(_QWORD *)v43 = *v23;
        v28 = *v23;
        if ( !(unsigned __int8)sub_15D37A0(v68, *v23) )
        {
          v57 = *(_QWORD *)v43;
          if ( *(_QWORD *)v43 )
            ++*(_DWORD *)(*(_QWORD *)v43 + 8LL);
          v61 = v5;
          v62 = v8;
          sub_3E6950(&v62, &v57);
          v45 = 0;
          v5 = v61;
          v8 = v62;
          goto LABEL_29;
        }
        if ( v45 )
          break;
        v45 = 0;
LABEL_29:
        if ( v50 == ++v23 )
          goto LABEL_30;
      }
      v59 = 0;
      v60 = 0;
      sub_15B97F0(v39, v28, &v60, &v59);
      v25 = v60;
      if ( v60 )
      {
        ++*(_DWORD *)(v60 + 8);
        v58 = v25;
        *(_QWORD *)v66 = *(_QWORD *)v52;
        sub_3E6950((unsigned int **)v66, &v58);
        *(_QWORD *)v52 = *(_QWORD *)v66;
        HIBYTE(v55) = v45;
      }
      else
      {
        v67[0] = *(_QWORD *)v43;
        if ( *(_QWORD *)v43 )
          ++*(_DWORD *)(*(_QWORD *)v43 + 8LL);
        *(_QWORD *)v66 = *(_QWORD *)v52;
        sub_3E6950((unsigned int **)v66, v67);
        *(_QWORD *)v52 = *(_QWORD *)v66;
      }
      ++v23;
    }
    while ( v50 != v23 );
LABEL_30:
    if ( !v45 )
      goto LABEL_52;
    if ( *(_QWORD *)v52 )
    {
      v29 = *(_DWORD *)(*(_QWORD *)v52 - 4LL);
      v30 = v52[0];
    }
    else
    {
      v29 = 0;
      v30 = 0;
    }
    v31 = sub_15DC610(
            *v47,
            *(_QWORD *)(v48 + 16),
            v29,
            v30,
            v26,
            v27,
            (int)v39,
            *v47,
            *(_QWORD *)(v48 + 16),
            (int)v47,
            v48,
            (char)v50,
            v52[0],
            v53,
            v54,
            v55);
LABEL_34:
    v32 = v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    if ( !*(_WORD *)(v49 + 4)
      && (v33 = *(_DWORD **)(*(_QWORD *)(v49 + 16) + 24LL)) != nullptr
      && *v33 == 5
      && v33[1] == 16 )
    {
      v51 = *v47;
      v34 = sub_3EC0E0(*v47);
      v46 = v34;
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      v35 = sub_15E1B70(*v47);
      v59 = v35;
      if ( v35 )
        ++*(_DWORD *)(v35 + 8);
      v64 = v9;
      sub_3E6950(&v64, &v59);
      v9 = v64;
      sub_1374250(v67, v53, v32);
      if ( v46 )
      {
        ++*(_DWORD *)(v46 + 8);
        sub_3E5D20(v32, v44);
        v60 = v46;
        ++*(_DWORD *)(v46 + 8);
      }
      else
      {
        sub_3E5D20(v32, v44);
        v60 = 0;
      }
      sub_3E6540((_QWORD *)(v54 + 8), &v60);
      v32 = v46;
      sub_135F9B0(v53, *(_QWORD *)(v46 + 16), v67[0]);
      sub_3E5D20(v67[0], v67[1]);
      sub_3E5D00(v46, v51);
LABEL_47:
      sub_15B9070(v39, v49, v32, 0);
    }
    else if ( HIBYTE(v55) )
    {
      goto LABEL_47;
    }
    sub_15D0A90(v68, v49, 1);
    v36 = *(v8 - 1) - 1;
    v37 = *(_QWORD *)&v8[2 * v36];
    *(v8 - 1) = v36;
    if ( !v37 )
    {
      sub_3E5D20(v32, v44);
      *(_QWORD *)v66 = *(_QWORD *)v52;
      sub_2334C0(&v65);
      goto LABEL_7;
    }
    if ( (*(_DWORD *)(v37 + 8))-- == 1 )
      sub_15D7BC0(v5, v37);
    sub_3E5D20(v32, v44);
LABEL_52:
    *(_QWORD *)v66 = *(_QWORD *)v52;
    sub_2334C0(&v65);
    if ( v8 )
    {
LABEL_7:
      v10 = *(v8 - 1);
      if ( !v10 )
        break;
      continue;
    }
    break;
  }
  v17 = *a2;
  v56 = 0;
  v65 = 0;
  sub_15B97F0(v39, v17, &v65, &v56);
  v18 = v65;
  if ( v65 )
  {
    ++*(_DWORD *)(v65 + 8);
    sub_3E5D20(*a2, a2[1]);
    *a2 = v18;
    v19 = *v47;
    sub_15E1AF0(*v47);
    v20 = sub_15E1B70(v19);
    v21 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    sub_3E5D20(*a2, a2[1]);
    *a2 = v21;
  }
  v68[0] = &off_1C62200;
  if ( ptr )
    sub_186B220(ptr);
  if ( v69 )
    sub_186B220(v69);
  sub_15BA200(v39);
  v64 = v9;
  sub_2334C0(&v63);
  v61 = v5;
  v62 = v8;
  return sub_2334C0(&v61);
}

