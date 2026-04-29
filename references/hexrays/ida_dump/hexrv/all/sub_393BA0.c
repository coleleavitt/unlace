__int64 __fastcall sub_393BA0(__int64 a1, __int64 a2, __int64 *a3, char a4, double a5)
{
  __int64 v7; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rsi
  _DWORD *v14; // rdx
  _DWORD *v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // rbx
  _QWORD *v21; // rbp
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rsi
  __int64 v30; // r15
  _BOOL8 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // ebx
  unsigned int v36; // eax
  __int64 v37; // r15
  int *v38; // r14
  _QWORD *v39; // rax
  int tinfo_udt_member; // eax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  _QWORD *v46; // rax
  unsigned __int64 v47; // [rsp+8h] [rbp-140h]
  __int64 v48; // [rsp+10h] [rbp-138h]
  __int64 tinfo_size; // [rsp+18h] [rbp-130h]
  bool v50; // [rsp+18h] [rbp-130h]
  __int64 v51; // [rsp+20h] [rbp-128h]
  char v52; // [rsp+20h] [rbp-128h]
  __int64 v53; // [rsp+28h] [rbp-120h]
  unsigned int v54; // [rsp+30h] [rbp-118h]
  char v55; // [rsp+37h] [rbp-111h]
  __int64 *v56; // [rsp+38h] [rbp-110h]
  __int64 v57; // [rsp+40h] [rbp-108h] BYREF
  __int64 v58; // [rsp+48h] [rbp-100h] BYREF
  int v59; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v60; // [rsp+58h] [rbp-F0h]
  __int64 v61; // [rsp+60h] [rbp-E8h]
  __int64 v62; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v63; // [rsp+78h] [rbp-D0h]
  __int128 v64; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v65; // [rsp+98h] [rbp-B0h] BYREF
  __int128 v66; // [rsp+A0h] [rbp-A8h]
  _BYTE v67[24]; // [rsp+B0h] [rbp-98h] BYREF
  char v68; // [rsp+C8h] [rbp-80h]
  __int64 v69; // [rsp+E0h] [rbp-68h]
  int v70; // [rsp+E8h] [rbp-60h]
  __int64 v71; // [rsp+F0h] [rbp-58h]
  char v72; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v73; // [rsp+108h] [rbp-40h]

  v7 = a1;
  v73 = __readfsqword(0x28u);
  v59 = 0;
  copy_argloc(&v59, a2);
  v9 = *(_QWORD *)(a2 + 16);
  v57 = 0;
  v61 = v9;
  v48 = a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 432LL);
  v10 = *(_DWORD *)(a2 + 24);
  v47 = 0x4EC4EC4EC4EC4EC5LL * (v48 >> 3);
  v54 = v10 & 0x100;
  if ( a3 )
  {
    if ( !a4 )
    {
      v11 = *a3;
      if ( (unsigned __int8)*a3 )
        goto LABEL_4;
      if ( (v10 & 0x40) != 0 )
      {
        v36 = v10 & 0xFFFFFFBF;
        *(_DWORD *)(a2 + 24) = v36;
        v11 = *a3;
        if ( (unsigned __int8)*a3 )
          goto LABEL_4;
LABEL_51:
        *(_DWORD *)(a2 + 24) = v36 & 0xFFFBFFFF;
        sub_2B5000(*(_QWORD *)(a1 + 24));
        v26 = v54;
        v31 = 0;
        if ( !v54 )
          goto LABEL_39;
        sub_392200(a1, a5);
        goto LABEL_53;
      }
      goto LABEL_42;
    }
LABEL_28:
    v24 = *(_QWORD *)(a2 + 80);
    *(_DWORD *)(a2 + 24) = v10 | 0x40000;
    if ( (get_tinfo_property(v24, 2) & 0xF) == 0xA )
    {
      sub_326FC0(&v62, *(_QWORD *)(*(_QWORD *)(v7 + 128) + 112LL), *(_DWORD *)(a2 + 88));
      copy_tinfo_t(&v57, &v62);
      clear_tinfo_t(&v62);
    }
    v11 = *a3;
    if ( !(unsigned __int8)*a3 )
    {
      v52 = 0;
      v50 = 1;
      goto LABEL_32;
    }
LABEL_4:
    tinfo_size = get_tinfo_size(0, v11, 0);
    v53 = get_tinfo_size(0, *(_QWORD *)(a2 + 80), 0);
    if ( v54 )
    {
      v12 = *(_QWORD *)(v7 + 24);
      a5 = 0.0;
      v62 = 0;
      v64 = 0u;
      v65 = 0;
      memset(v67, 0, sizeof(v67));
      v68 = 16;
      v63 = 0;
      v66 = 0;
      v55 = sub_370E70(v12, (__int64)&v62);
      if ( v55 )
      {
        v13 = *(_QWORD *)(v12 + 456);
        v14 = (_DWORD *)(v13 + 4LL * *(_QWORD *)(v12 + 464));
        if ( (_DWORD *)v13 == v14 )
          goto LABEL_82;
        v15 = *(_DWORD **)(v12 + 456);
        while ( (_DWORD)v47 != *v15 )
        {
          if ( v14 == ++v15 )
            goto LABEL_82;
        }
        v16 = (__int64)v15 - v13;
        v17 = v16 >> 2;
        if ( v16 == -4 )
        {
LABEL_82:
          if ( !under_debugger )
            sub_37DDE0(0xCC88u, v13, 0.0);
          BUG();
        }
        if ( v17 < (unsigned __int64)v63 )
          v55 = sub_36E430(v12, (__int64)&v62, v17, (__int64)a3);
      }
      if ( *(_QWORD *)v67 )
      {
        *(_QWORD *)&v67[8] = 0;
        qfree(*(_QWORD *)v67);
      }
      cleanup_argloc(&v65);
      clear_tinfo_t((char *)&v64 + 8);
      v18 = v62;
      if ( v62 )
      {
        if ( (_QWORD)v63 )
        {
          v56 = a3;
          v19 = 0;
          v51 = v7;
          v20 = v63;
          do
          {
            v21 = (_QWORD *)(v18 + 80 * v19);
            clear_tinfo_t(v21 + 8);
            v22 = v21[5];
            if ( v22 )
            {
              v21[6] = 0;
              qfree(v22);
            }
            v23 = v21[2];
            if ( v23 )
            {
              v21[3] = 0;
              qfree(v23);
            }
            ++v19;
            cleanup_argloc(v21);
            v18 = v62;
          }
          while ( v20 != v19 );
          v7 = v51;
          a3 = v56;
        }
        *(_QWORD *)&v63 = 0;
        qfree(v18);
      }
      if ( !v55 )
        goto LABEL_26;
    }
    if ( !(unsigned __int8)sub_212880(*(_QWORD *)(v7 + 24), a2, a3, tinfo_size) )
    {
      if ( !v54 )
      {
        sub_2B0270((__int64)"AUTOHIDE NONE\nSorry, cannot change variable type");
        goto LABEL_47;
      }
LABEL_26:
      sub_2B0270((__int64)"AUTOHIDE NONE\n"
                          "Sorry, cannot change argument type.\n"
                          "Please edit the function prototype instead");
LABEL_47:
      v34 = 0;
      goto LABEL_43;
    }
    v52 = sub_3862D0(v7, (int *)a2, a5);
    v50 = tinfo_size != v53;
    if ( !a4 )
    {
      v25 = *(_DWORD *)(a2 + 24) & 0xFFFBFFFF;
LABEL_33:
      *(_DWORD *)(a2 + 24) = v25;
      sub_2B5000(*(_QWORD *)(v7 + 24));
      if ( v54 )
      {
        sub_392200(v7, a5);
        v50 = 0;
        if ( !v52 )
          goto LABEL_53;
      }
      else if ( !v52 )
      {
        goto LABEL_38;
      }
      if ( v59 == 1 )
        v29 = v60;
      else
        v29 = -1;
      v30 = sub_1CB6D0(*(_QWORD **)(v7 + 24), v29);
      if ( v30 >= 0 )
      {
        v39 = sub_1CA360(*(_QWORD *)(v7 + 24));
        v58 = 0;
        tinfo_get_func_frame(&v58, v39);
        a5 = 0.0;
        v62 = 8 * v30;
        v63 = 0u;
        v65 = 0;
        v69 = 1;
        v70 = -1;
        v71 = 0;
        v72 = 0;
        v64 = 0;
        v66 = 0;
        *(_OWORD *)v67 = 0;
        tinfo_udt_member = find_tinfo_udt_member(&v62, v58, 0);
        if ( tinfo_udt_member != -1 )
        {
          v41 = *(_QWORD *)(v7 + 32);
          if ( v41 )
            *(_DWORD *)(v41 + 108) |= 8u;
          if ( (int)set_tinfo_property4(
                      &v58,
                      12,
                      tinfo_udt_member,
                      a3,
                      0,
                      (-(__int64)(v54 == 0) & 0xFFFFFFFFFFFFFFF0LL) + 276) < 0 )
            sub_2B0270((__int64)"Could not change type of the stack frame member.\n"
                                "Please edit the stack frame manually if necessary.\n");
          v45 = *(_QWORD *)(v7 + 32);
          if ( v45 )
          {
            *(_DWORD *)(v45 + 108) &= ~8u;
            if ( (*(_BYTE *)v7 & 2) == 0 )
            {
              sub_390810(v7, 0, 0.0, v42, v43, v44);
              v50 = 0;
            }
          }
        }
        v46 = sub_1CA360(*(_QWORD *)(v7 + 24));
        reanalyze_function(v46, 0, -1, 0);
        clear_tinfo_t(v67);
        if ( v65 )
        {
          *(_QWORD *)&v66 = 0;
          qfree(v65);
        }
        if ( *((_QWORD *)&v63 + 1) )
        {
          *(_QWORD *)&v64 = 0;
          qfree(*((_QWORD *)&v63 + 1));
        }
        clear_tinfo_t(&v58);
      }
LABEL_38:
      v31 = 0;
      if ( v50 )
      {
LABEL_39:
        sub_390810(v7, v31, a5, v26, v27, v28);
        v32 = *(_QWORD *)(v7 + 24);
        v33 = 0;
        if ( v47 < *(_QWORD *)(v32 + 440) )
          v33 = *(_QWORD *)(v32 + 432) + v48;
        sub_338EA0(*(_QWORD *)(v7 + 128), 0x70u, v7, v33, a3);
        goto LABEL_42;
      }
LABEL_53:
      v37 = *(_QWORD *)(v7 + 24);
      v38 = *(int **)(v37 + 1256);
      if ( !(96LL * *(_QWORD *)(v37 + 1264)) )
        goto LABEL_80;
      while ( (unsigned int)sub_32B410(v38, &v59) )
      {
        v38 += 24;
        if ( v38 == (int *)(*(_QWORD *)(v37 + 1256) + 96LL * *(_QWORD *)(v37 + 1264)) )
          goto LABEL_80;
      }
      if ( v38 )
        v31 = (v38[22] & 1) == 0;
      else
LABEL_80:
        v31 = 1;
      goto LABEL_39;
    }
LABEL_32:
    v25 = *(_DWORD *)(a2 + 24) & 0xFFFFFFBF;
    goto LABEL_33;
  }
  if ( a4 )
  {
    a3 = &v57;
    goto LABEL_28;
  }
  if ( (v10 & 0x40) != 0 )
  {
    v36 = v10 & 0xFFFFFFBF;
    a3 = &v57;
    goto LABEL_51;
  }
LABEL_42:
  v34 = 1;
LABEL_43:
  clear_tinfo_t(&v57);
  cleanup_argloc(&v59);
  return v34;
}
