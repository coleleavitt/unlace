__int64 __fastcall sub_3CD500(_QWORD *a1, unsigned int a2, unsigned int a3, int a4)
{
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  unsigned int v15; // r12d
  __int64 v16; // rax
  unsigned int *v17; // rbp
  __int64 v18; // r15
  unsigned int v19; // r12d
  unsigned int v20; // r14d
  __int64 v21; // rdx
  bool v22; // zf
  int v24; // edx
  int v25; // r8d
  int v26; // r9d
  __int64 *v27; // rbp
  char v28; // r15
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 *v36; // rdx
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  _QWORD **v49; // r12
  void *v50; // rdi
  char *v51; // rax
  unsigned int *v52; // rax
  int v53; // [rsp+0h] [rbp-D8h]
  int *v54; // [rsp+0h] [rbp-D8h]
  int v55; // [rsp+0h] [rbp-D8h]
  __int64 v56; // [rsp+0h] [rbp-D8h]
  int v57; // [rsp+0h] [rbp-D8h]
  int v58; // [rsp+8h] [rbp-D0h]
  int v59; // [rsp+8h] [rbp-D0h]
  void *v60; // [rsp+8h] [rbp-D0h]
  int v61; // [rsp+8h] [rbp-D0h]
  int v62; // [rsp+8h] [rbp-D0h]
  void *v63; // [rsp+8h] [rbp-D0h]
  void *v64; // [rsp+8h] [rbp-D0h]
  void *v65; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v66; // [rsp+18h] [rbp-C0h]
  int v67; // [rsp+28h] [rbp-B0h]
  void *ptr; // [rsp+30h] [rbp-A8h] BYREF
  int v69[4]; // [rsp+38h] [rbp-A0h]
  int v70[2]; // [rsp+48h] [rbp-90h]
  int v71; // [rsp+50h] [rbp-88h]
  int v72; // [rsp+58h] [rbp-80h]
  int v73; // [rsp+60h] [rbp-78h] BYREF
  __int64 v74; // [rsp+68h] [rbp-70h] BYREF
  void *v75; // [rsp+70h] [rbp-68h]
  int v76[2]; // [rsp+78h] [rbp-60h]
  __int64 v77; // [rsp+80h] [rbp-58h]
  __int64 v78; // [rsp+88h] [rbp-50h]
  int v79; // [rsp+90h] [rbp-48h]
  void *v80; // [rsp+98h] [rbp-40h]
  __int64 v81; // [rsp+A0h] [rbp-38h]
  int v82; // [rsp+A8h] [rbp-30h]
  int v83; // [rsp+B0h] [rbp-28h]
  int v84; // [rsp+B8h] [rbp-20h]
  __int64 v85; // [rsp+C0h] [rbp-18h]

  v80 = (void *)__readfsqword(0x28u);
  if ( (sub_3B9AA0((__int64)a1, a2, 4) & 0x600) == 0x200
    || a3 != -1 && (sub_3B9AA0((__int64)a1, a3, 4) & 0x600) == 0x200 )
  {
    return 1528;
  }
  else
  {
    v71 = -1;
    ptr = nullptr;
    *(_QWORD *)v70 = 0;
    *(_OWORD *)v69 = 0;
    if ( a2 < a3 )
    {
      v51 = (char *)qvector_reserve(&ptr, 0, 1, 8);
      v7 = v69[0];
      ptr = v51;
      v52 = (unsigned int *)&v51[8 * *(_QWORD *)v69];
      *v52 = a2;
      v52[1] = a3;
      ++*(_QWORD *)v69;
    }
    rangeset_t_intersect(
      (int)&ptr,
      (_DWORD)a1 + 1032,
      v7,
      v8,
      v9,
      v10,
      (int)&ptr,
      v58,
      (int)v65,
      v66,
      SDWORD2(v66),
      v67,
      (int)ptr,
      v69[0],
      v69[2],
      v70[0],
      v71,
      v72,
      v73,
      v74,
      (int)v75,
      v76[0],
      v77,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    v15 = a4 & 0xFFFFFF7F;
    if ( (a4 & 0xFFFFFF7F) != 0 )
    {
      v60 = a1 + 139;
      rangeset_t_sub2(v53);
      v16 = *(_QWORD *)v69;
      v17 = (unsigned int *)ptr;
      if ( !(8LL * *(_QWORD *)v69) )
      {
LABEL_36:
        v15 = 0;
        goto LABEL_16;
      }
      v54 = &v73;
      while ( 1 )
      {
        LODWORD(v74) = 0;
        v75 = nullptr;
        *(_QWORD *)v76 = &v74;
        v77 = (__int64)&v74;
        v78 = 0;
        sub_3C8E00((__int64)a1, v54, v17, 1);
        v18 = a1[126];
        v19 = v17[1];
        v20 = *v17;
        if ( !(unsigned __int8)must_journal(a1, v54, v21) || *(_DWORD *)(v18 + 88) == -1 )
        {
          v15 = sub_8982E0(v18, v20, v19, 0);
          if ( v15 )
            goto LABEL_14;
        }
        else
        {
          v66 = 0;
          v65 = nullptr;
          v15 = sub_8982E0(v18, v20, v19, &v65);
          if ( v15 )
          {
            if ( v65 )
            {
              *(_QWORD *)&v66 = 0;
              qfree(v65);
            }
LABEL_14:
            sub_3B68C0(v75);
LABEL_15:
            v16 = *(_QWORD *)v69;
            goto LABEL_16;
          }
          if ( (_QWORD)v66 )
          {
            add_undo_record(*(unsigned int *)(v18 + 88), v65, v66);
            if ( v65 )
            {
              *(_QWORD *)&v66 = 0;
              qfree(v65);
            }
          }
          else if ( v65 )
          {
            qfree(v65);
          }
        }
        sub_3C7E80((__int64)a1, a1 + 118, (__int64)v54, 0x9Fu);
        if ( (unsigned __int8)rangeset_t_add(
                                (int)v60,
                                (int)&v65,
                                v45,
                                v46,
                                v47,
                                v48,
                                (int)v54,
                                v60,
                                *(_QWORD *)v17,
                                v66,
                                SDWORD2(v66),
                                v67,
                                (__int64)ptr) )
        {
          *((_DWORD *)a1 + 299) = -1;
          *((_BYTE *)a1 + 1192) = 1;
        }
        v49 = (_QWORD **)v75;
        if ( v75 )
        {
          do
          {
            sub_3B68C0(v49[3]);
            v50 = v49;
            v49 = (_QWORD **)v49[2];
            operator delete(v50, 0x30u);
          }
          while ( v49 );
        }
        v16 = *(_QWORD *)v69;
        v17 += 2;
        if ( v17 == (unsigned int *)((char *)ptr + 8 * *(_QWORD *)v69) )
          goto LABEL_36;
      }
    }
    rangeset_t_intersect(
      v53,
      (_DWORD)a1 + 1112,
      v11,
      v12,
      v13,
      v14,
      v53,
      v59,
      (int)v65,
      v66,
      SDWORD2(v66),
      v67,
      (int)ptr,
      v69[0],
      v69[2],
      v70[0],
      v71,
      v72,
      v73,
      v74,
      (int)v75,
      v76[0],
      v77,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    v16 = *(_QWORD *)v69;
    v27 = (__int64 *)ptr;
    if ( 8LL * *(_QWORD *)v69 )
    {
      v28 = (a4 & 0x80) == 0;
      rangeset_t_sub(
        (_DWORD)a1 + 1112,
        (int)ptr,
        v24,
        8 * v69[0],
        v25,
        v26,
        (_DWORD)a1 + 1152,
        v61,
        (int)v65,
        v66,
        SDWORD2(v66),
        v67,
        (int)ptr,
        v69[0],
        v69[2],
        v70[0],
        v71,
        v72,
        v73,
        v74,
        (int)v75,
        v76[0],
        v77,
        v78,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
      while ( 1 )
      {
        rangeset_t_sub(
          (_DWORD)a1 + 1032,
          (int)v27,
          v29,
          v30,
          v31,
          v32,
          v55,
          v62,
          (int)v65,
          v66,
          SDWORD2(v66),
          v67,
          (int)ptr,
          v69[0],
          v69[2],
          v70[0],
          v71,
          v72,
          v73,
          v74,
          (int)v75,
          v76[0],
          v77,
          v78,
          v79,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85);
        v15 = sub_3BB7E0(a1, (__int64)(a1 + 118), v56, v27, v28);
        rangeset_t_add(
          (_DWORD)a1 + 1112,
          (int)v27,
          v37,
          v38,
          v39,
          v40,
          v56,
          v63,
          (__int64)v65,
          v66,
          SDWORD2(v66),
          v67,
          (__int64)ptr);
        if ( v15 )
        {
          rangeset_t_add(
            (_DWORD)a1 + 1032,
            (int)v27,
            v41,
            v42,
            v43,
            v44,
            v57,
            v64,
            (__int64)v65,
            v66,
            SDWORD2(v66),
            v67,
            (__int64)ptr);
          goto LABEL_15;
        }
        sub_3CD440(a1, *(unsigned int *)v27, *((unsigned int *)v27 + 1));
        if ( a1[95] )
          sub_3CE370((int)a1);
        v16 = *(_QWORD *)v69;
        ++v27;
        v36 = (__int64 *)((char *)ptr + 8 * *(_QWORD *)v69);
        if ( v27 == v36 )
          break;
        rangeset_t_sub(
          (_DWORD)a1 + 1112,
          (int)v27,
          (int)v36,
          v33,
          v34,
          v35,
          v57,
          (int)v64,
          (int)v65,
          v66,
          SDWORD2(v66),
          v67,
          (int)ptr,
          v69[0],
          v69[2],
          v70[0],
          v71,
          v72,
          v73,
          v74,
          (int)v75,
          v76[0],
          v77,
          v78,
          v79,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85);
      }
    }
LABEL_16:
    if ( v16 )
    {
      v22 = *((_BYTE *)a1 + 1000) == 0;
      *((_BYTE *)a1 + 1192) = 1;
      *((_DWORD *)a1 + 254) = -1;
      if ( !v22 )
      {
        sub_3B7770((__int64)a1);
        sub_8968C0(a1[126]);
        sub_4C9BC0(*a1);
        sub_8968C0(a1[290]);
      }
    }
    if ( ptr )
    {
      *(_QWORD *)v69 = 0;
      qfree(ptr);
    }
  }
  return v15;
}

