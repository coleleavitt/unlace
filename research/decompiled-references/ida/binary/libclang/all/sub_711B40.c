__int64 __fastcall sub_711B40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 *v8; // rbx
  __int64 *v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  char *v12; // rbx
  int v13; // eax
  unsigned __int64 v14; // rsi
  char v15; // al
  char *v16; // rdi
  char *v17; // r15
  _QWORD *v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rsi
  _QWORD *v21; // r15
  __int64 v22; // r14
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // r9
  char v27; // al
  char *v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rbp
  __int64 v31; // rcx
  int v32; // esi
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rsi
  _BYTE *v35; // rcx
  _BYTE *v36; // r8
  unsigned __int64 v37; // rax
  char *v38; // r8
  unsigned __int64 v39; // r14
  _BYTE *v40; // rcx
  _BYTE *v41; // r15
  unsigned __int64 v42; // rax
  _BYTE *v43; // r15
  char *v44; // rbx
  _QWORD *v45; // rax
  _QWORD *v46; // rdi
  int v47; // eax
  unsigned __int64 v48; // rsi
  void *v49; // rax
  _QWORD *v51; // rdi
  __int64 v52; // [rsp+8h] [rbp-A0h]
  char *v53; // [rsp+8h] [rbp-A0h]
  _QWORD *v54; // [rsp+10h] [rbp-98h]
  char *v55; // [rsp+18h] [rbp-90h]
  char *v56; // [rsp+28h] [rbp-80h]
  _QWORD *v57; // [rsp+30h] [rbp-78h]
  unsigned __int64 v58; // [rsp+38h] [rbp-70h]
  _QWORD v59[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v60; // [rsp+50h] [rbp-58h]
  unsigned __int64 v61; // [rsp+58h] [rbp-50h]
  _QWORD v62[9]; // [rsp+60h] [rbp-48h] BYREF

  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 25 > 1 )
    v6 = sub_B0D320(v6);
  v7 = 0;
  sub_710580(a2, *(_QWORD *)(v6 + 24), (_QWORD *)a1, 7, 0, nullptr);
  v8 = *(__int64 **)(a3 + 120);
  v9 = &v8[(unsigned int)sub_77F620(a3)];
  if ( v8 == v9 )
    goto LABEL_42;
  do
  {
    v10 = *v8++;
    v7 += sub_70E310(a2, *(_QWORD *)(v10 + 48));
  }
  while ( v9 != v8 );
  v11 = v7;
  if ( v7 >= 0 )
  {
    if ( v7 )
    {
      v12 = (char *)v62 + 5;
      do
      {
        --v12;
        v13 = v11 % 0xA;
        v14 = v11;
        v11 /= 0xAu;
        v15 = v13 + 48;
        *v12 = v15;
      }
      while ( v14 > 9 );
      v16 = (char *)((char *)v62 + 5 - v12);
      v57 = v59;
      v17 = (char *)((char *)v62 + 5 - v12);
      if ( (unsigned __int64)((char *)v62 + 5 - v12) > 0xF )
      {
        v57 = (_QWORD *)std::string::_M_create();
        v18 = v57;
        v59[0] = (char *)v62 + 5 - v12;
LABEL_11:
        memcpy(v18, v12, (size_t)v17);
        v17 = (char *)((char *)v62 + 5 - v12);
        v19 = v57;
LABEL_12:
        v58 = (unsigned __int64)v17;
        v17[(_QWORD)v19] = 0;
        goto LABEL_13;
      }
      if ( v16 != (_BYTE *)&dword_0 + 1 )
      {
        if ( v16 )
        {
          v18 = v59;
          goto LABEL_11;
        }
LABEL_44:
        v19 = v59;
        goto LABEL_12;
      }
LABEL_43:
      LOBYTE(v59[0]) = v15;
      v17 = (_BYTE *)(&dword_0 + 1);
      goto LABEL_44;
    }
LABEL_42:
    v15 = 48;
    v57 = v59;
    goto LABEL_43;
  }
  v39 = -v7;
  v40 = (char *)v62 + 5;
  do
  {
    v41 = v40--;
    *v40 = v39 % 0xA + 48;
    v42 = v39;
    v39 /= 0xAu;
  }
  while ( v42 > 9 );
  v43 = v41 - 2;
  *(v40 - 1) = 45;
  v44 = (char *)((char *)v62 + 5 - v43);
  v57 = v59;
  if ( (unsigned __int64)((char *)v62 + 5 - v43) > 0xF )
  {
    v57 = (_QWORD *)std::string::_M_create();
    v51 = v57;
    v59[0] = (char *)v62 + 5 - v43;
    goto LABEL_65;
  }
  if ( v44 != (_BYTE *)&dword_0 + 1 )
  {
    if ( !v44 )
      goto LABEL_40;
    v51 = v59;
LABEL_65:
    memcpy(v51, v43, (size_t)v44);
    v44 = (char *)((char *)v62 + 5 - v43);
    v45 = v57;
    goto LABEL_41;
  }
  LOBYTE(v59[0]) = 45;
LABEL_40:
  v45 = v59;
LABEL_41:
  v58 = (unsigned __int64)v44;
  v44[(_QWORD)v45] = 0;
LABEL_13:
  v20 = (__int64)v57;
  if ( 0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8) < v58 )
LABEL_66:
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( v57 != v59 )
  {
    v20 = v59[0] + 1LL;
    operator delete(v57, v59[0] + 1LL);
  }
  v21 = *(_QWORD **)(a3 + 120);
  v22 = 0;
  v23 = sub_77F620(a3);
  v26 = v62;
  if ( &v21[v23] != v21 )
  {
    v54 = &v21[v23];
    do
    {
      v52 = *v21;
      v30 = sub_77D460(*v21, v20, *v21, v24, v25, v26);
      v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v32 = *(unsigned __int8 *)(v31 + 16);
      if ( (_BYTE)v32 != 2
        && ((unsigned __int8)(*(_BYTE *)(v31 + 16) - 4) <= 2u
         || v32 != 3 && (unsigned int)*(unsigned __int8 *)(v31 + 16) - 25 <= 1) )
      {
        v30 = *(_QWORD *)(v52 + 48);
      }
      sub_710580(a2, v30, (_QWORD *)a1, 7, 0, nullptr);
      v33 = v22;
      if ( v22 >= 0 )
      {
        if ( !v22 )
        {
          v60 = v62;
          v27 = 48;
LABEL_20:
          LOBYTE(v62[0]) = v27;
          v28 = (_BYTE *)(&dword_0 + 1);
          goto LABEL_21;
        }
        v38 = (char *)v59 + 5;
        do
        {
          --v38;
          v47 = v33 % 0xA;
          v48 = v33;
          v33 /= 0xAu;
          v27 = v47 + 48;
          *v38 = v27;
        }
        while ( v48 > 9 );
        v60 = v62;
        v61 = 0;
        v28 = (char *)((char *)v59 + 5 - v38);
        v56 = (char *)((char *)v59 + 5 - v38);
        if ( (unsigned __int64)((char *)v59 + 5 - v38) > 0xF )
        {
          v53 = v38;
          v55 = (char *)((char *)v59 + 5 - v38);
          goto LABEL_52;
        }
        if ( (char *)v59 + 5 - v38 == 1 )
          goto LABEL_20;
      }
      else
      {
        v34 = -v22;
        v35 = (char *)v59 + 5;
        do
        {
          v36 = v35--;
          *v35 = v34 % 0xA + 48;
          v37 = v34;
          v34 /= 0xAu;
        }
        while ( v37 > 9 );
        v38 = v36 - 2;
        *(v35 - 1) = 45;
        v60 = v62;
        v61 = 0;
        v28 = (char *)((char *)v59 + 5 - v38);
        v56 = (char *)((char *)v59 + 5 - v38);
        if ( (unsigned __int64)((char *)v59 + 5 - v38) > 0xF )
        {
          v55 = (char *)((char *)v59 + 5 - v38);
          v53 = v38;
LABEL_52:
          v49 = (void *)std::string::_M_create();
          v38 = v53;
          v28 = v55;
          v60 = v49;
          v46 = v49;
          v62[0] = v56;
LABEL_53:
          memcpy(v46, v38, (size_t)v28);
          v28 = v56;
          v29 = v60;
          goto LABEL_22;
        }
        if ( (char *)v59 + 5 - v38 == 1 )
        {
          LOBYTE(v62[0]) = 45;
          goto LABEL_21;
        }
      }
      if ( v28 )
      {
        v46 = v62;
        goto LABEL_53;
      }
LABEL_21:
      v29 = v62;
LABEL_22:
      v61 = (unsigned __int64)v28;
      v28[(_QWORD)v29] = 0;
      if ( 0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8) < v61 )
        goto LABEL_66;
      std::string::_M_append();
      if ( v60 != v62 )
        operator delete(v60, v62[0] + 1LL);
      v20 = v30;
      ++v21;
      v22 += sub_70E310(a2, v30);
    }
    while ( v54 != v21 );
  }
  return a1;
}

