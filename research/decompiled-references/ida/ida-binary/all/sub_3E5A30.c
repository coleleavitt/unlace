__int64 __fastcall sub_3E5A30(
        __int64 a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v12; // edx
  int v13; // eax
  const char *v14; // rbp
  __int64 *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  int *v21; // rcx
  void (__fastcall ***v22)(_QWORD); // rdi
  bool v23; // zf
  unsigned int v24; // ebx
  void (__fastcall ***v26)(_QWORD); // rdi
  char v27; // r14
  int v28; // r15d
  double v29; // xmm4_8
  double v30; // xmm5_8
  char v31; // al
  const char *v32; // rdx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // r14
  int v37; // r15d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 name_ea; // [rsp+0h] [rbp-90h] BYREF
  _DWORD *v46; // [rsp+8h] [rbp-88h] BYREF
  __int128 v47; // [rsp+10h] [rbp-80h]
  __int64 v48; // [rsp+28h] [rbp-68h] BYREF
  __int128 v49; // [rsp+30h] [rbp-60h]
  __int64 v50; // [rsp+40h] [rbp-50h]
  unsigned __int64 v51; // [rsp+50h] [rbp-40h]

  v12 = *(_DWORD *)(a1 + 376);
  v51 = __readfsqword(0x28u);
  v13 = 0;
  LOBYTE(v48) = 2;
  v49 = 0;
  v50 = 0;
  if ( v12 >= 0 )
    v13 = v12;
  if ( *(_QWORD *)(a1 + 88) || (v14 = (const char *)&unk_5E03A7, v12 > 0) )
    v14 = (const char *)(*(_QWORD *)(a1 + 80) + v13);
  if ( v14 )
  {
    v15 = (__int64 *)a2[1];
    v46 = nullptr;
    if ( (unsigned __int8)sub_3E10A0((__int64 *)&v46, v15, v14)
      || (unsigned __int8)sub_3E3880(&v46, *a2, (__int64)v14, (__m128)0LL, a4, a5, a6, v19, v20, a9, a10, v16, v17, v18) )
    {
      v21 = nullptr;
      if ( *(_DWORD *)(a1 + 376) == -1 )
        v21 = (int *)(a1 + 72);
      sub_3E5190(
        a1,
        (__int64 *)&v46,
        qword_8BA5A8,
        v21,
        0.0,
        a4,
        a5,
        a6,
        *(double *)v19.m128_u64,
        *(double *)v20.m128_u64,
        a9,
        a10);
      v22 = (void (__fastcall ***)(_QWORD))v46;
      if ( v46 )
      {
        v23 = v46[2]-- == 1;
        if ( v23 )
          (**v22)(v22);
      }
      goto LABEL_13;
    }
    v26 = (void (__fastcall ***)(_QWORD))v46;
    if ( v46 )
    {
      v23 = v46[2]-- == 1;
      if ( v23 )
        (**v26)(v26);
    }
  }
  v27 = parse_reg_name(&v46, v14);
  if ( v27 )
  {
    v28 = (int)v46;
    cleanup_argloc(a1 + 104);
    *(_DWORD *)(a1 + 104) = 3;
    *(_DWORD *)(a1 + 112) = v28;
    v31 = sub_3E4DC0(a1, 0.0, a4, a5, a6, v29, v30, a9, a10);
    goto LABEL_21;
  }
  v35 = (__int64)v14;
  name_ea = get_name_ea(-1, v14);
  v36 = name_ea;
  v37 = -1;
  if ( name_ea == -1 )
  {
    if ( *(_DWORD *)(a1 + 376) == -1 )
      goto LABEL_23;
    v35 = (__int64)v14;
    if ( (unsigned __int8)atoea(&name_ea, v14) )
    {
      v36 = name_ea;
      if ( name_ea != -1 )
      {
        v37 = -1;
        goto LABEL_28;
      }
    }
    else
    {
      name_ea = -1;
    }
    if ( !dword_8CC5F0 )
      goto LABEL_24;
    v35 = xmmword_8CC810;
    if ( (unsigned __int8)eval_idc_expr(&v48, xmmword_8CC810, v14, 0) )
    {
      if ( (unsigned int)idcv_long(&v48) )
      {
        v36 = name_ea;
        if ( name_ea == -1 )
          goto LABEL_24;
      }
      else
      {
        v36 = v49;
        name_ea = v49;
        if ( (_QWORD)v49 == -1 )
          goto LABEL_24;
      }
      v37 = 1;
    }
    else
    {
      v36 = name_ea;
      if ( name_ea == -1 )
        goto LABEL_24;
      v37 = 0;
    }
  }
LABEL_28:
  cleanup_argloc(a1 + 104);
  v23 = *(_DWORD *)(a1 + 376) == -1;
  *(_DWORD *)(a1 + 104) = 6;
  *(_QWORD *)(a1 + 112) = v36;
  if ( v23 )
  {
    clear_tinfo_t(a1 + 72);
    v35 = name_ea;
    if ( !(unsigned __int8)get_tinfo(a1 + 72, name_ea) )
    {
      v35 = name_ea;
      guess_tinfo(a1 + 72, name_ea);
    }
    v39 = *(unsigned int *)(a1 + 104);
    if ( !(_DWORD)v39 )
    {
      if ( v37 != -1 )
        goto LABEL_24;
      goto LABEL_23;
    }
  }
  v31 = sub_3E44D0(a1, 0.0, v35, v38, v39, v40, v41);
  v27 = v37 == -1;
LABEL_21:
  if ( v31 == 1 )
    goto LABEL_13;
  if ( !v27 )
  {
    if ( !v31 )
      goto LABEL_24;
LABEL_13:
    v24 = 1;
    goto LABEL_14;
  }
LABEL_23:
  if ( dword_8CC5F0 && (unsigned __int8)eval_idc_expr(&v48, xmmword_8CC810, v14, 0) )
  {
    sub_3E3C40(a1, &v48, v42, v43, v44);
    goto LABEL_13;
  }
LABEL_24:
  v32 = *(const char **)(a1 + 80);
  v47 = 0;
  v46 = nullptr;
  sub_169A50((__int64 *)&v46, (__int64)"Cannot evaluate \"%s\".", v32);
  sub_3E3770((__int64 *)(a1 + 120), v46, 0, 0.0);
  sub_3E3770((__int64 *)(a1 + 216), v46, 0, 0.0);
  v33 = *(_DWORD *)(a1 + 312);
  *(_DWORD *)(a1 + 312) = -1;
  *(_DWORD *)(a1 + 316) = v33;
  sub_3E3920(a1 + 312, 0, 0.0);
  sub_3E2CD0((__int64 *)a1, nullptr, *(unsigned int *)(a1 + 24), v34, 0.0);
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46, nullptr);
  }
  v24 = 0;
LABEL_14:
  free_idcv(&v48);
  return v24;
}
