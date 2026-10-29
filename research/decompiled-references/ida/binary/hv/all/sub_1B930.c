__int64 __fastcall sub_1B930(__int64 a1)
{
  unsigned int v1; // r12d
  unsigned __int64 v2; // r14
  const char *v3; // rdx
  char *v4; // rax
  const char *v5; // rdx
  __int64 v6; // rsi
  char *v7; // rax
  void *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbx
  char *v11; // rdx
  void *v12; // rdi
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  void *v18; // [rsp+0h] [rbp-98h] BYREF
  __int128 v19; // [rsp+8h] [rbp-90h]
  void *v20; // [rsp+20h] [rbp-78h] BYREF
  __int128 v21; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v23; // [rsp+48h] [rbp-50h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v1 = 12;
    sub_8F890(0, 0);
    sub_708D0(
      (unsigned int)"please specify a valid site with -s or with the VAULT_SITE envvar\n",
      0,
      v14,
      v15,
      v16,
      v17);
    return v1;
  }
  v18 = nullptr;
  v20 = nullptr;
  v19 = 0;
  v21 = 0;
  sub_1B790((__int64 *)a1, (int)&v20, 0, 0);
  if ( (_QWORD)v21 )
  {
    v1 = (*(__int64 (__fastcall **)(_QWORD, void **, void **, _QWORD))(**(_QWORD **)(a1 + 24) + 280LL))(
           *(_QWORD *)(a1 + 24),
           &v18,
           &v20,
           *(unsigned int *)(a1 + 204));
    if ( !*(_BYTE *)(a1 + 211) && (_QWORD)v19 )
    {
      v2 = 0;
      do
      {
        while ( 1 )
        {
          v4 = (char *)v20 + 24 * v2;
          v5 = haystack;
          if ( *((_QWORD *)v4 + 1) )
            v5 = *(const char **)v4;
          v6 = *((unsigned int *)v18 + v2);
          if ( (_DWORD)v6 )
            break;
          sub_19CE0(a1, (__int64)"ok added '%s'\n", v5);
          if ( ++v2 >= (unsigned __int64)v19 )
            goto LABEL_15;
        }
        ptr = nullptr;
        v23 = 0;
        sub_65C40(&ptr, v6, v5);
        v3 = haystack;
        if ( (_QWORD)v23 )
          v3 = (const char *)ptr;
        sub_19CE0(a1, (__int64)"%s\n", v3);
        if ( ptr )
        {
          *(_QWORD *)&v23 = 0;
          j__free(ptr);
        }
        ++v2;
      }
      while ( v2 < (unsigned __int64)v19 );
    }
LABEL_15:
    v7 = (char *)v20;
    v8 = v20;
    if ( !v20 )
      goto LABEL_22;
    v9 = v21;
    if ( (_QWORD)v21 )
    {
      v10 = 0;
      do
      {
        v11 = &v7[24 * v10];
        v12 = *(void **)v11;
        if ( *(_QWORD *)v11 )
        {
          *((_QWORD *)v11 + 1) = 0;
          j__free(v12);
          v7 = (char *)v20;
        }
        ++v10;
        v8 = v7;
      }
      while ( v9 != v10 );
    }
  }
  else
  {
    v8 = v20;
    v1 = 0;
    if ( !v20 )
      return v1;
  }
  *(_QWORD *)&v21 = 0;
  j__free(v8);
LABEL_22:
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    j__free(v18);
  }
  return v1;
}

