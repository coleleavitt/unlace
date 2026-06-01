__int64 __fastcall sub_1195D60(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  char *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  _BYTE *v7; // r14
  size_t v8; // rbp
  _BYTE *v9; // rax
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rbp
  void **v12; // rbp
  void **v13; // rbx
  size_t v15; // rbp
  _BYTE *v16; // r14
  size_t v17; // rbp
  _BYTE *v18; // rax
  unsigned __int64 v19; // rdx
  void **v20; // rbp
  size_t v21; // rcx
  _BYTE *v22; // r14
  void **v23; // rbp
  size_t v24; // r14
  _BYTE *v25; // rdx
  size_t v26; // r10
  unsigned __int64 v27; // rcx
  void **v28; // r14
  size_t v29; // rcx
  _BYTE *v30; // r14
  size_t v31; // r14
  _BYTE *v32; // rdx
  size_t v33; // r10
  unsigned __int64 v34; // rcx
  int v35; // eax
  void **v36; // r15
  int v37; // eax
  char *v38; // [rsp+10h] [rbp-F8h]
  size_t v39; // [rsp+18h] [rbp-F0h]
  size_t v40; // [rsp+18h] [rbp-F0h]
  size_t v41; // [rsp+18h] [rbp-F0h]
  size_t v42; // [rsp+18h] [rbp-F0h]
  char *v43; // [rsp+20h] [rbp-E8h]
  char *v44; // [rsp+28h] [rbp-E0h]
  void *v45; // [rsp+30h] [rbp-D8h] BYREF
  char *v46; // [rsp+38h] [rbp-D0h]
  void *v47; // [rsp+50h] [rbp-B8h] BYREF
  size_t v48; // [rsp+58h] [rbp-B0h]
  _QWORD v49[2]; // [rsp+60h] [rbp-A8h] BYREF
  void *v50; // [rsp+70h] [rbp-98h] BYREF
  size_t v51; // [rsp+78h] [rbp-90h]
  _QWORD v52[2]; // [rsp+80h] [rbp-88h] BYREF
  void *v53; // [rsp+90h] [rbp-78h] BYREF
  size_t v54; // [rsp+98h] [rbp-70h]
  _QWORD v55[2]; // [rsp+A0h] [rbp-68h] BYREF
  void *v56; // [rsp+B0h] [rbp-58h] BYREF
  size_t v57; // [rsp+B8h] [rbp-50h]
  _QWORD v58[9]; // [rsp+C0h] [rbp-48h] BYREF

  v2 = a2;
  sub_21B7150(&v45, a1, 324);
  v3 = (char *)v45;
  v38 = v46;
  v4 = (v46 - (_BYTE *)v45) >> 7;
  v5 = (v46 - (_BYTE *)v45) >> 5;
  if ( v4 > 0 )
  {
    v43 = (char *)v45 + 128 * v4;
    while ( 1 )
    {
      v6 = *(_QWORD *)(a2 + 8);
      v7 = *(_BYTE **)a2;
      if ( *((_QWORD *)v3 + 1) == v6 && (!v6 || !memcmp(*(const void **)v3, *(const void **)a2, *(_QWORD *)(a2 + 8))) )
        goto LABEL_12;
      v47 = v49;
      sub_1189220(&v47, v7, (__int64)&v7[v6]);
      v8 = v48;
      if ( v48 == 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_83;
      v9 = v47;
      if ( v47 == v49 )
        v10 = 15;
      else
        v10 = v49[0];
      if ( v48 + 1 > v10 )
      {
        sub_998B30((__int64)&v47, v48, 0, nullptr, 1u);
        v9 = v47;
      }
      v9[v8] = 61;
      v48 = v8 + 1;
      *((_BYTE *)v47 + v8 + 1) = 0;
      v11 = v47;
      if ( sub_9983C0((__int64 *)v3, (char *)v47, 0, v48) != -1 )
        break;
      if ( v11 != v49 )
        operator delete(v11);
      v15 = *(_QWORD *)(a2 + 8);
      v16 = *(_BYTE **)a2;
      v44 = v3 + 32;
      if ( *((_QWORD *)v3 + 5) == v15 && (!v15 || !memcmp(*((const void **)v3 + 4), v16, v15)) )
        goto LABEL_60;
      v50 = v52;
      sub_1189220(&v50, v16, (__int64)&v16[v15]);
      v17 = v51;
      if ( v51 == 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_83;
      v18 = v50;
      if ( v50 == v52 )
        v19 = 15;
      else
        v19 = v52[0];
      if ( v51 + 1 > v19 )
      {
        sub_998B30((__int64)&v50, v51, 0, nullptr, 1u);
        v18 = v50;
      }
      v18[v17] = 61;
      v51 = v17 + 1;
      *((_BYTE *)v50 + v17 + 1) = 0;
      v20 = (void **)v50;
      if ( sub_9983C0((__int64 *)v3 + 4, (char *)v50, 0, v51) != -1 )
      {
        v36 = v20;
        if ( v20 == v52 )
          goto LABEL_60;
LABEL_62:
        operator delete(v36);
        LOBYTE(v2) = v38 != v44;
        goto LABEL_13;
      }
      if ( v20 != v52 )
        operator delete(v20);
      v21 = *(_QWORD *)(a2 + 8);
      v22 = *(_BYTE **)a2;
      v44 = v3 + 64;
      if ( *((_QWORD *)v3 + 9) == v21 )
      {
        if ( !v21 )
          goto LABEL_60;
        v42 = *(_QWORD *)(a2 + 8);
        v37 = memcmp(*((const void **)v3 + 8), v22, v21);
        v21 = v42;
        if ( !v37 )
          goto LABEL_60;
      }
      v23 = &v53;
      v53 = v55;
      sub_1189220(&v53, v22, (__int64)&v22[v21]);
      v24 = v54;
      if ( v54 == 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_83;
      v25 = v53;
      v26 = v54 + 1;
      if ( v53 == v55 )
        v27 = 15;
      else
        v27 = v55[0];
      if ( v26 > v27 )
      {
        v41 = v54 + 1;
        sub_998B30((__int64)&v53, v54, 0, nullptr, 1u);
        v25 = v53;
        v26 = v41;
      }
      v25[v24] = 61;
      v54 = v26;
      *((_BYTE *)v53 + v24 + 1) = 0;
      v28 = (void **)v53;
      if ( sub_9983C0((__int64 *)v3 + 8, (char *)v53, 0, v54) != -1 )
        goto LABEL_61;
      if ( v28 != v55 )
        operator delete(v28);
      v29 = *(_QWORD *)(a2 + 8);
      v30 = *(_BYTE **)a2;
      v44 = v3 + 96;
      if ( *((_QWORD *)v3 + 13) == v29 )
      {
        if ( !v29 )
          goto LABEL_60;
        v40 = *(_QWORD *)(a2 + 8);
        v35 = memcmp(*((const void **)v3 + 12), v30, v29);
        v29 = v40;
        if ( !v35 )
          goto LABEL_60;
      }
      v23 = &v56;
      v56 = v58;
      sub_1189220(&v56, v30, (__int64)&v30[v29]);
      v31 = v57;
      if ( v57 == 0x7FFFFFFFFFFFFFFFLL )
LABEL_83:
        std::__throw_length_error("basic_string::_M_replace_aux");
      v32 = v56;
      v33 = v57 + 1;
      if ( v56 == v58 )
        v34 = 15;
      else
        v34 = v58[0];
      if ( v33 > v34 )
      {
        v39 = v57 + 1;
        sub_998B30((__int64)&v56, v57, 0, nullptr, 1u);
        v32 = v56;
        v33 = v39;
      }
      v32[v31] = 61;
      v57 = v33;
      *((_BYTE *)v56 + v31 + 1) = 0;
      v28 = (void **)v56;
      if ( sub_9983C0((__int64 *)v3 + 12, (char *)v56, 0, v57) != -1 )
      {
LABEL_61:
        v36 = v28;
        if ( v28 == v23 + 2 )
        {
LABEL_60:
          LOBYTE(v2) = v38 != v44;
          goto LABEL_13;
        }
        goto LABEL_62;
      }
      if ( v28 != v58 )
        operator delete(v28);
      v3 += 128;
      if ( v43 == v3 )
      {
        v5 = (v38 - v3) >> 5;
        goto LABEL_53;
      }
    }
    if ( v11 != v49 )
      operator delete(v11);
    goto LABEL_12;
  }
LABEL_53:
  switch ( v5 )
  {
    case 2LL:
LABEL_79:
      if ( (unsigned __int8)sub_1195C20(a2, (__int64)v3) )
        goto LABEL_12;
      v3 += 32;
      goto LABEL_81;
    case 3LL:
      if ( (unsigned __int8)sub_1195C20(a2, (__int64)v3) )
        goto LABEL_12;
      v3 += 32;
      goto LABEL_79;
    case 1LL:
LABEL_81:
      if ( !(unsigned __int8)sub_1195C20(a2, (__int64)v3) )
        break;
LABEL_12:
      LOBYTE(v2) = v38 != v3;
      goto LABEL_13;
  }
  v2 = 0;
LABEL_13:
  v12 = (void **)v46;
  v13 = (void **)v45;
  if ( v46 != v45 )
  {
    do
    {
      while ( *v13 != v13 + 2 )
      {
        operator delete(*v13);
        v13 += 4;
        if ( v12 == v13 )
          goto LABEL_16;
      }
      v13 += 4;
    }
    while ( v12 != v13 );
LABEL_16:
    v13 = (void **)v45;
  }
  if ( v13 )
    operator delete(v13);
  return v2;
}
