__int64 __fastcall sub_DAC7E0(_QWORD *a1, unsigned __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *i; // rax
  __int64 v7; // rax
  unsigned int *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // esi
  unsigned int v17; // r8d
  char *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rcx
  _DWORD *v24; // rax
  __int64 v25; // rbp
  unsigned int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  __int64 *v29; // rdx
  __int64 result; // rax
  __int64 v31; // rsi
  bool v32; // zf
  __int64 *v33; // rbp
  unsigned __int64 v34; // r12
  __int64 v35; // rsi
  unsigned int v36; // edx
  size_t v37; // rsi
  unsigned int *v38; // rax
  char *v39; // rcx
  char *v40; // rdi
  __int64 v41; // rax
  unsigned int v42; // esi
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  char *v46; // rdi
  __int64 v47; // r10
  unsigned int v48; // edx
  size_t v49; // rsi
  unsigned int v50; // eax
  __int64 v51; // rax
  char **v52; // r13
  _QWORD *v53; // rax
  char **exception; // r13
  char **v55; // r13
  __int64 v56; // [rsp+8h] [rbp-120h]
  unsigned int v57; // [rsp+10h] [rbp-118h]
  int v58; // [rsp+10h] [rbp-118h]
  __int64 v59; // [rsp+10h] [rbp-118h]
  char *v60; // [rsp+18h] [rbp-110h]
  __int64 v61; // [rsp+18h] [rbp-110h]
  unsigned int v62; // [rsp+18h] [rbp-110h]
  char *v64; // [rsp+28h] [rbp-100h]
  __int64 v65[4]; // [rsp+40h] [rbp-E8h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h]
  unsigned int v67; // [rsp+68h] [rbp-C0h]
  unsigned int v68; // [rsp+6Ch] [rbp-BCh]
  _QWORD v69[23]; // [rsp+70h] [rbp-B8h] BYREF

  v4 = nullptr;
  v56 = a3[1];
  v5 = *(_QWORD *)a2;
  LODWORD(a2) = 1;
  ptr = v69;
  v68 = 16;
  v69[0] = v5;
  for ( i = v69; ; i = ptr )
  {
    v7 = i[(unsigned int)(a2 - 1)];
    v67 = a2 - 1;
    v8 = (unsigned int *)(v7 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v7 & 1) != 0 )
    {
      v21 = sub_DABD60((unsigned __int64)a1, v7 & 0xFFFFFFFFFFFFFFFELL);
      v22 = a1[1];
      v23 = v21;
      if ( *(_WORD *)(v21 + 4) || (v24 = *(_DWORD **)(*(_QWORD *)(v21 + 16) + 24LL)) == nullptr || *v24 || v24[1] != 8 )
      {
        if ( v23 == *(_QWORD *)(v22 + 856) )
          v25 = *(_QWORD *)(v22 + 864);
        else
          v25 = sub_15E1A70(v22);
      }
      else
      {
        v25 = *(_QWORD *)(v23 + 32);
      }
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      if ( v4 )
      {
        v26 = *((_DWORD *)v4 - 1);
        if ( v26 == *((_DWORD *)v4 - 2) )
        {
          v48 = (3 * v26 + 1) >> 1;
          v49 = 8 * v48 + 8;
          if ( 8 * v26 + 8 >= (unsigned int)v49 || v26 >= v48 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v65, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v65);
            sub_233E40((__int64)v65);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v57 = (3 * v26 + 1) >> 1;
          v38 = (unsigned int *)sub_186B300(v4 - 1, v49);
          goto LABEL_80;
        }
        goto LABEL_29;
      }
      goto LABEL_91;
    }
    if ( (_BYTE)byte_1C7EDE8 || !__cxa_guard_acquire(&byte_1C7EDE8) )
    {
      if ( (_BYTE)byte_1C7EDD8 )
        goto LABEL_5;
    }
    else
    {
      qword_1C7EDF0 = 0;
      __cxa_guard_release(&byte_1C7EDE8);
      if ( (_BYTE)byte_1C7EDD8 )
        goto LABEL_5;
    }
    if ( !__cxa_guard_acquire(&byte_1C7EDD8) )
    {
LABEL_5:
      if ( (_BYTE)byte_1C7EDC8 )
        goto LABEL_6;
      goto LABEL_55;
    }
    qword_1C7EDE0 = 0;
    __cxa_guard_release(&byte_1C7EDD8);
    if ( (_BYTE)byte_1C7EDC8 )
      goto LABEL_6;
LABEL_55:
    if ( !__cxa_guard_acquire(&byte_1C7EDC8) )
    {
LABEL_6:
      v9 = *((_QWORD *)v8 + 1);
      if ( !v9 )
        goto LABEL_57;
      goto LABEL_7;
    }
    qword_1C7EDD0 = 0;
    __cxa_guard_release(&byte_1C7EDC8);
    v9 = *((_QWORD *)v8 + 1);
    if ( !v9 )
    {
LABEL_57:
      v25 = *(_QWORD *)(*(_QWORD *)(*a1 + 112LL) + 8LL * *v8);
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      if ( v4 )
      {
        v26 = *((_DWORD *)v4 - 1);
        if ( v26 == *((_DWORD *)v4 - 2) )
        {
          v36 = (3 * v26 + 1) >> 1;
          v37 = 8 * v36 + 8;
          if ( 8 * v26 + 8 >= (unsigned int)v37 || v26 >= v36 )
          {
            v55 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v65, "Overflow encountered when expanding vector");
            *v55 = (char *)off_1C63128;
            sub_2333C0(v55 + 1, v65);
            sub_233E40((__int64)v65);
            __cxa_throw(v55, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_63:
          v57 = v36;
          v38 = (unsigned int *)sub_186B300(v4 - 1, v37);
LABEL_80:
          v4 = v38 + 2;
          *v38 = v57;
          v50 = v38[1];
          v29 = &v4[v50];
          v28 = v50 + 1;
          goto LABEL_30;
        }
        goto LABEL_29;
      }
      goto LABEL_91;
    }
LABEL_7:
    if ( (v9 & 1) != 0 )
    {
      v10 = *((_QWORD *)v8 + 2);
      if ( (v10 & 1) != 0 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
        v12 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFFELL) + 8);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v11 + 8);
          if ( v13 )
          {
            if ( (v12 & 0xFFFFFFFFFFFFFFFELL) == (v13 & 0xFFFFFFFFFFFFFFFELL) && (v12 & 1) != (v13 & 1)
              || (v14 = *(_QWORD *)(v11 + 16), (v12 & 0xFFFFFFFFFFFFFFFELL) == (v14 & 0xFFFFFFFFFFFFFFFELL))
              && (v12 & 1) != (v14 & 1)
              || (v15 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFFELL) + 16),
                  (v13 & 0xFFFFFFFFFFFFFFFELL) == (v15 & 0xFFFFFFFFFFFFFFFELL))
              && (v15 & 1) != (v13 & 1)
              || (v14 & 0xFFFFFFFFFFFFFFFELL) == (v15 & 0xFFFFFFFFFFFFFFFELL) && (v15 & 1) != (v14 & 1) )
            {
              v51 = sub_DABD60((unsigned __int64)a1, (__int64)v8);
              v25 = v51;
              if ( v51 )
                ++*(_DWORD *)(v51 + 8);
              if ( v4 )
              {
                v26 = *((_DWORD *)v4 - 1);
                if ( v26 == *((_DWORD *)v4 - 2) )
                {
                  v36 = (3 * v26 + 1) >> 1;
                  v37 = 8 * v36 + 8;
                  if ( 8 * v26 + 8 >= (unsigned int)v37 || v26 >= v36 )
                  {
                    v52 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v65, "Overflow encountered when expanding vector");
                    *v52 = (char *)off_1C63128;
                    sub_2333C0(v52 + 1, v65);
                    sub_233E40((__int64)v65);
                    __cxa_throw(v52, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  goto LABEL_63;
                }
LABEL_29:
                v27 = v26;
                v28 = v26 + 1;
                v29 = &v4[v27];
LABEL_30:
                *v29 = v25;
                *((_DWORD *)v4 - 1) = v28;
                a2 = v67;
                goto LABEL_31;
              }
LABEL_91:
              v53 = (_QWORD *)sub_186B270(0x18u);
              v4 = v53 + 1;
              *v53 = 2;
              v28 = 1;
              v29 = v4;
              goto LABEL_30;
            }
          }
        }
      }
    }
    v16 = v67;
    v17 = v68;
    if ( v67 >= v68 )
    {
      v61 = v9;
      v18 = (char *)sub_186B270(16LL * v68);
      v45 = 0;
      v46 = (char *)ptr;
      v17 = 2 * v68;
      v9 = v61;
      v16 = v67;
      v47 = 8LL * v67;
      if ( v67 )
      {
        do
        {
          *(_QWORD *)&v18[v45] = *(_QWORD *)&v46[v45];
          v45 += 8;
        }
        while ( v45 != v47 );
      }
      if ( v46 && v46 != (char *)v69 )
      {
        v64 = v18;
        v62 = v17;
        v59 = v9;
        sub_186B220(v46);
        v16 = v67;
        v18 = v64;
        v17 = v62;
        v9 = v59;
      }
      ptr = v18;
      v68 = v17;
    }
    else
    {
      v18 = (char *)ptr;
    }
    *(_QWORD *)&v18[8 * v16] = v9;
    v19 = v16 + 1;
    v20 = *((_QWORD *)v8 + 2);
    v67 = v19;
    if ( (unsigned int)v19 < v17 )
    {
      *(_QWORD *)&v18[8 * v19] = v20;
      LODWORD(a2) = v16 + 2;
      continue;
    }
    v58 = 2 * v17;
    v39 = (char *)sub_186B270(16LL * v17);
    v40 = (char *)ptr;
    v41 = 0;
    v42 = v67;
    v43 = 8LL * v67;
    if ( v67 )
    {
      do
      {
        *(_QWORD *)&v39[v41] = *(_QWORD *)&v40[v41];
        v41 += 8;
      }
      while ( v41 != v43 );
    }
    if ( v40 != (char *)v69 && v40 )
    {
      v60 = v39;
      sub_186B220(v40);
      v42 = v67;
      v39 = v60;
    }
    ptr = v39;
    v68 = v58;
    v44 = v42;
    a2 = v42 + 1;
    *(_QWORD *)&v39[8 * v44] = v20;
    v67 = a2;
LABEL_31:
    if ( !(_DWORD)a2 )
      break;
  }
  if ( v4 )
    a2 = *((unsigned int *)v4 - 1);
  result = sub_15EC1C0(v56, a2);
  if ( result )
    ++*(_DWORD *)(result + 8);
  v31 = *a3;
  *a3 = result;
  if ( v31 )
  {
    v32 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v32 )
      result = sub_15D7BC0(v56, v31);
  }
  if ( v4 )
  {
    v33 = v4;
    v34 = (unsigned __int64)&v4[*((unsigned int *)v4 - 1)];
    if ( (unsigned __int64)v4 < v34 )
    {
      do
      {
        while ( 1 )
        {
          v35 = *v33;
          if ( *v33 )
          {
            v32 = (*(_DWORD *)(v35 + 8))-- == 1;
            if ( v32 )
              break;
          }
          if ( (unsigned __int64)++v33 >= v34 )
            goto LABEL_46;
        }
        ++v33;
        sub_15D7BC0(v56, v35);
      }
      while ( (unsigned __int64)v33 < v34 );
    }
LABEL_46:
    result = sub_186B220(v4 - 1);
  }
  if ( ptr )
  {
    if ( ptr != v69 )
      return sub_186B220(ptr);
  }
  return result;
}

