__int64 (__fastcall *__fastcall sub_DE5300(_QWORD *a1, __int64 *a2))(__int64 a1, __int64 *a2)
{
  char **exception; // rbx
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 *v7; // r14
  __int64 v8; // r12
  bool v9; // zf
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 (__fastcall *result)(__int64, __int64 *); // rax
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 *v19; // rdi
  unsigned int v20; // r15d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rcx
  __int64 *v24; // rbx
  __int64 *v25; // r14
  __int64 v26; // rsi
  _DWORD *v27; // rcx
  __int64 v28; // rdi
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 *v33; // rdi
  __int64 v34; // rsi
  __int64 *v35; // rdx
  __int64 *v36; // rax
  int v37; // ecx
  unsigned int v38; // r12d
  size_t v39; // rbx
  __int64 *v40; // rdx
  __int64 *v41; // rax
  _QWORD *v42; // rax
  __int64 *v43; // r12
  __int64 *v44; // r8
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 *v51; // r8
  _DWORD *v52; // rcx
  void *v53; // rdi
  __int64 v54; // r8
  __int64 *v55; // rdx
  __int64 *v56; // rax
  int v57; // esi
  unsigned int v58; // edx
  size_t v59; // r12
  __int64 v60; // rax
  __int64 *v61; // rdx
  __int64 *v62; // rax
  size_t v63; // rsi
  size_t v64; // r8
  __int64 v65; // rax
  _DWORD *v66; // [rsp+8h] [rbp-80h]
  _DWORD *v67; // [rsp+8h] [rbp-80h]
  __int64 *v68; // [rsp+8h] [rbp-80h]
  __int64 v69; // [rsp+8h] [rbp-80h]
  __int64 *v70; // [rsp+8h] [rbp-80h]
  __int64 *v71; // [rsp+8h] [rbp-80h]
  _DWORD *v72; // [rsp+8h] [rbp-80h]
  __int64 *v73; // [rsp+8h] [rbp-80h]
  _DWORD *v74; // [rsp+8h] [rbp-80h]
  _DWORD *v75; // [rsp+8h] [rbp-80h]
  __int64 v76; // [rsp+10h] [rbp-78h]
  __int64 *v77; // [rsp+10h] [rbp-78h]
  __int64 v78; // [rsp+10h] [rbp-78h]
  _DWORD *v79; // [rsp+10h] [rbp-78h]
  _DWORD *v80; // [rsp+10h] [rbp-78h]
  _DWORD *v81; // [rsp+10h] [rbp-78h]
  _DWORD *v82; // [rsp+18h] [rbp-70h]
  _DWORD *v83; // [rsp+18h] [rbp-70h]
  __int64 v84[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = (__int64 *)a1[6];
  if ( v5 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( (_DWORD)v6 )
    {
      v7 = &v5[v6];
      do
      {
        while ( 1 )
        {
          v8 = *v5;
          v9 = (*(_DWORD *)(*v5 + 16))-- == 1;
          if ( v9 )
            break;
          if ( ++v5 == v7 )
            goto LABEL_10;
        }
        v10 = (_QWORD *)a2[10];
        if ( v10 )
        {
          v11 = *((_DWORD *)v10 - 1);
          if ( v11 == *((_DWORD *)v10 - 2) )
          {
            v20 = (3 * v11 + 1) >> 1;
            v21 = 8 * v20 + 8;
            if ( 8 * v11 + 8 >= (unsigned int)v21 || v11 >= v20 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v84, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v84);
              sub_233E40((__int64)v84);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v22 = (unsigned int *)sub_186B300(v10 - 1, v21);
            v23 = v22[1];
            v10 = v22 + 2;
            *v22 = v20;
            a2[10] = (__int64)(v22 + 2);
            LODWORD(v22) = v23;
            v14 = &v10[v23];
            v13 = (_DWORD)v22 + 1;
          }
          else
          {
            v12 = v11;
            v13 = v11 + 1;
            v14 = &v10[v12];
          }
        }
        else
        {
          v42 = (_QWORD *)sub_186B270(0x18u);
          v10 = v42 + 1;
          *v42 = 2;
          v13 = 1;
          a2[10] = (__int64)v10;
          v14 = v10;
        }
        ++v5;
        *v14 = v8;
        *((_DWORD *)v10 - 1) = v13;
      }
      while ( v5 != v7 );
    }
  }
LABEL_10:
  result = *(__int64 (__fastcall **)(__int64, __int64 *))(*a1 + 56LL);
  if ( result == sub_DDE0D0 )
  {
    v16 = a1[5];
    if ( !v16 )
    {
LABEL_20:
      a1[5] = 0;
      return result;
    }
    if ( !*(_DWORD *)v16 )
    {
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 )
      {
        v18 = *a2;
        v9 = (*(_DWORD *)(v17 + 8))-- == 1;
        if ( v9 )
          sub_15D7BC0(v18, v17);
      }
      *(_QWORD *)(v16 + 8) = 0;
      v19 = *(__int64 **)(v16 + 16);
LABEL_17:
      if ( !v19 )
      {
LABEL_19:
        result = (__int64 (__fastcall *)(__int64, __int64 *))sub_17E9C40(a2[1], 40, v16);
        goto LABEL_20;
      }
LABEL_18:
      sub_186B220(v19);
      goto LABEL_19;
    }
    v19 = *(__int64 **)(v16 + 16);
    v24 = v19;
    v25 = &v19[2 * *(unsigned int *)(v16 + 24)];
    if ( v19 == v25 )
      goto LABEL_51;
    while ( (unsigned __int64)*v24 <= 1 )
    {
      v24 += 2;
      if ( v25 == v24 )
        goto LABEL_51;
    }
    if ( v25 != v24 )
    {
      v26 = *v24;
      v27 = (_DWORD *)v24[1];
      if ( *v24 )
        goto LABEL_40;
LABEL_30:
      if ( *(_DWORD *)v16 == 1 )
      {
LABEL_31:
        if ( v27 )
        {
          v28 = *a2;
          v9 = v27[2]-- == 1;
          if ( v9 )
            sub_15D7BC0(v28, v27);
        }
        goto LABEL_34;
      }
      while ( 1 )
      {
        if ( *v27 )
        {
          v33 = *((__int64 **)v27 + 2);
          v43 = v33;
          v44 = &v33[2 * (unsigned int)v27[6]];
          if ( v33 != v44 )
          {
            while ( (unsigned __int64)*v43 <= 1 )
            {
              v43 += 2;
              if ( v44 == v43 )
                goto LABEL_91;
            }
            if ( v44 != v43 )
            {
              v45 = *v43;
              v46 = v43[1];
              if ( !*v43 )
              {
LABEL_75:
                if ( *v27 != 1 )
                  goto LABEL_87;
LABEL_76:
                if ( v46 )
                {
                  v47 = *a2;
                  v9 = (*(_DWORD *)(v46 + 8))-- == 1;
                  if ( v9 )
                  {
                    v81 = v27;
                    v73 = v44;
                    sub_15D7BC0(v47, v46);
                    v44 = v73;
                    v27 = v81;
                  }
                }
                goto LABEL_79;
              }
              while ( 1 )
              {
                v49 = *a2;
                v9 = (*(_DWORD *)(v45 + 8))-- == 1;
                if ( !v9 )
                  goto LABEL_75;
                v82 = v27;
                v76 = v46;
                v68 = v44;
                sub_15D7BC0(v49, v45);
                v27 = v82;
                v46 = v76;
                v44 = v68;
                if ( *v82 == 1 )
                  goto LABEL_76;
LABEL_87:
                v83 = v27;
                v77 = v44;
                v69 = v46;
                sub_DE95C0(v46, a2);
                v50 = v69;
                v51 = v77;
                v52 = v83;
                v53 = *(void **)(v69 + 16);
                if ( v53 )
                {
                  v78 = v69;
                  v70 = v51;
                  sub_186B220(v53);
                  v52 = v83;
                  v50 = v78;
                  v51 = v70;
                }
                v79 = v52;
                v71 = v51;
                sub_17E9C40(a2[1], 40, v50);
                v27 = v79;
                v44 = v71;
LABEL_79:
                v48 = v43 + 2;
                if ( v44 == v43 + 2 )
                  break;
                while ( 1 )
                {
                  v45 = *v48;
                  v43 = v48;
                  if ( (unsigned __int64)*v48 > 1 )
                    break;
                  v48 += 2;
                  if ( v44 == v48 )
                    goto LABEL_90;
                }
                if ( v44 == v48 )
                  break;
                v46 = v48[1];
              }
LABEL_90:
              v33 = *((__int64 **)v27 + 2);
            }
          }
LABEL_91:
          if ( v27[7] || v27[8] )
          {
            v54 = (unsigned int)v27[6];
            v55 = &v33[2 * v54];
            if ( v55 != v33 )
            {
              v56 = v33;
              v57 = 0;
              do
              {
                while ( *v56 )
                {
                  *v56 = 0;
                  v56 += 2;
                  if ( v55 == v56 )
                    goto LABEL_98;
                }
                v56 += 2;
                ++v57;
              }
              while ( v55 != v56 );
LABEL_98:
              if ( (unsigned int)v54 > 0x10 && 3 * (int)v54 < (unsigned int)(4 * v57) )
              {
                if ( v33 )
                {
                  v72 = v27;
                  sub_186B220(v33);
                  v58 = v72[6];
                  *((_QWORD *)v72 + 2) = 0;
                  v80 = v72;
                  v58 >>= 1;
                  v72[6] = v58;
                  v59 = 2LL * v58;
                  LODWORD(v72) = v58;
                  v60 = sub_186B270(v59 * 8);
                  v27 = v80;
                  v33 = (__int64 *)v60;
                  if ( (_DWORD)v72 )
                    goto LABEL_102;
                }
                else
                {
                  v64 = (unsigned int)v54 >> 1;
                  *((_QWORD *)v27 + 2) = 0;
                  v27[6] = v64;
                  v75 = v27;
                  v59 = 2 * v64;
                  v65 = sub_186B270(16 * v64);
                  v27 = v75;
                  v33 = (__int64 *)v65;
LABEL_102:
                  v61 = &v33[v59];
                  v62 = v33;
                  if ( ((v59 * 8) & 0x10) == 0 || (v62 = v33 + 2, *(_OWORD *)v33 = 0, v33 + 2 != v61) )
                  {
                    do
                    {
                      *(_OWORD *)v62 = 0;
                      v62 += 4;
                      *((_OWORD *)v62 - 1) = 0;
                    }
                    while ( v62 != v61 );
                  }
                }
                *((_QWORD *)v27 + 2) = v33;
                *(_QWORD *)(v27 + 7) = 0;
LABEL_48:
                v67 = v27;
                sub_186B220(v33);
                v27 = v67;
                goto LABEL_49;
              }
            }
            *(_QWORD *)(v27 + 7) = 0;
          }
        }
        else
        {
          v31 = *((_QWORD *)v27 + 1);
          if ( v31 )
          {
            v32 = *a2;
            v9 = (*(_DWORD *)(v31 + 8))-- == 1;
            if ( v9 )
            {
              v74 = v27;
              sub_15D7BC0(v32, v31);
              v27 = v74;
            }
          }
          *((_QWORD *)v27 + 1) = 0;
          v33 = *((__int64 **)v27 + 2);
        }
        if ( v33 )
          goto LABEL_48;
LABEL_49:
        sub_17E9C40(a2[1], 40, v27);
LABEL_34:
        v29 = v24 + 2;
        if ( v25 == v24 + 2 )
          goto LABEL_50;
        while ( 1 )
        {
          v26 = *v29;
          v24 = v29;
          if ( (unsigned __int64)*v29 > 1 )
            break;
          v29 += 2;
          if ( v25 == v29 )
            goto LABEL_50;
        }
        if ( v25 == v29 )
        {
LABEL_50:
          v19 = *(__int64 **)(v16 + 16);
          break;
        }
        v27 = (_DWORD *)v29[1];
LABEL_40:
        v30 = *a2;
        v9 = (*(_DWORD *)(v26 + 8))-- == 1;
        if ( !v9 )
          goto LABEL_30;
        v66 = v27;
        sub_15D7BC0(v30, v26);
        v27 = v66;
        if ( *(_DWORD *)v16 == 1 )
          goto LABEL_31;
      }
    }
LABEL_51:
    if ( !*(_DWORD *)(v16 + 28) && !*(_DWORD *)(v16 + 32) )
      goto LABEL_17;
    v34 = *(unsigned int *)(v16 + 24);
    v35 = &v19[2 * v34];
    if ( v35 == v19 )
      goto LABEL_106;
    v36 = v19;
    v37 = 0;
    do
    {
      while ( *v36 )
      {
        *v36 = 0;
        v36 += 2;
        if ( v35 == v36 )
          goto LABEL_57;
      }
      v36 += 2;
      ++v37;
    }
    while ( v35 != v36 );
LABEL_57:
    if ( (unsigned int)v34 <= 0x10 || 3 * (int)v34 >= (unsigned int)(4 * v37) )
    {
LABEL_106:
      *(_QWORD *)(v16 + 28) = 0;
      goto LABEL_17;
    }
    if ( v19 )
    {
      sub_186B220(v19);
      v38 = *(_DWORD *)(v16 + 24);
      *(_QWORD *)(v16 + 16) = 0;
      v38 >>= 1;
      *(_DWORD *)(v16 + 24) = v38;
      v39 = 2LL * v38;
      v19 = (__int64 *)sub_186B270(v39 * 8);
      if ( !v38 )
      {
LABEL_64:
        *(_QWORD *)(v16 + 16) = v19;
        *(_QWORD *)(v16 + 28) = 0;
        goto LABEL_18;
      }
    }
    else
    {
      v63 = (unsigned int)v34 >> 1;
      *(_QWORD *)(v16 + 16) = 0;
      *(_DWORD *)(v16 + 24) = v63;
      v39 = 2 * v63;
      v19 = (__int64 *)sub_186B270(16 * v63);
    }
    v40 = &v19[v39];
    v41 = v19;
    if ( ((v39 * 8) & 0x10) == 0 || (v41 = v19 + 2, *(_OWORD *)v19 = 0, v19 + 2 != v40) )
    {
      do
      {
        *(_OWORD *)v41 = 0;
        v41 += 4;
        *((_OWORD *)v41 - 1) = 0;
      }
      while ( v41 != v40 );
    }
    goto LABEL_64;
  }
  return (__int64 (__fastcall *)(__int64, __int64 *))result((__int64)a1, a2);
}

