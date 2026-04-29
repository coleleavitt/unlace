_QWORD *__fastcall sub_F4340(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // r8
  unsigned int v8; // r15d
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // r14
  const char *v16; // rax
  int flags; // eax
  __int64 v18; // r8
  int v19; // edx
  char v20; // al
  int v21; // eax
  char tinfo_property; // al
  char v23; // r12
  _QWORD *v24; // r14
  unsigned int v25; // eax
  int v26; // eax
  unsigned __int64 v27; // rax
  unsigned int v28; // r15d
  int v29; // r12d
  __int64 v30; // rdi
  int v31; // r13d
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // r8
  unsigned int v34; // r13d
  int v35; // eax
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // eax
  unsigned __int64 *v39; // rax
  _QWORD *v40; // [rsp+8h] [rbp-110h]
  unsigned int v41; // [rsp+10h] [rbp-108h]
  unsigned __int64 v42; // [rsp+28h] [rbp-F0h]
  __int64 v43; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v44[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+58h] [rbp-C0h]
  __int64 v47; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v48; // [rsp+78h] [rbp-A0h]
  __int128 v49; // [rsp+88h] [rbp-90h]
  __int64 (__fastcall **v50)(); // [rsp+A0h] [rbp-78h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-70h]
  __int64 v52; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-60h]
  _QWORD *v54; // [rsp+C8h] [rbp-50h]
  __int64 v55; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v56; // [rsp+D8h] [rbp-40h]

  v6 = *(_BYTE *)(a3 + 88);
  v56 = __readfsqword(0x28u);
  v8 = v6 & 0xF0;
  if ( (v6 & 0xF0) == 0xC0 )
    v8 = *(_DWORD *)(a3 + 28);
  if ( v8 <= 0x10 )
  {
    v10 = getinf();
    v8 = v10;
    if ( v10 - 208 <= 0x2F || !v10 )
      goto LABEL_5;
  }
  else if ( v8 - 208 <= 0x2F )
  {
LABEL_5:
    *a1 = 0;
    return a1;
  }
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_DWORD *)(v11 + 72);
  if ( v12 <= 0x10 )
  {
    v12 = getinf();
    v11 = *(_QWORD *)(a2 + 8);
  }
  v40 = *(_QWORD **)(*(_QWORD *)a2 + 8LL);
  if ( *(_BYTE *)(v11 + 328) && *(_DWORD *)(sub_110EC0(v40, 0) + 76) == 1 )
  {
    v21 = v12;
    if ( v12 <= 0x10 )
      v21 = getinf();
    if ( v21 != 176 && v21 != 256
      || v21 == 176 && ((unsigned __int64)getinf() > 0x397 || (unsigned int)sub_D3F40(88) == 176) )
    {
      v44[0] = get_tinfo_property();
      if ( (get_tinfo_property() & 0x3F) == 1 )
        goto LABEL_45;
      tinfo_property = get_tinfo_property();
      if ( (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0 )
        goto LABEL_45;
      if ( v8 == (unsigned int)get_tinfo_property() )
      {
        *a1 = 0;
        copy_tinfo_t();
      }
      else
      {
        v47 = 0;
        *(_QWORD *)&v48 = 0;
        v50 = 0;
        v51 = 0;
        if ( !(unsigned __int8)sub_D4610((__int64)&v47)
          || !(unsigned __int8)sub_D4610((__int64)&v50)
          || (unsigned int)compare_arglocs() )
        {
          cleanup_argloc();
          cleanup_argloc();
LABEL_45:
          clear_tinfo_t();
          goto LABEL_12;
        }
        *a1 = 0;
        copy_tinfo_t();
        cleanup_argloc();
        cleanup_argloc();
      }
      clear_tinfo_t();
      return a1;
    }
  }
LABEL_12:
  sub_D6510(*(_QWORD *)(a2 + 16));
  v15 = *(_QWORD **)(*(_QWORD *)(a2 + 16) + 768LL);
  if ( v8 <= 0x10 )
  {
    if ( (unsigned int)getinf() != 176 )
      goto LABEL_47;
  }
  else if ( v8 != 176 )
  {
    if ( v8 != 32 )
      goto LABEL_15;
    if ( (unsigned __int8)sub_63F80(v15 + 14) )
      goto LABEL_47;
    goto LABEL_65;
  }
  if ( (unsigned __int64)getinf() <= 0x397 )
  {
    if ( !(unsigned __int8)getinf_flag()
      || (netnode_check(), v25 = netnode_altval(), v25 <= 0x74)
      || (v41 = v25, (v26 = *(_DWORD *)(get_ph() + 4)) != 0)
      && ((v27 = (unsigned int)(v26 - 13), (unsigned int)v27 > 0x3B)
       || (v13 = 0x800000000000005LL, !_bittest64(&v13, v27))
       || v41 == 117) )
    {
LABEL_15:
      if ( v8 == 256 || v8 == 176 )
      {
        sub_DF4F0((__int64)v44, v40, 1, v13, v14);
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 757LL) & 1) != 0 )
          goto LABEL_48;
        v50 = 0;
        v51 = 0;
        v52 = 0;
        v53 = 0;
        goto LABEL_19;
      }
LABEL_47:
      sub_DF4F0((__int64)v44, v40, 0, v13, v14);
      goto LABEL_48;
    }
  }
LABEL_65:
  sub_DF4F0((__int64)v44, v40, 1, v13, v14);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 757LL) & 1) != 0 )
    goto LABEL_48;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  if ( (unsigned __int8)sub_63E80(v44, v15 + 14) )
  {
    sub_63980((__int64 *)&v50, v44);
    sub_63E00((__int64 *)&v50, v15 + 12);
  }
LABEL_19:
  if ( v46 )
  {
    if ( *(int *)(a2 + 344) > 0 )
    {
      v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1496LL) + 24LL) + 16LL)
          & (*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1440LL) + *(_QWORD *)(a2 + 336));
      if ( (unsigned __int8)sub_313AC0(&v45, v32) )
      {
        sub_313730(&v52, &v45);
        v33 = *(int *)(a2 + 344);
        v47 = 0;
        v48 = 0;
        if ( v33 + v32 - 1 >= v32 )
        {
          v42 = v33;
          v47 = qvector_reserve();
          v39 = (unsigned __int64 *)(16 * v48 + v47);
          *v39 = v32;
          v39[1] = v42;
          *(_QWORD *)&v48 = v48 + 1;
        }
        sub_314B70(&v52, &v47);
        if ( v47 )
        {
          *(_QWORD *)&v48 = 0;
          qfree();
        }
      }
    }
  }
  if ( !(unsigned __int8)sub_63F80(&v50) )
  {
    if ( !(_QWORD)v53 )
    {
LABEL_24:
      v43 = 0;
      if ( *(_QWORD *)(a2 + 320) == -1
        || ((flags = get_flags_ex(), (~(_WORD)flags & 0x600) != 0) || (flags & 0x10000000) == 0)
        && !(unsigned __int8)is_spec_ea() )
      {
        v18 = *(_QWORD *)(a2 + 304);
      }
      else
      {
        v18 = *(_QWORD *)(a2 + 320);
      }
      if ( (unsigned __int8)sub_F3EF0(*(_QWORD **)(a2 + 8), &v43, 0, &v50, v18, 2) )
      {
        if ( !(unsigned __int8)getinf_flag()
          || (netnode_check(), v34 = netnode_altval(), v34 <= 0x74)
          || (v35 = *(_DWORD *)(get_ph() + 4)) != 0
          && ((v36 = (unsigned int)(v35 - 13), (unsigned int)v36 > 0x3B)
           || (v37 = 0x800000000000005LL, !_bittest64(&v37, v36))
           || v34 == 117) )
        {
          *(_DWORD *)(a2 + 360) = 256;
          v19 = 256;
          v20 = *(_BYTE *)(a3 + 88) & 0xF | 0xC0;
        }
        else
        {
          *(_DWORD *)(a2 + 360) = 176;
          v19 = 0;
          v20 = *(_BYTE *)(a3 + 88) & 0xF | 0xB0;
        }
        *(_BYTE *)(a3 + 88) = v20;
        *(_DWORD *)(a3 + 28) = v19;
        *a1 = 0;
        copy_tinfo_t();
        clear_tinfo_t();
        if ( v52 )
        {
          *(_QWORD *)&v53 = 0;
          qfree();
        }
LABEL_33:
        qfree();
        goto LABEL_34;
      }
      clear_tinfo_t();
      goto LABEL_83;
    }
LABEL_23:
    v16 = (const char *)sub_1B3410(&v50);
    sub_6C720((__int64)"use stkret: %s at %a\n", v16, 0.0);
    goto LABEL_24;
  }
  if ( (_QWORD)v53 )
    goto LABEL_23;
LABEL_83:
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree();
  }
  qfree();
LABEL_48:
  if ( a4 )
    goto LABEL_49;
  if ( !(unsigned __int8)sub_63E80(v15 + 6, v15 + 2) )
  {
LABEL_55:
    if ( !(unsigned __int8)sub_63F80(v15 + 2) && (unsigned __int8)sub_63F20(v15 + 2, v44) )
    {
      *a1 = 5;
      goto LABEL_34;
    }
    if ( !(unsigned __int8)sub_63F80(v15) && (unsigned __int8)sub_63F20(v15, v44) )
    {
      *a1 = 7;
      goto LABEL_34;
    }
    goto LABEL_49;
  }
  v47 = 0;
  v48 = 0u;
  v49 = 0;
  sub_63980(&v47, v15 + 6);
  v30 = sub_A9010((__int64)v40, &v47, v40[6], 0, 0);
  if ( !v30 )
  {
    if ( !*((_QWORD *)&v48 + 1) )
    {
LABEL_111:
      qfree();
      goto LABEL_55;
    }
LABEL_110:
    *(_QWORD *)&v49 = 0;
    qfree();
    goto LABEL_111;
  }
  v54 = v15 + 6;
  v43 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0u;
  v50 = off_4DC520;
  v55 = 0;
  v31 = sub_11D320(v30, &v50);
  if ( v31 == 1 )
  {
    copy_tinfo_t();
    v50 = off_4DC520;
    clear_tinfo_t();
    *a1 = 0;
    copy_tinfo_t();
    clear_tinfo_t();
    if ( *((_QWORD *)&v48 + 1) )
    {
      *(_QWORD *)&v49 = 0;
      qfree();
    }
    goto LABEL_33;
  }
  v50 = off_4DC520;
  if ( v31 == 3 )
  {
    clear_tinfo_t();
    clear_tinfo_t();
    if ( !*((_QWORD *)&v48 + 1) )
      goto LABEL_111;
    goto LABEL_110;
  }
  clear_tinfo_t();
  clear_tinfo_t();
  if ( *((_QWORD *)&v48 + 1) )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
  }
  qfree();
  if ( v31 != 2 )
    goto LABEL_55;
LABEL_49:
  v23 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 148LL) )
    goto LABEL_138;
  v23 = sub_63E80(v15 + 10, v44);
  if ( v23 )
  {
    sub_63700((__int64 *)&v50, (__int64)(v15 + 10));
    sub_63E00((__int64 *)&v50, v44);
    v28 = sub_64220((__int64)&v50);
    v29 = sub_64060(&v50, 0);
    if ( v29 != (unsigned int)sub_64060(v15 + 10, 0)
      || (v23 = sub_11A640(v28)) == 0
      || (v38 = sub_64060(&v50, 0), v28 != (unsigned int)sub_642A0(&v50, v38)) )
    {
      *a1 = 0;
      copy_tinfo_t();
      qfree();
      goto LABEL_34;
    }
    qfree();
  }
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 148LL)
    || (unsigned __int8)sub_63F80(v15 + 8)
    || !(unsigned __int8)sub_63F20(v15 + 8, v44) )
  {
LABEL_138:
    if ( (unsigned __int8)sub_63F80(v15 + 6) || !(unsigned __int8)sub_63F20(v15 + 6, v44) )
    {
      v24 = v15 + 4;
      if ( (unsigned __int8)sub_63F80(v24) || !(unsigned __int8)sub_63F20(v24, v44) )
      {
        *a1 = 0;
        if ( v23 )
          copy_tinfo_t();
      }
      else
      {
        *a1 = 9;
      }
    }
    else
    {
      *a1 = 25;
    }
    goto LABEL_34;
  }
  *a1 = 41;
LABEL_34:
  if ( v45 )
  {
    v46 = 0;
    qfree();
  }
  qfree();
  return a1;
}
