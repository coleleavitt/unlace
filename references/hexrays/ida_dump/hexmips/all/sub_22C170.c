__int64 __fastcall sub_22C170(__int64 a1, __int64 a2, int a3, __int64 *a4, char a5, __int64 *a6)
{
  unsigned int i; // ebp
  __m128 v10; // xmm0
  __int64 v11; // r12
  __int64 v12; // r15
  _QWORD *v13; // r14
  __int64 v14; // rax
  signed __int64 v15; // r15
  signed __int64 v16; // r13
  __int64 func; // rax
  int tinfo_udt_member; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int8 dtype_by_size; // al
  __int64 dtype_flag; // rax
  unsigned __int64 data_elsize; // rax
  unsigned __int64 v28; // rsi
  unsigned __int8 v29; // r12
  char v30; // r14
  __int64 v31; // rax
  __int64 v32; // r12
  unsigned __int64 v33; // r12
  unsigned __int64 *v34; // rax
  void *v35; // rbx
  unsigned __int64 v38; // [rsp+18h] [rbp-200h]
  unsigned __int64 v39; // [rsp+18h] [rbp-200h]
  __int64 v40; // [rsp+20h] [rbp-1F8h]
  __int64 v41; // [rsp+20h] [rbp-1F8h]
  signed __int64 v42; // [rsp+30h] [rbp-1E8h]
  __int64 v43; // [rsp+38h] [rbp-1E0h]
  __int64 v44; // [rsp+40h] [rbp-1D8h]
  int v45; // [rsp+50h] [rbp-1C8h]
  bool v46; // [rsp+63h] [rbp-1B5h]
  int v47; // [rsp+64h] [rbp-1B4h] BYREF
  __int64 v48; // [rsp+68h] [rbp-1B0h] BYREF
  __int64 v49; // [rsp+78h] [rbp-1A0h] BYREF
  char v50[8]; // [rsp+80h] [rbp-198h] BYREF
  char v51[8]; // [rsp+88h] [rbp-190h] BYREF
  __m128 v52; // [rsp+90h] [rbp-188h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-178h]
  unsigned __int64 v54; // [rsp+B0h] [rbp-168h] BYREF
  unsigned __int64 v55; // [rsp+B8h] [rbp-160h]
  __int64 v56; // [rsp+C0h] [rbp-158h]
  __int128 v57; // [rsp+C8h] [rbp-150h]
  __int64 v58; // [rsp+D8h] [rbp-140h]
  __int128 v59; // [rsp+E0h] [rbp-138h]
  _OWORD v60[3]; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v61; // [rsp+120h] [rbp-F8h]
  int v62; // [rsp+128h] [rbp-F0h]
  __int64 v63; // [rsp+130h] [rbp-E8h]
  char v64; // [rsp+138h] [rbp-E0h]
  __int64 v65; // [rsp+140h] [rbp-D8h] BYREF
  __int64 v66; // [rsp+148h] [rbp-D0h]
  void *src; // [rsp+150h] [rbp-C8h] BYREF
  __int128 v68; // [rsp+158h] [rbp-C0h]
  __int64 v69; // [rsp+168h] [rbp-B0h]
  __int128 v70; // [rsp+170h] [rbp-A8h]
  __int128 v71[3]; // [rsp+180h] [rbp-98h] BYREF
  __int64 v72; // [rsp+1B0h] [rbp-68h]
  int v73; // [rsp+1B8h] [rbp-60h]
  __int64 v74; // [rsp+1C0h] [rbp-58h]
  char v75; // [rsp+1C8h] [rbp-50h]
  unsigned __int64 v76; // [rsp+1D8h] [rbp-40h]

  v48 = a2;
  v47 = a3;
  v76 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 8) || a2 + a3 > 0x100000 )
    return 0;
  v10 = _mm_loadh_ps((const double *)(a1 + 816));
  v53 = *(_QWORD *)(a1 + 816);
  v52 = v10;
  if ( sub_223190((__int64)&v52, (unsigned __int64 *)&v48, &v47, a1) )
    a4 = nullptr;
  v11 = v48;
  v12 = v48;
  v13 = (_QWORD *)sub_1CB940(a1, v48);
  v14 = v13[4];
  v45 = v47;
  v15 = v12 - v14;
  v38 = v47;
  v16 = v11 + v47 - v14;
  v40 = v11 + v47;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL) != 8 )
  {
    v15 = (int)v15;
    v16 = (int)v16;
  }
  if ( v15 < 0 )
    return 0;
  func = get_func(*v13);
  v49 = 0;
  v43 = func;
  tinfo_get_func_frame(&v49, func);
  v55 = 0;
  v61 = 1;
  v54 = 8 * v15;
  v56 = 0;
  v58 = 0;
  v62 = -1;
  v63 = 0;
  v64 = 0;
  v57 = 0;
  v59 = 0;
  v60[0] = 0;
  tinfo_udt_member = find_tinfo_udt_member(&v54, v49, 0);
  v44 = tinfo_udt_member;
  if ( tinfo_udt_member == -1 )
  {
    v42 = v15;
  }
  else
  {
    v19 = v55;
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 8LL);
    if ( v55 >> 3 == *(_QWORD *)(v20 + 120) )
    {
      if ( (unsigned __int8)getinf(66) )
        v31 = (unsigned __int8)getinf(66);
      else
        v31 = *(_QWORD *)(v20 + 120);
      if ( v38 == v31 )
      {
        v65 = 0;
        copy_tinfo_t(&v65, v60);
        if ( (get_tinfo_property(v65, 2) & 0x3F) == 0x39 )
        {
          i = 0;
          clear_tinfo_t(&v65);
          goto LABEL_24;
        }
        clear_tinfo_t(&v65);
      }
      v19 = v55;
    }
    v15 = v54 >> 3;
    v42 = (v19 + v54) >> 3;
  }
  if ( v42 >= v16 )
  {
LABEL_18:
    clear_tinfo_t(v60);
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      qfree(v58);
    }
    if ( v56 )
    {
      *(_QWORD *)&v57 = 0;
      qfree(v56);
    }
    clear_tinfo_t(&v49);
    return 0;
  }
  if ( !(_BYTE)v49 )
  {
    add_frame(v43, 0, 0, 0);
    tinfo_get_func_frame(&v49, v43);
    if ( !(_BYTE)v49 )
      goto LABEL_23;
  }
  if ( (unsigned __int8)sub_32E4F0(&v49, v15, v16) )
    goto LABEL_23;
  if ( (a5 & 1) == 0 )
    goto LABEL_18;
  v21 = *(_QWORD *)(a1 + 936);
  if ( v21 )
  {
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 40LL))(v21);
    v23 = *(_QWORD *)(a1 + 144);
    v24 = v22;
    if ( v23 <= v22 )
      v24 = *(_QWORD *)(a1 + 144);
    if ( v22 != -1 )
      v23 = v24;
  }
  else
  {
    v23 = *(_QWORD *)(a1 + 144);
  }
  v46 = v40 > v23 && v11 < v23;
  if ( v46 )
    goto LABEL_23;
  if ( v16 - v15 != v38 )
  {
    a4 = nullptr;
    v45 = v16 - v15;
    v47 = v16 - v15;
    v38 = (int)v16 - (int)v15;
  }
  v41 = v23;
  dtype_by_size = get_dtype_by_size(v38);
  dtype_flag = get_dtype_flag(dtype_by_size);
  data_elsize = get_data_elsize(-1, dtype_flag, 0);
  if ( v38 < data_elsize )
  {
    v45 = data_elsize;
    v47 = data_elsize;
    v16 = (int)data_elsize + v15;
  }
  v28 = v15 + v13[4];
  v39 = v28;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL) != 8 )
    v39 = (int)v28;
  if ( v11 < v41 || (unsigned __int8)sub_224070((_QWORD *)a1, v39, v45, a4) )
  {
    v29 = 1;
    if ( (signed __int64)(v45 + v39) <= *(_QWORD *)(a1 + 128) )
    {
      v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(a1 + 1440) + v39);
      v68 = 0;
      v65 = 0;
      v66 = 0;
      src = nullptr;
      if ( v33 + v45 - 1 >= v33 )
      {
        src = (void *)qvector_reserve(&src, 0, 1, 16);
        v34 = (unsigned __int64 *)((char *)src + 16 * v68);
        *v34 = v33;
        v34[1] = v45;
        *(_QWORD *)&v68 = v68 + 1;
      }
      v29 = sub_60580((_QWORD *)(a1 + 832), &v65);
      if ( !v29 )
        v29 = sub_3136F0(a1 + 848, &src);
      if ( src )
      {
        *(_QWORD *)&v68 = 0;
        qfree(src);
      }
      qfree(v65);
    }
    v30 = sub_229120(a1, (__int64)v13, &v49, v15, v16, a6, 0.0);
    if ( v30 )
    {
      sub_327340(v50, *(_QWORD *)(a1 + 1504), (unsigned int)v45);
      if ( !v50[0] )
      {
        sub_327340(v51, *(_QWORD *)(a1 + 1504), 1);
        LODWORD(v66) = 0;
        v65 = 0;
        HIDWORD(v66) = v45;
        copy_tinfo_t(&v65, v51);
        create_tinfo(v50, 11, 11, &v65);
        clear_tinfo_t(&v65);
        clear_tinfo_t(v51);
      }
      for ( i = 0; ; i = a5 & 1 )
      {
        if ( v44 == -1 )
        {
          if ( (unsigned __int8)add_frame_member(v43, 0, v15, v50, 0, 0) )
          {
LABEL_84:
            if ( !v29 && (a5 & 2) != 0 )
              sub_22BC30((__int64)&v52, v39, v45);
            *(_DWORD *)a1 |= 0x8000000u;
            i = (v46 || v44 != -1) + 1;
            goto LABEL_68;
          }
        }
        else if ( (int)set_tinfo_property4(&v49, 12, v44, v50, 0, 0) >= 0 )
        {
          goto LABEL_84;
        }
        if ( i )
          goto LABEL_58;
        if ( v29 )
          goto LABEL_68;
        if ( !(unsigned __int8)delete_frame_members(v43, v42, v16) )
        {
LABEL_58:
          if ( !v46 )
          {
            if ( a6 )
            {
              v66 = 0;
              v72 = 1;
              src = nullptr;
              v69 = 0;
              v65 = v44 + 1;
              v75 = 0;
              v73 = -1;
              v74 = 0;
              v68 = 0;
              v70 = 0;
              v71[0] = 0;
              if ( (unsigned int)find_tinfo_udt_member(&v65, v49, 1) != -1 )
              {
                v32 = v68;
                if ( (unsigned __int64)v68 > 1 )
                {
                  v35 = src;
                  if ( a6[2] < (unsigned __int64)v68 )
                    *a6 = qvector_reserve(a6, *a6, v68, 1);
                  a6[1] = v32;
                  memmove((void *)*a6, v35, v32 - 1);
                  *(_BYTE *)(*a6 + v32 - 1) = 0;
                }
                else
                {
                  a6[1] = 0;
                }
              }
              clear_tinfo_t(v71);
              if ( v69 )
              {
                *(_QWORD *)&v70 = 0;
                qfree(v69);
              }
              if ( src )
              {
                *(_QWORD *)&v68 = 0;
                qfree(src);
              }
            }
            i = -1;
LABEL_68:
            clear_tinfo_t(v50);
            goto LABEL_24;
          }
        }
        v54 = 8 * v15;
        v44 = (int)find_tinfo_udt_member(&v54, v49, 0);
        if ( i == 1 )
          break;
        v46 = v30;
      }
      clear_tinfo_t(v50);
      goto LABEL_18;
    }
    i = v29 - 1;
  }
  else
  {
LABEL_23:
    i = -1;
  }
LABEL_24:
  clear_tinfo_t(v60);
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58);
  }
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56);
  }
  clear_tinfo_t(&v49);
  return i;
}
