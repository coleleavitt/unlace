__int64 __fastcall sub_5DE4D0(int a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v5; // ebx
  char v6; // dl
  __int64 v7; // r12
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx
  void *v11; // rdi
  __int64 v12; // rdx
  char v13; // al
  void *v14; // rbx
  int v15; // eax
  void *v16; // rbx
  int v18; // eax
  __int64 v19; // rsi
  void *v20; // rdi
  __int64 v21; // rsi
  unsigned int v22; // eax
  void *v24; // [rsp+20h] [rbp-88h]
  unsigned int v25; // [rsp+2Ch] [rbp-7Ch]
  __int64 v26; // [rsp+30h] [rbp-78h] BYREF
  __int64 v27; // [rsp+38h] [rbp-70h]
  __int64 v28; // [rsp+40h] [rbp-68h] BYREF
  __int64 v29; // [rsp+48h] [rbp-60h]
  void *v30[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v31[9]; // [rsp+60h] [rbp-48h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    v5 = 0;
    v6 = 1;
    while ( 1 )
    {
      if ( v5 >= *(_DWORD *)(v3 - 4) )
        goto LABEL_19;
      v7 = 32LL * v5;
      v8 = *(_DWORD *)(v3 + v7);
      if ( v8 )
        break;
LABEL_18:
      ++v5;
      if ( !v3 )
        goto LABEL_19;
    }
    if ( v8 > 0 && !v6 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v3 = *a2;
    }
    v9 = v7 + v3;
    if ( (*(_BYTE *)(v9 + 4) & 1) == 0
      && *(_DWORD *)v9 == -1
      && (*(_BYTE *)(v9 + 20) & 1) == 0
      && *(_DWORD *)(v9 + 16) == 1 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    v26 = 1;
    v27 = 0;
    v28 = 1;
    v29 = 0;
    sub_182CBA0(qword_1C7F2C0, &v28);
    v10 = *a2;
    v11 = qword_1C7F2C0;
    LODWORD(v28) = 1;
    BYTE4(v28) &= ~1u;
    v12 = v7 + v10;
    if ( (*(_BYTE *)(v12 + 20) & 1) == 0 && *(_DWORD *)(v12 + 16) == 1 )
    {
      if ( (v26 & 0x100000000LL) != 0 || (*(_BYTE *)(v12 + 4) & 1) != 0 )
      {
        v18 = sub_182C7B0(qword_1C7F2C0, &v26, v12);
        v11 = qword_1C7F2C0;
        if ( v18 < 0 )
          goto LABEL_13;
      }
      else if ( (int)v26 < *(_DWORD *)v12 )
      {
        goto LABEL_13;
      }
    }
    else
    {
      v13 = sub_1848D40(qword_1C7F2C0, &v26, v12);
      v11 = qword_1C7F2C0;
      if ( v13 )
      {
LABEL_13:
        sub_182CBA0(v11, &v26);
        sub_182CBA0(v11, &v28);
        goto LABEL_14;
      }
    }
    v30[1] = nullptr;
    v30[0] = (void *)0xFFFFFFFFLL;
    v31[0] = 1;
    v31[1] = 0;
    sub_182CBA0(v11, v31);
    v19 = *a2;
    LODWORD(v31[0]) = 1;
    v20 = qword_1C7F2C0;
    v21 = v7 + v19;
    BYTE4(v31[0]) &= ~1u;
    if ( (*(_BYTE *)(v21 + 20) & 1) != 0 || *(_DWORD *)(v21 + 16) != 1 )
    {
      LOBYTE(v25) = sub_1848D40(qword_1C7F2C0, v21, v30);
      v20 = qword_1C7F2C0;
    }
    else if ( (*(_BYTE *)(v21 + 4) & 1) != 0 || (BYTE4(v30[0]) & 1) != 0 )
    {
      v22 = sub_182C7B0(qword_1C7F2C0, v21, v30);
      v20 = qword_1C7F2C0;
      v25 = v22 >> 31;
    }
    else
    {
      LOBYTE(v25) = *(_DWORD *)v21 < SLODWORD(v30[0]);
    }
    sub_182CBA0(v20, v30);
    sub_182CBA0(v20, v31);
    v24 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v26);
    sub_182CBA0(v24, &v28);
    if ( !(_BYTE)v25 )
    {
LABEL_17:
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v3 = *a2;
      v6 = 0;
      goto LABEL_18;
    }
LABEL_14:
    sub_1850940(v30, qword_1C7F2C0, v7 + *a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v30[0] != v31 )
      operator delete(v30[0], v31[0] + 1LL);
    std::__ostream_insert<char,std::char_traits<char>>();
    goto LABEL_17;
  }
LABEL_19:
  std::__ostream_insert<char,std::char_traits<char>>();
  BYTE4(v26) &= 0xFCu;
  BYTE4(v28) &= 0xFCu;
  v14 = qword_1C7F2C0;
  LODWORD(v26) = 0;
  v27 = 0;
  LODWORD(v28) = 1;
  v29 = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v26, a3);
  else
    LODWORD(v26) = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
  {
    sub_182C690(v14, &v28, a3 + 16);
  }
  else
  {
    v15 = *(_DWORD *)(a3 + 16);
    BYTE4(v28) &= ~1u;
    LODWORD(v28) = v15;
  }
  sub_1831620(qword_1C7F2C0, &v26);
  sub_1850940(v30, qword_1C7F2C0, &v26);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v30[0] != v31 )
    operator delete(v30[0], v31[0] + 1LL);
  std::__ostream_insert<char,std::char_traits<char>>();
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v26);
  return sub_182CBA0(v16, &v28);
}

