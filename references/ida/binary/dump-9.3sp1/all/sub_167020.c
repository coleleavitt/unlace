__int64 __fastcall sub_167020(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r12d
  __int64 v7; // r14
  __int64 v8; // rax
  char v9; // r12
  int v10; // r8d
  int v11; // r9d
  char v12; // al
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // r13
  int tinfo_property; // eax
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  int v26; // eax
  unsigned __int64 *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r13
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rbx
  int v35; // [rsp+0h] [rbp-100h]
  int v36; // [rsp+8h] [rbp-F8h]
  int v37; // [rsp+10h] [rbp-F0h]
  int v38; // [rsp+18h] [rbp-E8h]
  char *v39; // [rsp+18h] [rbp-E8h]
  __int64 v40; // [rsp+20h] [rbp-E0h]
  __int64 v41; // [rsp+30h] [rbp-D0h]
  __int64 v42; // [rsp+40h] [rbp-C0h]
  int v43; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  __int64 v48; // [rsp+78h] [rbp-88h]
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-58h]
  __int64 v53; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v54; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v55; // [rsp+C8h] [rbp-38h]

  v55 = __readfsqword(0x28u);
  if ( a2 != a3 && (!a2 || *(_DWORD *)a2 != 4 || *(_BYTE *)(a2 + 32) != 4 || *(_QWORD *)(a2 + 40) != a3)
    || *(_BYTE *)(*(_QWORD *)(a3 + 40) + 1LL) != 98 )
  {
    return 0;
  }
  v7 = *(_QWORD *)(a3 + 72);
  v8 = *(_QWORD *)(v7 + 24);
  if ( *(_BYTE *)v8 == 10 && **(_BYTE **)(v8 + 8) == 1 )
  {
    v9 = 1;
  }
  else
  {
    v9 = 0;
    if ( *(_BYTE *)(v8 + 80) != 2 )
      return 0;
  }
  if ( !(unsigned __int8)sub_64880((_QWORD *)(v7 + 96)) || *(_QWORD *)(v7 + 120) )
    return 0;
  if ( a2 != a3 )
  {
    if ( !v9 || *(_BYTE *)(*(_QWORD *)(v7 + 24) + 80LL) != 2 )
      return 0;
    sub_124680((__int64)&v47, a1, a3, 1u);
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    sub_127FE0(a1, (__int64)&v51, a2 + 64, 1u, v10, v11, v35, v36, v37, v38, v40);
    v12 = sub_64780(&v47, &v51);
    v13 = v53;
    if ( v12 || (v14 = sub_318470(&v49, &v53), v13 = v53, v14) )
    {
      if ( v13 )
      {
        *(_QWORD *)&v54 = 0;
        qfree(v13);
      }
      qfree(v51);
      if ( v49 )
      {
        v50 = 0;
        qfree(v49);
      }
      qfree(v47);
      return 0;
    }
    if ( v53 )
    {
      *(_QWORD *)&v54 = 0;
      qfree(v53);
    }
    qfree(v51);
    if ( v49 )
    {
      v50 = 0;
      qfree(v49);
    }
    qfree(v47);
  }
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v42 = v15;
  tinfo_property = get_tinfo_property();
  v43 = sub_11CA90(tinfo_property);
  if ( v43 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL)
    || !(unsigned __int8)sub_155C40(v15, a1, (_BYTE *)a2, *(_QWORD *)(v7 + 24), v17, v18) )
  {
    return 0;
  }
  v46 = 0;
  v45 = 0xFFFFFFFF00000000LL;
  v21 = j__qalloc_or_throw(80, a1, v19, v20);
  v22 = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(v21 + 40) = 0;
  *(_QWORD *)(v21 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v21 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v21 + 56) = 0;
  *(_QWORD *)(v21 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v21 + 72) = 0;
  sub_330970(v21, v22);
  *(_DWORD *)v21 = 22;
  sub_120A10(v21 + 32, v42, 1, v43, -1, 0);
  sub_125180(v21 + 48, (unsigned __int8 *)(*(_QWORD *)(v7 + 24) + 80LL));
  if ( v43 == 2 && v9 )
    sub_126240((char *)(v21 + 48), v42, 0x14u, *(_QWORD *)(a3 + 24), 15, *(_DWORD *)(v21 + 52));
  LOBYTE(v45) = 4;
  v46 = v21;
  v5 = sub_12AB50((unsigned __int8 *)(v21 + 48), v42, 1, 1);
  if ( (_BYTE)v5 )
  {
    *(_DWORD *)(v21 + 68) = v43;
    HIDWORD(v45) = v43;
    v47 = 0xFFFFFFFF00000000LL;
    v48 = 0;
    v41 = j__qalloc_or_throw(80, v42, v23, v24);
    v25 = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(v41 + 40) = 0;
    *(_QWORD *)(v41 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v41 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v41 + 56) = 0;
    *(_QWORD *)(v41 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v41 + 72) = 0;
    sub_330970(v41, v25);
    *(_DWORD *)v41 = 2;
    v26 = *(_DWORD *)(v42 + 52);
    v51 = 0x200000001LL;
    LODWORD(v52) = v26;
    sub_125180(v41 + 32, (unsigned __int8 *)&v51);
    sub_11CDA0((__int64)&v51);
    sub_11CA10((char *)(v41 + 48), *(char **)(v7 + 24));
    *(_DWORD *)(v41 + 68) = v43;
    v48 = v41;
    LOBYTE(v47) = 4;
    HIDWORD(v47) = v43;
    sub_11CA10((char *)(a3 + 32), (char *)&v47);
    v27 = &v45;
    v39 = (char *)(a3 + 48);
    sub_11CA10((char *)(a3 + 48), (char *)&v45);
    if ( a2 != a3 )
    {
      v30 = j__qalloc_or_throw(80, (__int64)&v45, v28, v29);
      *(_QWORD *)(v30 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v30 + 40) = 0;
      *(_QWORD *)(v30 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v30 + 56) = 0;
      *(_QWORD *)(v30 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v30 + 72) = 0;
      *(_OWORD *)(v30 + 8) = 0;
      sub_1253A0(v30, a3);
      *(_DWORD *)v30 = 20;
      sub_125180(v30 + 64, (unsigned __int8 *)(a2 + 64));
      *(_DWORD *)(v30 + 68) = v43;
      sub_12B6F0(v30, v42, 32, 1, 1);
      sub_120A10(v30 + 48, v42, 0, v43, -1, 0);
      sub_A3160(a1, (_QWORD *)v30, *(_QWORD *)(a2 + 16));
      v27 = (unsigned __int64 *)v42;
      sub_15BC70((unsigned int *)v30, (unsigned __int64 *)v42, a1, v30, nullptr, nullptr, (__m128i)0LL, 0);
    }
    v31 = *(_DWORD *)(v7 + 284);
    if ( v31 == 21 )
    {
      v27 = (unsigned __int64 *)v42;
      sub_1207E0(v39, v42, 7, *(_QWORD *)(a3 + 24), v43);
      *(_DWORD *)a3 = 20;
    }
    else if ( v31 > 0x15 )
    {
      if ( v31 == 22 )
        *(_DWORD *)a3 = 21;
    }
    else if ( v31 == 19 )
    {
      *(_DWORD *)a3 = 4;
      sub_11CDA0((__int64)v39);
    }
    else if ( v31 == 20 )
    {
      *(_DWORD *)a3 = 19;
    }
    sub_11CDA0(a3 + 64);
    *(_DWORD *)(a3 + 68) = v43;
    if ( a2 == a3 )
    {
      v34 = (_QWORD *)j__qalloc_or_throw(80, (__int64)v27, v32, v33);
      sub_1510E0(v34, *(_QWORD *)(a3 + 24));
      sub_11D890((__int64)v34, a3);
      *(_BYTE *)(a3 + 32) = 4;
      *(_DWORD *)a3 = 1;
      *(_QWORD *)(a3 + 40) = v34;
      *(_DWORD *)(a3 + 36) = v43;
      sub_125180((__int64)v39, (unsigned __int8 *)(v41 + 32));
      sub_125180(a3 + 64, (unsigned __int8 *)(v41 + 48));
    }
    else
    {
      sub_125180(a2 + 64, *(unsigned __int8 **)(v41 + 56));
    }
    sub_11CDA0((__int64)&v47);
  }
  sub_11CDA0((__int64)&v45);
  return v5;
}
