__int64 __fastcall sub_6AD860(
        __int64 **a1,
        unsigned int a2,
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
  unsigned int v19; // r12d
  unsigned int *v20; // rax
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
  __int64 v37; // rdx
  __int64 *v38; // rdi
  unsigned int *v39; // r15
  __int64 *v40; // rax
  unsigned int v41; // esi
  __int64 **v42; // r14
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  unsigned int v46; // ecx
  __int64 **v47; // r8
  unsigned int v48; // esi
  __int64 *v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned int v55; // ecx
  __int64 v56; // rax
  __int64 *v57; // [rsp+8h] [rbp-C0h]
  __int64 **v58; // [rsp+20h] [rbp-A8h]
  __int64 **v59; // [rsp+20h] [rbp-A8h]
  __int64 **v60; // [rsp+20h] [rbp-A8h]
  __int64 v61; // [rsp+28h] [rbp-A0h]
  unsigned int v62; // [rsp+30h] [rbp-98h]
  unsigned int v63; // [rsp+30h] [rbp-98h]
  __int64 **v64; // [rsp+30h] [rbp-98h]
  __int64 **v65; // [rsp+38h] [rbp-90h]
  bool v66; // [rsp+4Fh] [rbp-79h] BYREF
  void *v67; // [rsp+50h] [rbp-78h] BYREF
  __int128 v68; // [rsp+58h] [rbp-70h]
  void *ptr; // [rsp+70h] [rbp-58h] BYREF
  __int128 v70; // [rsp+78h] [rbp-50h]
  unsigned __int64 v71; // [rsp+88h] [rbp-40h]

  v18 = *a1;
  v71 = __readfsqword(0x28u);
  v19 = sub_5179F0(*(_QWORD *)(*v18 + 1680), a2);
  v20 = sub_518BB0(*(_QWORD *)(**a1 + 1680), v19);
  if ( v20 )
  {
    v22 = (__int64)v20;
    if ( (v20[5] & 0x40) != 0 )
      return v71 - __readfsqword(0x28u);
    v67 = nullptr;
    v68 = 0;
    sub_517DD0(*(__int64 **)(**a1 + 1680), &v67, *v20);
    ptr = nullptr;
    v24 = haystack;
    v70 = 0;
    if ( (_QWORD)v68 )
      v24 = (const char *)v67;
    if ( (unsigned __int8)sub_6A92A0((__int64 *)&ptr, v24) )
    {
      v25 = v70;
      v26 = 1;
      v27 = v70 - 1;
      if ( !(_QWORD)v70 )
        v27 = 0;
      v28 = v27 + 1;
      while ( 1 )
      {
        v29 = haystack;
        if ( v25 )
          v29 = (const char *)ptr;
        if ( (unsigned __int8)sub_517140(*(__int64 **)(**a1 + 1680), v22, v29) )
          sub_365330();
        v30 = ptr;
        v31 = (char *)ptr;
        if ( v27 )
        {
          v32 = v70;
          if ( (unsigned __int64)v70 < v28 )
          {
            if ( *((_QWORD *)&v70 + 1) < v28 )
            {
              v31 = (char *)qvector_reserve(&ptr, ptr, v27 + 1, 1);
              ptr = v31;
              v32 = v70;
            }
            memset(&v31[v32], 0, v28 - v32);
            *(_QWORD *)&v70 = v27 + 1;
            v30 = ptr;
          }
          else if ( v28 != (_QWORD)v70 )
          {
            *(_QWORD *)&v70 = v27 + 1;
          }
          v30[v27] = 0;
        }
        else if ( ptr )
        {
          *(_QWORD *)&v70 = 0;
          qfree(ptr);
          ptr = nullptr;
          *((_QWORD *)&v70 + 1) = 0;
        }
        sub_357520((__int64 *)&ptr);
        v25 = v70;
        ++v26;
      }
    }
    if ( !(unsigned __int8)sub_6AC0E0(*a1, (int *)v22, (__int64)&v67) )
      goto LABEL_23;
    v33 = v68;
    v34 = 2;
    if ( (_QWORD)v68 )
    {
      v34 = v68 + 1;
      v33 = v68 - 1;
    }
    v35 = v67;
    if ( *((_QWORD *)&v68 + 1) < v34 )
    {
      v67 = (void *)qvector_reserve(&v67, v67, v34, 1);
      v35 = v67;
    }
    *(_QWORD *)&v68 = v34;
    v35[v33] = 46;
    *((_BYTE *)v67 + v33 + 1) = 0;
    if ( !*(_DWORD *)(v22 + 4) )
    {
LABEL_23:
      if ( ptr )
      {
        *(_QWORD *)&v70 = 0;
        qfree(ptr);
      }
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree(v67);
      }
      return v71 - __readfsqword(0x28u);
    }
    v36 = 0;
    v61 = (__int64)(a1 + 2);
    while ( 1 )
    {
      v37 = *(_QWORD *)(v22 + 8);
      v38 = *a1;
      v66 = 0;
      v39 = (unsigned int *)(v37 + 20 * v36);
      if ( (unsigned __int8)sub_6ABA30(v38, *v39, &v66, (__int64)&v67, v36) && v66 )
        sub_69E750(*a1, *v39, 0);
      v57 = (__int64 *)v39[3];
      v40 = a1[4];
      if ( !v40 )
        goto LABEL_65;
      v41 = *v39;
      v42 = a1 + 3;
      do
      {
        while ( 1 )
        {
          v43 = v40[2];
          v44 = v40[3];
          if ( *((_DWORD *)v40 + 8) < v41 )
            break;
          v42 = (__int64 **)v40;
          v40 = (__int64 *)v40[2];
          if ( !v43 )
            goto LABEL_46;
        }
        v40 = (__int64 *)v40[3];
      }
      while ( v44 );
LABEL_46:
      if ( v42 == a1 + 3 )
      {
LABEL_65:
        v54 = operator new(0x30u);
        v55 = *v39;
        *(_QWORD *)(v54 + 40) = 0;
        v47 = (__int64 **)v54;
        *(_DWORD *)(v54 + 32) = v55;
        if ( !a1[7] || (v49 = a1[6], v42 = nullptr, *((_DWORD *)v49 + 8) >= v55) )
        {
          v65 = (__int64 **)v54;
          v56 = sub_6A8F40(v61, v55);
          v47 = v65;
          v42 = (__int64 **)v56;
        }
        goto LABEL_53;
      }
      if ( v41 < *((_DWORD *)v42 + 8) )
        break;
LABEL_55:
      ++v36;
      v42[5] = v57;
      if ( v36 >= *(unsigned int *)(v22 + 4) )
        goto LABEL_23;
    }
    v45 = operator new(0x30u);
    v46 = *v39;
    *(_QWORD *)(v45 + 40) = 0;
    v47 = (__int64 **)v45;
    *(_DWORD *)(v45 + 32) = v46;
    v48 = *((_DWORD *)v42 + 8);
    if ( v46 < v48 )
    {
      v49 = (__int64 *)v42;
      if ( v42 == (__int64 **)a1[5] )
        goto LABEL_53;
      v62 = v46;
      v58 = (__int64 **)v45;
      v50 = std::_Rb_tree_decrement();
      v51 = v62;
      v47 = v58;
      v49 = (__int64 *)v50;
      if ( *(_DWORD *)(v50 + 32) < v62 )
      {
        if ( *(_QWORD *)(v50 + 24) )
          v49 = (__int64 *)v42;
        else
          v42 = nullptr;
LABEL_53:
        if ( !v49 )
          goto LABEL_57;
LABEL_54:
        v59 = v47;
        std::_Rb_tree_insert_and_rebalance();
        a1[7] = (__int64 *)((char *)a1[7] + 1);
        v42 = v59;
        goto LABEL_55;
      }
LABEL_64:
      v64 = v47;
      v53 = sub_6A8F40(v61, v51);
      v47 = v64;
      v42 = (__int64 **)v53;
      goto LABEL_53;
    }
    if ( v48 >= v46 )
      goto LABEL_57;
    if ( v42 != (__int64 **)a1[6] )
    {
      v63 = v46;
      v60 = (__int64 **)v45;
      v52 = std::_Rb_tree_increment();
      v51 = v63;
      v47 = v60;
      v49 = (__int64 *)v52;
      if ( v63 >= *(_DWORD *)(v52 + 32) )
        goto LABEL_64;
      if ( v42[3] )
      {
        v42 = (__int64 **)v52;
        goto LABEL_53;
      }
    }
    if ( !v42 )
    {
LABEL_57:
      if ( v47 )
        operator delete(v47, 0x30u);
      goto LABEL_55;
    }
    goto LABEL_54;
  }
  if ( (unsigned int)sub_69CC60(*a1, v19, 0, 0, v21) )
    return v71 - __readfsqword(0x28u);
  return sub_82BC50(
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

