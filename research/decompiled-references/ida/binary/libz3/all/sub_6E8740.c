__int64 __fastcall sub_6E8740(
        __int64 *a1,
        struct _Unwind_Exception *a2,
        int a3,
        __int64 *a4,
        __int64 *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rax
  _DWORD *v12; // rdx
  unsigned int v13; // r15d
  int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rdi
  __int64 v24; // rdx
  unsigned int v25; // r15d
  __int64 v26; // r14
  unsigned int v27; // eax
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  int *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  _DWORD *v38; // rsi
  int v39; // esi
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44; // r14d
  size_t v45; // rdi
  __int64 *v46; // r15
  _DWORD *v47; // r8
  __int64 v48; // rbp
  __int64 v49; // rdx
  int v50; // r10d
  __int64 *v51; // rax
  __int64 *v52; // r9
  __int64 v53; // rsi
  __int64 v54; // rsi
  __int64 *v55; // rbp
  __int64 *v56; // rbx
  _DWORD *v57; // r15
  __int64 *v58; // rdi
  unsigned int v59; // ebp
  size_t v60; // rsi
  unsigned int *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  _DWORD *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rcx
  _DWORD *v67; // rsi
  int v68; // esi
  char **v69; // rbp
  char **exception; // rbp
  struct _Unwind_Exception *v71; // [rsp+8h] [rbp-D0h]
  __int64 *v72; // [rsp+10h] [rbp-C8h]
  __int64 v74; // [rsp+20h] [rbp-B8h]
  __int64 v75; // [rsp+20h] [rbp-B8h]
  int v76; // [rsp+2Ch] [rbp-ACh]
  __int64 v78; // [rsp+40h] [rbp-98h]
  __int64 *v80; // [rsp+58h] [rbp-80h]
  _DWORD *v81; // [rsp+58h] [rbp-80h]
  __int64 v82; // [rsp+68h] [rbp-70h] BYREF
  __int64 v83; // [rsp+70h] [rbp-68h] BYREF
  __int64 v84; // [rsp+78h] [rbp-60h]
  __int64 v85[11]; // [rsp+80h] [rbp-58h] BYREF

  v78 = *a1;
  v83 = *a1;
  v84 = 0;
  if ( !a3 )
  {
    v10 = 0;
    v13 = 1;
    sub_2B4F40(&v83);
    goto LABEL_14;
  }
  v9 = a4;
  v10 = 0;
  v72 = &a4[a3];
  v71 = a2 + 1;
  while ( !(unsigned __int8)sub_168D740(v71, *v9) )
  {
LABEL_46:
    if ( v72 == ++v9 )
    {
      v13 = 1;
      goto LABEL_13;
    }
  }
  v11 = *v9;
  if ( *(_WORD *)(*v9 + 4) || (v12 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL)) == nullptr )
  {
LABEL_12:
    v13 = 0;
    goto LABEL_13;
  }
  if ( *v12 != 5 )
  {
    if ( *v12 )
      goto LABEL_12;
    if ( v12[1] == 8 )
    {
      v76 = *(_DWORD *)(v11 + 24);
      if ( v76 == 1 )
      {
        v37 = *(_QWORD *)(v11 + 32);
        if ( !*(_WORD *)(v37 + 4) )
        {
          v38 = *(_DWORD **)(*(_QWORD *)(v37 + 16) + 24LL);
          if ( v38 )
          {
            if ( *v38 == 5 )
            {
              v39 = v38[1];
              if ( v39 == 3 )
              {
                if ( *(_DWORD *)(v37 + 24) == 2 )
                {
                  v41 = *(_QWORD *)(v37 + 32);
                  v40 = *(_QWORD *)(v37 + 40);
                  goto LABEL_66;
                }
              }
              else if ( v39 == 2 && *(_DWORD *)(v37 + 24) == 2 )
              {
                v40 = *(_QWORD *)(v37 + 32);
                v41 = *(_QWORD *)(v37 + 40);
LABEL_66:
                v43 = sub_6E10F0((__int64)a1, v41, v40);
                v19 = v43;
                if ( v43 )
                  ++*(_DWORD *)(v43 + 8);
                sub_6DE2A0(v10, v78);
                goto LABEL_22;
              }
            }
          }
        }
      }
    }
    if ( v12[1] != 8 )
    {
      if ( v12[1] != 2 )
        goto LABEL_12;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(v11 + 24) != 1 )
      goto LABEL_90;
    v66 = *(_QWORD *)(v11 + 32);
    if ( !*(_WORD *)(v66 + 4) )
    {
      v67 = *(_DWORD **)(*(_QWORD *)(v66 + 16) + 24LL);
      if ( v67 )
      {
        if ( *v67 == 5 )
        {
          v68 = v67[1];
          if ( v68 == 5 )
          {
            if ( *(_DWORD *)(v66 + 24) == 2 )
            {
              v16 = *(_QWORD *)(v66 + 32);
              v17 = *(_QWORD *)(v66 + 40);
              goto LABEL_19;
            }
          }
          else if ( v68 == 4 && *(_DWORD *)(v66 + 24) == 2 )
          {
            v17 = *(_QWORD *)(v66 + 32);
            v16 = *(_QWORD *)(v66 + 40);
LABEL_19:
            v18 = sub_6E10F0((__int64)a1, v16, v17);
            v19 = v18;
            if ( v18 )
              ++*(_DWORD *)(v18 + 8);
            sub_6DE2A0(v10, v78);
            v76 = 0;
            goto LABEL_22;
          }
        }
      }
    }
    if ( v12[1] == 2 )
    {
LABEL_11:
      v76 = *(_DWORD *)(v11 + 24);
      if ( v76 != 2 )
        goto LABEL_12;
      v40 = *(_QWORD *)(v11 + 40);
      v41 = *(_QWORD *)(v11 + 32);
      goto LABEL_66;
    }
LABEL_90:
    if ( v12[1] != 8 )
      goto LABEL_12;
    if ( *(_DWORD *)(v11 + 24) != 1 )
      goto LABEL_12;
    v63 = *(_QWORD *)(v11 + 32);
    if ( *(_WORD *)(v63 + 4) )
      goto LABEL_12;
    v64 = *(_DWORD **)(*(_QWORD *)(v63 + 16) + 24LL);
    if ( !v64 || *v64 || v64[1] != 2 || *(_DWORD *)(v63 + 24) != 2 )
      goto LABEL_12;
    v65 = sub_6E10F0((__int64)a1, *(_QWORD *)(v63 + 32), *(_QWORD *)(v63 + 40));
    v19 = v65;
    if ( v65 )
      ++*(_DWORD *)(v65 + 8);
    sub_6DE2A0(v10, v78);
    v76 = 3;
    goto LABEL_22;
  }
  v15 = v12[1];
  switch ( v15 )
  {
    case 3:
      if ( *(_DWORD *)(v11 + 24) != 2 )
        goto LABEL_12;
      v17 = *(_QWORD *)(v11 + 32);
      v16 = *(_QWORD *)(v11 + 40);
      goto LABEL_19;
    case 2:
      if ( *(_DWORD *)(v11 + 24) != 2 )
        goto LABEL_12;
      v16 = *(_QWORD *)(v11 + 32);
      v17 = *(_QWORD *)(v11 + 40);
      goto LABEL_19;
    case 5:
      if ( *(_DWORD *)(v11 + 24) != 2 )
        goto LABEL_12;
      v36 = *(_QWORD *)(v11 + 32);
      v35 = *(_QWORD *)(v11 + 40);
      break;
    default:
      if ( v15 != 4 || *(_DWORD *)(v11 + 24) != 2 )
        goto LABEL_12;
      v35 = *(_QWORD *)(v11 + 32);
      v36 = *(_QWORD *)(v11 + 40);
      break;
  }
  v42 = sub_6E10F0((__int64)a1, v35, v36);
  v19 = v42;
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  sub_6DE2A0(v10, v78);
  v76 = 1;
LABEL_22:
  v13 = sub_6E6530(a1, v19, a2, (__int64)&v83);
  if ( (_BYTE)v13 )
  {
    v20 = *a5;
    if ( *a5 )
    {
      LODWORD(v21) = *(_DWORD *)(v20 - 4);
      v22 = v20 + 16LL * (unsigned int)v21;
      if ( (_DWORD)v21 == *(_DWORD *)(v20 - 8) )
      {
        v44 = (unsigned int)(3 * v21 + 1) >> 1;
        v45 = 16 * v44 + 8;
        if ( 16 * (int)v21 + 8 >= (unsigned int)v45 || (unsigned int)v21 >= v44 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v85, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v85);
          sub_233E40((__int64)v85);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = sub_186B270(v45);
        v46 = (__int64 *)*a5;
        v47 = (_DWORD *)v21;
        v20 = v21 + 8;
        if ( *a5 )
        {
          v48 = *((unsigned int *)v46 - 1);
          v49 = v21 + 8;
          *(_DWORD *)(v21 + 4) = v48;
          v50 = v48;
          v51 = v46;
          v52 = &v46[2 * v48];
          if ( v46 != v52 )
          {
            do
            {
              v53 = *v51;
              v51 += 2;
              v49 += 16;
              *(_QWORD *)(v49 - 16) = v53;
              v54 = *(v51 - 1);
              *(v51 - 1) = 0;
              *(_QWORD *)(v49 - 8) = v54;
            }
            while ( v52 != v51 );
          }
          v55 = &v46[2 * v48];
          if ( v50 )
          {
            v74 = v20;
            v80 = v9;
            v56 = v46;
            v57 = v47;
            do
            {
              v58 = v56;
              v56 += 2;
              sub_2B4F40(v58);
            }
            while ( v56 != v55 );
            v47 = v57;
            v20 = v74;
            v9 = v80;
            v46 = (__int64 *)*a5;
          }
          v81 = v47;
          v75 = v20;
          sub_186B220(v46 - 1);
          v47 = v81;
          v20 = v75;
          v21 = (unsigned int)v81[1];
          v22 = v75 + 16 * v21;
        }
        else
        {
          *(_DWORD *)(v21 + 4) = 0;
          v22 = v21 + 8;
          LODWORD(v21) = 0;
        }
        *a5 = v20;
        *v47 = v44;
      }
    }
    else
    {
      v21 = sub_186B270(0x28u);
      v20 = v21 + 8;
      *(_QWORD *)v21 = 2;
      LODWORD(v21) = 0;
      *a5 = v20;
      v22 = v20;
    }
    *(_QWORD *)(v22 + 8) = 0;
    v23 = v84;
    *(_QWORD *)v22 = v83;
    if ( v23 )
    {
      v24 = 0;
      v25 = 0;
      do
      {
        if ( v25 >= *(_DWORD *)(v23 - 4) )
          break;
        v26 = *(_QWORD *)(v23 + 8LL * v25);
        if ( v26 )
          ++*(_DWORD *)(v26 + 8);
        if ( v24 )
        {
          v27 = *(_DWORD *)(v24 - 4);
          if ( v27 != *(_DWORD *)(v24 - 8) )
            continue;
        }
        sub_3A6B20((unsigned int **)(v22 + 8));
        v24 = *(_QWORD *)(v22 + 8);
        v23 = v84;
        v27 = *(_DWORD *)(v24 - 4);
        ++v25;
        *(_QWORD *)(v24 + 8LL * v27) = v26;
        *(_DWORD *)(v24 - 4) = v27 + 1;
      }
      while ( v23 );
      v20 = *a5;
      LODWORD(v21) = *(_DWORD *)(*a5 - 4);
    }
    *(_DWORD *)(v20 - 4) = v21 + 1;
    v28 = (_QWORD *)*a6;
    if ( *a6 )
    {
      v29 = *((_DWORD *)v28 - 1);
      if ( v29 == *((_DWORD *)v28 - 2) )
      {
        v59 = (3 * v29 + 1) >> 1;
        v60 = 4 * v59 + 8;
        if ( 4 * v29 + 8 >= (unsigned int)v60 || v29 >= v59 )
        {
          v69 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v85, "Overflow encountered when expanding vector");
          *v69 = (char *)off_1C63128;
          sub_2333C0(v69 + 1, v85);
          sub_233E40((__int64)v85);
          __cxa_throw(v69, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v61 = (unsigned int *)sub_186B300(v28 - 1, v60);
        v28 = v61 + 2;
        *v61 = v59;
        *a6 = v61 + 2;
        LODWORD(v61) = v61[1];
        v32 = (int *)v28 + (unsigned int)v61;
        v31 = (_DWORD)v61 + 1;
      }
      else
      {
        v30 = v29;
        v31 = v29 + 1;
        v32 = (int *)v28 + v30;
      }
    }
    else
    {
      v62 = (_QWORD *)sub_186B270(0x10u);
      v28 = v62 + 1;
      *v62 = 2;
      v32 = (int *)(v62 + 1);
      *a6 = v62 + 1;
      v31 = 1;
    }
    *v32 = v76;
    *((_DWORD *)v28 - 1) = v31;
    if ( a7 )
    {
      v33 = *v9;
      v82 = v33;
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      sub_6DE920((unsigned int **)(a7 + 24), &v82);
    }
    if ( a8 )
    {
      v34 = *v9;
      v85[0] = v34;
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      sub_6DE970((unsigned int **)(a8 + 8), v85);
    }
    v10 = v19;
    goto LABEL_46;
  }
  v10 = v19;
LABEL_13:
  sub_2B4F40(&v83);
LABEL_14:
  sub_6DE2A0(v10, v78);
  return v13;
}

