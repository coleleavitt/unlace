__int64 __fastcall sub_34CB70(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        char a24)
{
  _QWORD *v25; // rbx
  _DWORD *v26; // r8
  __int64 v27; // rax
  char *v28; // rdx
  int v29; // esi
  unsigned int v30; // ecx
  __int64 v31; // r9
  char *v32; // rcx
  __int64 v33; // r9
  char *v34; // rdi
  char *v35; // r13
  _DWORD *v36; // rax
  void *v37; // rbx
  _DWORD *v38; // rax
  void *v39; // r15
  void *v40; // r15
  int v41; // eax
  void *v42; // rbp
  _QWORD *v45; // [rsp+10h] [rbp-D8h]
  int v46; // [rsp+30h] [rbp-B8h] BYREF
  char v47; // [rsp+34h] [rbp-B4h]
  __int64 v48; // [rsp+38h] [rbp-B0h]
  int v49; // [rsp+40h] [rbp-A8h] BYREF
  char v50; // [rsp+44h] [rbp-A4h]
  __int64 v51; // [rsp+48h] [rbp-A0h]
  void *v52; // [rsp+50h] [rbp-98h] BYREF
  __int64 v53; // [rsp+58h] [rbp-90h] BYREF
  __int64 v54; // [rsp+60h] [rbp-88h] BYREF
  _QWORD v55[3]; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v56[16]; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v57[88]; // [rsp+90h] [rbp-58h] BYREF

  if ( !a3 )
    return std::__ostream_insert<char,std::char_traits<char>>();
  v25 = a4;
  v45 = &a4[a3];
  do
  {
    sub_1606360(v56, *v25, *(_QWORD *)(a1 + 8), 0, 0, 0);
    sub_160E8B0(a2, v56);
    std::__ostream_insert<char,std::char_traits<char>>();
    v26 = (_DWORD *)*v25;
    v27 = *(unsigned int *)(a1 + 224);
    v53 = 0;
    v55[0] = 1;
    v28 = *(char **)(a1 + 216);
    v29 = v26[3];
    v30 = v27 - 1;
    v52 = v26;
    v54 = 0;
    v27 *= 40;
    v55[1] = 0;
    v31 = 5LL * (v29 & v30);
    v32 = &v28[v27];
    v33 = 8 * v31;
    v34 = &v28[v33];
    if ( v33 == v27 )
    {
LABEL_11:
      while ( v34 != v28 )
      {
        v38 = *(_DWORD **)v28;
        if ( *(_QWORD *)v28 > 1u )
        {
          if ( v38[3] == v29 && v26 == v38 )
          {
            v35 = v28;
            goto LABEL_20;
          }
        }
        else if ( !v38 )
        {
          break;
        }
        v28 += 40;
      }
LABEL_10:
      v37 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v53);
      sub_182CBA0(v37, v55);
      v47 &= 0xFCu;
      v50 &= 0xFCu;
      v46 = 0;
      v48 = 0;
      v49 = 1;
      v51 = 0;
      BUG();
    }
    v35 = &v28[v33];
    while ( 1 )
    {
      v36 = *(_DWORD **)v35;
      if ( *(_QWORD *)v35 > 1u )
        break;
      if ( !v36 )
        goto LABEL_10;
LABEL_7:
      v35 += 40;
      if ( v32 == v35 )
        goto LABEL_11;
    }
    if ( v36[3] != v29 || v26 != v36 )
      goto LABEL_7;
LABEL_20:
    v39 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v53);
    sub_182CBA0(v39, v55);
    v47 &= 0xFCu;
    v40 = qword_1C7F2C0;
    v50 &= 0xFCu;
    v46 = 0;
    v48 = 0;
    v49 = 1;
    v51 = 0;
    if ( (v35[12] & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &v46, v35 + 8);
      if ( (v35[28] & 1) != 0 )
        goto LABEL_28;
LABEL_22:
      v41 = *((_DWORD *)v35 + 6);
      v50 &= ~1u;
      v49 = v41;
    }
    else
    {
      v46 = *((_DWORD *)v35 + 2);
      if ( (v35[28] & 1) == 0 )
        goto LABEL_22;
LABEL_28:
      sub_182C690(v40, &v49, v35 + 24);
    }
    sub_1850940(&v52, qword_1C7F2C0, &v46);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v52 != &v54 )
      operator delete(v52, v54 + 1);
    std::__ostream_insert<char,std::char_traits<char>>();
    v42 = qword_1C7F2C0;
    ++v25;
    sub_182CBA0(qword_1C7F2C0, &v46);
    sub_182CBA0(v42, &v49);
    sub_18572D0(v57);
  }
  while ( v45 != v25 );
  return std::__ostream_insert<char,std::char_traits<char>>();
}

