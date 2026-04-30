__int64 __fastcall sub_376B20(
        __int64 a1,
        unsigned __int8 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rax
  char *v12; // rdi
  unsigned __int64 v13; // rsi
  char **v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64, int); // rcx
  __int64 (__fastcall *v19)(__int64, int); // rdx
  unsigned __int64 v20; // rax
  int v21; // ebp
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  __int64 v28; // r10
  __int64 v29; // r9
  __int64 v30; // rbp
  __int64 *v31; // r15
  size_t v32; // r11
  __int64 v33; // rcx
  const char *v34; // r15
  __int64 v35; // rax
  size_t v36; // rcx
  bool v37; // zf
  __int64 v38; // rbp
  __int64 *i; // rbp
  __int64 v40; // rax
  double v41; // xmm4_8
  double v42; // xmm5_8
  __int64 v43; // rcx
  __int64 v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // rsi
  __int64 v48; // r10
  __int64 v49; // rax
  __int64 v50; // [rsp+0h] [rbp-D8h]
  __int64 v51; // [rsp+8h] [rbp-D0h]
  __int64 v52; // [rsp+8h] [rbp-D0h]
  size_t na; // [rsp+10h] [rbp-C8h]
  size_t nb; // [rsp+10h] [rbp-C8h]
  __int64 n; // [rsp+10h] [rbp-C8h]
  char v56; // [rsp+1Eh] [rbp-BAh]
  __int64 v58; // [rsp+20h] [rbp-B8h]
  __int64 v59; // [rsp+28h] [rbp-B0h]
  char v60; // [rsp+3Fh] [rbp-99h] BYREF
  void *src; // [rsp+40h] [rbp-98h] BYREF
  __int128 v62; // [rsp+48h] [rbp-90h]
  __int64 v63; // [rsp+60h] [rbp-78h] BYREF
  __int128 v64; // [rsp+68h] [rbp-70h]
  void *v65; // [rsp+80h] [rbp-58h] BYREF
  __int128 v66; // [rsp+88h] [rbp-50h]
  unsigned __int64 v67; // [rsp+98h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v11 = sub_2B70C0(a1);
  v12 = &v60;
  v13 = (unsigned __int64)"Adding new nodes to the graph...";
  v14 = (char **)v11;
  sub_376610((__int64)&v60, (int)"Adding new nodes to the graph...");
  v16 = *(_QWORD *)(a1 + 192);
  if ( !(20LL * *(_QWORD *)(a1 + 200)) )
  {
    sub_541CC0(QT::QCoreApplication::self + 2);
    sub_2B70C0(a1);
    return 1;
  }
  v56 = 0;
  v50 = -1;
  while ( 1 )
  {
    if ( *(_BYTE *)v16 )
    {
      v17 = *(int *)(v16 + 4);
      v13 = v17;
      if ( v17 < (unsigned __int64)v14[35] )
        break;
    }
LABEL_27:
    if ( !(unsigned __int8)sub_541EF0(v12, v13, v15) )
    {
      v16 += 20;
      v15 = 5LL * *(_QWORD *)(a1 + 200);
      if ( v16 != *(_QWORD *)(a1 + 192) + 20LL * *(_QWORD *)(a1 + 200) )
        continue;
    }
    goto LABEL_29;
  }
  v18 = proxim_graph_t__::vfunc_37;
  v56 |= v50 != -1;
  v19 = *((__int64 (__fastcall **)(__int64, int))*v14 + 37);
  if ( v19 == proxim_graph_t__::vfunc_37 )
  {
    v13 = (unsigned __int64)v14[34];
    v50 = *(_QWORD *)(v13 + 40 * v17);
  }
  else
  {
    v50 = v19((__int64)v14, v17);
  }
  a3 = 0.0;
  src = nullptr;
  v63 = 0;
  v62 = 0;
  v64 = 0;
  v20 = *(int *)(v16 + 4);
  if ( (v20 & 0x80000000) != 0LL || v20 >= (unsigned __int64)v14[35] )
  {
    if ( !under_debugger )
      interr(40327, v13, v19, v18, 0.0);
    BUG();
  }
  sub_371F60(
    (__int64 *)&v14[34][40 * v20],
    (unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))v14 + 34,
    a2,
    (__int64 *)&src,
    &v63);
  v21 = v62 + v64;
  v22 = (*((__int64 (__fastcall **)(char **))*v14 + 8))(v14);
  v13 = (unsigned int)dword_8CCA94;
  if ( dword_8CCA94 >= (unsigned int)(v21 + v22) )
  {
    v28 = v62;
    a3 = 0.0;
    v65 = nullptr;
    v66 = 0;
    if ( (_QWORD)v62 )
    {
      v52 = v62;
      n = 8 * v62;
      v65 = (void *)qalloc_or_throw(8 * v62);
      v13 = (unsigned __int64)src;
      *((_QWORD *)&v66 + 1) = v52;
      memcpy(v65, src, n);
      v48 = v52;
      v31 = (__int64 *)v65;
      v33 = n;
      v29 = 8 * v64;
      *(_QWORD *)&v66 = v52;
      v49 = (8 * (__int64)v64) >> 3;
      v51 = v49;
      if ( !v49 )
        goto LABEL_18;
      v30 = v63;
      v15 = v49 + v48;
      v32 = v63 + v29;
      if ( *((_QWORD *)&v66 + 1) >= (unsigned __int64)(v49 + v48) )
      {
LABEL_14:
        v34 = (char *)v31 + v33;
        nb = v32;
        v13 = (unsigned __int64)v34;
        memmove((void *)&v34[v29], v34, 8 * v66 - v33);
        v35 = 0;
        v36 = nb - v30;
        if ( nb != v30 )
        {
          do
          {
            v15 = *(_QWORD *)(v30 + v35);
            *(_QWORD *)&v34[v35] = v15;
            v35 += 8;
          }
          while ( v36 != v35 );
        }
        v37 = (_QWORD)v66 + v51 == 0;
        v38 = v66 + v51;
        *(_QWORD *)&v66 = v66 + v51;
        v31 = (__int64 *)v65;
        if ( v37 )
          goto LABEL_21;
        v33 = 8 * v38;
LABEL_18:
        for ( i = (__int64 *)((char *)v31 + v33); i != v31; ++v31 )
        {
          v13 = *v31;
          sub_370AA0((__int64)(v14 + 34), *v31, 0);
        }
        sub_370D50(v14 + 34, (const char *)v13);
        sub_3723D0((__int64)(v14 + 34));
        v31 = (__int64 *)v65;
LABEL_21:
        if ( v31 )
        {
          *(_QWORD *)&v66 = 0;
          a3 = qfree(v31, (const char *)v13, v15, v36);
        }
        goto LABEL_23;
      }
      v28 = n;
    }
    else
    {
      v29 = 8 * v64;
      v15 = (8 * (__int64)v64) >> 3;
      if ( !v15 )
      {
LABEL_23:
        if ( v63 )
        {
          *(_QWORD *)&v64 = 0;
          a3 = qfree(v63, (const char *)v13, v15);
        }
        v12 = (char *)src;
        if ( src )
        {
          *(_QWORD *)&v62 = 0;
          a3 = qfree(src, (const char *)v13, v15);
        }
        goto LABEL_27;
      }
      v30 = v63;
      v51 = (8 * (__int64)v64) >> 3;
      v31 = nullptr;
      v32 = v63 + v29;
    }
    v59 = v29;
    v58 = v28;
    na = v32;
    v65 = (void *)qvector_reserve(&v65, v31, v15, 8);
    v33 = v58;
    v31 = (__int64 *)v65;
    v29 = v59;
    v32 = na;
    goto LABEL_14;
  }
  sub_16B9E0(
    (int)"Can't add new nodes, the graph would be too big (more than %d nodes) to be displayed on the screen.\n"
         "(you can change this limit in the graph options dialog)",
    (unsigned int)dword_8CCA94,
    (__int64)&dword_8CCA94,
    v23,
    v24,
    v25,
    (__m128)0LL,
    a4,
    a5,
    a6,
    v26,
    v27,
    a9,
    a10,
    v50);
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    a3 = qfree(v63, (const char *)v13);
  }
  if ( src )
  {
    *(_QWORD *)&v62 = 0;
    a3 = qfree(src, (const char *)v13, a3);
  }
LABEL_29:
  sub_541CC0(QT::QCoreApplication::self + 2);
  v40 = sub_2B70C0(a1);
  if ( v56 != 1 && v50 != -1 )
  {
    v43 = *(_QWORD *)(v40 + 272);
    v44 = v43 + 40LL * *(_QWORD *)(v40 + 280);
    if ( v43 == v44 )
    {
LABEL_42:
      v46 = 0xFFFFFFFFLL;
    }
    else
    {
      v45 = *(_QWORD **)(v40 + 272);
      while ( v50 != *v45 )
      {
        v45 += 5;
        if ( (_QWORD *)v44 == v45 )
          goto LABEL_42;
      }
      v46 = -858993459 * (unsigned int)(((__int64)v45 - v43) >> 3);
    }
    sub_3766E0(a1, v46, v44, v43, a3, a4, a5, a6, v41, v42, a9, a10);
  }
  return 1;
}
