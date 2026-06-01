__int64 __fastcall sub_6CE820(
        __int64 **a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  __int64 *v18; // rax
  void *v19; // r12
  _QWORD *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rbp
  const char *v24; // rsi
  __int64 v25; // rax
  int v26; // r12d
  __int64 v27; // r13
  unsigned __int64 v28; // r14
  const char *v29; // rdx
  _BYTE *v30; // rdi
  char *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r12
  unsigned __int64 v34; // r13
  _BYTE *v35; // rsi
  unsigned __int64 v36; // r12
  __int64 *v37; // rdi
  __int64 *v38; // r9
  __int64 *v39; // r15
  __int64 **v40; // r13
  __int64 *v41; // rax
  unsigned __int64 v42; // rsi
  __int64 *v43; // r14
  __int64 v44; // rcx
  __int64 v45; // rdx
  _QWORD *v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  void *v49; // r8
  const char *v50; // rsi
  __int64 *v51; // rdx
  __int64 v52; // rax
  _BOOL8 v53; // rdi
  __int64 v54; // rax
  __int64 *v55; // rax
  _QWORD *v56; // rax
  __int64 *v57; // rax
  __int64 v58; // [rsp+8h] [rbp-C0h]
  void *v59; // [rsp+20h] [rbp-A8h]
  __int64 *v60; // [rsp+20h] [rbp-A8h]
  void *v61; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v62; // [rsp+20h] [rbp-A8h]
  __int64 v63; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v64; // [rsp+30h] [rbp-98h]
  unsigned __int64 v65; // [rsp+30h] [rbp-98h]
  void *v66; // [rsp+30h] [rbp-98h]
  unsigned __int64 v67; // [rsp+30h] [rbp-98h]
  void *v68; // [rsp+38h] [rbp-90h]
  bool v69; // [rsp+4Fh] [rbp-79h] BYREF
  void *v70; // [rsp+50h] [rbp-78h] BYREF
  __int128 v71; // [rsp+58h] [rbp-70h]
  void *ptr; // [rsp+70h] [rbp-58h] BYREF
  __int128 v73; // [rsp+78h] [rbp-50h]
  unsigned __int64 v74; // [rsp+88h] [rbp-40h]

  v18 = *a1;
  v74 = __readfsqword(0x28u);
  v19 = (void *)sub_52FDF0(*(_QWORD *)(*v18 + 1872), a2);
  v20 = sub_5310F0(*(_QWORD *)(**a1 + 1872), (unsigned __int64)v19);
  if ( v20 )
  {
    v22 = (__int64)v20;
    if ( (*((_BYTE *)v20 + 28) & 0x40) != 0 )
      return v74 - __readfsqword(0x28u);
    v70 = nullptr;
    v71 = 0;
    sub_5301C0(*(__int64 **)(**a1 + 1872), &v70, *v20);
    ptr = nullptr;
    v24 = haystack;
    v73 = 0;
    if ( (_QWORD)v71 )
      v24 = (const char *)v70;
    if ( (unsigned __int8)sub_6CA1E0((__int64 *)&ptr, v24) )
    {
      v25 = v73;
      v26 = 1;
      v27 = v73 - 1;
      if ( !(_QWORD)v73 )
        v27 = 0;
      v28 = v27 + 1;
      while ( 1 )
      {
        v29 = haystack;
        if ( v25 )
          v29 = (const char *)ptr;
        if ( (unsigned __int8)sub_52F580(*(__int64 **)(**a1 + 1872), v22, v29) )
          sub_368890();
        v30 = ptr;
        v31 = (char *)ptr;
        if ( v27 )
        {
          v32 = v73;
          if ( (unsigned __int64)v73 < v28 )
          {
            if ( *((_QWORD *)&v73 + 1) < v28 )
            {
              v31 = (char *)qvector_reserve(&ptr, ptr, v27 + 1, 1);
              ptr = v31;
              v32 = v73;
            }
            memset(&v31[v32], 0, v28 - v32);
            *(_QWORD *)&v73 = v27 + 1;
            v30 = ptr;
          }
          else if ( v28 != (_QWORD)v73 )
          {
            *(_QWORD *)&v73 = v27 + 1;
          }
          v30[v27] = 0;
        }
        else if ( ptr )
        {
          *(_QWORD *)&v73 = 0;
          qfree(ptr);
          ptr = nullptr;
          *((_QWORD *)&v73 + 1) = 0;
        }
        sub_35A910((__int64 *)&ptr);
        v25 = v73;
        ++v26;
      }
    }
    if ( !(unsigned __int8)sub_6CD060(*a1, v22, (__int64)&v70) )
      goto LABEL_23;
    v33 = v71;
    v34 = 2;
    if ( (_QWORD)v71 )
    {
      v34 = v71 + 1;
      v33 = v71 - 1;
    }
    v35 = v70;
    if ( *((_QWORD *)&v71 + 1) < v34 )
    {
      v70 = (void *)qvector_reserve(&v70, v70, v34, 1);
      v35 = v70;
    }
    *(_QWORD *)&v71 = v34;
    v35[v33] = 46;
    *((_BYTE *)v70 + v33 + 1) = 0;
    if ( !*(_DWORD *)(v22 + 8) )
    {
LABEL_23:
      if ( ptr )
      {
        *(_QWORD *)&v73 = 0;
        qfree(ptr);
      }
      if ( v70 )
      {
        *(_QWORD *)&v71 = 0;
        qfree(v70);
      }
      return v74 - __readfsqword(0x28u);
    }
    v36 = 0;
    v63 = (__int64)(a1 + 2);
    while ( 1 )
    {
      v37 = *a1;
      v38 = (__int64 *)(*(_QWORD *)(v22 + 16) + 32 * v36);
      v69 = 0;
      v39 = v38;
      if ( (unsigned __int8)sub_6CC9B0(v37, *v38, &v69, (__int64)&v70, v36) && v69 )
        sub_6BF220(*a1, *v39, 0);
      v40 = a1 + 3;
      v58 = *((unsigned int *)v39 + 6);
      v41 = a1[4];
      if ( !v41 )
        break;
      v42 = *v39;
      v43 = (__int64 *)(a1 + 3);
      do
      {
        while ( 1 )
        {
          v44 = v41[2];
          v45 = v41[3];
          if ( v41[4] < v42 )
            break;
          v43 = v41;
          v41 = (__int64 *)v41[2];
          if ( !v44 )
            goto LABEL_46;
        }
        v41 = (__int64 *)v41[3];
      }
      while ( v45 );
LABEL_46:
      if ( v43 == (__int64 *)v40 )
        break;
      if ( v42 < v43[4] )
      {
        v46 = (_QWORD *)operator new(0x30u);
        v48 = *v39;
        v46[5] = 0;
        v49 = v46;
        v46[4] = v48;
        v50 = (const char *)v43[4];
        if ( v48 < (unsigned __int64)v50 )
        {
          v51 = v43;
          if ( v43 == a1[5] )
            goto LABEL_53;
          v64 = v48;
          v59 = v46;
          v52 = std::_Rb_tree_decrement(v43);
          v48 = v64;
          v49 = v59;
          v51 = (__int64 *)v52;
          if ( *(_QWORD *)(v52 + 32) < v64 )
          {
            if ( *(_QWORD *)(v52 + 24) )
              v51 = v43;
            else
              v43 = nullptr;
            goto LABEL_53;
          }
LABEL_67:
          v66 = v49;
          v62 = v48;
          v55 = sub_6C9E80(v63, v48);
          v48 = v62;
          v49 = v66;
          v43 = v55;
          goto LABEL_53;
        }
        if ( (unsigned __int64)v50 >= v48 )
          goto LABEL_60;
        if ( v43 != a1[6] )
        {
          v65 = v48;
          v61 = v46;
          v54 = std::_Rb_tree_increment(v43, v50, v47, v48, v46);
          v48 = v65;
          v49 = v61;
          v51 = (__int64 *)v54;
          if ( v65 >= *(_QWORD *)(v54 + 32) )
            goto LABEL_67;
          if ( v43[3] )
          {
            v43 = (__int64 *)v54;
            goto LABEL_53;
          }
        }
        v51 = v43;
        if ( !v43 )
        {
LABEL_60:
          if ( v49 )
            operator delete(v49, 0x30u);
          goto LABEL_58;
        }
LABEL_72:
        v53 = v48 < (unsigned __int64)v50;
        goto LABEL_57;
      }
LABEL_58:
      ++v36;
      v43[5] = v58;
      if ( v36 >= *(unsigned int *)(v22 + 8) )
        goto LABEL_23;
    }
    v56 = (_QWORD *)operator new(0x30u);
    v48 = *v39;
    v56[5] = 0;
    v49 = v56;
    v56[4] = v48;
    if ( !a1[7] || (v51 = a1[6], v43 = nullptr, v51[4] >= v48) )
    {
      v68 = v56;
      v67 = v48;
      v57 = sub_6C9E80(v63, v48);
      v48 = v67;
      v49 = v68;
      v43 = v57;
    }
LABEL_53:
    if ( !v51 )
      goto LABEL_60;
    if ( v40 != (__int64 **)v51 && !v43 )
    {
      v50 = (const char *)v51[4];
      goto LABEL_72;
    }
    v53 = 1;
LABEL_57:
    v60 = (__int64 *)v49;
    std::_Rb_tree_insert_and_rebalance(v53, v49, v51, a1 + 3);
    a1[7] = (__int64 *)((char *)a1[7] + 1);
    v43 = v60;
    goto LABEL_58;
  }
  if ( (unsigned int)sub_6BD6E0(*a1, v19, 0, 0, v21) )
    return v74 - __readfsqword(0x28u);
  return sub_84F5B0(
           "migrate_asmstructs::get_struc_by_idx(%zu/TID=%a) failed\n",
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17);
}
