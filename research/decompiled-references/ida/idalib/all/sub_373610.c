__int64 __fastcall sub_373610(_QWORD *a1, __int64 a2)
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
  __int64 v22; // [rsp+8h] [rbp-70h] BYREF
  __int64 v23; // [rsp+10h] [rbp-68h] BYREF
  char v24[8]; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v3 = a1[1];
  v27 = __readfsqword(0x28u);
  func = get_func(v3);
  if ( !func )
    return 0;
  v8 = func;
  if ( a1[10] )
  {
    v9 = (const char *)a1[9];
    v10 = v9 + 1;
    if ( *v9 == 91 )
    {
      v11 = v9[1];
      if ( v11 > 0x7F )
      {
        if ( (unsigned int)qsscanf((int)v9 + 1, (unsigned int)"%lli", (unsigned int)&v22, (_DWORD)v9, v6, v7) != 1 )
          return 0;
        ptr = nullptr;
        v26 = 0;
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
        if ( (unsigned int)qsscanf((_DWORD)v12, (unsigned int)"%lli", (unsigned int)&v22, v13, v14, v15) != 1 )
          return 0;
        ptr = nullptr;
        v26 = 0;
        v16 = v12 - v10;
        if ( v16 )
        {
          v17 = nullptr;
          if ( v16 != -1 )
          {
            ptr = (void *)qvector_reserve(&ptr, 0, v16 + 1, 1);
            v17 = ptr;
          }
          *(_QWORD *)&v26 = v16 + 1;
          memmove(v17, v10, v16);
          *((_BYTE *)ptr + v16) = 0;
          if ( (_QWORD)v26 )
          {
            v18 = (const char *)ptr;
LABEL_23:
            if ( (unsigned __int8)parse_reg_name(v24, v18) )
            {
              v21 = haystack;
              if ( a1[14] )
                v21 = (const char *)a1[13];
              v23 = 17;
              *(_QWORD *)(a2 + 8) = (unsigned __int8)define_stkvar(v8, v21, v22, &v23, 0);
              clear_tinfo_t(&v23);
            }
            if ( ptr )
            {
              *(_QWORD *)&v26 = 0;
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
  if ( a1[14] )
    v19 = (const char *)a1[13];
  *(_QWORD *)(a2 + 8) = (unsigned int)add_regvar(func, a1[1], a1[5], v9, v19, 0) == 0;
  return 0;
}
