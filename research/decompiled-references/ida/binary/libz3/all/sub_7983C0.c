__int64 __fastcall sub_7983C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  int v6; // edi
  unsigned int v7; // edx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64, int *, __int64, __int64 *, __int64 *); // rax
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // rax
  int v20; // edi
  unsigned int v21; // edx
  __int64 *v22; // rsi
  __int64 v23; // rdx
  __int64 *v24; // r8
  __int64 *i; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 *v31; // rcx
  __int64 v32; // rax
  int v33; // r9d
  __int64 *v34; // rbx
  size_t v35; // r15
  unsigned int v36; // r8d
  __int64 v37; // r13
  int v38; // ecx
  __int64 v39; // r8
  __int64 *v40; // rdi
  __int64 *v41; // rax
  __int64 *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 *v45; // rax
  __int64 v46; // rdx
  __int64 *v47; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // r13d
  unsigned int v53; // ecx
  unsigned int *v54; // rax
  __int64 v55; // rcx
  __int64 *v56; // rax
  int v57; // ecx
  __int64 *v58; // r14
  __int64 *v59; // r9
  __int64 v60; // rax
  __int64 *v61; // rdx
  __int64 *v62; // rax
  _QWORD *v63; // rdx
  char **exception; // rbx
  int v65; // [rsp+0h] [rbp-78h]
  unsigned int v66; // [rsp+0h] [rbp-78h]
  int v67; // [rsp+8h] [rbp-70h]
  int v68; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v69[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *(unsigned int *)(a1 + 32);
  v5 = *(__int64 **)(a1 + 24);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = v4 - 1;
  v4 *= 16;
  v8 = (__int64 *)((char *)v5 + v4);
  v9 = 16LL * (v6 & v7);
  v10 = &v5[(unsigned __int64)v9 / 8];
  if ( v9 == v4 )
  {
LABEL_36:
    if ( v5 != v10 )
    {
      while ( 1 )
      {
        v49 = *v5;
        if ( (unsigned __int64)*v5 > 1 )
        {
          if ( *(_DWORD *)(v49 + 12) == v6 && a2 == v49 )
          {
            v11 = v5;
            goto LABEL_30;
          }
        }
        else if ( !v49 )
        {
          goto LABEL_8;
        }
        v5 += 2;
        if ( v10 == v5 )
          goto LABEL_8;
      }
    }
    goto LABEL_8;
  }
  v11 = &v5[(unsigned __int64)v9 / 8];
  while ( 1 )
  {
    v12 = *v11;
    if ( (unsigned __int64)*v11 > 1 )
      break;
    if ( !v12 )
      goto LABEL_8;
LABEL_5:
    v11 += 2;
    if ( v8 == v11 )
      goto LABEL_36;
  }
  if ( *(_DWORD *)(v12 + 12) != v6 || a2 != v12 )
    goto LABEL_5;
LABEL_30:
  v44 = v11[1];
  if ( !*(_DWORD *)(v44 + 12) )
  {
LABEL_8:
    v13 = *(_QWORD *)a1;
    v68 = 0;
    v14 = *(__int64 (__fastcall **)(__int64, int *, __int64, __int64 *, __int64 *))(v13 + 56);
    if ( (char *)v14 != (char *)sub_797F40 )
      return v14(a1, &v68, a2, v5, v10);
    v15 = sub_796F80(a1, a2);
    v16 = (*(__int64 (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)a1 + 48LL))(a1, &v68, a2);
    v17 = *(__int64 **)v15;
    v18 = v16;
    v19 = *(unsigned int *)(v15 + 8);
    v20 = *(_DWORD *)(v18 + 12);
    v21 = v19 - 1;
    v19 *= 8;
    v22 = (__int64 *)(*(_QWORD *)v15 + v19);
    v23 = 8LL * (v20 & v21);
    v24 = (__int64 *)(*(_QWORD *)v15 + v23);
    if ( v23 != v19 )
    {
      for ( i = (__int64 *)(*(_QWORD *)v15 + v23); v22 != i; ++i )
      {
        v26 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v26 + 12) == v20 && v18 == v26 )
            return v18;
        }
        else if ( !v26 )
        {
          goto LABEL_16;
        }
      }
    }
    for ( ; v24 != v17; ++v17 )
    {
      v50 = *v17;
      if ( (unsigned __int64)*v17 > 1 )
      {
        if ( *(_DWORD *)(v50 + 12) == v20 && v18 == v50 )
          return v18;
      }
      else if ( !v50 )
      {
        break;
      }
    }
LABEL_16:
    v27 = *(_QWORD **)(a1 + 56);
    ++*(_DWORD *)(v18 + 8);
    if ( v27 )
    {
      v28 = *((_DWORD *)v27 - 1);
      if ( v28 == *((_DWORD *)v27 - 2) )
      {
        v52 = (3 * v28 + 1) >> 1;
        v53 = 8 * v52 + 8;
        if ( 8 * v28 + 8 >= v53 || v28 >= v52 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v69, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v69);
          sub_233E40((__int64)v69);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v54 = (unsigned int *)sub_186B300(v27 - 1, v53);
        v55 = v54[1];
        v27 = v54 + 2;
        *v54 = v52;
        *(_QWORD *)(a1 + 56) = v54 + 2;
        LODWORD(v54) = v55;
        v31 = &v27[v55];
        v30 = (_DWORD)v54 + 1;
      }
      else
      {
        v29 = v28;
        v30 = v28 + 1;
        v31 = &v27[v29];
      }
    }
    else
    {
      v63 = (_QWORD *)sub_186B270(0x18u);
      *v63 = 2;
      v30 = 1;
      v27 = v63 + 1;
      *(_QWORD *)(a1 + 56) = v27;
      v31 = v27;
    }
    *v31 = v18;
    *((_DWORD *)v27 - 1) = v30;
    v32 = *(unsigned int *)(v15 + 8);
    v33 = *(_DWORD *)(v15 + 16);
    if ( 3 * (int)v32 < (unsigned int)(4 * (v33 + *(_DWORD *)(v15 + 12))) )
    {
      v65 = 2 * v32;
      v35 = 8LL * (unsigned int)(2 * v32);
      v56 = (__int64 *)sub_186B270(v35);
      v57 = v65;
      v34 = v56;
      if ( v65 )
      {
        memset(v56, 0, v35);
        v57 = v65;
      }
      v58 = *(__int64 **)v15;
      v36 = v57 - 1;
      v37 = (__int64)&v34[v35 / 8];
      v59 = (__int64 *)(*(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8));
      if ( *(__int64 **)v15 != v59 )
      {
        do
        {
          if ( (unsigned __int64)*v58 > 1 )
          {
            v60 = 8LL * (*(_DWORD *)(*v58 + 12) & v36);
            v61 = &v34[(unsigned __int64)v60 / 8];
            if ( v35 == v60 )
            {
LABEL_79:
              if ( v34 == v61 )
              {
LABEL_88:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v62 = v34;
              while ( *v62 )
              {
                if ( v61 == ++v62 )
                  goto LABEL_88;
              }
            }
            else
            {
              v62 = &v34[(unsigned __int64)v60 / 8];
              while ( *v62 )
              {
                if ( (__int64 *)v37 == ++v62 )
                  goto LABEL_79;
              }
            }
            *v62 = *v58;
          }
          ++v58;
        }
        while ( v59 != v58 );
        v59 = *(__int64 **)v15;
      }
      if ( v59 )
      {
        v67 = v57;
        v66 = v57 - 1;
        sub_186B220(v59);
        v57 = v67;
        v36 = v66;
      }
      *(_QWORD *)v15 = v34;
      v33 = 0;
      *(_DWORD *)(v15 + 8) = v57;
      *(_DWORD *)(v15 + 16) = 0;
    }
    else
    {
      v34 = *(__int64 **)v15;
      v35 = 8 * v32;
      v36 = v32 - 1;
      v37 = *(_QWORD *)v15 + 8 * v32;
    }
    v38 = *(_DWORD *)(v18 + 12);
    v39 = v38 & v36;
    v40 = &v34[v39];
    if ( 8 * v39 != v35 )
    {
      v41 = &v34[v39];
      v42 = nullptr;
      while ( 1 )
      {
        v43 = *v41;
        if ( (unsigned __int64)*v41 > 1 )
        {
          if ( *(_DWORD *)(v43 + 12) == v38 && v18 == v43 )
          {
            *v41 = v18;
            return v18;
          }
        }
        else
        {
          if ( !v43 )
          {
            if ( v42 )
              goto LABEL_85;
            v42 = v41;
            goto LABEL_86;
          }
          v42 = v41;
        }
        if ( ++v41 == (__int64 *)v37 )
          goto LABEL_55;
      }
    }
    v42 = nullptr;
    while ( 1 )
    {
LABEL_55:
      if ( v40 == v34 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v51 = *v34;
      if ( (unsigned __int64)*v34 > 1 )
      {
        if ( *(_DWORD *)(v51 + 12) == v38 && v18 == v51 )
        {
          *v34 = v18;
          return v18;
        }
      }
      else
      {
        if ( !v51 )
        {
          if ( v42 )
LABEL_85:
            *(_DWORD *)(v15 + 16) = v33 - 1;
          else
            v42 = v34;
LABEL_86:
          *v42 = v18;
          ++*(_DWORD *)(v15 + 12);
          return v18;
        }
        v42 = v34;
      }
      ++v34;
    }
  }
  v45 = *(__int64 **)v44;
  v46 = *(_QWORD *)v44 + 8LL * *(unsigned int *)(v44 + 8);
  if ( v45 == (__int64 *)v46 )
    return *v45;
  while ( 1 )
  {
    v18 = *v45;
    v47 = v45;
    if ( (unsigned __int64)*v45 > 1 )
      break;
    if ( (__int64 *)v46 == ++v45 )
      return v47[1];
  }
  return v18;
}

