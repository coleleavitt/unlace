void __fastcall sub_B85C90(__int64 *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  int *v7; // rax
  int v8; // ecx
  __int64 *v9; // r12
  void **v10; // r12
  void **v11; // rbx
  void **v12; // r12
  void **v13; // rbx
  char *v14; // rbx
  char *v15; // rdi
  char *v16; // r12
  char *v17; // rdi
  void **v18; // r12
  void **v19; // rbx
  void **v20; // r12
  void **v21; // rbx
  void **v22; // r12
  void **v23; // rbx
  void **v24; // rbp
  void **v25; // rbx
  void **v26; // rbp
  void **v27; // rbx
  void **v28; // rbp
  void **v29; // rbx
  void **v30; // rbp
  void **v31; // rbx
  void **v32; // rbp
  void **v33; // rbx
  _BYTE *v34; // rax
  __int64 v35; // rdx
  unsigned __int128 v36; // [rsp+0h] [rbp-3C8h] BYREF
  __int64 v37; // [rsp+18h] [rbp-3B0h] BYREF
  void *v38[2]; // [rsp+20h] [rbp-3A8h] BYREF
  __int64 v39; // [rsp+30h] [rbp-398h] BYREF
  char v40[248]; // [rsp+40h] [rbp-388h] BYREF
  void *v41; // [rsp+138h] [rbp-290h]
  void **v42; // [rsp+140h] [rbp-288h]
  void *v43; // [rsp+150h] [rbp-278h]
  void **v44; // [rsp+158h] [rbp-270h]
  void *v45; // [rsp+168h] [rbp-260h]
  void **v46; // [rsp+170h] [rbp-258h]
  void *v47; // [rsp+180h] [rbp-248h]
  void **v48; // [rsp+188h] [rbp-240h]
  void *v49; // [rsp+198h] [rbp-230h]
  void **v50; // [rsp+1A0h] [rbp-228h]
  void *v51; // [rsp+1C8h] [rbp-200h]
  __int64 v52; // [rsp+1D8h] [rbp-1F0h] BYREF
  void *v53; // [rsp+1E8h] [rbp-1E0h]
  __int64 v54; // [rsp+1F8h] [rbp-1D0h] BYREF
  void *v55; // [rsp+208h] [rbp-1C0h]
  __int64 v56; // [rsp+218h] [rbp-1B0h] BYREF
  void *v57; // [rsp+228h] [rbp-1A0h]
  __int64 v58; // [rsp+238h] [rbp-190h] BYREF
  void *v59; // [rsp+248h] [rbp-180h]
  void **v60; // [rsp+250h] [rbp-178h]
  void *v61; // [rsp+260h] [rbp-168h]
  void **v62; // [rsp+268h] [rbp-160h]
  void *v63; // [rsp+280h] [rbp-148h]
  void **v64; // [rsp+288h] [rbp-140h]
  __int64 v65; // [rsp+298h] [rbp-130h] BYREF
  void *v66; // [rsp+2A8h] [rbp-120h]
  void *v67; // [rsp+2C8h] [rbp-100h]
  void **v68; // [rsp+2D0h] [rbp-F8h]
  void *v69; // [rsp+2E0h] [rbp-E8h]
  __int64 v70; // [rsp+2F0h] [rbp-D8h] BYREF
  void *v71; // [rsp+300h] [rbp-C8h]
  __int64 v72; // [rsp+310h] [rbp-B8h] BYREF
  void *v73; // [rsp+338h] [rbp-90h]
  void **v74; // [rsp+340h] [rbp-88h]
  void *v75; // [rsp+350h] [rbp-78h]
  __int64 v76; // [rsp+360h] [rbp-68h] BYREF
  void *v77; // [rsp+378h] [rbp-50h]
  __int64 v78; // [rsp+388h] [rbp-40h] BYREF

  v5 = *a1;
  v36 = __PAIR128__(a4, a3);
  v6 = v5 & 7;
  if ( (_DWORD)v6 != 7 )
  {
    if ( ((1LL << v6) & 0xF47) == 0 )
    {
      v9 = (__int64 *)a1[2];
      if ( v9 )
      {
        if ( (_DWORD)v6 == 4 )
        {
          v34 = *(_BYTE **)(a2 + 32);
          if ( (unsigned __int64)v34 >= *(_QWORD *)(a2 + 24) )
          {
            sub_227BA10(a2, 126);
          }
          else
          {
            *(_QWORD *)(a2 + 32) = v34 + 1;
            *v34 = 126;
          }
        }
        else if ( (_DWORD)v6 == 5 )
        {
          v35 = *(_QWORD *)(a2 + 32);
          if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v35) > 8 )
          {
            *(_BYTE *)(v35 + 8) = 32;
            *(_QWORD *)v35 = 0x726F74617265706FLL;
            *(_QWORD *)(a2 + 32) += 9LL;
          }
          else
          {
            sub_227BF10(a2, "operator ", 9);
          }
        }
        goto LABEL_6;
      }
    }
LABEL_34:
    sub_B84F80(a1, a2, (const __m128i *)&v36, v6, a5);
    return;
  }
  v7 = (int *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  v8 = 3;
  if ( (unsigned int)*v7 <= 3 )
    v8 = *v7;
  v6 = (unsigned int)(v8 + 8);
  if ( ((1LL << v6) & 0xF47) != 0 )
    goto LABEL_34;
  v9 = (__int64 *)a1[2];
  if ( !v9 )
    goto LABEL_34;
LABEL_6:
  sub_FEA220(v40);
  LODWORD(v36) = v36 & 0xDF7FF5FF | 0x800A00;
  v37 = *v9;
  sub_F785A0(v38, &v37, &v36);
  sub_227BF10(a2, v38[0], v38[1]);
  if ( v38[0] != &v39 )
    operator delete(v38[0]);
  if ( v77 != &v78 )
    operator delete(v77);
  if ( v75 != &v76 )
    operator delete(v75);
  v10 = v74;
  v11 = (void **)v73;
  if ( v74 != v73 )
  {
    do
    {
      while ( *v11 != v11 + 2 )
      {
        operator delete(*v11);
        v11 += 4;
        if ( v10 == v11 )
          goto LABEL_15;
      }
      v11 += 4;
    }
    while ( v10 != v11 );
LABEL_15:
    v11 = (void **)v73;
  }
  if ( v11 )
    operator delete(v11);
  if ( v71 != &v72 )
    operator delete(v71);
  if ( v69 != &v70 )
    operator delete(v69);
  v12 = v68;
  v13 = (void **)v67;
  if ( v68 != v67 )
  {
    do
    {
      while ( *v13 != v13 + 2 )
      {
        operator delete(*v13);
        v13 += 7;
        if ( v12 == v13 )
          goto LABEL_25;
      }
      v13 += 7;
    }
    while ( v12 != v13 );
LABEL_25:
    v13 = (void **)v67;
  }
  if ( v13 )
    operator delete(v13);
  v14 = (char *)v66;
  if ( v66 )
  {
    while ( 1 )
    {
      sub_998560((__int64)&v65, *((_QWORD **)v14 + 3));
      v15 = *((char **)v14 + 8);
      v16 = *((char **)v14 + 2);
      if ( v15 != v14 + 80 )
        operator delete(v15);
      v17 = *((char **)v14 + 4);
      if ( v17 == v14 + 48 )
      {
        operator delete(v14);
        if ( !v16 )
          break;
      }
      else
      {
        operator delete(v17);
        operator delete(v14);
        if ( !v16 )
          break;
      }
      v14 = v16;
    }
  }
  v18 = v64;
  v19 = (void **)v63;
  if ( v64 != v63 )
  {
    do
    {
      while ( *v19 != v19 + 2 )
      {
        operator delete(*v19);
        v19 += 4;
        if ( v19 == v18 )
          goto LABEL_44;
      }
      v19 += 4;
    }
    while ( v18 != v19 );
LABEL_44:
    v19 = (void **)v63;
  }
  if ( v19 )
    operator delete(v19);
  v20 = v62;
  v21 = (void **)v61;
  if ( v62 != v61 )
  {
    do
    {
      while ( *v21 != v21 + 2 )
      {
        operator delete(*v21);
        v21 += 4;
        if ( v20 == v21 )
          goto LABEL_50;
      }
      v21 += 4;
    }
    while ( v20 != v21 );
LABEL_50:
    v21 = (void **)v61;
  }
  if ( v21 )
    operator delete(v21);
  v22 = v60;
  v23 = (void **)v59;
  if ( v60 != v59 )
  {
    do
    {
      while ( *v23 != v23 + 2 )
      {
        operator delete(*v23);
        v23 += 4;
        if ( v22 == v23 )
          goto LABEL_56;
      }
      v23 += 4;
    }
    while ( v22 != v23 );
LABEL_56:
    v23 = (void **)v59;
  }
  if ( v23 )
    operator delete(v23);
  if ( v57 != &v58 )
    operator delete(v57);
  if ( v55 != &v56 )
    operator delete(v55);
  if ( v53 != &v54 )
    operator delete(v53);
  if ( v51 != &v52 )
    operator delete(v51);
  v24 = v50;
  v25 = (void **)v49;
  if ( v50 != v49 )
  {
    do
    {
      while ( *v25 != v25 + 2 )
      {
        operator delete(*v25);
        v25 += 4;
        if ( v25 == v24 )
          goto LABEL_70;
      }
      v25 += 4;
    }
    while ( v24 != v25 );
LABEL_70:
    v25 = (void **)v49;
  }
  if ( v25 )
    operator delete(v25);
  v26 = v48;
  v27 = (void **)v47;
  if ( v48 != v47 )
  {
    do
    {
      while ( *v27 != v27 + 2 )
      {
        operator delete(*v27);
        v27 += 4;
        if ( v27 == v26 )
          goto LABEL_76;
      }
      v27 += 4;
    }
    while ( v26 != v27 );
LABEL_76:
    v27 = (void **)v47;
  }
  if ( v27 )
    operator delete(v27);
  v28 = v46;
  v29 = (void **)v45;
  if ( v46 != v45 )
  {
    do
    {
      while ( *v29 != v29 + 2 )
      {
        operator delete(*v29);
        v29 += 4;
        if ( v29 == v28 )
          goto LABEL_82;
      }
      v29 += 4;
    }
    while ( v28 != v29 );
LABEL_82:
    v29 = (void **)v45;
  }
  if ( v29 )
    operator delete(v29);
  v30 = v44;
  v31 = (void **)v43;
  if ( v44 != v43 )
  {
    do
    {
      while ( *v31 != v31 + 2 )
      {
        operator delete(*v31);
        v31 += 4;
        if ( v30 == v31 )
          goto LABEL_88;
      }
      v31 += 4;
    }
    while ( v30 != v31 );
LABEL_88:
    v31 = (void **)v43;
  }
  if ( v31 )
    operator delete(v31);
  v32 = v42;
  v33 = (void **)v41;
  if ( v42 != v41 )
  {
    do
    {
      while ( *v33 != v33 + 2 )
      {
        operator delete(*v33);
        v33 += 4;
        if ( v33 == v32 )
          goto LABEL_94;
      }
      v33 += 4;
    }
    while ( v32 != v33 );
LABEL_94:
    v33 = (void **)v41;
  }
  if ( v33 )
    operator delete(v33);
}
