__int64 __fastcall sub_EB5A30(char **a1, char *a2)
{
  char **v2; // rbx
  char **v3; // r12
  __int64 v4; // rcx
  char *v5; // rax
  char *v6; // rdi
  __int64 v7; // rcx
  char *v8; // rdx
  char *v9; // rax
  char *v10; // rdx
  unsigned int v11; // ebx
  __int64 v13; // rax
  void *ptr; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  int vars10; // [rsp+10h] [rbp+10h]
  unsigned __int8 vars14; // [rsp+14h] [rbp+14h]
  char vars18; // [rsp+18h] [rbp+18h] BYREF

  v2 = &a1[(_QWORD)a2];
  vars10 = 0;
  vars14 = 1;
  ptr = &vars18;
  vars8 = 8;
  if ( v2 == a1 )
    return 0;
  v3 = a1;
  v4 = 1;
  do
  {
    v5 = *v3;
    if ( *v3 )
    {
      v5 = (char *)(*(__int64 (__fastcall **)(char *, char *, _QWORD, __int64))(*(_QWORD *)v5 + 32LL))(
                     *v3,
                     a2,
                     *(_QWORD *)v5,
                     v4);
      LOBYTE(v4) = vars14;
    }
    if ( !(_BYTE)v4 )
      goto LABEL_23;
    v6 = (char *)ptr;
    v7 = 8LL * HIDWORD(vars8);
    a2 = (char *)ptr + v7;
    if ( ptr != (char *)ptr + v7 )
    {
      v8 = (char *)ptr;
      if ( v5 == *(char **)ptr )
        goto LABEL_13;
      do
      {
        v8 += 8;
        if ( a2 == v8 )
          break;
      }
      while ( v5 != *(char **)v8 );
    }
    if ( HIDWORD(vars8) < (unsigned int)vars8 )
    {
      ++HIDWORD(vars8);
      *(_QWORD *)a2 = v5;
      v6 = (char *)ptr;
      v8 = (char *)ptr + v7;
    }
    else
    {
LABEL_23:
      a2 = v5;
      v13 = sub_2236760(&ptr, v5);
      v4 = vars14;
      v6 = (char *)ptr;
      v8 = (char *)v13;
      if ( !vars14 )
      {
        v9 = (char *)ptr + 8 * (unsigned int)vars8;
        goto LABEL_14;
      }
    }
LABEL_13:
    v4 = 1;
    v9 = &v6[8 * HIDWORD(vars8)];
LABEL_14:
    if ( v9 != v8 && *(_QWORD *)v8 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v10 = v8 + 8;
      do
      {
        a2 = v10;
        if ( v9 == v10 )
          break;
        v10 += 8;
      }
      while ( *(_QWORD *)a2 >= 0xFFFFFFFFFFFFFFFELL );
    }
    ++v3;
  }
  while ( v2 != v3 );
  v11 = HIDWORD(vars8) - vars10;
  if ( !(_BYTE)v4 )
    free(v6);
  return v11;
}
