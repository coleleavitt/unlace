__int64 __fastcall sub_5172C0(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int *v6; // r13
  unsigned int *v7; // r12
  __int64 v8; // r11
  unsigned int v9; // ebp
  unsigned int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int *v13; // rax
  __int64 v14; // rax
  unsigned int *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rdx
  unsigned int v24; // ecx
  unsigned int *v25; // r14
  __int64 v26; // rbp
  unsigned int v27; // ebx
  __int64 v28; // r11
  unsigned int v29; // eax
  __int64 v30; // rdx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  __int64 *v33; // rax
  unsigned int v34; // r14d
  __int64 v35; // rbp
  unsigned int v36; // ebx
  unsigned int v37; // eax
  __int64 v38; // rdx
  unsigned int v39; // ecx
  __int64 v40; // r8
  __int64 result; // rax
  __int64 *v42; // r11
  unsigned int v43; // ebp
  __int64 v44; // r10
  unsigned int *v45; // rdx
  unsigned int v46; // ebx
  _QWORD *v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rsi
  int v50; // ecx
  unsigned int v51; // ebx
  __int64 v52; // rdi
  unsigned int v53; // r9d
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  int *v57; // rax
  int *v58; // rdx
  int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // rdx
  _QWORD *v62; // rdi
  unsigned int v63; // eax
  __int64 v64; // rcx
  __int64 *v65; // rcx
  unsigned int v66; // r14d
  size_t v67; // rsi
  unsigned int *v68; // rax
  _QWORD *v69; // rax
  unsigned int v70; // r14d
  size_t v71; // rsi
  unsigned int *v72; // rax
  unsigned int v73; // ebx
  size_t v74; // rsi
  unsigned int *v75; // rax
  __int64 v76; // rcx
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  char **exception; // r14
  char **v80; // r14
  char **v81; // r14
  __int64 v82; // [rsp+8h] [rbp-90h]
  __int64 v83; // [rsp+8h] [rbp-90h]
  __int64 v84; // [rsp+8h] [rbp-90h]
  _QWORD *v85; // [rsp+8h] [rbp-90h]
  __int64 v86; // [rsp+8h] [rbp-90h]
  __int64 v87; // [rsp+8h] [rbp-90h]
  __int64 v88; // [rsp+8h] [rbp-90h]
  __int64 v89; // [rsp+8h] [rbp-90h]
  __int64 v90; // [rsp+8h] [rbp-90h]
  unsigned int v91; // [rsp+10h] [rbp-88h]
  __int64 v92; // [rsp+10h] [rbp-88h]
  __int64 v93; // [rsp+10h] [rbp-88h]
  __int64 v94; // [rsp+10h] [rbp-88h]
  __int64 v95; // [rsp+18h] [rbp-80h]
  __int64 v96; // [rsp+18h] [rbp-80h]
  __int64 v99[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = nullptr;
  v7 = nullptr;
  v8 = **(_QWORD **)(a2 + 144);
  if ( v8 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= *(_DWORD *)(v8 - 4) )
        goto LABEL_17;
      v10 = v9;
      do
      {
        v11 = v10;
        v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 216) + 16LL) + 4LL * v10);
      }
      while ( v11 != v10 );
      if ( !v7 )
        break;
      v12 = *(v7 - 1);
      if ( (_DWORD)v12 != *(v7 - 2) )
      {
        v13 = &v7[v12];
        goto LABEL_9;
      }
      v66 = (unsigned int)(3 * v12 + 1) >> 1;
      v67 = 4 * v66 + 8;
      if ( 4 * (int)v12 + 8 >= (unsigned int)v67 || (unsigned int)v12 >= v66 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v99, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v99);
        sub_233E40((__int64)v99);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v86 = a1;
      v68 = (unsigned int *)sub_186B300(v7 - 2, v67);
      *v68 = v66;
      v7 = v68 + 2;
      a1 = v86;
      v68[v68[1]++ + 2] = v11;
      if ( v6 )
      {
LABEL_10:
        v14 = *(v6 - 1);
        if ( (_DWORD)v14 == *(v6 - 2) )
        {
          v70 = (unsigned int)(3 * v14 + 1) >> 1;
          v71 = 4 * v70 + 8;
          if ( 4 * (int)v14 + 8 >= (unsigned int)v71 || (unsigned int)v14 >= v70 )
          {
            v81 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v99, "Overflow encountered when expanding vector");
            *v81 = (char *)off_1C63128;
            sub_2333C0(v81 + 1, v99);
            sub_233E40((__int64)v99);
            __cxa_throw(v81, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v88 = a1;
          v72 = (unsigned int *)sub_186B300(v6 - 2, v71);
          v6 = v72 + 2;
          *v72 = v70;
          a1 = v88;
          v15 = &v72[v72[1] + 2];
        }
        else
        {
          v15 = &v6[v14];
        }
        goto LABEL_12;
      }
LABEL_60:
      v87 = a1;
      v69 = (_QWORD *)sub_186B270(0x10u);
      *v69 = 2;
      v15 = (unsigned int *)(v69 + 1);
      a1 = v87;
      v6 = v15;
LABEL_12:
      *v15 = -1;
      v16 = *(_QWORD *)(a2 + 216);
      ++*(v6 - 1);
      v17 = *(_QWORD *)(v16 + 16);
      v18 = v9;
      do
      {
        v19 = v18;
        v20 = v18;
        v18 = *(_DWORD *)(v17 + 4LL * v18);
      }
      while ( v20 != v18 );
      v21 = v9;
      v22 = **(_QWORD **)(a2 + 144) + 112 * v19;
      do
      {
        v23 = v21;
        v24 = v21;
        v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 16LL) + 4LL * v21);
      }
      while ( v24 != v21 );
      v82 = a1;
      sub_B290A0(**(_QWORD **)(a1 + 144) + 112 * v23, v22);
      ++v9;
      a1 = v82;
      v8 = **(_QWORD **)(a2 + 144);
      if ( !v8 )
        goto LABEL_17;
    }
    v89 = a1;
    v77 = (_QWORD *)sub_186B270(0x10u);
    *v77 = 2;
    v13 = (unsigned int *)(v77 + 1);
    a1 = v89;
    v7 = v13;
LABEL_9:
    *v13 = v11;
    ++*(v7 - 1);
    if ( v6 )
      goto LABEL_10;
    goto LABEL_60;
  }
LABEL_17:
  if ( a3 > 1 )
  {
    v25 = a4;
    do
    {
      v26 = *v25;
      v27 = *v25;
      v28 = 112 * v26 + v8;
      v29 = v25[1];
      do
      {
        v30 = v29;
        v31 = v29;
        v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 16LL) + 4LL * v29);
      }
      while ( v31 != v29 );
      v91 = v25[1];
      v83 = a1;
      sub_B290A0(**(_QWORD **)(a1 + 144) + 112 * v30, v28);
      a1 = v83;
      while ( 1 )
      {
        v32 = v27;
        v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 216) + 16LL) + 4 * v26);
        if ( v32 == v27 )
          break;
        v26 = v27;
      }
      v33 = *(__int64 **)(a2 + 144);
      ++v25;
      v7[v91] = v27;
      v8 = *v33;
    }
    while ( v25 != &a4[a3 - 1] );
  }
  v34 = *a4;
  v35 = a4[a3 - 1];
  v36 = a4[a3 - 1];
  v37 = *a4;
  do
  {
    v38 = v37;
    v39 = v37;
    v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 16LL) + 4LL * v37);
  }
  while ( v39 != v37 );
  v84 = a1;
  sub_B290A0(**(_QWORD **)(a1 + 144) + 112 * v38, v8 + 112 * v35);
  v40 = v84;
  while ( 1 )
  {
    result = v36;
    v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 216) + 16LL) + 4 * v35);
    if ( (_DWORD)result == v36 )
      break;
    v35 = v36;
  }
  v42 = *(__int64 **)(a2 + 144);
  v43 = 0;
  v7[v34] = v36;
  v44 = *v42;
  if ( *v42 )
  {
LABEL_31:
    if ( v43 >= *(_DWORD *)(v44 - 4) )
    {
LABEL_35:
      v46 = 0;
      do
      {
        if ( v46 >= *(_DWORD *)(v44 - 4) )
          break;
        result = *(_QWORD *)(*(_QWORD *)v40 + 216LL);
        if ( (void (*)())result != nullsub_260 )
        {
          v90 = v40;
          result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned int *))result)(
                     v40,
                     **(_QWORD **)(v40 + 144) + 112LL * v46,
                     a3,
                     a4);
          v42 = *(__int64 **)(a2 + 144);
          v40 = v90;
        }
        v44 = *v42;
        ++v46;
      }
      while ( *v42 );
      goto LABEL_40;
    }
    while ( 1 )
    {
      v45 = &v6[v7[v43]];
      result = *v45;
      if ( (_DWORD)result == -1 )
      {
        *v45 = v43;
      }
      else
      {
        v47 = *(_QWORD **)(v40 + 216);
        v48 = v47[2];
        do
        {
          v49 = (unsigned int)result;
          v50 = result;
          result = *(unsigned int *)(v48 + 4LL * (unsigned int)result);
        }
        while ( v50 != (_DWORD)result );
        v51 = v43;
        do
        {
          v52 = v51;
          v53 = v51;
          v51 = *(_DWORD *)(v48 + 4LL * v51);
        }
        while ( v53 != v51 );
        if ( v50 != v51 )
        {
          v54 = v47[3];
          if ( *(_DWORD *)(v54 + 4 * v52) >= *(_DWORD *)(v54 + 4 * v49) )
          {
            v51 = result;
            LODWORD(result) = v53;
          }
          v92 = v40;
          *(_DWORD *)(v48 + 4LL * v51) = result;
          v55 = 4LL * (unsigned int)result;
          *(_DWORD *)(v54 + v55) += *(_DWORD *)(v54 + 4LL * v51);
          v56 = v47[4];
          v57 = (int *)(v56 + v55);
          v58 = (int *)(v56 + 4LL * v51);
          v59 = *v58;
          *v58 = *v57;
          *v57 = v59;
          v85 = (_QWORD *)v47[1];
          v60 = sub_180C100(v85 + 2, 24);
          v61 = v60;
          v40 = v92;
          *(_QWORD *)v60 = off_1C4F500;
          v62 = (_QWORD *)*v85;
          *(_QWORD *)(v60 + 8) = v47;
          *(_DWORD *)(v60 + 16) = v51;
          if ( v62 )
          {
            v63 = *((_DWORD *)v62 - 1);
            if ( v63 == *((_DWORD *)v62 - 2) )
            {
              v73 = (3 * v63 + 1) >> 1;
              v74 = 8 * v73 + 8;
              if ( 8 * v63 + 8 >= (unsigned int)v74 || v63 >= v73 )
              {
                v80 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v99, "Overflow encountered when expanding vector");
                *v80 = (char *)off_1C63128;
                sub_2333C0(v80 + 1, v99);
                sub_233E40((__int64)v99);
                __cxa_throw(v80, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v95 = v92;
              v93 = v61;
              v75 = (unsigned int *)sub_186B300(v62 - 1, v74);
              v62 = v75 + 2;
              v61 = v93;
              v40 = v95;
              *v85 = v75 + 2;
              v76 = v75[1];
              *v75 = v73;
              LODWORD(v75) = v76;
              v65 = &v62[v76];
              result = (unsigned int)((_DWORD)v75 + 1);
            }
            else
            {
              v64 = v63;
              result = v63 + 1;
              v65 = &v62[v64];
            }
          }
          else
          {
            v96 = v92;
            v94 = v60;
            v78 = (_QWORD *)sub_186B270(0x18u);
            v61 = v94;
            *v78 = 2;
            v62 = v78 + 1;
            v40 = v96;
            result = 1;
            *v85 = v62;
            v65 = v62;
          }
          v42 = *(__int64 **)(a2 + 144);
          *v65 = v61;
          ++v43;
          *((_DWORD *)v62 - 1) = result;
          v44 = *v42;
          if ( !*v42 )
            break;
          goto LABEL_31;
        }
      }
      if ( ++v43 >= *(_DWORD *)(v44 - 4) )
        goto LABEL_35;
    }
  }
LABEL_40:
  if ( v6 )
    result = sub_186B220(v6 - 2);
  if ( v7 )
    return sub_186B220(v7 - 2);
  return result;
}

