bool __fastcall sub_78800(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool result; // al
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // r13d
  int *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  int v24; // r13d
  int *v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char v34; // al
  __int64 v35; // rdi
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rsi
  int v39; // r13d
  int *v40; // rbp
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int v46; // ebp
  int v47; // eax
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rdi
  unsigned __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rsi
  int v54; // r13d
  int *v55; // rbp
  __int64 v56; // rax
  __int64 v57; // rdi
  unsigned __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rsi
  int v61; // r13d
  int *v62; // rbp
  __int64 v63; // rax
  __int64 v64; // rdi
  unsigned __int64 v65; // rcx
  __int64 v66; // rsi
  int v67; // r13d
  int *v68; // rbp
  __int64 v69; // rax
  unsigned __int64 v70; // rcx
  __int64 v71; // rsi
  int v72; // r13d
  int *v73; // rbp
  __int64 v74; // rax
  __int64 v75; // rdi
  unsigned __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdi
  unsigned __int64 v79; // rcx
  __int64 v80; // rsi
  int v81; // r13d
  int *v82; // rbp
  __int64 v83; // rax
  __int64 v84; // [rsp+0h] [rbp-38h]
  __int64 v85; // [rsp+0h] [rbp-38h]
  __int64 v86; // [rsp+8h] [rbp-30h]
  __int64 v87; // [rsp+8h] [rbp-30h]
  __int64 v88; // [rsp+10h] [rbp-28h]
  __int64 v89; // [rsp+10h] [rbp-28h]

  v86 = __readfsqword(0x28u);
  if ( (unsigned int)a3 <= 0x10 )
    a3 = (unsigned int)getinf(99);
  LOBYTE(a4) = (_DWORD)a3 == 256;
  result = (_DWORD)a3 == 256 || (_DWORD)a3 == 176;
  if ( result )
  {
    if ( (_DWORD)a3 != 176 )
      goto LABEL_9;
    if ( (unsigned __int64)getinf(88) <= 0x397 )
    {
      if ( !(unsigned __int8)getinf_flag(3, 4, v42, v43, v44, v45, v84, v86, v88) )
        goto LABEL_9;
      netnode_check();
      v46 = netnode_altval();
      if ( v46 <= 0x74 )
        goto LABEL_9;
      v47 = *(_DWORD *)(get_ph() + 4);
      if ( v47 )
      {
        v48 = (unsigned int)(v47 - 13);
        if ( (unsigned int)v48 > 0x3B )
          goto LABEL_9;
        v49 = 0x800000000000005LL;
        if ( !_bittest64(&v49, v48) || v46 == 117 )
          goto LABEL_9;
      }
    }
    v50 = *((_QWORD *)a2 + 1);
    *a2 = 2;
    if ( v50 )
    {
      *((_QWORD *)a2 + 2) = 0;
      qfree(v50);
      *((_QWORD *)a2 + 1) = 0;
      v51 = 0;
      *((_QWORD *)a2 + 3) = 0;
    }
    else
    {
      v51 = *((_QWORD *)a2 + 3);
    }
    v52 = *((_QWORD *)a2 + 2);
    v53 = 0;
    v54 = 129;
    v55 = (int *)&unk_8FD80;
    while ( 1 )
    {
      ++v55;
      if ( v51 < v52 + 1 )
      {
        v56 = qvector_reserve((__int64)(a2 + 2), v53, v52 + 1, 4);
        v52 = *((_QWORD *)a2 + 2);
        *((_QWORD *)a2 + 1) = v56;
        v53 = v56;
      }
      *(_DWORD *)(v53 + 4 * v52) = v54;
      v52 = *((_QWORD *)a2 + 2) + 1LL;
      *((_QWORD *)a2 + 2) = v52;
      v54 = *v55;
      if ( *v55 == -1 )
        break;
      v51 = *((_QWORD *)a2 + 3);
      v53 = *((_QWORD *)a2 + 1);
    }
    v64 = *((_QWORD *)a2 + 4);
    if ( v64 )
    {
      *((_QWORD *)a2 + 5) = 0;
      qfree(v64);
      *((_QWORD *)a2 + 4) = 0;
      v65 = 0;
      *((_QWORD *)a2 + 6) = 0;
    }
    else
    {
      v65 = *((_QWORD *)a2 + 6);
    }
    v22 = *((_QWORD *)a2 + 5);
    v66 = 0;
    v67 = 163;
    v68 = (int *)&unk_8FD20;
    while ( 1 )
    {
      ++v68;
      if ( v65 < v22 + 1 )
      {
        v69 = qvector_reserve((__int64)(a2 + 8), v66, v22 + 1, 4);
        v22 = *((_QWORD *)a2 + 5);
        *((_QWORD *)a2 + 4) = v69;
        v66 = v69;
      }
      *(_DWORD *)(v66 + 4 * v22) = v67;
      v22 = *((_QWORD *)a2 + 5) + 1LL;
      *((_QWORD *)a2 + 5) = v22;
      v67 = *v68;
      if ( *v68 == -1 )
        break;
      v65 = *((_QWORD *)a2 + 6);
      v66 = *((_QWORD *)a2 + 4);
    }
LABEL_33:
    v27 = *((_QWORD *)a2 + 2);
    v28 = *a2;
    a2[1] = v27;
    if ( (unsigned int)v28 <= 6 )
    {
      v29 = 84;
      if ( _bittest64(&v29, v28) )
      {
        a2[1] = v22 + v27;
        return 1;
      }
    }
    return 1;
  }
  switch ( (_DWORD)a3 )
  {
    case 0x70:
      if ( (unsigned __int8)getinf_flag(3, 4, a3, a4, a5, a6, v84, v86, v88) || (getinf(3) & 0x1006) == 0x1002 )
      {
LABEL_19:
        v13 = *((_QWORD *)a2 + 1);
        *a2 = 2;
        if ( v13 )
        {
          *((_QWORD *)a2 + 2) = 0;
          qfree(v13);
          *((_QWORD *)a2 + 1) = 0;
          v14 = 0;
          *((_QWORD *)a2 + 3) = 0;
        }
        else
        {
          v14 = *((_QWORD *)a2 + 3);
        }
        v15 = *((_QWORD *)a2 + 2);
        v16 = 0;
        v17 = 129;
        v18 = (int *)&unk_8FE20;
        while ( 1 )
        {
          ++v18;
          if ( v14 < v15 + 1 )
          {
            v19 = qvector_reserve((__int64)(a2 + 2), v16, v15 + 1, 4);
            v15 = *((_QWORD *)a2 + 2);
            *((_QWORD *)a2 + 1) = v19;
            v16 = v19;
          }
          *(_DWORD *)(v16 + 4 * v15) = v17;
          v15 = *((_QWORD *)a2 + 2) + 1LL;
          *((_QWORD *)a2 + 2) = v15;
          v17 = *v18;
          if ( *v18 == -1 )
            break;
          v14 = *((_QWORD *)a2 + 3);
          v16 = *((_QWORD *)a2 + 1);
        }
        v20 = *((_QWORD *)a2 + 4);
        if ( v20 )
        {
          *((_QWORD *)a2 + 5) = 0;
          qfree(v20);
          *((_QWORD *)a2 + 4) = 0;
          v21 = 0;
          *((_QWORD *)a2 + 6) = 0;
        }
        else
        {
          v21 = *((_QWORD *)a2 + 6);
        }
        v22 = *((_QWORD *)a2 + 5);
        v23 = 0;
        v24 = 163;
        v25 = (int *)&unk_8FDE0;
        while ( 1 )
        {
          ++v25;
          if ( v21 < v22 + 1 )
          {
            v26 = qvector_reserve((__int64)(a2 + 8), v23, v22 + 1, 4);
            v22 = *((_QWORD *)a2 + 5);
            *((_QWORD *)a2 + 4) = v26;
            v23 = v26;
          }
          *(_DWORD *)(v23 + 4 * v22) = v24;
          v22 = *((_QWORD *)a2 + 5) + 1LL;
          *((_QWORD *)a2 + 5) = v22;
          v24 = *v25;
          if ( *v25 == -1 )
            break;
          v21 = *((_QWORD *)a2 + 6);
          v23 = *((_QWORD *)a2 + 4);
        }
        goto LABEL_33;
      }
      v34 = getinf_flag(67, 32, v30, v31, v32, v33, v85, v87, v89);
      v35 = *((_QWORD *)a2 + 1);
      if ( !v34 )
        goto LABEL_78;
      *a2 = 2;
      if ( v35 )
      {
        *((_QWORD *)a2 + 2) = 0;
        qfree(v35);
        *((_QWORD *)a2 + 1) = 0;
        v36 = 0;
        *((_QWORD *)a2 + 3) = 0;
      }
      else
      {
        v36 = *((_QWORD *)a2 + 3);
      }
      v37 = *((_QWORD *)a2 + 2);
      v38 = 0;
      v39 = 0;
      v40 = (int *)&unk_8FEB0;
      while ( 1 )
      {
        ++v40;
        if ( v36 < v37 + 1 )
        {
          v41 = qvector_reserve((__int64)(a2 + 2), v38, v37 + 1, 4);
          v37 = *((_QWORD *)a2 + 2);
          *((_QWORD *)a2 + 1) = v41;
          v38 = v41;
        }
        *(_DWORD *)(v38 + 4 * v37) = v39;
        v37 = *((_QWORD *)a2 + 2) + 1LL;
        *((_QWORD *)a2 + 2) = v37;
        v39 = *v40;
        if ( *v40 == -1 )
          break;
        v36 = *((_QWORD *)a2 + 3);
        v38 = *((_QWORD *)a2 + 1);
      }
      v78 = *((_QWORD *)a2 + 4);
      if ( v78 )
      {
        *((_QWORD *)a2 + 5) = 0;
        qfree(v78);
        *((_QWORD *)a2 + 4) = 0;
        v79 = 0;
        *((_QWORD *)a2 + 6) = 0;
      }
      else
      {
        v79 = *((_QWORD *)a2 + 6);
      }
      v22 = *((_QWORD *)a2 + 5);
      v80 = 0;
      v81 = 93;
      v82 = (int *)&unk_8FE60;
      while ( 1 )
      {
        ++v82;
        if ( v79 < v22 + 1 )
        {
          v83 = qvector_reserve((__int64)(a2 + 8), v80, v22 + 1, 4);
          v22 = *((_QWORD *)a2 + 5);
          *((_QWORD *)a2 + 4) = v83;
          v80 = v83;
        }
        *(_DWORD *)(v80 + 4 * v22) = v81;
        v22 = *((_QWORD *)a2 + 5) + 1LL;
        *((_QWORD *)a2 + 5) = v22;
        v81 = *v82;
        if ( *v82 == -1 )
          break;
        v79 = *((_QWORD *)a2 + 6);
        v80 = *((_QWORD *)a2 + 4);
      }
      goto LABEL_33;
    case 0x80:
LABEL_9:
      v8 = *((_QWORD *)a2 + 1);
      *a2 = 0;
      if ( v8 )
      {
        *((_QWORD *)a2 + 2) = 0;
        qfree(v8);
        *((_QWORD *)a2 + 1) = 0;
        *((_QWORD *)a2 + 3) = 0;
      }
      v9 = *((_QWORD *)a2 + 4);
      if ( v9 )
      {
        *((_QWORD *)a2 + 5) = 0;
        qfree(v9);
        *((_QWORD *)a2 + 4) = 0;
        *((_QWORD *)a2 + 6) = 0;
      }
      v10 = *((_QWORD *)a2 + 2);
      v11 = *a2;
      a2[1] = v10;
      if ( (unsigned int)v11 <= 6 )
      {
        v12 = 84;
        if ( _bittest64(&v12, v11) )
          a2[1] = a2[10] + v10;
      }
      return 1;
    case 0x40:
      if ( !(unsigned __int8)getinf_flag(3, 4, a3, a4, a5, a6, v84, v86, v88) && (getinf(3) & 0x1006) != 0x1002 )
      {
        v35 = *((_QWORD *)a2 + 1);
LABEL_78:
        *a2 = 1;
        if ( v35 )
        {
          *((_QWORD *)a2 + 2) = 0;
          qfree(v35);
          *((_QWORD *)a2 + 1) = 0;
          v70 = 0;
          *((_QWORD *)a2 + 3) = 0;
        }
        else
        {
          v70 = *((_QWORD *)a2 + 3);
        }
        v59 = *((_QWORD *)a2 + 2);
        v71 = 0;
        v72 = 0;
        v73 = (int *)&unk_8FEB0;
        while ( 1 )
        {
          ++v73;
          if ( v70 < v59 + 1 )
          {
            v74 = qvector_reserve((__int64)(a2 + 2), v71, v59 + 1, 4);
            v59 = *((_QWORD *)a2 + 2);
            *((_QWORD *)a2 + 1) = v74;
            v71 = v74;
          }
          *(_DWORD *)(v71 + 4 * v59) = v72;
          v59 = *((_QWORD *)a2 + 2) + 1LL;
          *((_QWORD *)a2 + 2) = v59;
          v72 = *v73;
          if ( *v73 == -1 )
            break;
          v70 = *((_QWORD *)a2 + 3);
          v71 = *((_QWORD *)a2 + 1);
        }
LABEL_85:
        v75 = *((_QWORD *)a2 + 4);
        if ( v75 )
        {
          *((_QWORD *)a2 + 5) = 0;
          qfree(v75);
          *((_QWORD *)a2 + 4) = 0;
          v59 = *((_QWORD *)a2 + 2);
          *((_QWORD *)a2 + 6) = 0;
        }
        v76 = *a2;
        a2[1] = v59;
        if ( (unsigned int)v76 <= 6 )
        {
          v77 = 84;
          if ( _bittest64(&v77, v76) )
            a2[1] = a2[10] + v59;
        }
        return 1;
      }
      if ( (getinf(57) & 0xF) == 1 )
      {
        v57 = *((_QWORD *)a2 + 1);
        *a2 = 1;
        if ( v57 )
        {
          *((_QWORD *)a2 + 2) = 0;
          qfree(v57);
          *((_QWORD *)a2 + 1) = 0;
          v58 = 0;
          *((_QWORD *)a2 + 3) = 0;
        }
        else
        {
          v58 = *((_QWORD *)a2 + 3);
        }
        v59 = *((_QWORD *)a2 + 2);
        v60 = 0;
        v61 = 129;
        v62 = (int *)&unk_8FE20;
        while ( 1 )
        {
          ++v62;
          if ( v58 < v59 + 1 )
          {
            v63 = qvector_reserve((__int64)(a2 + 2), v60, v59 + 1, 4);
            v59 = *((_QWORD *)a2 + 2);
            *((_QWORD *)a2 + 1) = v63;
            v60 = v63;
          }
          *(_DWORD *)(v60 + 4 * v59) = v61;
          v59 = *((_QWORD *)a2 + 2) + 1LL;
          *((_QWORD *)a2 + 2) = v59;
          v61 = *v62;
          if ( *v62 == -1 )
            break;
          v58 = *((_QWORD *)a2 + 3);
          v60 = *((_QWORD *)a2 + 1);
        }
        goto LABEL_85;
      }
      goto LABEL_19;
  }
  return result;
}
