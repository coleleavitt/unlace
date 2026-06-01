__int64 __fastcall sub_47B040(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rsi
  unsigned int v6; // ebp
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // r12
  void *v10; // rdi
  __int64 *v11; // rbx
  unsigned __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  _QWORD *v16; // rbx
  __int64 v17; // rax
  _QWORD *v18; // r12
  void *v19; // rdi
  __int64 *v20; // rbx
  unsigned __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  _QWORD *v24; // rbx
  __int64 v25; // rax
  _QWORD *v26; // r12
  void *v27; // rdi
  __int64 *v28; // rbx
  unsigned __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdi
  _QWORD *v32; // rbx
  __int64 v33; // rax
  _QWORD *v34; // r12
  void *v35; // rdi
  __int64 *v36; // rbx
  unsigned __int64 v37; // r12
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 *v42; // rbx
  unsigned __int64 v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v47; // [rsp+0h] [rbp-178h] BYREF
  __int64 v48; // [rsp+8h] [rbp-170h]
  int v49; // [rsp+10h] [rbp-168h] BYREF
  __int64 v50; // [rsp+18h] [rbp-160h]
  __int64 *v51; // [rsp+20h] [rbp-158h]
  __int64 v52; // [rsp+28h] [rbp-150h]
  void *ptr; // [rsp+30h] [rbp-148h]
  __int64 v54; // [rsp+38h] [rbp-140h]
  __int64 v55; // [rsp+48h] [rbp-130h]
  __int64 v56; // [rsp+50h] [rbp-128h] BYREF
  __int64 v57; // [rsp+58h] [rbp-120h]
  __int64 v58; // [rsp+70h] [rbp-108h]
  __int64 v59; // [rsp+78h] [rbp-100h]
  __int64 *v60; // [rsp+80h] [rbp-F8h]
  __int64 v61; // [rsp+88h] [rbp-F0h]
  __int64 v62; // [rsp+90h] [rbp-E8h]
  _QWORD *v63; // [rsp+98h] [rbp-E0h]
  __int64 v64; // [rsp+A8h] [rbp-D0h]
  __int64 *v65; // [rsp+B0h] [rbp-C8h]
  _QWORD *v66; // [rsp+B8h] [rbp-C0h]
  __int64 v67; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-A0h]
  __int64 v69; // [rsp+F0h] [rbp-88h]
  __int64 v70; // [rsp+F8h] [rbp-80h]
  __int64 *v71; // [rsp+100h] [rbp-78h]
  __int64 v72; // [rsp+108h] [rbp-70h]
  __int64 v73; // [rsp+110h] [rbp-68h]
  _QWORD *v74; // [rsp+118h] [rbp-60h]
  __int64 v75; // [rsp+128h] [rbp-50h]
  __int64 *v76; // [rsp+130h] [rbp-48h]
  _QWORD *v77; // [rsp+138h] [rbp-40h]

  sub_4B26F0(&v49, *(_QWORD *)(a1 + 32));
  v5 = *(_QWORD *)(a1 + 32);
  v47 = 0;
  v48 = v5;
  sub_FA3A80(&v56, v5);
  sub_FA3A80(&v67, *(_QWORD *)(a1 + 32));
  sub_4B2D50(
    (unsigned int)&v49,
    *a2,
    *a3,
    (unsigned int)&v47,
    (unsigned int)&v56,
    (unsigned int)&v67,
    0,
    v5,
    v49,
    v50,
    (_DWORD)v51,
    v52,
    (__int64)ptr,
    v54);
  v6 = sub_3D4C80(&v56);
  if ( (_BYTE)v6 )
    v6 = sub_3D4C80(&v67);
  v7 = v77;
  if ( v77 )
  {
    v8 = *((unsigned int *)v77 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = &v77[v8];
      do
      {
        while ( *v7 )
        {
          v10 = (void *)(*v7++ - 8LL);
          sub_186B220(v10);
          if ( v7 == v9 )
          {
            v7 = v77;
            goto LABEL_9;
          }
        }
        ++v7;
      }
      while ( v7 != v9 );
      v7 = v77;
    }
LABEL_9:
    sub_186B220(v7 - 1);
  }
  v11 = v76;
  if ( v76 )
  {
    v12 = (unsigned __int64)&v76[*((unsigned int *)v76 - 1)];
    if ( (unsigned __int64)v76 >= v12 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = v75;
          v15 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( (unsigned __int64)++v11 >= v12 )
          goto LABEL_17;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( (unsigned __int64)v11 < v12 );
LABEL_17:
    v11 = v76;
    if ( v76 )
LABEL_18:
      sub_186B220(v11 - 1);
  }
  v16 = v74;
  if ( v74 )
  {
    v17 = *((unsigned int *)v74 - 1);
    if ( (_DWORD)v17 )
    {
      v18 = &v74[v17];
      do
      {
        while ( *v16 )
        {
          v19 = (void *)(*v16++ - 8LL);
          sub_186B220(v19);
          if ( v18 == v16 )
          {
            v16 = v74;
            goto LABEL_25;
          }
        }
        ++v16;
      }
      while ( v16 != v18 );
      v16 = v74;
    }
LABEL_25:
    sub_186B220(v16 - 1);
  }
  if ( v73 )
    sub_186B220((void *)(v73 - 8));
  if ( v72 )
    sub_186B220((void *)(v72 - 8));
  v20 = v71;
  if ( v71 )
  {
    v21 = (unsigned __int64)&v71[*((unsigned int *)v71 - 1)];
    if ( (unsigned __int64)v71 >= v21 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = v70;
          v15 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( (unsigned __int64)++v20 >= v21 )
          goto LABEL_37;
      }
      sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( (unsigned __int64)v20 < v21 );
LABEL_37:
    v20 = v71;
    if ( v71 )
LABEL_38:
      sub_186B220(v20 - 1);
  }
  if ( v69 )
    sub_186B220((void *)(v69 - 8));
  if ( v68 )
    sub_186B220((void *)(v68 - 8));
  v24 = v66;
  if ( v66 )
  {
    v25 = *((unsigned int *)v66 - 1);
    if ( (_DWORD)v25 )
    {
      v26 = &v66[v25];
      do
      {
        while ( *v24 )
        {
          v27 = (void *)(*v24++ - 8LL);
          sub_186B220(v27);
          if ( v26 == v24 )
          {
            v24 = v66;
            goto LABEL_49;
          }
        }
        ++v24;
      }
      while ( v24 != v26 );
      v24 = v66;
    }
LABEL_49:
    sub_186B220(v24 - 1);
  }
  v28 = v65;
  if ( v65 )
  {
    v29 = (unsigned __int64)&v65[*((unsigned int *)v65 - 1)];
    if ( (unsigned __int64)v65 >= v29 )
      goto LABEL_58;
    do
    {
      while ( 1 )
      {
        v30 = *v28;
        if ( *v28 )
        {
          v31 = v64;
          v15 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( (unsigned __int64)++v28 >= v29 )
          goto LABEL_57;
      }
      sub_15D7BC0(v31, v30);
      ++v28;
    }
    while ( (unsigned __int64)v28 < v29 );
LABEL_57:
    v28 = v65;
    if ( v65 )
LABEL_58:
      sub_186B220(v28 - 1);
  }
  v32 = v63;
  if ( v63 )
  {
    v33 = *((unsigned int *)v63 - 1);
    if ( (_DWORD)v33 )
    {
      v34 = &v63[v33];
      do
      {
        while ( *v32 )
        {
          v35 = (void *)(*v32++ - 8LL);
          sub_186B220(v35);
          if ( v34 == v32 )
          {
            v32 = v63;
            goto LABEL_65;
          }
        }
        ++v32;
      }
      while ( v32 != v34 );
      v32 = v63;
    }
LABEL_65:
    sub_186B220(v32 - 1);
  }
  if ( v62 )
    sub_186B220((void *)(v62 - 8));
  if ( v61 )
    sub_186B220((void *)(v61 - 8));
  v36 = v60;
  if ( v60 )
  {
    v37 = (unsigned __int64)&v60[*((unsigned int *)v60 - 1)];
    if ( (unsigned __int64)v60 >= v37 )
      goto LABEL_78;
    do
    {
      while ( 1 )
      {
        v38 = *v36;
        if ( *v36 )
        {
          v39 = v59;
          v15 = (*(_DWORD *)(v38 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( (unsigned __int64)++v36 >= v37 )
          goto LABEL_77;
      }
      sub_15D7BC0(v39, v38);
      ++v36;
    }
    while ( (unsigned __int64)v36 < v37 );
LABEL_77:
    v36 = v60;
    if ( v60 )
LABEL_78:
      sub_186B220(v36 - 1);
  }
  if ( v58 )
    sub_186B220((void *)(v58 - 8));
  if ( v57 )
    sub_186B220((void *)(v57 - 8));
  v40 = v47;
  if ( v47 )
  {
    v41 = v48;
    v15 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v41, v40);
  }
  if ( v55 )
    sub_186B220((void *)(v55 - 8));
  if ( ptr )
    sub_186B220(ptr);
  if ( v52 )
    sub_186B220((void *)(v52 - 8));
  v42 = v51;
  if ( v51 )
  {
    v43 = (unsigned __int64)&v51[*((unsigned int *)v51 - 1)];
    if ( (unsigned __int64)v51 >= v43 )
      goto LABEL_100;
    do
    {
      while ( 1 )
      {
        v44 = *v42;
        if ( *v42 )
        {
          v45 = v50;
          v15 = (*(_DWORD *)(v44 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( (unsigned __int64)++v42 >= v43 )
          goto LABEL_99;
      }
      sub_15D7BC0(v45, v44);
      ++v42;
    }
    while ( (unsigned __int64)v42 < v43 );
LABEL_99:
    v42 = v51;
    if ( v51 )
LABEL_100:
      sub_186B220(v42 - 1);
  }
  return v6;
}

