__int64 __fastcall sub_36FC40(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 func; // rax
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // r12
  const char *v9; // rcx
  _BYTE *v10; // r14
  unsigned int v11; // edi
  const char *v12; // rbx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  size_t v16; // rbx
  void *v17; // rdi
  const char *v18; // rsi
  const char *v19; // r8
  const char *v21; // rsi
  char v22; // [rsp+0h] [rbp-78h]
  unsigned int v23; // [rsp+Ch] [rbp-6Ch] BYREF
  __int64 v24; // [rsp+10h] [rbp-68h] BYREF
  char v25[8]; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v3 = *(unsigned int *)(a1 + 8);
  v28 = __readfsqword(0x28u);
  func = get_func(v3);
  if ( !func )
    return 0;
  v8 = func;
  if ( *(_QWORD *)(a1 + 80) )
  {
    v9 = *(const char **)(a1 + 72);
    v10 = v9 + 1;
    if ( *v9 == 91 )
    {
      v11 = v9[1];
      if ( v11 > 0x7F )
      {
        if ( (unsigned int)qsscanf((int)v9 + 1, (int)"%i", (int)&v23, (int)v9, v6, v7, v22) != 1 )
          return 0;
        ptr = nullptr;
        v27 = 0;
      }
      else
      {
        v12 = v9 + 1;
        do
        {
          if ( !isalnum(v11) )
            break;
          v11 = *++v12;
        }
        while ( v11 <= 0x7F );
        if ( (unsigned int)qsscanf((int)v12, (int)"%i", (int)&v23, v13, v14, v15, v22) != 1 )
          return 0;
        ptr = nullptr;
        v27 = 0;
        v16 = v12 - v10;
        if ( v16 )
        {
          v17 = nullptr;
          if ( v16 != -1 )
          {
            ptr = (void *)qvector_reserve(&ptr, 0, v16 + 1, 1);
            v17 = ptr;
          }
          *(_QWORD *)&v27 = v16 + 1;
          memmove(v17, v10, v16);
          *((_BYTE *)ptr + v16) = 0;
          if ( (_QWORD)v27 )
          {
            v18 = (const char *)ptr;
LABEL_23:
            if ( (unsigned __int8)parse_reg_name(v25, v18) )
            {
              v21 = haystack;
              if ( *(_QWORD *)(a1 + 112) )
                v21 = *(const char **)(a1 + 104);
              v24 = 17;
              *(_DWORD *)(a2 + 8) = (unsigned __int8)define_stkvar(v8, v21, v23, &v24, 0);
              clear_tinfo_t(&v24);
            }
            if ( ptr )
            {
              *(_QWORD *)&v27 = 0;
              qfree(ptr);
            }
            return 0;
          }
        }
      }
      v18 = haystack;
      goto LABEL_23;
    }
  }
  else
  {
    v9 = haystack;
  }
  v19 = haystack;
  if ( *(_QWORD *)(a1 + 112) )
    v19 = *(const char **)(a1 + 104);
  *(_DWORD *)(a2 + 8) = add_regvar(func, *(unsigned int *)(a1 + 8), *(unsigned int *)(a1 + 40), v9, v19, 0) == 0;
  return 0;
}

