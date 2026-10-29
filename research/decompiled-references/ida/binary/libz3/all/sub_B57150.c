__int64 __fastcall sub_B57150(_QWORD *a1, __int64 a2, double a3)
{
  __int64 *v3; // rbx
  __int64 *v4; // r13
  _QWORD *v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // r15
  __int64 v23; // rbp
  int v24; // edi
  __int64 v25; // rax
  _QWORD *v26; // rcx
  unsigned int v27; // edx
  _QWORD *v28; // rsi
  __int64 v29; // rdx
  _QWORD *v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // rdx
  void *v33; // rbx
  __int64 v34; // rbp
  __int64 v35; // rax
  void *v36; // r13
  void *v37; // rdi
  _QWORD *v38; // rsi
  void *v39; // rbp
  _QWORD *v40; // [rsp+0h] [rbp-98h]
  _QWORD v41[2]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v42[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v43; // [rsp+30h] [rbp-68h] BYREF
  __int64 v44; // [rsp+38h] [rbp-60h] BYREF
  __int64 v45; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v46[10]; // [rsp+48h] [rbp-50h] BYREF

  v3 = *(__int64 **)(a2 + 8);
  if ( !v3 )
    return 0;
  v4 = &v3[*((unsigned int *)v3 - 1)];
  if ( v3 == v4 )
    return 0;
  v5 = (_QWORD *)*a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *v3;
      if ( *(_WORD *)(*v3 + 4) || !*(_DWORD *)(v6 + 24) )
        goto LABEL_4;
      v7 = sub_15D1F10(*(_QWORD *)(v6 + 32));
      v8 = (__int64 *)v5[30];
      v9 = v7;
      v10 = *((unsigned int *)v5 + 62);
      v11 = *(unsigned int *)(v9 + 12);
      v12 = v10 - 1;
      v10 *= 16;
      v13 = (__int64 *)((char *)v8 + v10);
      v14 = 16LL * ((unsigned int)v11 & v12);
      v15 = &v8[(unsigned __int64)v14 / 8];
      if ( v14 != v10 )
        break;
LABEL_15:
      if ( v8 == v15 )
        goto LABEL_4;
      while ( 1 )
      {
        v18 = *v8;
        if ( (unsigned __int64)*v8 <= 1 )
          break;
        if ( *(_DWORD *)(v18 + 12) == (_DWORD)v11 && v9 == v18 )
        {
          v16 = v8;
          goto LABEL_25;
        }
LABEL_19:
        v8 += 2;
        if ( v15 == v8 )
          goto LABEL_4;
      }
      if ( v18 )
        goto LABEL_19;
      if ( v4 == ++v3 )
        return 0;
    }
    v16 = &v8[(unsigned __int64)v14 / 8];
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = *v16;
        if ( (unsigned __int64)*v16 > 1 )
          break;
        if ( !v17 )
          goto LABEL_4;
        v16 += 2;
        if ( v13 == v16 )
          goto LABEL_15;
      }
      if ( *(_DWORD *)(v17 + 12) == (_DWORD)v11 && v9 == v17 )
        break;
      v16 += 2;
      if ( v13 == v16 )
        goto LABEL_15;
    }
LABEL_25:
    v20 = *(_QWORD *)(v6 + 16);
    if ( v16[1] == v20 )
      break;
LABEL_4:
    if ( v4 == ++v3 )
      return 0;
  }
  v21 = *(_QWORD *)(v6 + 32);
  v22 = *(_QWORD *)(v6 + 40);
  if ( (unsigned int)sub_180B130(v11) > 1 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v23 = sub_180B150(v11, v20);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&v43, v21, *v5, 0, 0, 0);
      sub_160E8B0(v23, &v43);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(&v45);
      sub_186A500(&v45, "\n");
    }
    else
    {
      v34 = sub_180B150(v11, v20);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&v43, v21, *v5, 0, 0, 0);
      sub_160E8B0(v34, &v43);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(&v45);
    }
  }
  v41[0] = 2;
  v41[1] = 0;
  v42[0] = 1;
  v42[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v42);
  BYTE4(v42[0]) &= ~1u;
  v44 = 0;
  v46[0] = 1;
  v24 = *(_DWORD *)(v21 + 12);
  v25 = *((unsigned int *)v5 + 50);
  v26 = (_QWORD *)v5[24];
  v43 = v21;
  LODWORD(v42[0]) = 1;
  v45 = 0;
  v27 = v25 - 1;
  v46[1] = 0;
  v25 *= 40;
  v28 = (_QWORD *)((char *)v26 + v25);
  v29 = 40LL * (v24 & v27);
  v30 = &v26[(unsigned __int64)v29 / 8];
  if ( v29 == v25 )
  {
LABEL_38:
    while ( v30 != v26 )
    {
      v35 = *v26;
      if ( *v26 > 1u )
      {
        if ( *(_DWORD *)(v35 + 12) == v24 && v21 == v35 )
        {
          v31 = v26;
          goto LABEL_47;
        }
      }
      else if ( !v35 )
      {
        break;
      }
      v26 += 5;
    }
LABEL_36:
    v33 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v44);
    sub_182CBA0(v33, v46);
    BUG();
  }
  v31 = &v26[(unsigned __int64)v29 / 8];
  while ( 2 )
  {
    v32 = *v31;
    if ( *v31 <= 1u )
    {
      if ( !v32 )
        goto LABEL_36;
      goto LABEL_33;
    }
    if ( *(_DWORD *)(v32 + 12) != v24 || v21 != v32 )
    {
LABEL_33:
      v31 += 5;
      if ( v28 == v31 )
        goto LABEL_38;
      continue;
    }
    break;
  }
LABEL_47:
  v36 = qword_1C7F2C0;
  v40 = v31;
  sub_182CBA0(qword_1C7F2C0, &v44);
  sub_182CBA0(v36, v46);
  v37 = qword_1C7F2C0;
  v38 = v40 + 1;
  if ( (*((_BYTE *)v40 + 28) & 1) != 0
    || *((_DWORD *)v40 + 6) != 1
    || (v42[0] & 0x100000000LL) != 0
    || LODWORD(v42[0]) != 1 )
  {
    sub_1848FF0(qword_1C7F2C0, v38, v41);
  }
  else
  {
    sub_1831650(qword_1C7F2C0, v38, v41);
    sub_182CBA0(v37, v40 + 3);
    *((_BYTE *)v40 + 28) &= ~1u;
    *((_DWORD *)v40 + 6) = 1;
  }
  v39 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v41);
  sub_182CBA0(v39, v42);
  sub_B59DA0(v5, v21, v22);
  return 1;
}

