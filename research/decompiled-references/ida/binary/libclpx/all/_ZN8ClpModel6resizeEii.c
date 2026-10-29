void __fastcall ClpModel::resize(ClpModel *this, int a2, int a3)
{
  int v3; // ecx
  int v4; // r13d
  int v5; // ebp
  int v6; // r14d
  int v9; // eax
  int v10; // edx
  char *v11; // rdi
  char *v12; // rax
  char *v13; // rax
  int v14; // esi
  char *v15; // rax
  int v16; // r13d
  __int64 v17; // r15
  __int64 v18; // r13
  void *v19; // rdi
  int v20; // r13d
  __int64 v21; // r15
  __int64 v22; // r13
  void *v23; // rdi
  __int64 v24; // rdi
  int v25; // edi
  __int64 v26; // rax
  int v27; // esi
  void *v28; // r13
  __int64 v29; // rdx
  void *v30; // rdi
  char *v31; // rdi
  int v32; // edx
  __int64 v33; // rax
  int v34; // eax
  int v35; // eax
  __int64 v36; // r13
  int v37; // r13d
  int v38; // eax
  int v39; // ecx
  __int64 v40; // r15
  size_t v41; // rax
  std::string *v42; // rdi
  int v43; // esi
  char *v44; // rax
  _BYTE *v45; // rax
  _BYTE *v46; // r12
  __int64 v47; // rsi
  void *v48; // rdi
  int v49; // eax
  unsigned __int64 v50; // rdi
  __int64 v51; // rax
  int v52; // esi
  void *v53; // r12
  __int64 v54; // rdx
  char *v55; // rax
  char *v56; // rax
  char *v57; // rax
  int v58; // esi
  int v59; // eax
  int v60; // ecx
  __int64 v61; // r15
  size_t v62; // rax
  std::string *v63; // rdi
  char *v64; // rax
  int v65; // esi
  char *v66; // rax
  int v67; // esi
  char *v68; // rax
  char *v69; // r15
  char *v70; // r13
  __int64 v71; // rsi
  __int64 v72; // rsi
  void *v73; // rdi
  int v74; // eax
  ClpLinearObjective *v75; // r13
  _QWORD *v76; // rdx
  __int64 v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rdx
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // [rsp+0h] [rbp-50h]
  __int64 v83; // [rsp+0h] [rbp-50h]
  int v84; // [rsp+0h] [rbp-50h]
  int v85; // [rsp+0h] [rbp-50h]
  char s[66]; // [rsp+Eh] [rbp-42h] BYREF

  v3 = *((_DWORD *)this + 26);
  if ( *((_QWORD *)this + 13) == __PAIR64__(a3, a2) )
    return;
  v4 = a2;
  v5 = a3;
  v6 = a3;
  v9 = *((_DWORD *)this + 121);
  v10 = *((_DWORD *)this + 120);
  *((_DWORD *)this + 79) = 0;
  if ( v9 >= a2 )
    v4 = v9;
  if ( v10 >= v5 )
    v6 = v10;
  if ( v9 < v4 )
  {
    v11 = *((char **)this + 14);
    if ( v3 < a2 )
    {
      v55 = sub_8FAB0(v11, v3, a2, (__m128d)0LL);
      v3 = *((_DWORD *)this + 26);
      *((_QWORD *)this + 14) = v55;
      v56 = *((char **)this + 16);
      if ( a2 > v3 )
      {
        v56 = sub_8FAB0(*((char **)this + 16), v3, a2, (__m128d)0LL);
        v3 = *((_DWORD *)this + 26);
      }
      *((_QWORD *)this + 16) = v56;
      v12 = *((char **)this + 21);
      if ( v12 )
      {
        if ( a2 <= v3 )
        {
          v10 = *((_DWORD *)this + 120);
          goto LABEL_9;
        }
        v12 = sub_8FAB0(*((char **)this + 21), v3, a2, (__m128d)0LL);
        v3 = *((_DWORD *)this + 26);
      }
    }
    else
    {
      v12 = *((char **)this + 21);
      if ( v12 )
      {
LABEL_9:
        *((_QWORD *)this + 21) = v12;
        v13 = *((char **)this + 19);
LABEL_10:
        *((_QWORD *)this + 19) = v13;
        goto LABEL_11;
      }
    }
    *((_QWORD *)this + 21) = v12;
    if ( a2 <= v3 )
    {
      v13 = *((char **)this + 19);
      v10 = *((_DWORD *)this + 120);
    }
    else
    {
      v57 = sub_8FAB0(*((char **)this + 18), v3, a2, (__m128d)0xFFEFFFFFFFFFFFFFLL);
      v58 = *((_DWORD *)this + 26);
      *((_QWORD *)this + 18) = v57;
      v13 = *((char **)this + 19);
      if ( a2 > v58 )
        v13 = sub_8FAB0(*((char **)this + 19), v58, a2, (__m128d)0x7FEFFFFFFFFFFFFFuLL);
      v10 = *((_DWORD *)this + 120);
    }
    goto LABEL_10;
  }
LABEL_11:
  if ( v6 > v10 )
  {
    v14 = *((_DWORD *)this + 27);
    if ( v14 < v5 )
    {
      v64 = sub_8FAB0(*((char **)this + 15), v14, v5, (__m128d)0LL);
      v65 = *((_DWORD *)this + 27);
      *((_QWORD *)this + 15) = v64;
      v15 = *((char **)this + 17);
      if ( v5 > v65 )
        v15 = sub_8FAB0(*((char **)this + 17), v65, v5, (__m128d)0LL);
    }
    else
    {
      v15 = *((char **)this + 17);
    }
    *((_QWORD *)this + 17) = v15;
  }
  if ( *((_QWORD *)this + 84) && *((_DWORD *)this + 123) < v4 )
  {
    v16 = 4 * a2;
    if ( (unsigned __int64)(4 * a2) > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_151;
    v17 = operator new[](8LL * v16);
    if ( v16 )
    {
      if ( v16 / 8 <= 0 )
      {
        v78 = (_QWORD *)v17;
      }
      else
      {
        v76 = (_QWORD *)v17;
        v77 = (unsigned int)(v16 / 8 - 1);
        do
        {
          *v76 = 0x3FF0000000000000LL;
          v76 += 8;
          *(v76 - 7) = 0x3FF0000000000000LL;
          *(v76 - 6) = 0x3FF0000000000000LL;
          *(v76 - 5) = 0x3FF0000000000000LL;
          *(v76 - 4) = 0x3FF0000000000000LL;
          *(v76 - 3) = 0x3FF0000000000000LL;
          *(v76 - 2) = 0x3FF0000000000000LL;
          *(v76 - 1) = 0x3FF0000000000000LL;
        }
        while ( v76 != (_QWORD *)(v17 + ((v77 + 1) << 6)) );
        v78 = (_QWORD *)(v17 + (((int)v77 + 1LL) << 6));
      }
      switch ( v16 % 8 )
      {
        case 1:
          goto LABEL_146;
        case 2:
          goto LABEL_145;
        case 3:
          goto LABEL_144;
        case 4:
          goto LABEL_143;
        case 5:
          goto LABEL_142;
        case 6:
          goto LABEL_141;
        case 7:
          v78[6] = 0x3FF0000000000000LL;
LABEL_141:
          v78[5] = 0x3FF0000000000000LL;
LABEL_142:
          v78[4] = 0x3FF0000000000000LL;
LABEL_143:
          v78[3] = 0x3FF0000000000000LL;
LABEL_144:
          v78[2] = 0x3FF0000000000000LL;
LABEL_145:
          v78[1] = 0x3FF0000000000000LL;
LABEL_146:
          *v78 = 0x3FF0000000000000LL;
          break;
        default:
          break;
      }
    }
    v18 = 8LL * a2;
    CoinMemcpyN<double>(*((_QWORD *)this + 84), *((unsigned int *)this + 26), v17);
    CoinMemcpyN<double>(*((_QWORD *)this + 84) + 8LL * *((int *)this + 123), *((unsigned int *)this + 26), v17 + v18);
    v82 = v18 + v17 + v18;
    CoinMemcpyN<double>(*((_QWORD *)this + 84) + 16LL * *((_DWORD *)this + 123), *((unsigned int *)this + 26), v82);
    CoinMemcpyN<double>(
      *((_QWORD *)this + 84) + 24LL * *((_DWORD *)this + 123),
      *((unsigned int *)this + 26),
      v82 + v18);
    v19 = *((void **)this + 84);
    if ( v19 )
      operator delete[](v19);
    *((_QWORD *)this + 84) = v17;
  }
  if ( *((_QWORD *)this + 85) && *((_DWORD *)this + 122) < v6 )
  {
    v20 = 4 * v5;
    if ( (unsigned __int64)(4 * v5) > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_151;
    v21 = operator new[](8LL * v20);
    if ( v20 )
    {
      if ( v20 / 8 <= 0 )
      {
        v81 = (_QWORD *)v21;
      }
      else
      {
        v79 = (_QWORD *)v21;
        v80 = (unsigned int)(v20 / 8 - 1);
        do
        {
          *v79 = 0x3FF0000000000000LL;
          v79 += 8;
          *(v79 - 7) = 0x3FF0000000000000LL;
          *(v79 - 6) = 0x3FF0000000000000LL;
          *(v79 - 5) = 0x3FF0000000000000LL;
          *(v79 - 4) = 0x3FF0000000000000LL;
          *(v79 - 3) = 0x3FF0000000000000LL;
          *(v79 - 2) = 0x3FF0000000000000LL;
          *(v79 - 1) = 0x3FF0000000000000LL;
        }
        while ( v79 != (_QWORD *)(v21 + ((v80 + 1) << 6)) );
        v81 = (_QWORD *)(v21 + (((int)v80 + 1LL) << 6));
      }
      switch ( v20 % 8 )
      {
        case 1:
          goto LABEL_139;
        case 2:
          goto LABEL_138;
        case 3:
          goto LABEL_137;
        case 4:
          goto LABEL_136;
        case 5:
          goto LABEL_135;
        case 6:
          goto LABEL_134;
        case 7:
          v81[6] = 0x3FF0000000000000LL;
LABEL_134:
          v81[5] = 0x3FF0000000000000LL;
LABEL_135:
          v81[4] = 0x3FF0000000000000LL;
LABEL_136:
          v81[3] = 0x3FF0000000000000LL;
LABEL_137:
          v81[2] = 0x3FF0000000000000LL;
LABEL_138:
          v81[1] = 0x3FF0000000000000LL;
LABEL_139:
          *v81 = 0x3FF0000000000000LL;
          break;
        default:
          break;
      }
    }
    v22 = 8LL * v5;
    CoinMemcpyN<double>(*((_QWORD *)this + 85), *((unsigned int *)this + 27), v21);
    CoinMemcpyN<double>(*((_QWORD *)this + 85) + 8LL * *((int *)this + 122), *((unsigned int *)this + 27), v21 + v22);
    v83 = v22 + v21 + v22;
    CoinMemcpyN<double>(*((_QWORD *)this + 85) + 16LL * *((_DWORD *)this + 122), *((unsigned int *)this + 27), v83);
    CoinMemcpyN<double>(
      *((_QWORD *)this + 85) + 24LL * *((_DWORD *)this + 122),
      *((unsigned int *)this + 27),
      v83 + v22);
    v23 = *((void **)this + 85);
    if ( v23 )
      operator delete[](v23);
    *((_QWORD *)this + 85) = v21;
  }
  v24 = *((_QWORD *)this + 20);
  if ( v24 )
  {
    if ( *((_DWORD *)this + 120) >= v6 )
      goto LABEL_31;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 32LL))(v24, (unsigned int)v5);
  }
  else
  {
    v75 = (ClpLinearObjective *)operator new(0x28u);
    ClpLinearObjective::ClpLinearObjective(v75, nullptr, v5);
    *((_QWORD *)this + 20) = v75;
  }
  if ( *((_DWORD *)this + 120) >= v6 )
  {
LABEL_31:
    v25 = *((_DWORD *)this + 26);
    if ( v25 <= a2 )
      goto LABEL_36;
    goto LABEL_32;
  }
  v43 = *((_DWORD *)this + 27);
  if ( v43 < v5 )
  {
    v66 = sub_8FAB0(*((char **)this + 22), v43, v5, (__m128d)0LL);
    v67 = *((_DWORD *)this + 27);
    *((_QWORD *)this + 22) = v66;
    v44 = *((char **)this + 23);
    if ( v5 > v67 )
      v44 = sub_8FAB0(*((char **)this + 23), v67, v5, (__m128d)0x7FEFFFFFFFFFFFFFuLL);
  }
  else
  {
    v44 = *((char **)this + 23);
  }
  v25 = *((_DWORD *)this + 26);
  *((_QWORD *)this + 23) = v44;
  if ( v25 > a2 )
  {
LABEL_32:
    v26 = operator new[](4LL * (v25 - a2));
    v27 = *((_DWORD *)this + 26);
    v28 = (void *)v26;
    if ( a2 < v27 )
    {
      v29 = a2;
      do
      {
        *(_DWORD *)(v26 - 4LL * a2 + 4 * v29) = v29;
        ++v29;
      }
      while ( v27 > (int)v29 );
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 24) + 88LL))(
      *((_QWORD *)this + 24),
      (unsigned int)(v27 - a2),
      v26);
    operator delete[](v28);
    v25 = *((_DWORD *)this + 26);
  }
LABEL_36:
  if ( a2 != v25 || *((_DWORD *)this + 27) != v5 )
  {
    v30 = *((void **)this + 27);
    *((_QWORD *)this + 40) = 0xFFFFFFFFLL;
    if ( v30 )
      operator delete[](v30);
    *((_QWORD *)this + 27) = 0;
  }
  ClpModel::setRowScale(this, nullptr);
  ClpModel::setColumnScale(this, nullptr);
  v31 = *((char **)this + 33);
  if ( v31 )
  {
    v32 = v5 + a2;
    if ( !(v5 + a2) )
    {
      operator delete[](v31);
      v49 = *((_DWORD *)this + 82);
      *((_QWORD *)this + 33) = 0;
      if ( !v49 )
        goto LABEL_47;
      goto LABEL_58;
    }
    if ( v32 > *((_DWORD *)this + 121) + *((_DWORD *)this + 120) )
    {
      v68 = (char *)operator new[](v32);
      v69 = &v68[v5];
      v70 = v68;
      memset(v68, 3, v5);
      memset(v69, 1, a2);
      v71 = (unsigned int)v5;
      if ( *((_DWORD *)this + 27) <= v5 )
        v71 = *((unsigned int *)this + 27);
      CoinMemcpyN<unsigned char>(*((_QWORD *)this + 33), v71, v70);
      v72 = (unsigned int)a2;
      if ( *((_DWORD *)this + 26) <= a2 )
        v72 = *((unsigned int *)this + 26);
      CoinMemcpyN<unsigned char>(*((_QWORD *)this + 33) + *((int *)this + 27), v72, v69);
      v73 = *((void **)this + 33);
      if ( v73 )
        operator delete[](v73);
      v74 = *((_DWORD *)this + 82);
      *((_QWORD *)this + 33) = v70;
      if ( !v74 )
        goto LABEL_47;
      goto LABEL_58;
    }
    v33 = *((int *)this + 27);
    if ( (int)v33 > v5 )
    {
      memmove(&v31[v5], &v31[v33], a2);
    }
    else if ( (int)v33 < v5 )
    {
      memset(&v31[v33], 3, v5 - (int)v33);
      memmove((void *)(v5 + *((_QWORD *)this + 33)), (const void *)(*((_QWORD *)this + 33) + *((int *)this + 27)), a2);
    }
  }
  if ( !*((_DWORD *)this + 82) )
  {
LABEL_47:
    v34 = *((_DWORD *)this + 27);
    goto LABEL_48;
  }
LABEL_58:
  v36 = (__int64)(*((_QWORD *)this + 47) - *((_QWORD *)this + 46)) >> 3;
  if ( *((_DWORD *)this + 26) < (int)v36 )
    LODWORD(v36) = *((_DWORD *)this + 26);
  if ( a2 > (int)v36 )
  {
    std::vector<std::string>::resize((char *)this + 368, a2);
    v59 = 8;
    v60 = v36;
    if ( *((int *)this + 82) >= 8 )
      v59 = *((_DWORD *)this + 82);
    *((_DWORD *)this + 82) = v59;
    if ( (unsigned int)v36 < a2 )
    {
      v61 = 8LL * (unsigned int)v36;
      do
      {
        v85 = v60;
        sprintf(s, "R%7.7d", v60);
        v62 = strlen(s);
        v63 = (std::string *)(v61 + *((_QWORD *)this + 46));
        v61 += 8;
        std::string::assign(v63, s, v62);
        v60 = v85 + 1;
      }
      while ( v85 + 1 != a2 );
    }
  }
  v34 = *((_DWORD *)this + 27);
  v37 = (__int64)(*((_QWORD *)this + 50) - *((_QWORD *)this + 49)) >> 3;
  if ( v34 < v37 )
    v37 = *((_DWORD *)this + 27);
  if ( v5 > v37 )
  {
    std::vector<std::string>::resize((char *)this + 392, v5);
    v38 = 8;
    v39 = v37;
    if ( *((int *)this + 82) >= 8 )
      v38 = *((_DWORD *)this + 82);
    *((_DWORD *)this + 82) = v38;
    if ( v37 < (unsigned int)v5 )
    {
      v40 = 8LL * (unsigned int)v37;
      do
      {
        v84 = v39;
        sprintf(s, "C%7.7d", v39);
        v41 = strlen(s);
        v42 = (std::string *)(v40 + *((_QWORD *)this + 49));
        v40 += 8;
        std::string::assign(v42, s, v41);
        v39 = v84 + 1;
      }
      while ( v84 + 1 != v5 );
    }
    goto LABEL_47;
  }
LABEL_48:
  *((_DWORD *)this + 26) = a2;
  if ( v5 < v34 && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24)) )
  {
    v50 = *((_DWORD *)this + 27) - v5;
    if ( v50 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v51 = operator new[](4 * v50);
      v52 = *((_DWORD *)this + 27);
      v53 = (void *)v51;
      if ( v52 > v5 )
      {
        v54 = v5;
        do
        {
          *(_DWORD *)(v51 - 4LL * v5 + 4 * v54) = v54;
          ++v54;
        }
        while ( v52 > (int)v54 );
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 24) + 80LL))(
        *((_QWORD *)this + 24),
        (unsigned int)(v52 - v5),
        v51);
      operator delete[](v53);
      goto LABEL_49;
    }
LABEL_151:
    __cxa_throw_bad_array_new_length();
  }
LABEL_49:
  if ( *((_QWORD *)this + 34) && *((_DWORD *)this + 120) < v6 )
  {
    v45 = (_BYTE *)operator new[](v5);
    v46 = v45;
    if ( v5 )
      sub_8F680(v45, v5);
    v47 = (unsigned int)v5;
    if ( *((_DWORD *)this + 27) <= v5 )
      v47 = *((unsigned int *)this + 27);
    CoinMemcpyN<char>(*((_QWORD *)this + 34), v47, v46);
    v48 = *((void **)this + 34);
    if ( v48 )
      operator delete[](v48);
    *((_QWORD *)this + 34) = v46;
  }
  v35 = *((_DWORD *)this + 121);
  *((_DWORD *)this + 27) = v5;
  if ( v35 >= 0 )
  {
    if ( *((_DWORD *)this + 26) >= v35 )
      v35 = *((_DWORD *)this + 26);
    if ( *((_DWORD *)this + 120) >= v5 )
      v5 = *((_DWORD *)this + 120);
    *((_DWORD *)this + 121) = v35;
    *((_DWORD *)this + 120) = v5;
  }
}

