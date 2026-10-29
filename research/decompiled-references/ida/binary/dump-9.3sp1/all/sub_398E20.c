__int64 __fastcall sub_398E20(__int64 a1, __int64 a2, _BYTE *a3, char a4, double a5)
{
  __int64 v7; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r13
  char *v12; // rsi
  char *v13; // rdx
  char *v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rbx
  _QWORD *v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rsi
  __int64 v28; // r15
  _BOOL8 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // ebx
  unsigned int v34; // eax
  __int64 v35; // r15
  int *v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  unsigned __int64 v42; // [rsp+8h] [rbp-140h]
  __int64 v43; // [rsp+10h] [rbp-138h]
  __int64 tinfo_size; // [rsp+18h] [rbp-130h]
  bool v45; // [rsp+18h] [rbp-130h]
  __int64 v46; // [rsp+20h] [rbp-128h]
  char v47; // [rsp+20h] [rbp-128h]
  __int64 v48; // [rsp+28h] [rbp-120h]
  unsigned int v49; // [rsp+30h] [rbp-118h]
  char v50; // [rsp+37h] [rbp-111h]
  _BYTE *v51; // [rsp+38h] [rbp-110h]
  _QWORD v52[2]; // [rsp+40h] [rbp-108h] BYREF
  int v53; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v54; // [rsp+58h] [rbp-F0h]
  __int64 v55; // [rsp+60h] [rbp-E8h]
  __int64 v56; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v57; // [rsp+78h] [rbp-D0h]
  __int128 v58; // [rsp+88h] [rbp-C0h]
  __int64 v59; // [rsp+98h] [rbp-B0h]
  __int128 v60; // [rsp+A0h] [rbp-A8h]
  _BYTE v61[24]; // [rsp+B0h] [rbp-98h] BYREF
  char v62; // [rsp+C8h] [rbp-80h]
  __int64 v63; // [rsp+E0h] [rbp-68h]
  int v64; // [rsp+E8h] [rbp-60h]
  __int64 v65; // [rsp+F0h] [rbp-58h]
  char v66; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v67; // [rsp+108h] [rbp-40h]

  v7 = a1;
  v67 = __readfsqword(0x28u);
  v53 = 0;
  copy_argloc();
  v9 = *(_QWORD *)(a2 + 16);
  v52[0] = 0;
  v55 = v9;
  v43 = a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 432LL);
  v10 = *(_DWORD *)(a2 + 24);
  v42 = 0x4EC4EC4EC4EC4EC5LL * (v43 >> 3);
  v49 = v10 & 0x100;
  if ( a3 )
  {
    if ( !a4 )
    {
      if ( (unsigned __int8)*(_QWORD *)a3 )
        goto LABEL_4;
      if ( (v10 & 0x40) != 0 )
      {
        v34 = v10 & 0xFFFFFFBF;
        *(_DWORD *)(a2 + 24) = v34;
        if ( (unsigned __int8)*(_QWORD *)a3 )
          goto LABEL_4;
LABEL_51:
        *(_DWORD *)(a2 + 24) = v34 & 0xFFFBFFFF;
        sub_2B9C00(*(_QWORD *)(a1 + 24));
        v24 = v49;
        v29 = 0;
        if ( !v49 )
          goto LABEL_39;
        sub_397480(a1, a5);
        goto LABEL_53;
      }
      goto LABEL_42;
    }
LABEL_28:
    *(_DWORD *)(a2 + 24) = v10 | 0x40000;
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
      sub_32C270(&v56, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL), *(_DWORD *)(a2 + 88));
      copy_tinfo_t();
      clear_tinfo_t();
    }
    if ( !(unsigned __int8)*(_QWORD *)a3 )
    {
      v47 = 0;
      v45 = 1;
      goto LABEL_32;
    }
LABEL_4:
    tinfo_size = get_tinfo_size();
    v48 = get_tinfo_size();
    if ( v49 )
    {
      v11 = *(_QWORD *)(a1 + 24);
      a5 = 0.0;
      v56 = 0;
      v58 = 0u;
      v59 = 0;
      memset(v61, 0, sizeof(v61));
      v62 = 16;
      v57 = 0;
      v60 = 0;
      v50 = sub_3760F0(v11, (__int64)&v56);
      if ( v50 )
      {
        v12 = *(char **)(v11 + 456);
        v13 = &v12[4 * *(_QWORD *)(v11 + 464)];
        if ( v12 == v13 )
          goto LABEL_82;
        v14 = *(char **)(v11 + 456);
        while ( (_DWORD)v42 != *(_DWORD *)v14 )
        {
          v14 += 4;
          if ( v13 == v14 )
            goto LABEL_82;
        }
        v15 = v14 - v12;
        v16 = v15 >> 2;
        if ( v15 == -4 )
        {
LABEL_82:
          if ( !under_debugger )
            sub_383060(0xCC88u, 0.0);
          BUG();
        }
        if ( v16 < (unsigned __int64)v57 )
          v50 = sub_3736B0(v11, (__int64)&v56, v16, (__int64)a3);
      }
      if ( *(_QWORD *)v61 )
      {
        *(_QWORD *)&v61[8] = 0;
        qfree(*(__int64 *)v61);
      }
      cleanup_argloc();
      clear_tinfo_t();
      v17 = v56;
      if ( v56 )
      {
        if ( (_QWORD)v57 )
        {
          v51 = a3;
          v18 = 0;
          v46 = v7;
          v19 = v57;
          do
          {
            v20 = (_QWORD *)(v17 + 80 * v18);
            clear_tinfo_t();
            v21 = v20[5];
            if ( v21 )
            {
              v20[6] = 0;
              qfree(v21);
            }
            v22 = v20[2];
            if ( v22 )
            {
              v20[3] = 0;
              qfree(v22);
            }
            ++v18;
            cleanup_argloc();
            v17 = v56;
          }
          while ( v19 != v18 );
          v7 = v46;
          a3 = v51;
        }
        *(_QWORD *)&v57 = 0;
        qfree(v17);
      }
      if ( !v50 )
        goto LABEL_26;
    }
    if ( !(unsigned __int8)sub_217480(*(_QWORD *)(v7 + 24), a2, a3, tinfo_size) )
    {
      if ( !v49 )
      {
        sub_2B4E70((__int64)"AUTOHIDE NONE\nSorry, cannot change variable type");
        goto LABEL_47;
      }
LABEL_26:
      sub_2B4E70((__int64)"AUTOHIDE NONE\n"
                          "Sorry, cannot change argument type.\n"
                          "Please edit the function prototype instead");
LABEL_47:
      v32 = 0;
      goto LABEL_43;
    }
    v47 = sub_38B550(v7, (int *)a2, a5);
    v45 = tinfo_size != v48;
    if ( !a4 )
    {
      v23 = *(_DWORD *)(a2 + 24) & 0xFFFBFFFF;
LABEL_33:
      *(_DWORD *)(a2 + 24) = v23;
      sub_2B9C00(*(_QWORD *)(v7 + 24));
      if ( v49 )
      {
        sub_397480(v7, a5);
        v45 = 0;
        if ( !v47 )
          goto LABEL_53;
      }
      else if ( !v47 )
      {
        goto LABEL_38;
      }
      if ( v53 == 1 )
        v27 = v54;
      else
        v27 = -1;
      v28 = sub_1CFD50(*(_QWORD **)(v7 + 24), v27);
      if ( v28 >= 0 )
      {
        sub_1CE9E0(*(_QWORD *)(v7 + 24));
        v52[1] = 0;
        tinfo_get_func_frame();
        a5 = 0.0;
        v56 = 8 * v28;
        v57 = 0u;
        v59 = 0;
        v63 = 1;
        v64 = -1;
        v65 = 0;
        v66 = 0;
        v58 = 0;
        v60 = 0;
        *(_OWORD *)v61 = 0;
        if ( (unsigned int)find_tinfo_udt_member() != -1 )
        {
          v37 = *(_QWORD *)(v7 + 32);
          if ( v37 )
            *(_DWORD *)(v37 + 108) |= 8u;
          if ( (int)set_tinfo_property4() < 0 )
            sub_2B4E70(
              (__int64)"Could not change type of the stack frame member.\n"
                       "Please edit the stack frame manually if necessary.\n",
              12);
          v41 = *(_QWORD *)(v7 + 32);
          if ( v41 )
          {
            *(_DWORD *)(v41 + 108) &= ~8u;
            if ( (*(_BYTE *)v7 & 2) == 0 )
            {
              sub_395A90(v7, 0, 0.0, v38, v39, v40);
              v45 = 0;
            }
          }
        }
        sub_1CE9E0(*(_QWORD *)(v7 + 24));
        reanalyze_function();
        clear_tinfo_t();
        if ( v59 )
        {
          *(_QWORD *)&v60 = 0;
          qfree(v59);
        }
        if ( *((_QWORD *)&v57 + 1) )
        {
          *(_QWORD *)&v58 = 0;
          qfree(*((__int64 *)&v57 + 1));
        }
        clear_tinfo_t();
      }
LABEL_38:
      v29 = 0;
      if ( v45 )
      {
LABEL_39:
        sub_395A90(v7, v29, a5, v24, v25, v26);
        v30 = *(_QWORD *)(v7 + 24);
        v31 = 0;
        if ( v42 < *(_QWORD *)(v30 + 440) )
          v31 = *(_QWORD *)(v30 + 432) + v43;
        sub_33E140(*(_QWORD *)(v7 + 128), 0x70u, v7, v31, a3);
        goto LABEL_42;
      }
LABEL_53:
      v35 = *(_QWORD *)(v7 + 24);
      v36 = *(int **)(v35 + 1256);
      if ( !(96LL * *(_QWORD *)(v35 + 1264)) )
        goto LABEL_80;
      while ( (unsigned int)sub_3307E0(v36, &v53) )
      {
        v36 += 24;
        if ( v36 == (int *)(*(_QWORD *)(v35 + 1256) + 96LL * *(_QWORD *)(v35 + 1264)) )
          goto LABEL_80;
      }
      if ( v36 )
        v29 = (v36[22] & 1) == 0;
      else
LABEL_80:
        v29 = 1;
      goto LABEL_39;
    }
LABEL_32:
    v23 = *(_DWORD *)(a2 + 24) & 0xFFFFFFBF;
    goto LABEL_33;
  }
  if ( a4 )
  {
    a3 = v52;
    goto LABEL_28;
  }
  if ( (v10 & 0x40) != 0 )
  {
    v34 = v10 & 0xFFFFFFBF;
    a3 = v52;
    goto LABEL_51;
  }
LABEL_42:
  v32 = 1;
LABEL_43:
  clear_tinfo_t();
  cleanup_argloc();
  return v32;
}
