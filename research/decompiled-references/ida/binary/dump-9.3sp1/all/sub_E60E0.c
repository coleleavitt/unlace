_QWORD *__fastcall sub_E60E0(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // r8
  unsigned int v8; // r15d
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // r14d
  _QWORD *v13; // r14
  const char *v14; // rax
  int flags; // eax
  __int64 v16; // r8
  int v17; // edx
  char v18; // al
  int v19; // eax
  char tinfo_property; // al
  char v21; // r12
  _QWORD *v22; // r14
  unsigned int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // r15d
  int v28; // r12d
  __int64 v29; // rdi
  int v30; // r13d
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r8
  __int64 v33; // rdi
  unsigned int v34; // r13d
  int v35; // eax
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // eax
  unsigned __int64 *v39; // rax
  __int64 v40; // [rsp+8h] [rbp-110h]
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
  v40 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  if ( *(_BYTE *)(v11 + 328) && *(_DWORD *)(sub_1120C0(v40, 0) + 76) == 1 )
  {
    v19 = v12;
    if ( v12 <= 0x10 )
      v19 = getinf();
    if ( v19 != 176 && v19 != 256
      || v19 == 176 && ((unsigned __int64)getinf() > 0x397 || (unsigned int)sub_E5940(88) == 176) )
    {
      v44[0] = get_tinfo_property();
      if ( (get_tinfo_property() & 0x3F) != 1 )
      {
        tinfo_property = get_tinfo_property();
        if ( (tinfo_property & 0xE) != 0 || (tinfo_property & 0x30) == 0 )
        {
          v47 = 0;
          *(_QWORD *)&v48 = 0;
          v50 = nullptr;
          v51 = 0;
          if ( v8 == (unsigned int)get_tinfo_property()
            || (unsigned __int8)sub_E59F0((__int64)&v47)
            && (unsigned __int8)sub_E59F0((__int64)&v50)
            && !(unsigned int)compare_arglocs() )
          {
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 944LL) + 68LL) |= 1u;
            *a1 = 0;
            copy_tinfo_t();
            cleanup_argloc();
            cleanup_argloc();
            clear_tinfo_t();
            return a1;
          }
          cleanup_argloc();
          cleanup_argloc();
        }
      }
      clear_tinfo_t();
    }
  }
  sub_E5E90(*(_QWORD *)(a2 + 16));
  v13 = *(_QWORD **)(*(_QWORD *)(a2 + 16) + 776LL);
  if ( v8 <= 0x10 )
  {
    if ( (unsigned int)getinf() != 176 )
      goto LABEL_51;
  }
  else if ( v8 != 176 )
  {
    if ( v8 != 32 )
      goto LABEL_15;
    if ( (unsigned __int8)sub_64880(v13 + 14) )
      goto LABEL_51;
    goto LABEL_69;
  }
  if ( (unsigned __int64)getinf() <= 0x397 )
  {
    if ( !(unsigned __int8)getinf_flag()
      || (netnode_check(), v23 = netnode_altval(), v23 <= 0x74)
      || (v41 = v23, (v24 = *(_DWORD *)(get_ph() + 4)) != 0)
      && ((v25 = (unsigned int)(v24 - 13), (unsigned int)v25 > 0x3B)
       || (v26 = 0x800000000000005LL, !_bittest64(&v26, v25))
       || v41 == 117) )
    {
LABEL_15:
      if ( v8 == 256 || v8 == 176 )
      {
        sub_E5BA0((__int64)v44, v40, 1);
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 757LL) & 1) != 0 )
          goto LABEL_52;
        v50 = nullptr;
        v51 = 0;
        v52 = 0;
        v53 = 0;
        goto LABEL_19;
      }
LABEL_51:
      sub_E5BA0((__int64)v44, v40, 0);
      goto LABEL_52;
    }
  }
LABEL_69:
  sub_E5BA0((__int64)v44, v40, 1);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 757LL) & 1) != 0 )
    goto LABEL_52;
  v50 = nullptr;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  if ( (unsigned __int8)sub_64780(v44, v13 + 14) )
  {
    sub_64280((__int64 *)&v50, v44);
    sub_64700((__int64 *)&v50, v13 + 12);
  }
LABEL_19:
  if ( v46 )
  {
    if ( *(int *)(a2 + 344) > 0 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1496LL) + 24LL) + 16LL)
          & (*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1440LL) + *(_QWORD *)(a2 + 336));
      if ( (unsigned __int8)sub_317040(&v45, v31) )
      {
        sub_316CB0(&v52, &v45);
        v32 = *(int *)(a2 + 344);
        v47 = 0;
        v48 = 0;
        if ( v32 + v31 - 1 >= v31 )
        {
          v42 = v32;
          v47 = qvector_reserve((__int64)&v47, 0, 1, 16);
          v39 = (unsigned __int64 *)(16 * v48 + v47);
          *v39 = v31;
          v39[1] = v42;
          *(_QWORD *)&v48 = v48 + 1;
        }
        sub_3180C0(&v52, &v47);
        if ( v47 )
        {
          *(_QWORD *)&v48 = 0;
          qfree(v47);
        }
      }
    }
  }
  if ( !(unsigned __int8)sub_64880(&v50) )
  {
    if ( !(_QWORD)v53 )
    {
LABEL_24:
      v43 = 0;
      if ( *(_QWORD *)(a2 + 320) == -1
        || ((flags = get_flags_ex(), (~(_WORD)flags & 0x600) != 0) || (flags & 0x10000000) == 0)
        && !(unsigned __int8)is_spec_ea() )
      {
        v16 = *(_QWORD *)(a2 + 304);
      }
      else
      {
        v16 = *(_QWORD *)(a2 + 320);
      }
      if ( (unsigned __int8)sub_FAF50(*(_QWORD *)(a2 + 8), &v43, 0, &v50, v16, 2) )
      {
        if ( !(unsigned __int8)getinf_flag()
          || (netnode_check(), v34 = netnode_altval(), v34 <= 0x74)
          || (v35 = *(_DWORD *)(get_ph() + 4)) != 0
          && ((v36 = (unsigned int)(v35 - 13), (unsigned int)v36 > 0x3B)
           || (v37 = 0x800000000000005LL, !_bittest64(&v37, v36))
           || v34 == 117) )
        {
          *(_DWORD *)(a2 + 360) = 256;
          v17 = 256;
          v18 = *(_BYTE *)(a3 + 88) & 0xF | 0xC0;
        }
        else
        {
          *(_DWORD *)(a2 + 360) = 176;
          v17 = 0;
          v18 = *(_BYTE *)(a3 + 88) & 0xF | 0xB0;
        }
        *(_BYTE *)(a3 + 88) = v18;
        *(_DWORD *)(a3 + 28) = v17;
        *a1 = 0;
        copy_tinfo_t();
        clear_tinfo_t();
        if ( v52 )
        {
          *(_QWORD *)&v53 = 0;
          qfree(v52);
        }
        qfree((__int64)v50);
        goto LABEL_34;
      }
      clear_tinfo_t();
      goto LABEL_87;
    }
LABEL_23:
    v14 = (const char *)sub_1B5D00(&v50);
    sub_6D0A0((__int64)"use stkret: %s at %a\n", v14, 0.0);
    goto LABEL_24;
  }
  if ( (_QWORD)v53 )
    goto LABEL_23;
LABEL_87:
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52);
  }
  qfree((__int64)v50);
LABEL_52:
  if ( a4 )
    goto LABEL_53;
  if ( (unsigned __int8)sub_64780(v13 + 6, v13 + 2) )
  {
    v47 = 0;
    v48 = 0u;
    v49 = 0;
    sub_64280(&v47, v13 + 6);
    v29 = sub_A9D90(v40, &v47, *(_QWORD *)(v40 + 48), 0, 0);
    if ( v29 )
    {
      v54 = v13 + 6;
      v43 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0u;
      v50 = off_4DCDE0;
      v55 = 0;
      v30 = sub_11F760(v29, &v50);
      if ( v30 == 1 )
      {
        copy_tinfo_t();
        v50 = off_4DCDE0;
        clear_tinfo_t();
        *a1 = 0;
        copy_tinfo_t();
        clear_tinfo_t();
        if ( *((_QWORD *)&v48 + 1) )
        {
          *(_QWORD *)&v49 = 0;
          qfree(*((__int64 *)&v48 + 1));
        }
        qfree(v47);
        goto LABEL_34;
      }
      v50 = off_4DCDE0;
      if ( v30 != 3 )
      {
        clear_tinfo_t();
        clear_tinfo_t();
        if ( *((_QWORD *)&v48 + 1) )
        {
          *(_QWORD *)&v49 = 0;
          qfree(*((__int64 *)&v48 + 1));
        }
        qfree(v47);
        if ( v30 == 2 )
          goto LABEL_53;
        goto LABEL_59;
      }
      clear_tinfo_t();
      clear_tinfo_t();
      v33 = *((_QWORD *)&v48 + 1);
      if ( !*((_QWORD *)&v48 + 1) )
        goto LABEL_115;
    }
    else
    {
      v33 = *((_QWORD *)&v48 + 1);
      if ( !*((_QWORD *)&v48 + 1) )
      {
LABEL_115:
        qfree(v47);
        goto LABEL_59;
      }
    }
    *(_QWORD *)&v49 = 0;
    qfree(v33);
    goto LABEL_115;
  }
LABEL_59:
  if ( !(unsigned __int8)sub_64880(v13 + 2) && (unsigned __int8)sub_64820(v13 + 2, v44) )
  {
    *a1 = 5;
    goto LABEL_34;
  }
  if ( !(unsigned __int8)sub_64880(v13) && (unsigned __int8)sub_64820(v13, v44) )
  {
    *a1 = 7;
    goto LABEL_34;
  }
LABEL_53:
  v21 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 148LL) )
    goto LABEL_54;
  v21 = sub_64780(v13 + 10, v44);
  if ( v21 )
  {
    sub_64000((__int64 *)&v50, (__int64)(v13 + 10));
    sub_64700((__int64 *)&v50, v44);
    v27 = sub_64B20((__int64)&v50);
    v28 = sub_64960(&v50, 0);
    if ( v28 != (unsigned int)sub_64960(v13 + 10, 0)
      || (v21 = sub_11CA80(v27)) == 0
      || (v38 = sub_64960(&v50, 0), v27 != (unsigned int)sub_64BA0(&v50, v38)) )
    {
      *a1 = 0;
      copy_tinfo_t();
      qfree((__int64)v50);
      goto LABEL_34;
    }
    qfree((__int64)v50);
  }
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 148LL)
    || (unsigned __int8)sub_64880(v13 + 8)
    || !(unsigned __int8)sub_64820(v13 + 8, v44) )
  {
LABEL_54:
    if ( (unsigned __int8)sub_64880(v13 + 6) || !(unsigned __int8)sub_64820(v13 + 6, v44) )
    {
      v22 = v13 + 4;
      if ( (unsigned __int8)sub_64880(v22) || !(unsigned __int8)sub_64820(v22, v44) )
      {
        *a1 = 0;
        if ( v21 )
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
    qfree(v45);
  }
  qfree(v44[0]);
  return a1;
}
