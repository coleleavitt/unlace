_QWORD *__fastcall sub_E5B20(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // r8
  unsigned int v8; // r15d
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // r14d
  _QWORD *v13; // r14
  const char *v14; // rax
  __int64 v15; // rdi
  int flags; // eax
  __int64 v17; // r8
  int v18; // edx
  char v19; // al
  unsigned int v20; // eax
  __int64 v21; // rax
  char tinfo_property; // al
  __int64 v23; // rax
  char v24; // r12
  _QWORD *v25; // r14
  unsigned int v26; // eax
  int v27; // eax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // r15d
  int v31; // r12d
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rdi
  int v35; // r13d
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // r8
  __int64 v38; // rdi
  unsigned int v39; // r13d
  int v40; // eax
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // eax
  unsigned __int64 *v44; // rax
  __int64 v45; // [rsp+8h] [rbp-110h]
  unsigned int v46; // [rsp+10h] [rbp-108h]
  __int64 v47; // [rsp+18h] [rbp-100h]
  unsigned __int64 v48; // [rsp+28h] [rbp-F0h]
  __int64 v49; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v50[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+58h] [rbp-C0h]
  __int64 v53; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v54; // [rsp+78h] [rbp-A0h]
  __int128 v55; // [rsp+88h] [rbp-90h]
  __int64 (__fastcall **v56)(); // [rsp+A0h] [rbp-78h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-70h]
  __int64 v58; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v59; // [rsp+B8h] [rbp-60h]
  _QWORD *v60; // [rsp+C8h] [rbp-50h]
  _QWORD v61[9]; // [rsp+D0h] [rbp-48h] BYREF

  v6 = *(_BYTE *)(a3 + 88);
  v61[1] = __readfsqword(0x28u);
  v8 = v6 & 0xF0;
  if ( (v6 & 0xF0) == 0xC0 )
    v8 = *(_DWORD *)(a3 + 28);
  if ( v8 <= 0x10 )
  {
    v10 = getinf(99);
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
    v12 = getinf(99);
    v11 = *(_QWORD *)(a2 + 8);
  }
  v45 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  if ( *(_BYTE *)(v11 + 328) && *(_DWORD *)(sub_111B00(v45, 0) + 76) == 1 )
  {
    v20 = v12;
    if ( v12 <= 0x10 )
      v20 = getinf(99);
    if ( v20 != 176 && v20 != 256
      || v20 == 176 && ((unsigned __int64)getinf(88) > 0x397 || (unsigned int)sub_E5380() == 176) )
    {
      v21 = *(_QWORD *)(a2 + 8);
      v50[0] = 0;
      v50[0] = get_tinfo_property(*(_QWORD *)(v21 + 328), 24);
      if ( (get_tinfo_property(v50[0], 2) & 0x3F) == 1
        || (tinfo_property = get_tinfo_property(v50[0], 2), (tinfo_property & 0xE) == 0) && (tinfo_property & 0x30) != 0 )
      {
        clear_tinfo_t(v50);
      }
      else
      {
        v23 = *(_QWORD *)(a2 + 8);
        v53 = 0;
        *(_QWORD *)&v54 = 0;
        v56 = nullptr;
        v57 = 0;
        if ( v8 == (unsigned int)get_tinfo_property(*(_QWORD *)(v23 + 328), 20)
          || (unsigned __int8)sub_E5430((int *)&v53, (__int64)v50, v8)
          && (unsigned __int8)sub_E5430((int *)&v56, (__int64)v50, v12)
          && !(unsigned int)compare_arglocs(&v53, &v56) )
        {
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 944LL) + 68LL) |= 1u;
          *a1 = 0;
          copy_tinfo_t(a1, v50);
          cleanup_argloc(&v56);
          cleanup_argloc(&v53);
          clear_tinfo_t(v50);
          return a1;
        }
        cleanup_argloc(&v56);
        cleanup_argloc(&v53);
        clear_tinfo_t(v50);
      }
    }
  }
  sub_E58D0(*(_QWORD *)(a2 + 16));
  v13 = *(_QWORD **)(*(_QWORD *)(a2 + 16) + 776LL);
  if ( v8 <= 0x10 )
  {
    if ( (unsigned int)getinf(99) != 176 )
      goto LABEL_50;
  }
  else if ( v8 != 176 )
  {
    if ( v8 != 32 )
      goto LABEL_15;
    if ( (unsigned __int8)sub_64280(v13 + 14) )
      goto LABEL_50;
    goto LABEL_68;
  }
  if ( (unsigned __int64)getinf(88) <= 0x397 )
  {
    if ( !(unsigned __int8)getinf_flag(3, 4)
      || (netnode_check(&v56, "$ golang", 0, 0), v26 = netnode_altval(v56, 0, 65), v26 <= 0x74)
      || (v46 = v26, (v27 = *(_DWORD *)(get_ph() + 4)) != 0)
      && ((v28 = (unsigned int)(v27 - 13), (unsigned int)v28 > 0x3B)
       || (v29 = 0x800000000000005LL, !_bittest64(&v29, v28))
       || v46 == 117) )
    {
LABEL_15:
      if ( v8 == 256 || v8 == 176 )
      {
        sub_E55E0((__int64)v50, v45, 1);
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 757LL) & 1) != 0 )
          goto LABEL_51;
        v56 = nullptr;
        v57 = 0;
        v58 = 0;
        v59 = 0;
        goto LABEL_19;
      }
LABEL_50:
      sub_E55E0((__int64)v50, v45, 0);
      goto LABEL_51;
    }
  }
LABEL_68:
  sub_E55E0((__int64)v50, v45, 1);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 757LL) & 1) != 0 )
    goto LABEL_51;
  v56 = nullptr;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  if ( (unsigned __int8)sub_64180(v50, v13 + 14) )
  {
    sub_63C80((__int64 *)&v56, v50);
    sub_64100((__int64 *)&v56, v13 + 12);
  }
LABEL_19:
  if ( v52 )
  {
    if ( *(int *)(a2 + 344) > 0 )
    {
      v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1496LL) + 24LL) + 16LL)
          & (*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1440LL) + *(_QWORD *)(a2 + 336));
      if ( (unsigned __int8)sub_317400(&v51, v36) )
      {
        sub_317070(&v58, &v51);
        v37 = *(int *)(a2 + 344);
        v53 = 0;
        v54 = 0;
        if ( v37 + v36 - 1 >= v36 )
        {
          v48 = v37;
          v53 = qvector_reserve(&v53, 0, 1, 16);
          v44 = (unsigned __int64 *)(16 * v54 + v53);
          *v44 = v36;
          v44[1] = v48;
          *(_QWORD *)&v54 = v54 + 1;
        }
        sub_318480(&v58, &v53);
        if ( v53 )
        {
          *(_QWORD *)&v54 = 0;
          qfree(v53);
        }
      }
    }
  }
  if ( !(unsigned __int8)sub_64280(&v56) )
  {
    if ( !(_QWORD)v59 )
    {
LABEL_24:
      v49 = 0;
      v15 = *(_QWORD *)(a2 + 320);
      if ( v15 == -1
        || ((v47 = *(_QWORD *)(a2 + 320), flags = get_flags_ex(v15, 4), (~(_WORD)flags & 0x600) != 0)
         || (flags & 0x10000000) == 0)
        && !(unsigned __int8)is_spec_ea(v47) )
      {
        v17 = *(_QWORD *)(a2 + 304);
      }
      else
      {
        v17 = *(_QWORD *)(a2 + 320);
      }
      if ( (unsigned __int8)sub_FA990(*(_QWORD *)(a2 + 8), &v49, 0, &v56, v17, 2) )
      {
        if ( !(unsigned __int8)getinf_flag(3, 4)
          || (netnode_check(&v53, "$ golang", 0, 0), v39 = netnode_altval(v53, 0, 65), v39 <= 0x74)
          || (v40 = *(_DWORD *)(get_ph() + 4)) != 0
          && ((v41 = (unsigned int)(v40 - 13), (unsigned int)v41 > 0x3B)
           || (v42 = 0x800000000000005LL, !_bittest64(&v42, v41))
           || v39 == 117) )
        {
          *(_DWORD *)(a2 + 360) = 256;
          v18 = 256;
          v19 = *(_BYTE *)(a3 + 88) & 0xF | 0xC0;
        }
        else
        {
          *(_DWORD *)(a2 + 360) = 176;
          v18 = 0;
          v19 = *(_BYTE *)(a3 + 88) & 0xF | 0xB0;
        }
        *(_BYTE *)(a3 + 88) = v19;
        *(_DWORD *)(a3 + 28) = v18;
        *a1 = 0;
        copy_tinfo_t(a1, &v49);
        clear_tinfo_t(&v49);
        if ( v58 )
        {
          *(_QWORD *)&v59 = 0;
          qfree(v58);
        }
        qfree(v56);
        goto LABEL_34;
      }
      clear_tinfo_t(&v49);
      goto LABEL_86;
    }
LABEL_23:
    v14 = (const char *)sub_1B5740(&v56);
    sub_6CAE0((__int64)"use stkret: %s at %a\n", v14, 0.0);
    goto LABEL_24;
  }
  if ( (_QWORD)v59 )
    goto LABEL_23;
LABEL_86:
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58);
  }
  qfree(v56);
LABEL_51:
  if ( a4 )
    goto LABEL_52;
  if ( (unsigned __int8)sub_64180(v13 + 6, v13 + 2) )
  {
    v53 = 0;
    v54 = 0u;
    v55 = 0;
    sub_63C80(&v53, v13 + 6);
    v34 = sub_A97D0(v45, &v53, *(_QWORD *)(v45 + 48), 0, 0);
    if ( v34 )
    {
      v60 = v13 + 6;
      v49 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 0u;
      v56 = off_4D74A0;
      v61[0] = 0;
      v35 = sub_11F1A0(v34, &v56);
      if ( v35 == 1 )
      {
        copy_tinfo_t(&v49, v61);
        v56 = off_4D74A0;
        clear_tinfo_t(v61);
        *a1 = 0;
        copy_tinfo_t(a1, &v49);
        clear_tinfo_t(&v49);
        if ( *((_QWORD *)&v54 + 1) )
        {
          *(_QWORD *)&v55 = 0;
          qfree(*((_QWORD *)&v54 + 1));
        }
        qfree(v53);
        goto LABEL_34;
      }
      v56 = off_4D74A0;
      if ( v35 != 3 )
      {
        clear_tinfo_t(v61);
        clear_tinfo_t(&v49);
        if ( *((_QWORD *)&v54 + 1) )
        {
          *(_QWORD *)&v55 = 0;
          qfree(*((_QWORD *)&v54 + 1));
        }
        qfree(v53);
        if ( v35 == 2 )
          goto LABEL_52;
        goto LABEL_58;
      }
      clear_tinfo_t(v61);
      clear_tinfo_t(&v49);
      v38 = *((_QWORD *)&v54 + 1);
      if ( !*((_QWORD *)&v54 + 1) )
        goto LABEL_114;
    }
    else
    {
      v38 = *((_QWORD *)&v54 + 1);
      if ( !*((_QWORD *)&v54 + 1) )
      {
LABEL_114:
        qfree(v53);
        goto LABEL_58;
      }
    }
    *(_QWORD *)&v55 = 0;
    qfree(v38);
    goto LABEL_114;
  }
LABEL_58:
  if ( !(unsigned __int8)sub_64280(v13 + 2) && (unsigned __int8)sub_64220(v13 + 2, v50) )
  {
    *a1 = 5;
    goto LABEL_34;
  }
  if ( !(unsigned __int8)sub_64280(v13) && (unsigned __int8)sub_64220(v13, v50) )
  {
    *a1 = 7;
    goto LABEL_34;
  }
LABEL_52:
  v24 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 148LL) )
    goto LABEL_137;
  v24 = sub_64180(v13 + 10, v50);
  if ( v24 )
  {
    sub_63A00((__int64 *)&v56, (__int64)(v13 + 10));
    sub_64100((__int64 *)&v56, v50);
    v30 = sub_64520((__int64)&v56);
    v31 = sub_64360(&v56, 0);
    if ( v31 != (unsigned int)sub_64360(v13 + 10, 0)
      || (v24 = sub_11C4C0(v30)) == 0
      || (v43 = sub_64360(&v56, 0), v30 != (unsigned int)sub_645A0(&v56, v43)) )
    {
      v32 = *(_QWORD *)(a2 + 16);
      *a1 = 0;
      copy_tinfo_t(a1, v32 + 312);
      qfree(v56);
      goto LABEL_34;
    }
    qfree(v56);
  }
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 148LL)
    || (unsigned __int8)sub_64280(v13 + 8)
    || !(unsigned __int8)sub_64220(v13 + 8, v50) )
  {
LABEL_137:
    if ( (unsigned __int8)sub_64280(v13 + 6) || !(unsigned __int8)sub_64220(v13 + 6, v50) )
    {
      v25 = v13 + 4;
      if ( (unsigned __int8)sub_64280(v25) || !(unsigned __int8)sub_64220(v25, v50) )
      {
        if ( v24 )
        {
          v33 = *(_QWORD *)(a2 + 16);
          *a1 = 0;
          copy_tinfo_t(a1, v33 + 312);
        }
        else
        {
          *a1 = 0;
        }
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
  }
  else
  {
    *a1 = 41;
  }
LABEL_34:
  if ( v51 )
  {
    v52 = 0;
    qfree(v51);
  }
  qfree(v50[0]);
  return a1;
}
