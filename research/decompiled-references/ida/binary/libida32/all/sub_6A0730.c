__int64 __fastcall sub_6A0730(_QWORD *a1, __int64 a2, unsigned __int64 a3, char *src, __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  char *v9; // rbx
  int v11; // r15d
  __int64 func; // rcx
  unsigned __int64 v13; // rbp
  unsigned int v14; // ebx
  const char *v16; // rdi
  char *v17; // rsi
  size_t v18; // rax
  size_t v19; // rax
  size_t v20; // r12
  unsigned int v21; // ebx
  void *v22; // rdi
  size_t v23; // r14
  int v24; // ebx
  bool v25; // zf
  const char *v26; // r12
  __int64 v27; // rax
  int v28[2]; // [rsp+8h] [rbp-100h]
  __int64 member; // [rsp+8h] [rbp-100h]
  unsigned int v30; // [rsp+10h] [rbp-F8h]
  int v31[2]; // [rsp+10h] [rbp-F8h]
  size_t n; // [rsp+18h] [rbp-F0h]
  size_t na; // [rsp+18h] [rbp-F0h]
  void *ptr; // [rsp+20h] [rbp-E8h] BYREF
  void *v35[2]; // [rsp+28h] [rbp-E0h]
  void *v36[2]; // [rsp+40h] [rbp-C8h]
  void *v37; // [rsp+50h] [rbp-B8h] BYREF
  int v38[4]; // [rsp+58h] [rbp-B0h]
  void *v39; // [rsp+68h] [rbp-A0h]
  int v40[4]; // [rsp+70h] [rbp-98h]
  int v41[4]; // [rsp+80h] [rbp-88h] BYREF
  int v42[2]; // [rsp+A0h] [rbp-68h]
  int v43; // [rsp+A8h] [rbp-60h]
  int v44[2]; // [rsp+B0h] [rbp-58h]
  int v45; // [rsp+B8h] [rbp-50h]
  int v46[2]; // [rsp+C8h] [rbp-40h]

  *(_QWORD *)v46 = __readfsqword(0x28u);
  *(_QWORD *)v28 = qword_2CA1698;
  if ( a3 >= a1[1] )
  {
    v14 = -7;
    set_error_data(0, a3, a3, src, a5, a6);
    return v14;
  }
  v8 = *(unsigned int *)(a2 + 56);
  v9 = src;
  v11 = a5;
  func = 0;
  v30 = (unsigned int)a5 >> 31;
  if ( (_DWORD)v8 != -1 )
    func = get_func(v8);
  v13 = *a1 + (a3 << 7);
  if ( (*(_WORD *)(v13 + 116) & 0x420) != 0 || *(_QWORD *)(v13 + 24) && **(_BYTE **)(v13 + 16) == 126 )
    goto LABEL_5;
  ptr = nullptr;
  *(_OWORD *)v35 = 0;
  if ( !v9 || !*v9 )
  {
    if ( v11 >= 0 || !func )
    {
LABEL_5:
      v14 = -3;
      set_error_string();
      return v14;
    }
    n = func;
    build_stkvar_name(&ptr, func, *(_QWORD *)v13 >> 3);
    func = n;
    v9 = (char *)haystack;
    if ( v35[0] )
      v9 = (char *)ptr;
  }
  if ( !(unsigned __int8)sub_4BD3C0(*(_QWORD *)(*(_QWORD *)v28 + 1480LL), v9, v30, func) )
  {
    if ( ptr )
    {
      v35[0] = nullptr;
      qfree(ptr);
    }
    goto LABEL_5;
  }
  v16 = haystack;
  if ( *(_QWORD *)(v13 + 24) )
    v16 = *(const char **)(v13 + 16);
  v17 = v9;
  if ( !strcmp(v16, v9) )
  {
    v21 = *(_DWORD *)(v13 + 116) & 0x4000;
    if ( (get_merge_state(v16, v17) & 2) == 0 )
      *(_DWORD *)(v13 + 116) &= ~0x4000u;
    *(_DWORD *)a2 = 0;
    v14 = (v21 >> 14) ^ 1;
  }
  else
  {
    v37 = nullptr;
    v39 = nullptr;
    *(_QWORD *)v42 = 1;
    v43 = -1;
    *(_QWORD *)v44 = 0;
    LOBYTE(v45) = 0;
    *(_OWORD *)v36 = 0;
    *(_OWORD *)v38 = 0;
    *(_OWORD *)v40 = 0;
    *(_OWORD *)v41 = 0;
    if ( v9 )
    {
      v18 = strlen(v9);
      if ( v18 )
      {
        na = v18;
        *(_QWORD *)v31 = v18 + 1;
        v37 = (void *)qvector_reserve(&v37, 0, v18 + 1, 1);
        *(_QWORD *)v38 = *(_QWORD *)v31;
        memmove(v37, v9, na);
        *((_BYTE *)v37 + na) = 0;
      }
    }
    member = udt_type_data_t__find_member((int)a1);
    clear_tinfo_t(v41);
    if ( v39 )
    {
      *(_QWORD *)v40 = 0;
      qfree(v39);
    }
    if ( v37 )
    {
      *(_QWORD *)v38 = 0;
      qfree(v37);
    }
    if ( member >= 0 )
    {
      set_error_string();
      v14 = -21;
    }
    else
    {
      sub_52B590(a2, a1, a3);
      if ( (get_merge_state(a2, a1) & 2) == 0 )
        *(_DWORD *)(v13 + 116) &= ~0x4000u;
      if ( v9 && (v19 = strlen(v9), (v20 = v19) != 0) )
      {
        v22 = *(void **)(v13 + 16);
        v23 = v19 + 1;
        if ( *(_QWORD *)(v13 + 32) < v19 + 1 )
        {
          v27 = qvector_reserve(v13 + 16, *(_QWORD *)(v13 + 16), v23, 1);
          *(_QWORD *)(v13 + 16) = v27;
          v22 = (void *)v27;
        }
        *(_QWORD *)(v13 + 24) = v23;
        memmove(v22, v9, v20);
        *(_BYTE *)(*(_QWORD *)(v13 + 16) + v20) = 0;
      }
      else
      {
        *(_QWORD *)(v13 + 24) = 0;
      }
      if ( v11 < 0 )
      {
        v24 = *(_DWORD *)(v13 + 116);
        BYTE1(v24) &= 0xCFu;
        v25 = *(_QWORD *)(v13 + 24) == 0;
        *(_DWORD *)(v13 + 116) = v24;
        if ( !v25 )
        {
          v26 = *(const char **)(v13 + 16);
          if ( !strcmp(v26, "__return_address") )
          {
            BYTE1(v24) |= 0x10u;
            *(_DWORD *)(v13 + 116) = v24;
          }
          else if ( !strcmp(v26, "__saved_registers") )
          {
            BYTE1(v24) |= 0x20u;
            *(_DWORD *)(v13 + 116) = v24;
          }
        }
      }
      sub_6A0430((__int64 *)(a2 + 96), (const __m128i *)v13);
      v14 = 0;
    }
  }
  if ( ptr )
  {
    v35[0] = nullptr;
    qfree(ptr);
  }
  return v14;
}

