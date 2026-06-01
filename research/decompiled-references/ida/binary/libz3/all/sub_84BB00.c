__int64 __fastcall sub_84BB00(__int64 a1, __int64 a2, __int64 **a3)
{
  char **v3; // r12
  char **exception; // r12
  __int64 *v6; // r12
  __int64 *v7; // r15
  _QWORD *v8; // rbx
  unsigned int v9; // r13d
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // edi
  unsigned int v16; // edx
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 *v19; // r9
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 *v26; // rcx
  __int64 v27; // rsi
  __int64 *v28; // r12
  __int64 *v29; // r15
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 *v33; // rcx
  __int64 v34; // rax
  int v35; // edi
  unsigned int v36; // edx
  __int64 *v37; // rsi
  __int64 v38; // rdx
  __int64 *v39; // r9
  __int64 *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // rdi
  __int64 v44; // r12
  int v45; // eax
  __int64 result; // rax
  __int64 *v47; // rbp
  unsigned __int64 v48; // r12
  __int64 v49; // rsi
  unsigned int v51; // eax
  unsigned int v52; // edx
  __int64 v53; // rax
  unsigned int v54; // ecx
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rax
  __int64 v58; // r14
  unsigned int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  __int64 *v62; // rcx
  __int64 v63; // rax
  _QWORD *v64; // rbx
  unsigned int v65; // ecx
  size_t v66; // rsi
  unsigned int *v67; // rax
  _QWORD *v68; // rbx
  unsigned int v69; // [rsp+Ch] [rbp-8Ch]
  unsigned int v70; // [rsp+Ch] [rbp-8Ch]
  __int64 v71; // [rsp+10h] [rbp-88h]
  __int64 v73[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = *a3;
  v71 = *(_QWORD *)(a1 + 16);
  if ( !*a3 )
    goto LABEL_91;
  v7 = &v6[*((unsigned int *)v6 - 1)];
  if ( v6 == v7 )
    goto LABEL_91;
  v8 = nullptr;
  v9 = -1;
  do
  {
    v10 = *v6;
    v11 = sub_792250(*(_QWORD *)a1);
    v13 = *(__int64 **)v11;
    v14 = *(unsigned int *)(v11 + 8);
    v15 = *(_DWORD *)(v10 + 12);
    v16 = v14 - 1;
    v14 *= 16;
    v17 = (__int64 *)((char *)v13 + v14);
    v18 = 16LL * (v15 & v16);
    v19 = (__int64 *)((char *)v13 + v18);
    if ( v18 == v14 )
    {
LABEL_51:
      while ( v19 != v13 )
      {
        v53 = *v13;
        if ( (unsigned __int64)*v13 > 1 )
        {
          if ( *(_DWORD *)(v53 + 12) == v15 && v10 == v53 )
          {
            v20 = v13;
            goto LABEL_45;
          }
        }
        else if ( !v53 )
        {
          break;
        }
        v13 += 2;
      }
LABEL_11:
      v21 = sub_15E1B70(*(_QWORD *)(a1 + 16));
      v22 = v21;
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      if ( v8 )
      {
        v23 = *((_DWORD *)v8 - 1);
        if ( v23 == *((_DWORD *)v8 - 2) )
        {
          v54 = (3 * v23 + 1) >> 1;
          v55 = 8 * v54 + 8;
          if ( 8 * v23 + 8 >= (unsigned int)v55 || v23 >= v54 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v73, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v73);
            sub_233E40((__int64)v73);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v69 = (3 * v23 + 1) >> 1;
          v56 = (unsigned int *)sub_186B300(v8 - 1, v55);
          v8 = v56 + 2;
          *v56 = v69;
          LODWORD(v56) = v56[1];
          v26 = &v8[(unsigned int)v56];
          v25 = (_DWORD)v56 + 1;
        }
        else
        {
          v24 = v23;
          v25 = v23 + 1;
          v26 = &v8[v24];
        }
      }
      else
      {
        v64 = (_QWORD *)sub_186B270(0x18u);
        *v64 = 2;
        v25 = 1;
        v8 = v64 + 1;
        v26 = v8;
      }
      *v26 = v22;
      *((_DWORD *)v8 - 1) = v25;
      goto LABEL_17;
    }
    v20 = (__int64 *)((char *)v13 + v18);
    while ( 1 )
    {
      v18 = *v20;
      if ( (unsigned __int64)*v20 > 1 )
        break;
      if ( !v18 )
        goto LABEL_11;
LABEL_8:
      v20 += 2;
      if ( v17 == v20 )
        goto LABEL_51;
    }
    if ( *(_DWORD *)(v18 + 12) != v15 || v10 != v18 )
      goto LABEL_8;
LABEL_45:
    v51 = sub_13C34A0(v20[1], v17, v18, v13, v12, v19);
    v52 = *(_DWORD *)(a1 + 260);
    if ( v9 > v51 )
      v9 = v51;
    if ( v52 < v51 )
      v52 = v51;
    *(_DWORD *)(a1 + 260) = v52;
    if ( *(_DWORD *)(a1 + 256) >= v51 )
      goto LABEL_11;
LABEL_17:
    ++v6;
  }
  while ( v7 != v6 );
  if ( v8 )
  {
    v27 = *((unsigned int *)v8 - 1);
    if ( !(_DWORD)v27 )
    {
      v28 = *a3;
      if ( *a3 )
      {
        v29 = &v28[*((unsigned int *)v28 - 1)];
        if ( v28 != v29 )
          goto LABEL_22;
      }
    }
    goto LABEL_32;
  }
  v28 = *a3;
  if ( !*a3 )
    goto LABEL_91;
  v29 = &v28[*((unsigned int *)v28 - 1)];
  if ( v29 == v28 )
    goto LABEL_91;
LABEL_22:
  while ( 2 )
  {
    while ( 2 )
    {
      v30 = *v28;
      v31 = sub_792250(*(_QWORD *)a1);
      v33 = *(__int64 **)v31;
      v34 = *(unsigned int *)(v31 + 8);
      v35 = *(_DWORD *)(v30 + 12);
      v36 = v34 - 1;
      v34 *= 16;
      v37 = (__int64 *)((char *)v33 + v34);
      v38 = 16LL * (v35 & v36);
      v39 = (__int64 *)((char *)v33 + v38);
      if ( v38 == v34 )
      {
LABEL_74:
        if ( v33 != v39 )
        {
          while ( 1 )
          {
            v63 = *v33;
            if ( (unsigned __int64)*v33 > 1 )
            {
              if ( *(_DWORD *)(v63 + 12) == v35 && v30 == v63 )
              {
                v40 = v33;
                goto LABEL_66;
              }
            }
            else if ( !v63 )
            {
              if ( v29 == ++v28 )
                goto LABEL_30;
              goto LABEL_22;
            }
            v33 += 2;
            if ( v39 == v33 )
              goto LABEL_29;
          }
        }
        goto LABEL_29;
      }
      v40 = (__int64 *)((char *)v33 + v38);
      while ( 1 )
      {
        v38 = *v40;
        if ( (unsigned __int64)*v40 > 1 )
          break;
        if ( !v38 )
          goto LABEL_29;
LABEL_26:
        v40 += 2;
        if ( v37 == v40 )
          goto LABEL_74;
      }
      if ( *(_DWORD *)(v38 + 12) != v35 || v30 != v38 )
        goto LABEL_26;
LABEL_66:
      if ( v9 < (unsigned int)sub_13C34A0(v40[1], v37, v38, v33, v32, v39) )
      {
LABEL_29:
        if ( v29 == ++v28 )
          goto LABEL_30;
        continue;
      }
      break;
    }
    v57 = sub_15E1B70(*(_QWORD *)(a1 + 16));
    v58 = v57;
    if ( v57 )
      ++*(_DWORD *)(v57 + 8);
    if ( v8 )
    {
      v59 = *((_DWORD *)v8 - 1);
      if ( v59 == *((_DWORD *)v8 - 2) )
      {
        v65 = (3 * v59 + 1) >> 1;
        v66 = 8 * v65 + 8;
        if ( 8 * v59 + 8 >= (unsigned int)v66 || v59 >= v65 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v73, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v73);
          sub_233E40((__int64)v73);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v70 = (3 * v59 + 1) >> 1;
        v67 = (unsigned int *)sub_186B300(v8 - 1, v66);
        v8 = v67 + 2;
        *v67 = v70;
        LODWORD(v67) = v67[1];
        v62 = &v8[(unsigned int)v67];
        v61 = (_DWORD)v67 + 1;
      }
      else
      {
        v60 = v59;
        v61 = v59 + 1;
        v62 = &v8[v60];
      }
    }
    else
    {
      v68 = (_QWORD *)sub_186B270(0x18u);
      *v68 = 2;
      v61 = 1;
      v8 = v68 + 1;
      v62 = v8;
    }
    ++v28;
    *v62 = v58;
    *((_DWORD *)v8 - 1) = v61;
    if ( v29 != v28 )
      continue;
    break;
  }
LABEL_30:
  if ( v8 )
  {
    v27 = *((unsigned int *)v8 - 1);
    goto LABEL_32;
  }
LABEL_91:
  v8 = nullptr;
  v27 = 0;
LABEL_32:
  v41 = sub_15EC240(v71, v27);
  v42 = *(_QWORD *)(a1 + 16);
  v43 = *(_QWORD *)(a1 + 192);
  v44 = v41;
  if ( v41 )
  {
    *(_DWORD *)(v41 + 8) += 2;
    sub_E5EBF0(v43, v41);
    v45 = *(_DWORD *)(v44 + 8) - 1;
    *(_DWORD *)(v44 + 8) = v45;
    if ( v45 )
    {
      result = (unsigned int)(v45 - 1);
      *(_DWORD *)(v44 + 8) = result;
      if ( (_DWORD)result )
        goto LABEL_35;
LABEL_62:
      result = sub_15D7BC0(v71, v44);
    }
    else
    {
      sub_15D7BC0(v42, v44);
      result = (unsigned int)(*(_DWORD *)(v44 + 8) - 1);
      *(_DWORD *)(v44 + 8) = result;
      if ( !(_DWORD)result )
        goto LABEL_62;
    }
  }
  else
  {
    result = sub_E5EBF0(v43, 0);
  }
LABEL_35:
  if ( v8 )
  {
    v47 = v8;
    v48 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
    if ( (unsigned __int64)v8 < v48 )
    {
      do
      {
        while ( 1 )
        {
          v49 = *v47;
          if ( *v47 )
          {
            if ( (*(_DWORD *)(v49 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v47 >= v48 )
            return sub_186B220(v8 - 1);
        }
        ++v47;
        sub_15D7BC0(v71, v49);
      }
      while ( (unsigned __int64)v47 < v48 );
    }
    return sub_186B220(v8 - 1);
  }
  return result;
}

