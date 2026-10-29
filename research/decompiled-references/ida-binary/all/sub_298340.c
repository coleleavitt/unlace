unsigned __int64 __fastcall sub_298340(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, int); // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, int, int); // rax
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // r13
  __int64 v17; // r10
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 (__fastcall *v22)(__int64, int); // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 (__fastcall *v25)(__int64, int, int); // rax
  __int64 (__fastcall *v26)(__int64, unsigned int); // rax
  __int64 (__fastcall *v27)(__int64); // rax
  __int64 *v28; // rax
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rsi
  unsigned int v32; // eax
  int v33; // r12d
  __int64 i; // rbp
  const char **v35; // rbp
  const char *v36; // rdx
  __int64 v37; // rcx
  const char *v38; // rsi
  unsigned __int64 v39; // rdi
  int v40; // ebx
  __int64 v41; // rax
  int v42; // r13d
  void *v44; // rax
  unsigned int v45; // eax
  int v46; // [rsp+Ch] [rbp-8Ch]
  __int64 v47; // [rsp+10h] [rbp-88h]
  unsigned int v48; // [rsp+20h] [rbp-78h]
  int v49; // [rsp+24h] [rbp-74h]
  _QWORD *v50; // [rsp+28h] [rbp-70h]
  __int64 v51; // [rsp+30h] [rbp-68h] BYREF
  __int128 v52; // [rsp+38h] [rbp-60h] BYREF
  __int128 v53; // [rsp+48h] [rbp-50h]
  unsigned __int64 v54; // [rsp+58h] [rbp-40h]

  v50 = (_QWORD *)a2;
  v46 = a3;
  v54 = __readfsqword(0x28u);
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v5 == interactive_graph_t__::vfunc_7 )
    v49 = *(_DWORD *)(a1 + 184);
  else
    v49 = v5(a1);
  v6 = (unsigned int)v46;
  if ( v49 <= v46 )
    goto LABEL_39;
  do
  {
    v7 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 104LL);
    if ( v7 == interactive_graph_t__::vfunc_13 )
    {
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 200) + 24LL * (int)v6 + 8);
    }
    else
    {
      a2 = (unsigned int)v6;
      v8 = v7(a1, v6);
    }
    if ( v8 != 1 )
    {
      if ( !under_debugger )
        interr(40155, a2, a3, a4, a5);
LABEL_58:
      BUG();
    }
    v9 = *(_QWORD *)a1;
    v10 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 120LL);
    if ( v10 == interactive_graph_t__::vfunc_15 )
    {
      v48 = **(_DWORD **)(*(_QWORD *)(a1 + 200) + 24LL * (int)v6);
    }
    else
    {
      v45 = v10(a1, v6, 0);
      v9 = *(_QWORD *)a1;
      v48 = v45;
    }
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(v9 + 160);
    v12 = (v6 << 32) | v48;
    if ( v11 == interactive_graph_t__::vfunc_20 )
      v15 = interactive_graph_t__::vfunc_20(a1, v12);
    else
      v15 = v11(a1, v12);
    a5 = 0.0;
    v51 = *(_QWORD *)v15;
    v52 = *(unsigned __int64 *)(v15 + 8);
    v53 = 0;
    v16 = *(_QWORD *)(v15 + 24);
    if ( v16 )
    {
      v44 = (void *)qalloc_or_throw(8 * v16);
      *((_QWORD *)&v53 + 1) = v16;
      *((_QWORD *)&v52 + 1) = v44;
      memcpy(v44, *(const void **)(v15 + 16), 8 * v16);
      *(_QWORD *)&v53 = v16;
    }
    while ( 1 )
    {
      v22 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
      if ( v22 == interactive_graph_t__::vfunc_12 )
      {
        v23 = *(_QWORD *)(a1 + 176);
        if ( *(_DWORD *)(v23 + 24LL * (int)v6 + 8) != 1 )
          goto LABEL_29;
      }
      else
      {
        v23 = (unsigned int)v6;
        if ( (unsigned int)v22(a1, v6) != 1 )
        {
LABEL_29:
          if ( under_debugger )
            goto LABEL_58;
          v26 = (__int64 (__fastcall *)(__int64, unsigned int))interr(40156, v23, v13, v14, 0.0);
LABEL_31:
          v28 = (__int64 *)v26(a1, v6);
          goto LABEL_26;
        }
      }
      v24 = *(_QWORD *)a1;
      v25 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 112LL);
      if ( v25 == interactive_graph_t__::vfunc_14 )
      {
        v15 = **(unsigned int **)(*(_QWORD *)(a1 + 176) + 24LL * (int)v6);
      }
      else
      {
        v32 = v25(a1, v6, 0);
        v24 = *(_QWORD *)a1;
        v15 = v32;
      }
      v26 = *(__int64 (__fastcall **)(__int64, unsigned int))(v24 + 152);
      if ( v26 != interactive_graph_t__::vfunc_19 )
        goto LABEL_31;
      v27 = *(__int64 (__fastcall **)(__int64))(v24 + 56);
      if ( v27 == interactive_graph_t__::vfunc_7 )
      {
        if ( (int)v6 >= *(_DWORD *)(a1 + 184) )
          goto LABEL_35;
      }
      else if ( (int)v6 >= (int)v27(a1) )
      {
LABEL_35:
        sub_16B930((__int64)"nrect(%d) failed", v6);
      }
      v28 = (__int64 *)(*(_QWORD *)(a1 + 224) + 16LL * (int)v6);
LABEL_26:
      v29 = *v28;
      v30 = v53;
      v31 = *((_QWORD *)&v52 + 1);
      if ( *((_QWORD *)&v53 + 1) < (unsigned __int64)(v53 + 1) )
      {
        v47 = v29;
        *((_QWORD *)&v52 + 1) = qvector_reserve((char *)&v52 + 8, *((_QWORD *)&v52 + 1), v53 + 1, 8);
        v31 = *((_QWORD *)&v52 + 1);
        v29 = v47;
        v30 = v53;
      }
      *(_QWORD *)(v31 + 8 * v30) = v29;
      v17 = *(_QWORD *)a1;
      *(_QWORD *)&v53 = v53 + 1;
      v18 = *(__int64 (__fastcall **)(__int64, __int64))(v17 + 160);
      v19 = (v15 << 32) | (unsigned int)v6;
      if ( v18 == interactive_graph_t__::vfunc_20 )
      {
        v20 = interactive_graph_t__::vfunc_20(a1, v19);
      }
      else
      {
        v20 = v18(a1, v19);
        v21 = *(_QWORD *)a1;
      }
      DWORD1(v52) = *(_DWORD *)(v20 + 12);
      (*(void (__fastcall **)(__int64, _QWORD))(v21 + 200))(a1, (unsigned int)v6);
      if ( v46 > (int)v15 )
        break;
      LODWORD(v6) = v15;
    }
    a2 = v48;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)a1 + 208LL))(
      a1,
      v48,
      (unsigned int)v15,
      &v51);
    if ( *((_QWORD *)&v52 + 1) )
    {
      *(_QWORD *)&v53 = 0;
      a5 = qfree(*((_QWORD *)&v52 + 1), (const char *)v48);
    }
    v6 = (unsigned int)(v6 + 1);
  }
  while ( v49 > (int)v6 );
LABEL_39:
  v33 = 0;
  for ( i = 0; (unsigned __int64)v33 < v50[1]; i = v33 )
  {
    v51 = 0;
    v52 = 0;
    v35 = (const char **)(*v50 + 32 * i);
    v36 = v35[1];
    v37 = (__int64)*v35;
    if ( v36 )
    {
      v38 = nullptr;
      v39 = 0;
      v36 = nullptr;
      v40 = 0;
      v41 = 0;
      do
      {
        while ( 1 )
        {
          v42 = *(_DWORD *)(v37 + 4 * v41);
          if ( v42 < v46 )
            break;
          v41 = ++v40;
          if ( v40 >= (unsigned __int64)v35[1] )
            goto LABEL_47;
        }
        if ( v39 < (unsigned __int64)(v36 + 1) )
        {
          v51 = qvector_reserve(&v51, v38, v36 + 1, 4);
          v36 = (const char *)v52;
          v38 = (const char *)v51;
        }
        *(_DWORD *)&v38[4 * (_QWORD)v36] = v42;
        ++v40;
        v38 = (const char *)v51;
        v39 = *((_QWORD *)&v52 + 1);
        v36 = (const char *)(v52 + 1);
        v41 = v40;
        *(_QWORD *)&v52 = v52 + 1;
        v37 = (__int64)*v35;
      }
      while ( v40 < (unsigned __int64)v35[1] );
    }
    else
    {
      v39 = 0;
      v38 = nullptr;
    }
LABEL_47:
    v51 = v37;
    *((_QWORD *)&v52 + 1) = v35[2];
    *v35 = v38;
    v35[1] = v36;
    v35[2] = (const char *)v39;
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51, v38);
    }
    ++v33;
  }
  return v54 - __readfsqword(0x28u);
}
