__int64 __fastcall sub_11B3E0(
        int a1,
        __int64 a2,
        unsigned int a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  int v26; // r12d
  __int64 module_data; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  unsigned int v36; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v37; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v38; // [rsp+8h] [rbp-30h]

  v38 = __readfsqword(0x28u);
  if ( !(unsigned __int8)auto_is_ok() && (int)sub_F9410(0xFFFFFFFF, 989) <= 0 )
    return 1;
  v13 = sub_117010(1u, a2, a3);
  v14 = v13;
  if ( !v13 )
    return 1;
  v36 = -1;
  v37 = -1;
  if ( a1 == -1 )
  {
    v15 = sub_11B290(v13);
    if ( !v15 )
      return 0;
    v16 = v37;
    v17 = v36;
    v18 = 1005;
  }
  else
  {
    module_data = get_module_data();
    if ( a1 && *(_QWORD *)(*(_QWORD *)(module_data + 8) + 376LL) )
      getinf_str();
    if ( (unsigned __int8)sub_161360(0, &v36, &v37) )
      sub_15D870();
    v15 = sub_11B290(v14);
    if ( !v15 )
      return 0;
    v16 = v37;
    v17 = v36;
    v18 = 1004;
    if ( !a1 )
    {
      sub_108A90(1006, v14, v36, v37);
      v29 = itext();
      sub_10DDF0((__int64)"%s", v29, v30, v31, v32, v33, a4, a5, a6, a7, v34, v35, a10, a11, v36);
      goto LABEL_8;
    }
  }
  sub_108A90(v18, v14, v17, v16);
  v19 = itext();
  sub_10DDF0((__int64)"%s", v19, v20, v21, v22, v23, a4, a5, a6, a7, v24, v25, a10, a11, v36);
LABEL_8:
  v26 = gen_file();
  sub_10D850();
  if ( v26 >= 0 )
  {
    qfclose();
    TScreen::makeBeep(nullptr);
    if ( a1 != -1 )
    {
LABEL_10:
      sub_108A90(a1 == 0 ? 1009 : 1007, (unsigned int)v26);
      return 1;
    }
    if ( !v26 && getinf_str() <= 0 )
    {
LABEL_23:
      sub_108A90(1008, (unsigned int)v26);
      return 1;
    }
LABEL_22:
    qbasename();
    setinf_buf();
    goto LABEL_23;
  }
  sub_F9340(1003, v15);
  qfclose();
  TScreen::makeBeep(nullptr);
  if ( v26 != -1 )
  {
    if ( a1 != -1 )
      goto LABEL_10;
    goto LABEL_22;
  }
  return 0;
}

