void *__fastcall sub_21E2370(__int64 a1)
{
  char *v1; // rbp
  char *v2; // r12
  void *v3; // rbp
  size_t v5; // r13
  size_t v6; // r14
  size_t v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  void *v11; // r9
  char *v12; // rbp
  void *v13; // r13
  __int64 v14; // rax
  __int64 *v15; // rax
  void *v16; // rax
  unsigned __int64 v17; // rax
  char v18; // dl
  char v19; // [rsp+Fh] [rbp-D9h]
  void *v20; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v22[184]; // [rsp+30h] [rbp-B8h] BYREF

  v1 = *(char **)a1;
  v2 = *(char **)(a1 + 8);
  if ( *(char **)a1 != v2 && (unsigned int)(*v1 - 48) <= 9 )
    return sub_21DF7C0(a1);
  v5 = v2 - v1;
  v6 = j__strlen("dn");
  if ( sub_20D1BF0(v2 - v1, v1, v6, "dn") )
  {
    v12 = &v1[v6];
    *(_QWORD *)a1 = v12;
    if ( v2 == v12 || (unsigned int)(*v12 - 48) > 9 )
      v13 = sub_21DC5A0(a1);
    else
      v13 = sub_21DF7C0(a1);
    if ( v13 )
    {
      v19 = *(_BYTE *)(a1 + 937);
      ptr[1] = (void *)0x2000000000LL;
      ptr[0] = v22;
      sub_21D0240((__int64)ptr, 0x32u, (unsigned __int64)v13);
      v14 = sub_2223360(a1 + 904, ptr, &v20, off_2BE9FD0);
      v3 = (void *)v14;
      if ( v14 )
      {
        v3 = (void *)(v14 + 8);
        if ( ptr[0] != v22 )
          free(ptr[0]);
        if ( v3 )
        {
          ptr[0] = v3;
          v15 = sub_21D4F30(a1 + 944, (__int64 *)ptr);
          if ( v15 )
          {
            v16 = (void *)v15[1];
            if ( v16 )
              v3 = v16;
          }
          if ( *(void **)(a1 + 928) == v3 )
            *(_BYTE *)(a1 + 936) = 1;
        }
      }
      else
      {
        if ( v19 )
        {
          v17 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
          *(_WORD *)(v17 + 16) = 16434;
          v18 = *(_BYTE *)(v17 + 18);
          v3 = (void *)(v17 + 8);
          *(_QWORD *)v17 = 0;
          *(_QWORD *)(v17 + 24) = v13;
          *(_BYTE *)(v17 + 18) = v18 & 0xF0 | 5;
          *(_QWORD *)(v17 + 8) = off_2BE7980;
          sub_2223210(a1 + 904, v17, v20, off_2BE9FD0);
        }
        if ( ptr[0] != v22 )
          free(ptr[0]);
        *(_QWORD *)(a1 + 920) = v3;
      }
    }
    else
    {
      return nullptr;
    }
  }
  else
  {
    v7 = j__strlen("on");
    if ( sub_20D1BF0(v5, v1, v7, "on") )
      *(_QWORD *)a1 = &v1[v7];
    v3 = sub_21E1E00(a1, nullptr);
    v20 = v3;
    if ( v3 )
    {
      if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && **(_BYTE **)a1 == 73 )
      {
        v3 = sub_21DEC40(a1, nullptr, v8, v9, v10, v11);
        ptr[0] = v3;
        if ( v3 )
          return sub_21D5E20(a1 + 808, (unsigned __int64 *)&v20, (unsigned __int64 *)ptr);
      }
    }
  }
  return v3;
}
