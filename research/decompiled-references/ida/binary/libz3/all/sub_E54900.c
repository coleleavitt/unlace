__int64 __fastcall sub_E54900(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbp
  __int64 v5; // rdx
  unsigned int v6; // r14d
  __int64 v7; // r13
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  _QWORD *v11; // rcx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // r15d
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 *v26; // r13
  __int64 v27; // rsi
  unsigned int v28; // r13d
  __int64 i; // rax
  __int64 v30; // rax
  void (__fastcall ***v31)(void *); // r12
  __int64 result; // rax
  void (__fastcall ***v33)(void *); // r12
  __int64 j; // r12
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rax
  _QWORD *v38; // r13
  _QWORD *v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 *v42; // r14
  __int64 *v43; // r12
  __int64 v44; // r15
  _QWORD *v45; // rax
  _QWORD *v46; // rcx
  int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // rsi
  __int64 v52; // r13
  __int64 v53; // rsi
  __int64 *v54; // rbx
  unsigned __int64 v55; // r12
  __int64 v56; // rsi
  unsigned int v57; // ecx
  size_t v58; // rsi
  unsigned int *v59; // rax
  unsigned int v60; // r15d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rdx
  _QWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // eax
  __int64 *v68; // rbx
  unsigned __int64 v69; // r12
  __int64 v70; // rsi
  char **exception; // r12
  char **v72; // r12
  int v73; // [rsp+0h] [rbp-B8h]
  void *v74; // [rsp+0h] [rbp-B8h]
  int v75[2]; // [rsp+8h] [rbp-B0h]
  unsigned int v76; // [rsp+8h] [rbp-B0h]
  int v77; // [rsp+10h] [rbp-A8h]
  int v78; // [rsp+14h] [rbp-A4h]
  unsigned int v79; // [rsp+14h] [rbp-A4h]
  int v80; // [rsp+18h] [rbp-A0h]
  __int64 v81; // [rsp+18h] [rbp-A0h]
  __int64 v82; // [rsp+18h] [rbp-A0h]
  __int64 v83; // [rsp+18h] [rbp-A0h]
  int v84; // [rsp+20h] [rbp-98h]
  int v85; // [rsp+28h] [rbp-90h]
  int v86[2]; // [rsp+30h] [rbp-88h]
  int v87[2]; // [rsp+30h] [rbp-88h]
  int v88[2]; // [rsp+38h] [rbp-80h]
  int v89[2]; // [rsp+40h] [rbp-78h]
  int v90; // [rsp+48h] [rbp-70h]
  int v91[4]; // [rsp+50h] [rbp-68h] BYREF
  int v92[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v93; // [rsp+68h] [rbp-50h]
  int v94; // [rsp+70h] [rbp-48h]
  int v95; // [rsp+78h] [rbp-40h]
  int v96; // [rsp+80h] [rbp-38h]
  int v97; // [rsp+88h] [rbp-30h]
  int v98; // [rsp+90h] [rbp-28h]
  int v99; // [rsp+98h] [rbp-20h]
  int v100; // [rsp+A0h] [rbp-18h]
  int v101; // [rsp+A8h] [rbp-10h]
  _Unwind_Exception *v102; // [rsp+B0h] [rbp-8h]

  v3 = nullptr;
  v5 = a2[1];
  v78 = *(_DWORD *)(a1 + 128);
  *(_QWORD *)v86 = *a2;
  *(_QWORD *)v89 = *a2;
  if ( v5 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= *(_DWORD *)(v5 - 4) )
        break;
      v7 = *(_QWORD *)(v5 + 8LL * v6);
      if ( v7 )
        ++*(_DWORD *)(v7 + 8);
      if ( v3 )
      {
        v8 = *((_DWORD *)v3 - 1);
        if ( v8 == *((_DWORD *)v3 - 2) )
        {
          v60 = (3 * v8 + 1) >> 1;
          v61 = 8 * v60 + 8;
          if ( 8 * v8 + 8 >= (unsigned int)v61 || v8 >= v60 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v92, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v92);
            sub_233E40((__int64)v92);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v62 = (unsigned int *)sub_186B300(v3 - 1, v61);
          v63 = v62[1];
          v3 = v62 + 2;
          *v62 = v60;
          LODWORD(v62) = v63;
          v11 = &v3[v63];
          v5 = a2[1];
          v10 = (_DWORD)v62 + 1;
        }
        else
        {
          v9 = v8;
          v10 = v8 + 1;
          v11 = &v3[v9];
        }
      }
      else
      {
        v64 = (_QWORD *)sub_186B270(0x18u);
        v11 = v64 + 1;
        *v64 = 2;
        v5 = a2[1];
        v10 = 1;
        v3 = v11;
      }
      *v11 = v7;
      ++v6;
      *((_DWORD *)v3 - 1) = v10;
    }
    while ( v5 );
  }
  sub_14E9CE0(a1 + 480);
  sub_F18290(
    a1 + 288,
    v78,
    (int)a2,
    a1 + 120,
    v12,
    v13,
    v73,
    a1 + 288,
    v77,
    v80,
    v84,
    v85,
    v86[0],
    a1 + 120,
    v89[0],
    v90,
    v91[0],
    v91[2],
    v92[0],
    v93,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  v14 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)v92 = 0;
  sub_14B7810((int)v91, *(_QWORD *)(v14 + 96), (int)v92, v15, v16, v17, v74);
  v18 = 0;
  sub_18572D0(v92);
  v19 = 0;
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 96LL);
  v21 = a2[1];
  *(_QWORD *)v92 = 0;
  v93 = v20;
  if ( v21 )
  {
    do
    {
      if ( v18 >= *(_DWORD *)(v21 - 4) )
        break;
      v22 = *(_QWORD *)(v21 + 8LL * v18);
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
      if ( v19 )
      {
        v23 = (*(_DWORD *)(v19 + 8))-- == 1;
        if ( v23 )
        {
          v83 = v22;
          sub_15D7BC0(v20, v19);
          v22 = v83;
        }
      }
      *(_QWORD *)v92 = v22;
      sub_14B9B80(v91, v92);
      v21 = a2[1];
      v24 = *(_QWORD *)v92;
      v25 = *a2;
      v26 = (__int64 *)(v21 + 8LL * v18);
      if ( *(_QWORD *)v92 )
        ++*(_DWORD *)(*(_QWORD *)v92 + 8LL);
      v27 = *v26;
      if ( *v26 )
      {
        v23 = (*(_DWORD *)(v27 + 8))-- == 1;
        if ( v23 )
        {
          v82 = v24;
          sub_15D7BC0(v25, v27);
          v21 = a2[1];
          v24 = v82;
        }
      }
      *v26 = v24;
      v20 = v93;
      ++v18;
      v19 = *(_QWORD *)v92;
    }
    while ( v21 );
    if ( v19 )
    {
      v23 = (*(_DWORD *)(v19 + 8))-- == 1;
      if ( v23 )
        sub_15D7BC0(v20, v19);
    }
  }
  v28 = 0;
  sub_14B63F0(v91);
  for ( i = a2[1]; i; ++v28 )
  {
    if ( v28 >= *(_DWORD *)(i - 4) )
      break;
    v19 = *(_QWORD *)(i + 8LL * v28);
    sub_14EA0D0(a1 + 480, v19, v3[v28]);
    i = a2[1];
  }
  v30 = *(_QWORD *)(a1 + 112);
  if ( v30 && v79 < *(_DWORD *)(v30 - 4) )
  {
    sub_24A370(a1 + 400);
    result = sub_18290A0(*(_QWORD *)(a1 + 96));
    if ( !(_BYTE)result )
    {
      if ( v3 )
      {
        v68 = v3;
        v69 = (unsigned __int64)&v3[*((unsigned int *)v3 - 1)];
        if ( (unsigned __int64)v3 < v69 )
        {
          do
          {
            v70 = *v68;
            if ( *v68 )
            {
              v23 = (*(_DWORD *)(v70 + 8))-- == 1;
              if ( v23 )
                sub_15D7BC0(*(_QWORD *)v87, v70);
            }
            ++v68;
          }
          while ( (unsigned __int64)v68 < v69 );
        }
        return sub_186B220(v3 - 1);
      }
      return result;
    }
    sub_F875A0(*(_QWORD *)v88, v19);
    v65 = *(_QWORD *)(a1 + 280);
    *(_BYTE *)(a1 + 132) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    v66 = *(_QWORD *)(v65 + 112);
    if ( v66 )
      v67 = *(_DWORD *)(v66 - 4);
    else
      v67 = 0;
    *(_DWORD *)(a1 + 128) = v67;
  }
  sub_F181C0(v92, *(_QWORD *)v75);
  v31 = *(void (__fastcall ****)(void *))(a1 + 464);
  if ( v31 )
  {
    v23 = (*((_DWORD *)v31 + 2))-- == 1;
    if ( v23 )
    {
      (**v31)(v31);
      sub_186B220(v31);
    }
  }
  result = *(_QWORD *)v92;
  v33 = *(void (__fastcall ****)(void *))(a1 + 648);
  *(_QWORD *)(a1 + 464) = *(_QWORD *)v92;
  if ( v33 )
  {
    v23 = (*((_DWORD *)v33 + 2))-- == 1;
    if ( v23 )
    {
      (**v33)(v33);
      result = sub_186B220(v33);
    }
  }
  *(_QWORD *)(a1 + 648) = 0;
  for ( j = *(_QWORD *)(a1 + 112); j; ++v79 )
  {
    result = v79;
    if ( v79 >= *(_DWORD *)(j - 4) )
      break;
    v35 = j + 32LL * v79;
    v36 = *(_QWORD *)(v35 + 24);
    v81 = v35;
    if ( v36 )
    {
      v37 = *(_QWORD *)(a1 + 616);
      if ( v37 )
        *(_DWORD *)(v37 - 4) = 0;
      sub_15D6A80(*(_QWORD *)(a1 + 96), v36, a1 + 616);
      v38 = *(_QWORD **)(a1 + 456);
      if ( !v38 )
        goto LABEL_81;
      v39 = &v38[*((unsigned int *)v38 - 1)];
      if ( v38 >= v39 )
        goto LABEL_50;
      do
      {
        while ( 1 )
        {
          v40 = *v38;
          if ( *v38 )
          {
            v41 = *(_QWORD *)(a1 + 448);
            v23 = (*(_DWORD *)(v40 + 8))-- == 1;
            if ( v23 )
              break;
          }
          if ( ++v38 >= v39 )
            goto LABEL_49;
        }
        sub_15D7BC0(v41, v40);
        ++v38;
      }
      while ( v38 < v39 );
LABEL_49:
      v38 = *(_QWORD **)(a1 + 456);
      if ( v38 )
      {
LABEL_50:
        v42 = *(__int64 **)(a1 + 616);
        *((_DWORD *)v38 - 1) = 0;
        if ( v42 )
        {
          v43 = &v42[*((unsigned int *)v42 - 1)];
          if ( v43 != v42 )
            goto LABEL_52;
        }
LABEL_61:
        v49 = *(_QWORD *)(a1 + 104);
        v50 = *(_QWORD *)(a1 + 448);
        v51 = *((unsigned int *)v38 - 1);
      }
      else
      {
LABEL_81:
        v42 = *(__int64 **)(a1 + 616);
        if ( v42 )
        {
          v43 = &v42[*((unsigned int *)v42 - 1)];
          if ( v43 != v42 )
          {
LABEL_52:
            v44 = *v42;
            if ( *v42 )
              ++*(_DWORD *)(v44 + 8);
            if ( !v38 )
            {
              v45 = (_QWORD *)sub_186B270(0x18u);
              v38 = v45 + 1;
              *(_QWORD *)(a1 + 456) = v45 + 1;
              v46 = v45 + 1;
              *v45 = 2;
              v47 = 1;
              goto LABEL_56;
            }
            while ( 1 )
            {
              v48 = *((_DWORD *)v38 - 1);
              if ( v48 == *((_DWORD *)v38 - 2) )
              {
                v57 = (3 * v48 + 1) >> 1;
                v58 = 8 * v57 + 8;
                if ( 8 * v48 + 8 >= (unsigned int)v58 || v48 >= v57 )
                {
                  v72 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v92, "Overflow encountered when expanding vector");
                  *v72 = (char *)off_1C63128;
                  sub_2333C0(v72 + 1, v92);
                  sub_233E40((__int64)v92);
                  __cxa_throw(v72, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v76 = (3 * v48 + 1) >> 1;
                v59 = (unsigned int *)sub_186B300(v38 - 1, v58);
                v38 = v59 + 2;
                *(_QWORD *)(a1 + 456) = v59 + 2;
                *v59 = v76;
                LODWORD(v59) = v59[1];
                v46 = &v38[(unsigned int)v59];
                v47 = (_DWORD)v59 + 1;
LABEL_56:
                ++v42;
                *v46 = v44;
                *((_DWORD *)v38 - 1) = v47;
                if ( v43 == v42 )
                  goto LABEL_61;
              }
              else
              {
                ++v42;
                v38[v48] = v44;
                *((_DWORD *)v38 - 1) = v48 + 1;
                if ( v43 == v42 )
                  goto LABEL_61;
              }
              v44 = *v42;
              if ( *v42 )
                ++*(_DWORD *)(v44 + 8);
            }
          }
        }
        v49 = *(_QWORD *)(a1 + 104);
        v50 = *(_QWORD *)(a1 + 448);
        v51 = 0;
      }
      v52 = sub_15EC1C0(v50, v51);
      v53 = *(_QWORD *)(v81 + 8);
      if ( v52 )
      {
        ++*(_DWORD *)(v52 + 8);
        result = sub_E5EC60(v49, v53, v52);
        v23 = (*(_DWORD *)(v52 + 8))-- == 1;
        if ( v23 )
          result = sub_15D7BC0(v50, v52);
      }
      else
      {
        result = sub_E5EC60(v49, v53, 0);
      }
    }
    else
    {
      result = sub_E5EBF0(*(_QWORD *)(a1 + 104), *(_QWORD *)(v35 + 8));
    }
    j = *(_QWORD *)(a1 + 112);
  }
  if ( v3 )
  {
    v54 = v3;
    v55 = (unsigned __int64)&v3[*((unsigned int *)v3 - 1)];
    if ( (unsigned __int64)v3 < v55 )
    {
      do
      {
        while ( 1 )
        {
          v56 = *v54;
          if ( *v54 )
          {
            v23 = (*(_DWORD *)(v56 + 8))-- == 1;
            if ( v23 )
              break;
          }
          if ( (unsigned __int64)++v54 >= v55 )
            return sub_186B220(v3 - 1);
        }
        ++v54;
        sub_15D7BC0(*(_QWORD *)v87, v56);
      }
      while ( (unsigned __int64)v54 < v55 );
    }
    return sub_186B220(v3 - 1);
  }
  return result;
}

