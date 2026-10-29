__int64 (__fastcall *__fastcall sub_DE6A80(__int64 *a1, __int64 *a2))(__int64 a1, __int64 *a2)
{
  char **exception; // rbx
  __int64 v5; // rbx
  bool v6; // zf
  _QWORD *v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  __int64 (__fastcall *result)(__int64, __int64 *); // rax
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rcx
  __int64 *v21; // rbx
  __int64 *v22; // r12
  __int64 v23; // rsi
  _DWORD *v24; // rcx
  __int64 v25; // rdi
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 *v30; // rdi
  __int64 v31; // rsi
  __int64 *v32; // rdx
  __int64 *v33; // rax
  int v34; // ecx
  unsigned int v35; // ebp
  size_t v36; // rbx
  __int64 *v37; // rdx
  __int64 *v38; // rax
  __int64 *v39; // rbp
  __int64 *v40; // r8
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 *v47; // r8
  _DWORD *v48; // rcx
  void *v49; // rdi
  __int64 v50; // r8
  __int64 *v51; // rdx
  __int64 *v52; // rax
  int v53; // esi
  unsigned int v54; // edx
  size_t v55; // rbp
  __int64 v56; // rax
  __int64 *v57; // rdx
  __int64 *v58; // rax
  unsigned int v59; // ebp
  unsigned int v60; // ecx
  unsigned int *v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // rdx
  size_t v64; // rsi
  size_t v65; // r8
  __int64 v66; // rax
  _DWORD *v67; // [rsp+8h] [rbp-80h]
  _DWORD *v68; // [rsp+8h] [rbp-80h]
  __int64 *v69; // [rsp+8h] [rbp-80h]
  __int64 v70; // [rsp+8h] [rbp-80h]
  __int64 *v71; // [rsp+8h] [rbp-80h]
  __int64 *v72; // [rsp+8h] [rbp-80h]
  _DWORD *v73; // [rsp+8h] [rbp-80h]
  __int64 *v74; // [rsp+8h] [rbp-80h]
  _DWORD *v75; // [rsp+8h] [rbp-80h]
  _DWORD *v76; // [rsp+8h] [rbp-80h]
  __int64 v77; // [rsp+10h] [rbp-78h]
  __int64 *v78; // [rsp+10h] [rbp-78h]
  __int64 v79; // [rsp+10h] [rbp-78h]
  _DWORD *v80; // [rsp+10h] [rbp-78h]
  _DWORD *v81; // [rsp+10h] [rbp-78h]
  _DWORD *v82; // [rsp+10h] [rbp-78h]
  _DWORD *v83; // [rsp+18h] [rbp-70h]
  _DWORD *v84; // [rsp+18h] [rbp-70h]
  __int64 v85[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = a1[6];
  if ( v5 )
  {
    v6 = (*(_DWORD *)(v5 + 16))-- == 1;
    v7 = (_QWORD *)a2[10];
    if ( v6 )
    {
      if ( v7 )
      {
        v17 = *((_DWORD *)v7 - 1);
        if ( v17 == *((_DWORD *)v7 - 2) )
        {
          v59 = (3 * v17 + 1) >> 1;
          v60 = 8 * v59 + 8;
          if ( 8 * v17 + 8 >= v60 || v17 >= v59 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v85, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v85);
            sub_233E40((__int64)v85);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v61 = (unsigned int *)sub_186B300(v7 - 1, v60);
          v62 = v61[1];
          v7 = v61 + 2;
          *v61 = v59;
          a2[10] = (__int64)(v61 + 2);
          LODWORD(v61) = v62;
          v20 = &v7[v62];
          v19 = (_DWORD)v61 + 1;
        }
        else
        {
          v18 = v17;
          v19 = v17 + 1;
          v20 = &v7[v18];
        }
      }
      else
      {
        v63 = (_QWORD *)sub_186B270(0x18u);
        *v63 = 2;
        v19 = 1;
        v7 = v63 + 1;
        a2[10] = (__int64)v7;
        v20 = v7;
      }
      *v20 = v5;
      *((_DWORD *)v7 - 1) = v19;
      goto LABEL_4;
    }
    while ( v7 )
    {
LABEL_4:
      v8 = *((_DWORD *)v7 - 1);
      if ( !v8 )
        break;
      v15 = (unsigned int)(v8 - 1);
      v16 = v7[v15];
      *((_DWORD *)v7 - 1) = v15;
      sub_DE31B0((__int64)a2, v16);
      v7 = (_QWORD *)a2[10];
    }
  }
  v9 = *a1;
  a1[6] = 0;
  result = *(__int64 (__fastcall **)(__int64, __int64 *))(v9 + 56);
  if ( result == sub_DDE0D0 )
  {
    v11 = a1[5];
    if ( !v11 )
    {
LABEL_15:
      a1[5] = 0;
      return result;
    }
    if ( !*(_DWORD *)v11 )
    {
      v12 = *(_QWORD *)(v11 + 8);
      if ( v12 )
      {
        v13 = *a2;
        v6 = (*(_DWORD *)(v12 + 8))-- == 1;
        if ( v6 )
          sub_15D7BC0(v13, v12);
      }
      *(_QWORD *)(v11 + 8) = 0;
      v14 = *(__int64 **)(v11 + 16);
LABEL_12:
      if ( !v14 )
      {
LABEL_14:
        result = (__int64 (__fastcall *)(__int64, __int64 *))sub_17E9C40(a2[1], 40, v11);
        goto LABEL_15;
      }
LABEL_13:
      sub_186B220(v14);
      goto LABEL_14;
    }
    v14 = *(__int64 **)(v11 + 16);
    v21 = v14;
    v22 = &v14[2 * *(unsigned int *)(v11 + 24)];
    if ( v14 == v22 )
      goto LABEL_48;
    while ( (unsigned __int64)*v21 <= 1 )
    {
      v21 += 2;
      if ( v22 == v21 )
        goto LABEL_48;
    }
    if ( v22 != v21 )
    {
      v23 = *v21;
      v24 = (_DWORD *)v21[1];
      if ( *v21 )
        goto LABEL_37;
LABEL_27:
      if ( *(_DWORD *)v11 == 1 )
      {
LABEL_28:
        if ( v24 )
        {
          v25 = *a2;
          v6 = v24[2]-- == 1;
          if ( v6 )
            sub_15D7BC0(v25, v24);
        }
        goto LABEL_31;
      }
      while ( 1 )
      {
        if ( *v24 )
        {
          v30 = *((__int64 **)v24 + 2);
          v39 = v30;
          v40 = &v30[2 * (unsigned int)v24[6]];
          if ( v30 != v40 )
          {
            while ( (unsigned __int64)*v39 <= 1 )
            {
              v39 += 2;
              if ( v40 == v39 )
                goto LABEL_87;
            }
            if ( v40 != v39 )
            {
              v41 = *v39;
              v42 = v39[1];
              if ( !*v39 )
              {
LABEL_71:
                if ( *v24 != 1 )
                  goto LABEL_83;
LABEL_72:
                if ( v42 )
                {
                  v43 = *a2;
                  v6 = (*(_DWORD *)(v42 + 8))-- == 1;
                  if ( v6 )
                  {
                    v82 = v24;
                    v74 = v40;
                    sub_15D7BC0(v43, v42);
                    v40 = v74;
                    v24 = v82;
                  }
                }
                goto LABEL_75;
              }
              while ( 1 )
              {
                v45 = *a2;
                v6 = (*(_DWORD *)(v41 + 8))-- == 1;
                if ( !v6 )
                  goto LABEL_71;
                v83 = v24;
                v77 = v42;
                v69 = v40;
                sub_15D7BC0(v45, v41);
                v24 = v83;
                v42 = v77;
                v40 = v69;
                if ( *v83 == 1 )
                  goto LABEL_72;
LABEL_83:
                v84 = v24;
                v78 = v40;
                v70 = v42;
                sub_DE95C0(v42, a2);
                v46 = v70;
                v47 = v78;
                v48 = v84;
                v49 = *(void **)(v70 + 16);
                if ( v49 )
                {
                  v79 = v70;
                  v71 = v47;
                  sub_186B220(v49);
                  v48 = v84;
                  v46 = v79;
                  v47 = v71;
                }
                v80 = v48;
                v72 = v47;
                sub_17E9C40(a2[1], 40, v46);
                v24 = v80;
                v40 = v72;
LABEL_75:
                v44 = v39 + 2;
                if ( v40 == v39 + 2 )
                  break;
                while ( 1 )
                {
                  v41 = *v44;
                  v39 = v44;
                  if ( (unsigned __int64)*v44 > 1 )
                    break;
                  v44 += 2;
                  if ( v40 == v44 )
                    goto LABEL_86;
                }
                if ( v40 == v44 )
                  break;
                v42 = v44[1];
              }
LABEL_86:
              v30 = *((__int64 **)v24 + 2);
            }
          }
LABEL_87:
          if ( v24[7] || v24[8] )
          {
            v50 = (unsigned int)v24[6];
            v51 = &v30[2 * v50];
            if ( v51 != v30 )
            {
              v52 = v30;
              v53 = 0;
              do
              {
                while ( *v52 )
                {
                  *v52 = 0;
                  v52 += 2;
                  if ( v51 == v52 )
                    goto LABEL_94;
                }
                v52 += 2;
                ++v53;
              }
              while ( v51 != v52 );
LABEL_94:
              if ( (unsigned int)v50 > 0x10 && 3 * (int)v50 < (unsigned int)(4 * v53) )
              {
                if ( v30 )
                {
                  v73 = v24;
                  sub_186B220(v30);
                  v54 = v73[6];
                  *((_QWORD *)v73 + 2) = 0;
                  v81 = v73;
                  v54 >>= 1;
                  v73[6] = v54;
                  v55 = 2LL * v54;
                  LODWORD(v73) = v54;
                  v56 = sub_186B270(v55 * 8);
                  v24 = v81;
                  v30 = (__int64 *)v56;
                  if ( (_DWORD)v73 )
                    goto LABEL_98;
                }
                else
                {
                  v65 = (unsigned int)v50 >> 1;
                  *((_QWORD *)v24 + 2) = 0;
                  v24[6] = v65;
                  v76 = v24;
                  v55 = 2 * v65;
                  v66 = sub_186B270(16 * v65);
                  v24 = v76;
                  v30 = (__int64 *)v66;
LABEL_98:
                  v57 = &v30[v55];
                  v58 = v30;
                  if ( ((v55 * 8) & 0x10) == 0 || (v58 = v30 + 2, *(_OWORD *)v30 = 0, v30 + 2 != v57) )
                  {
                    do
                    {
                      *(_OWORD *)v58 = 0;
                      v58 += 4;
                      *((_OWORD *)v58 - 1) = 0;
                    }
                    while ( v58 != v57 );
                  }
                }
                *((_QWORD *)v24 + 2) = v30;
                *(_QWORD *)(v24 + 7) = 0;
LABEL_45:
                v68 = v24;
                sub_186B220(v30);
                v24 = v68;
                goto LABEL_46;
              }
            }
            *(_QWORD *)(v24 + 7) = 0;
          }
        }
        else
        {
          v28 = *((_QWORD *)v24 + 1);
          if ( v28 )
          {
            v29 = *a2;
            v6 = (*(_DWORD *)(v28 + 8))-- == 1;
            if ( v6 )
            {
              v75 = v24;
              sub_15D7BC0(v29, v28);
              v24 = v75;
            }
          }
          *((_QWORD *)v24 + 1) = 0;
          v30 = *((__int64 **)v24 + 2);
        }
        if ( v30 )
          goto LABEL_45;
LABEL_46:
        sub_17E9C40(a2[1], 40, v24);
LABEL_31:
        v26 = v21 + 2;
        if ( v22 == v21 + 2 )
          goto LABEL_47;
        while ( 1 )
        {
          v23 = *v26;
          v21 = v26;
          if ( (unsigned __int64)*v26 > 1 )
            break;
          v26 += 2;
          if ( v22 == v26 )
            goto LABEL_47;
        }
        if ( v22 == v26 )
        {
LABEL_47:
          v14 = *(__int64 **)(v11 + 16);
          break;
        }
        v24 = (_DWORD *)v26[1];
LABEL_37:
        v27 = *a2;
        v6 = (*(_DWORD *)(v23 + 8))-- == 1;
        if ( !v6 )
          goto LABEL_27;
        v67 = v24;
        sub_15D7BC0(v27, v23);
        v24 = v67;
        if ( *(_DWORD *)v11 == 1 )
          goto LABEL_28;
      }
    }
LABEL_48:
    if ( !*(_DWORD *)(v11 + 28) && !*(_DWORD *)(v11 + 32) )
      goto LABEL_12;
    v31 = *(unsigned int *)(v11 + 24);
    v32 = &v14[2 * v31];
    if ( v32 == v14 )
      goto LABEL_102;
    v33 = v14;
    v34 = 0;
    do
    {
      while ( *v33 )
      {
        *v33 = 0;
        v33 += 2;
        if ( v32 == v33 )
          goto LABEL_54;
      }
      v33 += 2;
      ++v34;
    }
    while ( v32 != v33 );
LABEL_54:
    if ( (unsigned int)v31 <= 0x10 || 3 * (int)v31 >= (unsigned int)(4 * v34) )
    {
LABEL_102:
      *(_QWORD *)(v11 + 28) = 0;
      goto LABEL_12;
    }
    if ( v14 )
    {
      sub_186B220(v14);
      v35 = *(_DWORD *)(v11 + 24);
      *(_QWORD *)(v11 + 16) = 0;
      v35 >>= 1;
      *(_DWORD *)(v11 + 24) = v35;
      v36 = 2LL * v35;
      v14 = (__int64 *)sub_186B270(v36 * 8);
      if ( !v35 )
      {
LABEL_61:
        *(_QWORD *)(v11 + 16) = v14;
        *(_QWORD *)(v11 + 28) = 0;
        goto LABEL_13;
      }
    }
    else
    {
      v64 = (unsigned int)v31 >> 1;
      *(_QWORD *)(v11 + 16) = 0;
      *(_DWORD *)(v11 + 24) = v64;
      v36 = 2 * v64;
      v14 = (__int64 *)sub_186B270(16 * v64);
    }
    v37 = &v14[v36];
    v38 = v14;
    if ( ((v36 * 8) & 0x10) == 0 || (v38 = v14 + 2, *(_OWORD *)v14 = 0, v14 + 2 != v37) )
    {
      do
      {
        *(_OWORD *)v38 = 0;
        v38 += 4;
        *((_OWORD *)v38 - 1) = 0;
      }
      while ( v38 != v37 );
    }
    goto LABEL_61;
  }
  return (__int64 (__fastcall *)(__int64, __int64 *))result((__int64)a1, a2);
}

