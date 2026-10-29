__int64 __fastcall sub_E4F4E0(__int64 a1, _QWORD *a2)
{
  char **exception; // r12
  char **v3; // r12
  _QWORD *v5; // rbp
  __int64 v7; // rdx
  unsigned int v8; // r14d
  __int64 v9; // r13
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // r15d
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 *v28; // r13
  __int64 v29; // rsi
  unsigned int v30; // r13d
  __int64 i; // rax
  __int64 v32; // rax
  void (__fastcall ***v33)(void *); // r12
  __int64 result; // rax
  void (__fastcall ***v35)(void *); // r12
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  _QWORD *v40; // r13
  _QWORD *v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 *v44; // r14
  __int64 *v45; // r12
  __int64 v46; // r15
  _QWORD *v47; // rax
  _QWORD *v48; // rcx
  int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // r15
  __int64 v52; // r14
  __int64 v53; // rsi
  __int64 v54; // r13
  __int64 v55; // rsi
  __int64 *v56; // rbx
  unsigned __int64 v57; // r12
  __int64 v58; // rsi
  unsigned int v59; // ecx
  size_t v60; // rsi
  unsigned int *v61; // rax
  unsigned int v62; // r15d
  size_t v63; // rsi
  unsigned int *v64; // rax
  __int64 v65; // rdx
  _QWORD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // eax
  __int64 *v70; // rbx
  unsigned __int64 v71; // r12
  __int64 v72; // rsi
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

  v5 = nullptr;
  v7 = a2[1];
  v78 = *(_DWORD *)(a1 + 128);
  *(_QWORD *)v86 = *a2;
  *(_QWORD *)v89 = *a2;
  if ( v7 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= *(_DWORD *)(v7 - 4) )
        break;
      v9 = *(_QWORD *)(v7 + 8LL * v8);
      if ( v9 )
        ++*(_DWORD *)(v9 + 8);
      if ( v5 )
      {
        v10 = *((_DWORD *)v5 - 1);
        if ( v10 == *((_DWORD *)v5 - 2) )
        {
          v62 = (3 * v10 + 1) >> 1;
          v63 = 8 * v62 + 8;
          if ( 8 * v10 + 8 >= (unsigned int)v63 || v10 >= v62 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v92, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v92);
            sub_233E40((__int64)v92);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v64 = (unsigned int *)sub_186B300(v5 - 1, v63);
          v65 = v64[1];
          v5 = v64 + 2;
          *v64 = v62;
          LODWORD(v64) = v65;
          v13 = &v5[v65];
          v7 = a2[1];
          v12 = (_DWORD)v64 + 1;
        }
        else
        {
          v11 = v10;
          v12 = v10 + 1;
          v13 = &v5[v11];
        }
      }
      else
      {
        v66 = (_QWORD *)sub_186B270(0x18u);
        v13 = v66 + 1;
        *v66 = 2;
        v7 = a2[1];
        v12 = 1;
        v5 = v13;
      }
      *v13 = v9;
      ++v8;
      *((_DWORD *)v5 - 1) = v12;
    }
    while ( v7 );
  }
  sub_14E9CE0(a1 + 480);
  sub_F18290(
    a1 + 288,
    v78,
    (int)a2,
    a1 + 120,
    v14,
    v15,
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
  v16 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)v92 = 0;
  sub_14B7810((int)v91, *(_QWORD *)(v16 + 96), (int)v92, v17, v18, v19, v74);
  v20 = 0;
  sub_18572D0(v92);
  v21 = 0;
  v22 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 96LL);
  v23 = a2[1];
  *(_QWORD *)v92 = 0;
  v93 = v22;
  if ( v23 )
  {
    do
    {
      if ( v20 >= *(_DWORD *)(v23 - 4) )
        break;
      v24 = *(_QWORD *)(v23 + 8LL * v20);
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      if ( v21 )
      {
        v25 = (*(_DWORD *)(v21 + 8))-- == 1;
        if ( v25 )
        {
          v83 = v24;
          sub_15D7BC0(v22, v21);
          v24 = v83;
        }
      }
      *(_QWORD *)v92 = v24;
      sub_14B9B80(v91, v92);
      v23 = a2[1];
      v26 = *(_QWORD *)v92;
      v27 = *a2;
      v28 = (__int64 *)(v23 + 8LL * v20);
      if ( *(_QWORD *)v92 )
        ++*(_DWORD *)(*(_QWORD *)v92 + 8LL);
      v29 = *v28;
      if ( *v28 )
      {
        v25 = (*(_DWORD *)(v29 + 8))-- == 1;
        if ( v25 )
        {
          v82 = v26;
          sub_15D7BC0(v27, v29);
          v23 = a2[1];
          v26 = v82;
        }
      }
      *v28 = v26;
      v22 = v93;
      ++v20;
      v21 = *(_QWORD *)v92;
    }
    while ( v23 );
    if ( v21 )
    {
      v25 = (*(_DWORD *)(v21 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v22, v21);
    }
  }
  v30 = 0;
  sub_14B63F0(v91);
  for ( i = a2[1]; i; ++v30 )
  {
    if ( v30 >= *(_DWORD *)(i - 4) )
      break;
    v21 = *(_QWORD *)(i + 8LL * v30);
    sub_14EA0D0(a1 + 480, v21, v5[v30]);
    i = a2[1];
  }
  v32 = *(_QWORD *)(a1 + 112);
  if ( v32 && v79 < *(_DWORD *)(v32 - 4) )
  {
    sub_24A370(a1 + 400);
    result = sub_18290A0(*(_QWORD *)(a1 + 96));
    if ( !(_BYTE)result )
    {
      if ( v5 )
      {
        v70 = v5;
        v71 = (unsigned __int64)&v5[*((unsigned int *)v5 - 1)];
        if ( (unsigned __int64)v5 < v71 )
        {
          do
          {
            v72 = *v70;
            if ( *v70 )
            {
              v25 = (*(_DWORD *)(v72 + 8))-- == 1;
              if ( v25 )
                sub_15D7BC0(*(_QWORD *)v87, v72);
            }
            ++v70;
          }
          while ( (unsigned __int64)v70 < v71 );
        }
        return sub_186B220(v5 - 1);
      }
      return result;
    }
    sub_F875A0(*(_QWORD *)v88, v21);
    v67 = *(_QWORD *)(a1 + 280);
    *(_BYTE *)(a1 + 132) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    v68 = *(_QWORD *)(v67 + 112);
    if ( v68 )
      v69 = *(_DWORD *)(v68 - 4);
    else
      v69 = 0;
    *(_DWORD *)(a1 + 128) = v69;
  }
  sub_F181C0(v92, *(_QWORD *)v75);
  v33 = *(void (__fastcall ****)(void *))(a1 + 464);
  if ( v33 )
  {
    v25 = (*((_DWORD *)v33 + 2))-- == 1;
    if ( v25 )
    {
      (**v33)(v33);
      sub_186B220(v33);
    }
  }
  result = *(_QWORD *)v92;
  v35 = *(void (__fastcall ****)(void *))(a1 + 648);
  *(_QWORD *)(a1 + 464) = *(_QWORD *)v92;
  if ( v35 )
  {
    v25 = (*((_DWORD *)v35 + 2))-- == 1;
    if ( v25 )
    {
      (**v35)(v35);
      result = sub_186B220(v35);
    }
  }
  *(_QWORD *)(a1 + 648) = 0;
  v36 = *(_QWORD *)(a1 + 112);
  if ( v36 )
  {
    while ( 1 )
    {
      result = v79;
      if ( v79 >= *(_DWORD *)(v36 - 4) )
        goto LABEL_66;
      v37 = v36 + 32LL * v79;
      v38 = *(_QWORD *)(v37 + 24);
      v81 = v37;
      if ( v38 )
        break;
      result = sub_E5EBF0(*(_QWORD *)(a1 + 104), *(_QWORD *)(v37 + 8));
LABEL_65:
      v36 = *(_QWORD *)(a1 + 112);
      ++v79;
      if ( !v36 )
        goto LABEL_66;
    }
    v39 = *(_QWORD *)(a1 + 616);
    if ( v39 )
      *(_DWORD *)(v39 - 4) = 0;
    sub_15D6A80(*(_QWORD *)(a1 + 96), v38, a1 + 616);
    v40 = *(_QWORD **)(a1 + 456);
    if ( v40 )
    {
      v41 = &v40[*((unsigned int *)v40 - 1)];
      if ( v40 >= v41 )
        goto LABEL_50;
      do
      {
        while ( 1 )
        {
          v42 = *v40;
          if ( *v40 )
          {
            v43 = *(_QWORD *)(a1 + 448);
            v25 = (*(_DWORD *)(v42 + 8))-- == 1;
            if ( v25 )
              break;
          }
          if ( ++v40 >= v41 )
            goto LABEL_49;
        }
        sub_15D7BC0(v43, v42);
        ++v40;
      }
      while ( v40 < v41 );
LABEL_49:
      v40 = *(_QWORD **)(a1 + 456);
      if ( v40 )
      {
LABEL_50:
        v44 = *(__int64 **)(a1 + 616);
        *((_DWORD *)v40 - 1) = 0;
        if ( v44 )
        {
          v45 = &v44[*((unsigned int *)v44 - 1)];
          if ( v45 != v44 )
            goto LABEL_52;
        }
LABEL_61:
        v51 = *(_QWORD *)(a1 + 104);
        v52 = *(_QWORD *)(a1 + 448);
        v53 = *((unsigned int *)v40 - 1);
        goto LABEL_62;
      }
      v44 = *(__int64 **)(a1 + 616);
      if ( v44 )
      {
        v45 = &v44[*((unsigned int *)v44 - 1)];
        if ( v44 != v45 )
          goto LABEL_52;
      }
    }
    else
    {
      v44 = *(__int64 **)(a1 + 616);
      if ( v44 )
      {
        v45 = &v44[*((unsigned int *)v44 - 1)];
        if ( v45 != v44 )
        {
LABEL_52:
          v46 = *v44;
          if ( *v44 )
            ++*(_DWORD *)(v46 + 8);
          if ( !v40 )
          {
            v47 = (_QWORD *)sub_186B270(0x18u);
            v40 = v47 + 1;
            *(_QWORD *)(a1 + 456) = v47 + 1;
            v48 = v47 + 1;
            *v47 = 2;
            v49 = 1;
            goto LABEL_56;
          }
          while ( 1 )
          {
            v50 = *((_DWORD *)v40 - 1);
            if ( v50 == *((_DWORD *)v40 - 2) )
            {
              v59 = (3 * v50 + 1) >> 1;
              v60 = 8 * v59 + 8;
              if ( 8 * v50 + 8 >= (unsigned int)v60 || v50 >= v59 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v92, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, v92);
                sub_233E40((__int64)v92);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v76 = (3 * v50 + 1) >> 1;
              v61 = (unsigned int *)sub_186B300(v40 - 1, v60);
              v40 = v61 + 2;
              *(_QWORD *)(a1 + 456) = v61 + 2;
              *v61 = v76;
              LODWORD(v61) = v61[1];
              v48 = &v40[(unsigned int)v61];
              v49 = (_DWORD)v61 + 1;
LABEL_56:
              ++v44;
              *v48 = v46;
              *((_DWORD *)v40 - 1) = v49;
              if ( v45 == v44 )
                goto LABEL_61;
            }
            else
            {
              ++v44;
              v40[v50] = v46;
              *((_DWORD *)v40 - 1) = v50 + 1;
              if ( v45 == v44 )
                goto LABEL_61;
            }
            v46 = *v44;
            if ( *v44 )
              ++*(_DWORD *)(v46 + 8);
          }
        }
      }
    }
    v51 = *(_QWORD *)(a1 + 104);
    v52 = *(_QWORD *)(a1 + 448);
    v53 = 0;
LABEL_62:
    v54 = sub_15EC1C0(v52, v53);
    v55 = *(_QWORD *)(v81 + 8);
    if ( v54 )
    {
      ++*(_DWORD *)(v54 + 8);
      result = sub_E5EC60(v51, v55, v54);
      v25 = (*(_DWORD *)(v54 + 8))-- == 1;
      if ( v25 )
        result = sub_15D7BC0(v52, v54);
    }
    else
    {
      result = sub_E5EC60(v51, v55, 0);
    }
    goto LABEL_65;
  }
LABEL_66:
  if ( v5 )
  {
    v56 = v5;
    v57 = (unsigned __int64)&v5[*((unsigned int *)v5 - 1)];
    if ( (unsigned __int64)v5 < v57 )
    {
      do
      {
        while ( 1 )
        {
          v58 = *v56;
          if ( *v56 )
          {
            v25 = (*(_DWORD *)(v58 + 8))-- == 1;
            if ( v25 )
              break;
          }
          if ( (unsigned __int64)++v56 >= v57 )
            return sub_186B220(v5 - 1);
        }
        ++v56;
        sub_15D7BC0(*(_QWORD *)v87, v58);
      }
      while ( (unsigned __int64)v56 < v57 );
    }
    return sub_186B220(v5 - 1);
  }
  return result;
}

