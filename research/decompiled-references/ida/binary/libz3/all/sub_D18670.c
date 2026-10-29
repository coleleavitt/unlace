void __fastcall sub_D18670(__int64 a1, __int64 a2, _BYTE *a3, char a4)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 *v8; // r9
  int v9; // r13d
  __int64 v10; // r8
  unsigned int v11; // esi
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 *i; // rax
  __int64 v15; // rdx
  _DWORD *v16; // rax
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  _QWORD *v21; // rcx
  __int64 *j; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rcx
  int v27; // edx
  _QWORD *v28; // rcx
  unsigned int v29; // r12d
  unsigned int v30; // ecx
  unsigned int *v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r12d
  unsigned int v34; // ecx
  unsigned int *v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  unsigned int v40; // edx
  _QWORD *v41; // rcx
  unsigned int v42; // r12d
  unsigned int v43; // ecx
  unsigned int *v44; // rdx
  _QWORD *v45; // rax
  char **v46; // rbp
  __int64 v47; // rdx
  char **exception; // rbp
  __int64 v49; // rdx
  char **v50; // rbp
  __int64 v51; // rdx
  char **v52; // rbp
  __int64 v53; // rdx
  __int64 v54[9]; // [rsp-48h] [rbp-48h] BYREF

  if ( *(_WORD *)(a2 + 4) )
    return;
  v6 = a2;
  v7 = *(unsigned int *)(a1 + 24);
  v8 = *(__int64 **)(a1 + 16);
  v9 = v7 - 1;
  v10 = 16 * v7;
  while ( 2 )
  {
    v11 = *(_DWORD *)(v6 + 12);
    v12 = 16LL * (v9 & v11);
    v13 = &v8[(unsigned __int64)v12 / 8];
    if ( v12 != v10 )
    {
      for ( i = &v8[(unsigned __int64)v12 / 8]; &v8[(unsigned __int64)v10 / 8] != i; i += 2 )
      {
        v15 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v15 + 12) == v11 && v6 == v15 )
            return;
        }
        else if ( !v15 )
        {
          goto LABEL_10;
        }
      }
    }
    if ( v8 != v13 )
    {
      for ( j = v8; v13 != j; j += 2 )
      {
        v23 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *(_DWORD *)(v23 + 12) == v11 && v6 == v23 )
            return;
        }
        else if ( !v23 )
        {
          break;
        }
      }
    }
LABEL_10:
    if ( !*(_DWORD *)(v6 + 24) )
      return;
    v16 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
    if ( !v16 || *v16 )
      return;
    switch ( v16[1] )
    {
      case 2:
      case 4:
        if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)a1, *(_QWORD *)(v6 + 40)) )
        {
          v24 = *(_QWORD **)(a1 + 8);
          *a3 = 0;
          if ( v24 )
          {
            v25 = *((_DWORD *)v24 - 1);
            if ( v25 == *((_DWORD *)v24 - 2) )
            {
              v33 = (3 * v25 + 1) >> 1;
              v34 = 16 * v33 + 8;
              if ( 16 * v25 + 8 >= v34 || v25 >= v33 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_166874(v54, "Overflow encountered when expanding vector", v49);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v54);
                sub_233E40((__int64)v54);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v35 = (unsigned int *)sub_186B300(v24 - 1, v34);
              v24 = v35 + 2;
              v36 = v35[1];
              *v35 = v33;
              *(_QWORD *)(a1 + 8) = v35 + 2;
              LODWORD(v35) = v36;
              v28 = &v24[2 * v36];
              v27 = (_DWORD)v35 + 1;
            }
            else
            {
              v26 = v25;
              v27 = v25 + 1;
              v28 = &v24[2 * v26];
            }
          }
          else
          {
            v38 = (_QWORD *)sub_186B270(0x28u);
            v27 = 1;
            *v38 = 2;
            v24 = v38 + 1;
            *(_QWORD *)(a1 + 8) = v24;
            v28 = v24;
          }
          *v28 = v6;
          *((_BYTE *)v28 + 8) = 1;
          *((_DWORD *)v24 - 1) = v27;
        }
        return;
      case 3:
      case 5:
      case 7:
      case 9:
        v50 = (char **)__cxa_allocate_exception(0x28u);
        sub_166874(v54, "operator not supported, apply simplifier before invoking this strategy", v51);
        *v50 = (char *)off_1C63670;
        sub_2333C0(v50 + 1, v54);
        sub_233E40((__int64)v54);
        __cxa_throw(v50, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      case 6:
        v17 = *(_QWORD **)(a1 + 8);
        *a3 = 0;
        if ( v17 )
        {
          v18 = *((_DWORD *)v17 - 1);
          if ( v18 == *((_DWORD *)v17 - 2) )
          {
            v29 = (3 * v18 + 1) >> 1;
            v30 = 16 * v29 + 8;
            if ( 16 * v18 + 8 >= v30 || v18 >= v29 )
            {
              v46 = (char **)__cxa_allocate_exception(0x28u);
              sub_166874(v54, "Overflow encountered when expanding vector", v47);
              *v46 = (char *)off_1C63128;
              sub_2333C0(v46 + 1, v54);
              sub_233E40((__int64)v54);
              __cxa_throw(v46, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v31 = (unsigned int *)sub_186B300(v17 - 1, v30);
            v32 = v31[1];
            v17 = v31 + 2;
            *v31 = v29;
            *(_QWORD *)(a1 + 8) = v31 + 2;
            LODWORD(v31) = v32;
            v21 = &v17[2 * v32];
            v20 = (_DWORD)v31 + 1;
          }
          else
          {
            v19 = v18;
            v20 = v18 + 1;
            v21 = &v17[2 * v19];
          }
        }
        else
        {
          v37 = (_QWORD *)sub_186B270(0x28u);
          *v37 = 2;
          v20 = 1;
          v17 = v37 + 1;
          *(_QWORD *)(a1 + 8) = v17;
          v21 = v17;
        }
        *v21 = v6;
        *((_BYTE *)v21 + 8) = 1;
        *((_DWORD *)v17 - 1) = v20;
        return;
      case 8:
        if ( !a4 )
        {
          v6 = *(_QWORD *)(v6 + 32);
          if ( *(_WORD *)(v6 + 4) )
            return;
          continue;
        }
        v39 = *(_QWORD **)(a1 + 8);
        *a3 = 0;
        if ( v39 )
        {
          v40 = *((_DWORD *)v39 - 1);
          if ( v40 == *((_DWORD *)v39 - 2) )
          {
            v42 = (3 * v40 + 1) >> 1;
            v43 = 16 * v42 + 8;
            if ( 16 * v40 + 8 >= v43 || v40 >= v42 )
            {
              v52 = (char **)__cxa_allocate_exception(0x28u);
              sub_166874(v54, "Overflow encountered when expanding vector", v53);
              *v52 = (char *)off_1C63128;
              sub_2333C0(v52 + 1, v54);
              sub_233E40((__int64)v54);
              __cxa_throw(v52, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v44 = (unsigned int *)sub_186B300(v39 - 1, v43);
            v39 = v44 + 2;
            *v44 = v42;
            v40 = v44[1];
            *(_QWORD *)(a1 + 8) = v39;
          }
        }
        else
        {
          v45 = (_QWORD *)sub_186B270(0x28u);
          v40 = 0;
          *v45 = 2;
          v39 = v45 + 1;
          *(_QWORD *)(a1 + 8) = v39;
        }
        v41 = &v39[2 * v40];
        *v41 = v6;
        *((_BYTE *)v41 + 8) = 1;
        *((_DWORD *)v39 - 1) = v40 + 1;
        return;
      default:
        return;
    }
  }
}

