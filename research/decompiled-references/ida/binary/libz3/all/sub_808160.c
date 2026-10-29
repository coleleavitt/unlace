unsigned int *__fastcall sub_808160(__int64 a1, _QWORD *a2, int a3, __int64 *a4)
{
  char **exception; // rbp
  __int64 v7; // r13
  __int64 v8; // r14
  unsigned int **v9; // rax
  unsigned int *result; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 *v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  int *v17; // rax
  int v18; // eax
  __int64 v19; // rax
  unsigned int *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rax
  __int64 v24; // rsi
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  unsigned int *v28; // rax
  __int64 v29; // rax
  void *v30; // r12
  _DWORD *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // r8
  _QWORD *v34; // r13
  _QWORD *v35; // r12
  int v36; // r14d
  __int64 *v37; // rsi
  __int64 v38; // rcx
  unsigned int v39; // eax
  unsigned int v40; // r14d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rsi
  __int64 v44; // r15
  int v45; // r8d
  int v46; // r9d
  __int64 *v47; // r14
  unsigned __int64 v48; // r15
  __int64 v49; // rsi
  __int64 v50; // rsi
  __int64 v51; // rdi
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // [rsp+0h] [rbp-158h]
  int v56; // [rsp+0h] [rbp-158h]
  __int64 v57; // [rsp+8h] [rbp-150h]
  int v58; // [rsp+8h] [rbp-150h]
  __int64 v59; // [rsp+10h] [rbp-148h]
  __int64 *v60; // [rsp+10h] [rbp-148h]
  int v61; // [rsp+10h] [rbp-148h]
  int v62; // [rsp+18h] [rbp-140h]
  __int64 v63; // [rsp+20h] [rbp-138h]
  __int64 v64; // [rsp+20h] [rbp-138h]
  char *v65; // [rsp+28h] [rbp-130h]
  int v66; // [rsp+30h] [rbp-128h]
  int v67; // [rsp+38h] [rbp-120h]
  int v68[2]; // [rsp+40h] [rbp-118h]
  int v69[2]; // [rsp+40h] [rbp-118h]
  void *v70; // [rsp+48h] [rbp-110h]
  __int64 v71[2]; // [rsp+60h] [rbp-F8h] BYREF
  _QWORD v72[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v73; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v74[24]; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v75; // [rsp+A0h] [rbp-B8h]
  __int64 v76; // [rsp+A8h] [rbp-B0h]
  __int64 v77; // [rsp+B0h] [rbp-A8h]
  void *v78; // [rsp+B8h] [rbp-A0h]
  __int64 v79; // [rsp+C0h] [rbp-98h]
  int v80; // [rsp+C8h] [rbp-90h]
  char v81; // [rsp+D8h] [rbp-80h]
  char v82[32]; // [rsp+E0h] [rbp-78h] BYREF
  _BYTE v83[88]; // [rsp+100h] [rbp-58h] BYREF

  v7 = *a2;
  *(_QWORD *)v68 = 0;
  v8 = *(_QWORD *)(a1 + 128);
  v70 = (void *)v8;
  if ( *((_BYTE *)a2 + 12) )
  {
    if ( !v7 )
    {
      result = *(unsigned int **)a2[8];
      v11 = *result;
      goto LABEL_5;
    }
    v9 = (unsigned int **)a2[8];
    ++*(_DWORD *)(v7 + 8);
    *(_QWORD *)v68 = v7;
    result = *v9;
    v11 = *result;
    goto LABEL_4;
  }
  v17 = *(int **)(*(_QWORD *)(v7 + 16) + 24LL);
  if ( v17 )
    v18 = *v17;
  else
    v18 = -1;
  if ( *(_DWORD *)(a1 + 136) == v18 )
  {
    v71[0] = 0;
    v73 = v8;
    sub_16744A0(v74, v8);
    v75 = 0;
    v76 = v8;
    v77 = 0;
    v31 = (_DWORD *)sub_186B270(0x80u);
    *(_QWORD *)v31 = 0;
    v31[2] = 0;
    *((_QWORD *)v31 + 2) = 0;
    v31[6] = 0;
    *((_QWORD *)v31 + 4) = 0;
    v31[10] = 0;
    *((_QWORD *)v31 + 6) = 0;
    v31[14] = 0;
    *((_QWORD *)v31 + 8) = 0;
    v31[18] = 0;
    *((_QWORD *)v31 + 10) = 0;
    v31[22] = 0;
    *((_QWORD *)v31 + 12) = 0;
    v31[26] = 0;
    *((_QWORD *)v31 + 14) = 0;
    v31[30] = 0;
    v78 = v31;
    v81 = 0;
    v79 = 8;
    v80 = 0;
    sub_1427860(&v73, v71);
    v65 = v82;
    sub_157EB00(v82, v74);
    sub_16669D0(v83, v8);
    v83[28] = 0;
    sub_1409FB0(&v73, v71);
    sub_18572D0(v71);
    v63 = *(_QWORD *)(a1 + 128);
    v32 = *((unsigned int *)a2 + 38);
    v33 = &a2[v32 + 22];
    if ( v32 * 8 )
    {
      v34 = a2 + 22;
      v35 = nullptr;
      do
      {
        v38 = *(_QWORD *)(a4[1] + 8LL * ***(unsigned int ***)(*v34 + 64LL));
        if ( v38 )
          ++*(_DWORD *)(v38 + 8);
        if ( v35 )
        {
          v39 = *((_DWORD *)v35 - 1);
          if ( v39 == *((_DWORD *)v35 - 2) )
          {
            v40 = (3 * v39 + 1) >> 1;
            v41 = 8 * v40 + 8;
            if ( 8 * v39 + 8 >= (unsigned int)v41 || v39 >= v40 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v71, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v71);
              sub_233E40((__int64)v71);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v59 = v38;
            v57 = (__int64)v33;
            v42 = (unsigned int *)sub_186B300(v35 - 1, v41);
            v43 = v42[1];
            v35 = v42 + 2;
            v33 = (_QWORD *)v57;
            *v42 = v40;
            v38 = v59;
            LODWORD(v42) = v43;
            v37 = &v35[v43];
            v36 = (_DWORD)v42 + 1;
          }
          else
          {
            v36 = v39 + 1;
            v37 = &v35[v39];
          }
        }
        else
        {
          v59 = v38;
          v57 = (__int64)v33;
          v52 = (_QWORD *)sub_186B270(0x18u);
          v35 = v52 + 1;
          v33 = (_QWORD *)v57;
          v38 = v59;
          *v52 = 2;
          v37 = v52 + 1;
          v36 = 1;
        }
        ++v34;
        *v37 = v38;
        *((_DWORD *)v35 - 1) = v36;
      }
      while ( v33 != v34 );
    }
    else
    {
      v35 = nullptr;
      v36 = 0;
    }
    LODWORD(v44) = 0;
    if ( !*(_WORD *)(*a2 + 4LL) )
      v44 = *(_QWORD *)(*a2 + 16LL);
    if ( (unsigned int)sub_14246E0((int)&v73, v55, v57, v59, (__int64)&v73, v63) == 5 )
    {
      v53 = sub_15DC610(v73, v44, v36, (int)v35, v45, v46, v56, v58, v61, v62, v64, (char)v82, v66, v67, 0, v70);
      v54 = v53;
      if ( v53 )
        ++*(_DWORD *)(v53 + 8);
      if ( *(_QWORD *)v69 )
      {
        v16 = (*(_DWORD *)(*(_QWORD *)v69 + 8LL))-- == 1;
        if ( v16 )
          sub_15D7BC0(v70, *(_QWORD *)v69);
      }
      *(_QWORD *)v68 = v54;
    }
    if ( v35 )
    {
      v47 = v35;
      v48 = (unsigned __int64)&v35[*((unsigned int *)v35 - 1)];
      if ( (unsigned __int64)v35 < v48 )
      {
        do
        {
          while ( 1 )
          {
            v49 = *v47;
            if ( *v47 )
            {
              v16 = (*(_DWORD *)(v49 + 8))-- == 1;
              if ( v16 )
                break;
            }
            if ( (unsigned __int64)++v47 >= v48 )
              goto LABEL_53;
          }
          ++v47;
          sub_15D7BC0(v64, v49);
        }
        while ( (unsigned __int64)v47 < v48 );
      }
LABEL_53:
      sub_186B220(v35 - 1);
    }
    sub_157EB20(v65);
    if ( v78 )
      sub_186B220(v78);
    v50 = v75;
    if ( v75 )
    {
      v51 = v76;
      v16 = (*(_DWORD *)(v75 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v51, v50);
    }
  }
  else
  {
    v19 = sub_16747F0(a1 + 136, v7);
    v20 = (unsigned int *)v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 1720LL);
    if ( !v21
      || (v22 = *v20, (unsigned int)v22 >= *(_DWORD *)(v21 - 4))
      || (v23 = *(__int64 **)(v21 + 8 * v22)) == nullptr )
    {
      sub_1872CE0("");
      sub_1873130(114, 496);
    }
    v60 = v23;
    sub_879F30(&v73);
    v71[0] = 0;
    v72[0] = 1;
    v71[1] = 0;
    v24 = *v60;
    v72[1] = 0;
    if ( !(unsigned __int8)sub_879FD0((unsigned int)&v73, v24, (unsigned int)v71, v25, v26, v27) )
    {
      sub_1872CE0("");
      sub_1873130(114, 499);
    }
    v28 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(*a2) + 24) + 8LL);
    if ( *((_BYTE *)v28 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    v29 = sub_1674520(a1 + 136, v71, *v28);
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    *(_QWORD *)v68 = v29;
    v30 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v71);
    sub_182CBA0(v30, v72);
    v16 = v20[2]-- == 1;
    if ( v16 )
      sub_15D7BC0(v8, v20);
  }
  v7 = *(_QWORD *)v68;
  result = *(unsigned int **)a2[8];
  v11 = *result;
  if ( *(_QWORD *)v68 )
LABEL_4:
    ++*(_DWORD *)(v7 + 8);
LABEL_5:
  v12 = 8 * v11;
  v13 = (__int64 *)(v12 + a4[1]);
  v14 = *v13;
  if ( *v13 )
  {
    v15 = *a4;
    v16 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v16 )
    {
      result = (unsigned int *)sub_15D7BC0(v15, v14);
      v13 = (__int64 *)(v12 + a4[1]);
    }
  }
  *v13 = v7;
  if ( *(_QWORD *)v68 )
  {
    v16 = (*(_DWORD *)(*(_QWORD *)v68 + 8LL))-- == 1;
    if ( v16 )
      return (unsigned int *)sub_15D7BC0(v70, *(_QWORD *)v68);
  }
  return result;
}

