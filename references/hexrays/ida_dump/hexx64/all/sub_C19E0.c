__int64 __fastcall sub_C19E0(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v5; // r13d
  __int64 tinfo_property; // r15
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r15
  __int64 v10; // rdi
  int tinfo_size; // eax
  int v12; // eax
  _QWORD *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // r15
  __int64 flags; // rax
  __int64 *v17; // rsi
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  size_t v20; // r8
  __int64 v21; // r15
  size_t v22; // r10
  __int64 v23; // rsi
  __int64 v24; // r15
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  __int64 v29; // r10
  size_t v30; // r15
  size_t v31; // r8
  int v32; // eax
  size_t v33; // [rsp+0h] [rbp-2A0h]
  char v34; // [rsp+Dh] [rbp-293h]
  char v35; // [rsp+Eh] [rbp-292h]
  char v36; // [rsp+Fh] [rbp-291h]
  __int64 v37; // [rsp+10h] [rbp-290h]
  __int64 v38; // [rsp+18h] [rbp-288h]
  size_t v39; // [rsp+18h] [rbp-288h]
  unsigned __int64 v40; // [rsp+20h] [rbp-280h]
  unsigned __int64 v41; // [rsp+20h] [rbp-280h]
  _QWORD *v42; // [rsp+28h] [rbp-278h]
  __int64 v43; // [rsp+28h] [rbp-278h]
  size_t v44; // [rsp+38h] [rbp-268h]
  unsigned __int64 v45; // [rsp+40h] [rbp-260h]
  __int64 v46; // [rsp+48h] [rbp-258h]
  __int64 v47; // [rsp+50h] [rbp-250h]
  _QWORD *v48; // [rsp+50h] [rbp-250h]
  unsigned int v49; // [rsp+50h] [rbp-250h]
  __int64 v50; // [rsp+68h] [rbp-238h] BYREF
  __int64 v51; // [rsp+70h] [rbp-230h] BYREF
  __int64 v52; // [rsp+78h] [rbp-228h] BYREF
  __int64 v53; // [rsp+80h] [rbp-220h] BYREF
  __int64 v54; // [rsp+88h] [rbp-218h] BYREF
  __int64 v55; // [rsp+90h] [rbp-210h] BYREF
  __int128 v56; // [rsp+98h] [rbp-208h]
  void *src; // [rsp+B0h] [rbp-1F0h] BYREF
  __int128 v58; // [rsp+B8h] [rbp-1E8h]
  __int128 v59; // [rsp+D0h] [rbp-1D0h] BYREF
  __int64 v60; // [rsp+E0h] [rbp-1C0h]
  __int128 v61; // [rsp+E8h] [rbp-1B8h]
  __int64 v62; // [rsp+F8h] [rbp-1A8h]
  __int128 v63; // [rsp+100h] [rbp-1A0h]
  _OWORD v64[3]; // [rsp+110h] [rbp-190h] BYREF
  __int64 v65; // [rsp+140h] [rbp-160h]
  int v66; // [rsp+148h] [rbp-158h]
  __int64 v67; // [rsp+150h] [rbp-150h]
  char v68; // [rsp+158h] [rbp-148h]
  _QWORD v69[40]; // [rsp+160h] [rbp-140h] BYREF

  v69[33] = __readfsqword(0x28u);
  v1 = a1[4];
  if ( *(_BYTE *)(v1 + 48) != 2
    || (unsigned int)(*(_DWORD *)v1 - 12) > 1
    || *(_BYTE *)(v1 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v1 + 72) + 284LL) == 14 )
  {
    return 0;
  }
  if ( *(_BYTE *)(v1 + 32) == 4 )
  {
    v3 = *(_QWORD *)(v1 + 40);
    if ( *(_BYTE *)(v3 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v3 + 72) + 284LL) == 14 )
      return 0;
  }
  v4 = a1[1];
  v50 = 0;
  v5 = sub_BA670(v4, &v50, 0, 0, (char *)(v1 + 32), *(_QWORD *)(v4 + 800), 0, 0, a1 + 6);
  if ( !(_BYTE)v5
    || (get_tinfo_property(v50, 2) & 0xF) != 0xA
    || (tinfo_property = get_tinfo_property(v50, 285)) != 0
    || (v47 = *(int *)(v1 + 68), v47 != get_tinfo_size(0, v50, 0)) )
  {
    v5 = 0;
    goto LABEL_8;
  }
  v37 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v1 + 56) + 16LL), *(unsigned int *)(v1 + 52), 1);
  if ( *(_DWORD *)v1 == 13 )
    v37 = -v37;
  v51 = 0;
  v8 = *(_QWORD **)(a1[1] + 1328LL);
  v42 = (_QWORD *)*v8;
  if ( !*v8 )
  {
    v36 = 0;
    goto LABEL_21;
  }
  v9 = *(_QWORD *)*v8 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v9 )
  {
    v42 = nullptr;
    goto LABEL_38;
  }
  if ( (*(_BYTE *)v9 & 2) != 0 )
  {
LABEL_20:
    v36 = 0;
    tinfo_property = v51;
    goto LABEL_21;
  }
  v46 = *(_QWORD *)(v1 + 56);
  while ( 1 )
  {
    v48 = v8;
    v12 = sub_257C40(v46);
    v8 = v48;
    if ( v12 >= 0 )
      break;
    v9 = *(_QWORD *)(v9 + 8);
LABEL_35:
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v42 = (_QWORD *)*v8;
      v13 = **(_QWORD ***)(a1[1] + 1328LL);
      goto LABEL_37;
    }
  }
  v32 = sub_257C40(v9 + 24);
  v8 = v48;
  if ( v32 < 0 )
  {
    v9 = *(_QWORD *)(v9 + 16);
    goto LABEL_35;
  }
  v42 = (_QWORD *)v9;
  v13 = **(_QWORD ***)(a1[1] + 1328LL);
LABEL_37:
  if ( v42 == v13 )
    goto LABEL_20;
LABEL_38:
  v36 = is_stroff(v42[9], (unsigned int)*((char *)v42 + 44));
  if ( v36 )
  {
    sub_32ACB0(&v59, v42[6]);
    copy_tinfo_t(&v51, &v59);
    clear_tinfo_t(&v59);
    tinfo_property = v51;
    v36 = *((_BYTE *)v42 + 45) & 1;
  }
  else
  {
    tinfo_property = v51;
  }
LABEL_21:
  v52 = 0;
  if ( (unsigned __int8)get_tinfo_property(tinfo_property, 2)
    || (v35 = sub_C1840((__int64)a1, &v51, (char *)(v1 + 64))) != 0 )
  {
    v53 = 0;
    v10 = v50;
    goto LABEL_23;
  }
  v14 = *(__int64 **)(v1 + 56);
  v15 = *v14;
  v49 = *((_DWORD *)v14 + 2);
  flags = get_flags_ex(*v14, 0);
  v34 = is_stroff(flags, v49);
  if ( !v34 || !(unsigned int)get_stroff_path(v69, &v52, v15, v49) || (unsigned int)guess_tinfo(&v51, v69[0]) != 2 )
  {
    v5 = 0;
    goto LABEL_29;
  }
  v10 = v50;
  v53 = 0;
  if ( !v52 )
  {
LABEL_23:
    v53 = get_tinfo_property(v10, 9);
    tinfo_size = get_tinfo_size(0, v53, 0);
    if ( v37 < 0 || tinfo_size <= v37 )
    {
      v55 = 0;
      src = nullptr;
      v54 = 0;
      v56 = 0;
      v58 = 0;
      goto LABEL_67;
    }
    if ( v36 )
    {
      sub_C0C20(a1[1], *(_QWORD *)(v1 + 24), (__int64)&v53, v37, (__int64)&v51);
      *((_BYTE *)v42 + 45) |= 0x20u;
    }
    v5 = 0;
    goto LABEL_28;
  }
  v53 = get_tinfo_property(v50, 9);
  v17 = &v51;
  v18 = v52;
  v55 = 0;
  src = nullptr;
  v68 = 0;
  v54 = v52 + v37;
  v60 = 0;
  v62 = 0;
  v67 = 0;
  v65 = 1;
  v66 = -1;
  v56 = 0;
  v58 = 0;
  v59 = 0;
  v61 = 0;
  v63 = 0;
  v64[0] = 0;
  while ( (unsigned int)sub_32D810(&v59, v17, v18, 0) != -1 )
  {
    if ( (v67 & 0x2000000000LL) == 0 )
    {
      sub_B9100((__int64 *)&src, &v59, (__int64)&v53, (__int64)&v54);
      v35 = v34;
      goto LABEL_62;
    }
    v52 -= (unsigned __int64)v59 >> 3;
    print_tinfo(&src, 0, 0, 0, 0, v64, 0, 0);
    v19 = v58;
    if ( (_QWORD)v58 )
    {
      v20 = v58 - 1;
      if ( (_QWORD)v58 != 1 )
      {
        v21 = v56;
        v22 = v58 - 1;
        if ( (_QWORD)v56 )
        {
          v21 = v56 - 1;
          v22 = v20 + v56 - 1;
          v19 = v58 + v56 - 1;
        }
        v23 = v55;
        if ( *((_QWORD *)&v56 + 1) < v19 )
        {
          v33 = v22;
          v39 = v58 - 1;
          v41 = v19;
          v55 = qvector_reserve(&v55, v55, v19, 1);
          v22 = v33;
          v23 = v55;
          v20 = v39;
          v19 = v41;
        }
        *(_QWORD *)&v56 = v19;
        *(_BYTE *)(v23 + v22) = 0;
        memcpy((void *)(v21 + v55), src, v20);
      }
    }
    v24 = v56;
    if ( (_QWORD)v56 )
    {
      v25 = v56 + 1;
      v26 = v56 + 2;
      v24 = v56 - 1;
    }
    else
    {
      v26 = 3;
      v25 = 2;
    }
    v27 = v55;
    if ( *((_QWORD *)&v56 + 1) < v26 )
    {
      v38 = v25;
      v40 = v26;
      v55 = qvector_reserve(&v55, v55, v26, 1);
      v25 = v38;
      v27 = v55;
      v26 = v40;
    }
    *(_QWORD *)&v56 = v26;
    *(_BYTE *)(v27 + v25) = 0;
    *(_WORD *)(v55 + v24) = 14906;
    v17 = (__int64 *)v64;
    v18 = v52;
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
    v55 = 0;
    *((_QWORD *)&v56 + 1) = 0;
  }
LABEL_62:
  clear_tinfo_t(v64);
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60);
  }
  if ( !v35 )
  {
LABEL_67:
    if ( !(unsigned __int8)sub_B91C0((__int64 *)&src, &v51, v37, &v54, &v53) )
    {
      if ( v36 )
      {
        sub_C0A20(a1[1], *(_QWORD *)(v1 + 24), (__int64)&v50, v37, (__int64)&v51);
        *((_BYTE *)v42 + 45) |= 0x20u;
      }
      v5 = 0;
      goto LABEL_71;
    }
    if ( v36 )
      *((_BYTE *)v42 + 45) |= 0x20u;
  }
  v28 = v58;
  if ( (unsigned __int64)v58 <= 1 )
  {
    if ( !under_debugger )
      sub_383060(51088);
    BUG();
  }
  v29 = v56;
  v30 = v58 - 1;
  v31 = v58 - 1;
  if ( (_QWORD)v56 )
  {
    v29 = v56 - 1;
    v31 = v30 + v56 - 1;
    v28 = v58 + v56 - 1;
  }
  if ( *((_QWORD *)&v56 + 1) < v28 )
  {
    v43 = v29;
    v44 = v31;
    v45 = v28;
    v55 = qvector_reserve(&v55, v55, v28, 1);
    v29 = v43;
    v31 = v44;
    v28 = v45;
  }
  *(_QWORD *)&v56 = v28;
  *(_BYTE *)(v55 + v31) = 0;
  memcpy((void *)(v29 + v55), src, v30);
  sub_C0E10((__int64)a1, v1, v1 + 32, &v50, (__int64)&v51, &v55, v54);
LABEL_71:
  if ( src )
  {
    *(_QWORD *)&v58 = 0;
    qfree(src);
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
LABEL_28:
  clear_tinfo_t(&v53);
LABEL_29:
  clear_tinfo_t(&v51);
LABEL_8:
  clear_tinfo_t(&v50);
  return v5;
}
