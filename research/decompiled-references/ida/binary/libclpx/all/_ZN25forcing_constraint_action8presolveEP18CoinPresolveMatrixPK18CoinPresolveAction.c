CoinPresolveMatrix *__fastcall forcing_constraint_action::presolve(
        forcing_constraint_action *this,
        CoinPresolveMatrix *a2,
        const CoinPresolveAction *a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r13
  unsigned __int64 v6; // rbp
  const CoinPresolveAction *v7; // r8
  int v8; // eax
  int *v9; // rbp
  __int64 v10; // r11
  int *v11; // r14
  __int64 v12; // r10
  int v13; // ebx
  char v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  double v17; // xmm4_8
  double v18; // xmm3_8
  double v19; // xmm0_8
  __int64 v20; // rdx
  double v21; // xmm1_8
  double v22; // xmm2_8
  __int64 v23; // r12
  double v24; // xmm0_8
  double v25; // xmm1_8
  __int64 v26; // rcx
  int *v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r9d
  __int64 v32; // rcx
  int v33; // esi
  _BYTE *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // r10
  const CoinPresolveAction *v37; // rdi
  double *v38; // r10
  double *v39; // rdx
  double v40; // xmm0_8
  double v41; // xmm1_8
  __int64 v42; // rdx
  int v43; // ecx
  char *v44; // rdx
  CoinPresolveMatrix *v45; // rbx
  __int64 v47; // rax
  int *v48; // rcx
  __int64 v49; // rdx
  char *v50; // rbx
  void *v51; // rdi
  void *v52; // rbp
  CoinMessageHandler *v53; // rbp
  CoinMessageHandler *v54; // rax
  CoinMessageHandler *v55; // rax
  CoinMessageHandler *v56; // rax
  double v57; // xmm0_8
  __int64 v58; // rax
  __int64 v59; // [rsp+8h] [rbp-120h]
  __int64 v60; // [rsp+10h] [rbp-118h]
  int v61; // [rsp+20h] [rbp-108h]
  int v62; // [rsp+24h] [rbp-104h]
  int v63; // [rsp+28h] [rbp-100h]
  char v64; // [rsp+2Fh] [rbp-F9h]
  __int64 v65; // [rsp+38h] [rbp-F0h]
  __int64 v66; // [rsp+40h] [rbp-E8h]
  __int64 v67; // [rsp+48h] [rbp-E0h]
  __int64 v69; // [rsp+58h] [rbp-D0h]
  __int64 v70; // [rsp+60h] [rbp-C8h]
  __int64 v71; // [rsp+68h] [rbp-C0h]
  double v72; // [rsp+70h] [rbp-B8h]
  CoinPresolveMatrix *v73; // [rsp+78h] [rbp-B0h]
  int *v74; // [rsp+80h] [rbp-A8h]
  unsigned int v75; // [rsp+88h] [rbp-A0h]
  unsigned int v76; // [rsp+8Ch] [rbp-9Ch]
  char *src; // [rsp+A0h] [rbp-88h]
  double v78; // [rsp+A8h] [rbp-80h]
  CoinPresolveMatrix *v79; // [rsp+B0h] [rbp-78h]
  __int64 v80; // [rsp+C0h] [rbp-68h]
  _BYTE v82[88]; // [rsp+D0h] [rbp-58h] BYREF

  v3 = *(int *)this;
  v4 = *((_QWORD *)this + 11);
  v80 = *((_QWORD *)this + 20);
  v72 = *((double *)this + 42);
  v5 = *((_QWORD *)this + 12);
  v6 = *((int *)this + 1);
  v71 = *((_QWORD *)this + 35);
  v69 = *((_QWORD *)this + 37);
  v78 = v72 * 0.01;
  v65 = *((_QWORD *)this + 38);
  v66 = *((_QWORD *)this + 36);
  v59 = *((_QWORD *)this + 13);
  v70 = *((_QWORD *)this + 14);
  if ( v3 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_118;
  v73 = (CoinPresolveMatrix *)operator new[](4 * v3);
  if ( v6 > 0x3FFFFFFFFFFFFFFLL )
    goto LABEL_118;
  src = (char *)operator new[](32 * v6);
  v79 = (CoinPresolveMatrix *)operator new[](4 * v6);
  v8 = *((_DWORD *)this + 104);
  v76 = *((_DWORD *)this + 109) & 0x4000;
  if ( v8 <= 0 )
  {
    v45 = a2;
    if ( !*((_DWORD *)this + 86) )
      goto LABEL_66;
    goto LABEL_100;
  }
  v9 = *((int **)this + 51);
  v75 = 0;
  v74 = nullptr;
  v67 = (__int64)&v9[v8 - 1 + 1];
  do
  {
LABEL_5:
    v10 = *v9;
    v11 = (int *)(v66 + 4 * v10);
    v63 = *v9;
    v12 = *v11;
    if ( (int)v12 <= 0 )
      goto LABEL_61;
    v13 = *(_DWORD *)(v71 + 4 * v10);
    v61 = v12 + v13;
    if ( v13 >= (int)v12 + v13 )
    {
      v23 = 8 * v10;
      v18 = 0.0;
      v17 = 0.0;
LABEL_82:
      if ( *(double *)(v23 + v59) > v72 + v18 && !v76 )
      {
LABEL_105:
        *((_DWORD *)this + 86) |= 1u;
        v53 = *((CoinMessageHandler **)this + 26);
        CoinMessages::CoinMessages((CoinMessages *)v82, (forcing_constraint_action *)((char *)this + 224));
        v54 = (CoinMessageHandler *)CoinMessageHandler::message(v53, 16, (const CoinMessages *)v82);
        v55 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v54);
        v56 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v55);
        v57 = *(double *)(v23 + v70);
        v58 = CoinMessageHandler::operator<<(v56);
        CoinMessageHandler::operator<<(v58, 0, v57);
        CoinMessages::~CoinMessages((CoinMessages *)v82);
        break;
      }
LABEL_84:
      if ( v17 > -1.797693134862316e308 )
        goto LABEL_85;
LABEL_22:
      v24 = *(double *)(v59 + v23);
      if ( v24 <= -1.797693134862316e308 )
        goto LABEL_33;
      if ( v17 > -1.797693134862316e308 )
        goto LABEL_88;
      goto LABEL_68;
    }
    v14 = 0;
    v7 = nullptr;
    v15 = (unsigned int)(v12 - 1) + 1LL;
    v16 = 0;
    v17 = 0.0;
    v18 = 0.0;
    do
    {
      while ( 1 )
      {
        v19 = *(double *)(v69 + 8LL * v13 + 8 * v16);
        v20 = *(int *)(v65 + 4LL * v13 + 4 * v16);
        v21 = *(double *)(v4 + 8 * v20);
        v22 = *(double *)(v5 + 8 * v20);
        if ( v19 <= 0.0 )
          break;
        if ( v22 >= 1.797693134862316e308 )
        {
          if ( (_BYTE)v7 || v21 <= -1.797693134862316e308 )
          {
LABEL_32:
            v23 = 8 * v10;
            v17 = -1.797693134862316e308;
            v18 = 1.797693134862316e308;
            v24 = *(double *)(v59 + 8 * v10);
            if ( v24 <= -1.797693134862316e308 )
            {
LABEL_33:
              v25 = *(double *)(v70 + v23);
              goto LABEL_34;
            }
LABEL_68:
            if ( v18 < 1.797693134862316e308 )
              goto LABEL_37;
            goto LABEL_69;
          }
          v14 = 1;
        }
        else
        {
          v18 = v18 + v22 * v19;
          if ( v21 <= -1.797693134862316e308 )
          {
            if ( v14 )
              goto LABEL_32;
            v7 = (const CoinPresolveAction *)(&dword_0 + 1);
            goto LABEL_12;
          }
        }
        v17 = v17 + v19 * v21;
LABEL_12:
        if ( v15 == ++v16 )
          goto LABEL_18;
      }
      if ( v22 >= 1.797693134862316e308 )
      {
        if ( v14 || v21 <= -1.797693134862316e308 )
          goto LABEL_32;
        v7 = (const CoinPresolveAction *)(&dword_0 + 1);
LABEL_31:
        v18 = v18 + v19 * v21;
        goto LABEL_12;
      }
      v17 = v17 + v22 * v19;
      if ( v21 > -1.797693134862316e308 )
        goto LABEL_31;
      if ( (_BYTE)v7 )
        goto LABEL_32;
      ++v16;
      v14 = 1;
    }
    while ( v15 != v16 );
LABEL_18:
    v23 = 8 * v10;
    if ( v14 )
    {
      if ( (_BYTE)v7 )
      {
        v18 = 1.797693134862316e308;
        v24 = *(double *)(v59 + 8 * v10);
        goto LABEL_110;
      }
      v18 = 1.797693134862316e308;
      goto LABEL_84;
    }
    if ( (_BYTE)v7 )
    {
      v17 = -1.797693134862316e308;
      v24 = *(double *)(v59 + 8 * v10);
      if ( v18 >= 1.797693134862316e308 )
      {
LABEL_110:
        if ( v24 <= -1.797693134862316e308 )
        {
          v17 = -1.797693134862316e308;
          v25 = *(double *)(v70 + 8 * v10);
          goto LABEL_34;
        }
        if ( v18 >= 1.797693134862316e308 || fabs(v24 - v18) >= 1.0e-12 )
          goto LABEL_61;
LABEL_38:
        v64 = 1;
        goto LABEL_39;
      }
      goto LABEL_82;
    }
    if ( v18 < 1.797693134862316e308 )
      goto LABEL_82;
    if ( v17 <= -1.797693134862316e308 )
      goto LABEL_22;
LABEL_85:
    v25 = *(double *)(v23 + v70);
    if ( v17 - v72 > v25 )
    {
      v7 = (const CoinPresolveAction *)v76;
      if ( !v76 )
        goto LABEL_105;
    }
    v24 = *(double *)(v59 + v23);
    if ( v24 <= -1.797693134862316e308 )
      goto LABEL_34;
LABEL_88:
    if ( v78 + v17 < v24 )
    {
      if ( v18 < 1.797693134862316e308 )
      {
LABEL_37:
        if ( fabs(v24 - v18) < 1.0e-12 )
          goto LABEL_38;
LABEL_69:
        if ( v17 <= -1.797693134862316e308 )
          goto LABEL_61;
      }
      if ( fabs(*(double *)(v70 + v23) - v17) >= 1.0e-12 )
        goto LABEL_61;
      v64 = 0;
LABEL_39:
      if ( *((_BYTE *)this + 440) && v13 < v61 )
      {
        v26 = *((_QWORD *)this + 45);
        if ( (*(_BYTE *)(v26 + *(int *)(v65 + 4LL * v13)) & 2) != 0 )
          goto LABEL_61;
        v27 = (int *)(v65 + 4LL * v13 + 4);
        while ( (int *)(v65 + 4 * ((unsigned int)(v12 - 1) + (__int64)v13) + 4) != v27 )
        {
          v28 = *v27++;
          if ( (*(_BYTE *)(v26 + v28) & 2) != 0 )
            goto LABEL_61;
        }
      }
      v60 = operator new[](8 * v12);
      v29 = *v11;
      if ( v29 <= 0x1FFFFFFFFFFFFFFELL )
      {
        v30 = operator new[](4 * v29);
        if ( v13 >= v61 )
        {
          v43 = 0;
          v33 = 0;
        }
        else
        {
          v62 = v61;
          v31 = v13;
          v32 = 0;
          do
          {
            v37 = (const CoinPresolveAction *)*(int *)(v65 + 4LL * v13 + 4 * v32);
            v33 = v31 - v13;
            v7 = v37;
            v38 = (double *)(v4 + 8LL * (_QWORD)v37);
            v39 = (double *)(v5 + 8LL * (_QWORD)v37);
            v40 = *v38;
            v41 = *v39;
            if ( *(double *)(v69 + 8LL * v13 + 8 * v32) > 0.0 == v64 )
            {
              v42 = --v62 - v13;
              *(double *)(v60 + 8 * v42) = v40;
              *(_DWORD *)(v30 + 4 * v42) = (_DWORD)v37;
              if ( v80 )
                *(double *)(v80 + 8LL * (_QWORD)v37) = v41;
              *v38 = v41;
            }
            else
            {
              ++v31;
              *(_DWORD *)(v30 + 4LL * v33) = (_DWORD)v37;
              *(double *)(v60 + 8LL * v33) = v41;
              if ( v80 )
                *(double *)(v80 + 8LL * (_QWORD)v37) = v40;
              *v39 = v40;
              v33 = v31 - v13;
            }
            if ( v40 != v41 )
            {
              v34 = (char *)v37 + *((_QWORD *)this + 45);
              *((_DWORD *)v73 + (int)v74) = (_DWORD)v7;
              LODWORD(v74) = (_DWORD)v74 + 1;
              if ( (*v34 & 1) == 0 )
              {
                *v34 |= 1u;
                v35 = *((int *)this + 98);
                v36 = *((_QWORD *)this + 48);
                *((_DWORD *)this + 98) = v35 + 1;
                *(_DWORD *)(v36 + 4 * v35) = (_DWORD)v7;
              }
            }
            ++v32;
          }
          while ( (unsigned int)(v61 - v13 - 1) + 1LL != v32 );
          v43 = v61 - v62;
        }
        v44 = &src[32 * SHIDWORD(v74)];
        ++HIDWORD(v74);
        *(_QWORD *)v44 = v30;
        *((_DWORD *)v44 + 4) = v63;
        *((_DWORD *)v44 + 5) = v33;
        *((_DWORD *)v44 + 6) = v43;
        *((_QWORD *)v44 + 1) = v60;
        goto LABEL_61;
      }
LABEL_118:
      __cxa_throw_bad_array_new_length();
    }
    v25 = *(double *)(v70 + v23);
LABEL_34:
    if ( v25 >= 1.797693134862316e308 )
      goto LABEL_72;
    if ( v18 >= 1.797693134862316e308 )
      goto LABEL_68;
    if ( v25 < v18 - v78 )
      goto LABEL_37;
LABEL_72:
    if ( !*((_BYTE *)this + 440) || v13 >= v61 )
    {
LABEL_78:
      ++v9;
      *((_DWORD *)v79 + (int)v75++) = v63;
      if ( (int *)v67 == v9 )
        break;
      goto LABEL_5;
    }
    v47 = *((_QWORD *)this + 45);
    if ( (*(_BYTE *)(v47 + *(int *)(v65 + 4LL * v13)) & 2) == 0 )
    {
      v48 = (int *)(v65 + 4LL * v13 + 4);
      while ( (int *)(v65 + 4 * ((unsigned int)(v12 - 1) + (__int64)v13) + 4) != v48 )
      {
        v49 = *v48++;
        if ( (*(_BYTE *)(v47 + v49) & 2) != 0 )
          goto LABEL_61;
      }
      goto LABEL_78;
    }
LABEL_61:
    ++v9;
  }
  while ( (int *)v67 != v9 );
  if ( *((_DWORD *)this + 86) )
  {
    if ( HIDWORD(v74) )
    {
      v50 = src;
      do
      {
        if ( *(_QWORD *)v50 )
          operator delete[](*(void **)v50);
        v51 = *((void **)v50 + 1);
        if ( v51 )
          operator delete[](v51);
        v50 += 32;
      }
      while ( &src[32 * (HIDWORD(v74) - 1) + 32] != v50 );
    }
LABEL_100:
    v45 = a2;
    goto LABEL_66;
  }
  v45 = a2;
  if ( HIDWORD(v74) )
  {
    v52 = (void *)operator new[](32LL * SHIDWORD(v74));
    memcpy(v52, src, 32LL * SHIDWORD(v74));
    v45 = (CoinPresolveMatrix *)operator new(0x20u);
    *((_DWORD *)v45 + 4) = HIDWORD(v74);
    *((_QWORD *)v45 + 3) = v52;
    *((_QWORD *)v45 + 1) = a2;
    *(_QWORD *)v45 = &off_4D1E90;
    if ( v75 )
      goto LABEL_103;
LABEL_65:
    if ( (_DWORD)v74 )
LABEL_101:
      v45 = (CoinPresolveMatrix *)remove_fixed_action::presolve(this, v73, (int *)(unsigned int)v74, (int)v45, v7);
  }
  else
  {
    if ( !v75 )
      goto LABEL_65;
LABEL_103:
    v45 = (CoinPresolveMatrix *)useless_constraint_action::presolve(this, v79, (const int *)v75, (int)v45, v7);
    if ( (_DWORD)v74 )
      goto LABEL_101;
  }
LABEL_66:
  operator delete[](src);
  operator delete[](v79);
  operator delete[](v73);
  return v45;
}

