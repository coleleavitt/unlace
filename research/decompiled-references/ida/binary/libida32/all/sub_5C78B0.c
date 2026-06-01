unsigned __int64 __fastcall sub_5C78B0(char **a1)
{
  char *v1; // r12
  void *v3; // r13
  char *v4; // rbx
  unsigned int v5; // edi
  char *v6; // r12
  size_t v7; // r12
  char *v8; // rdx
  char *v9; // rax
  void *v11; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v1 = a1[1];
  v14 = __readfsqword(0x28u);
  if ( v1 && (v3 = *a1, v4 = nullptr, (v5 = **a1) != 0) )
  {
    while ( v5 <= 0x7F )
    {
      if ( !isspace(v5) )
        break;
      if ( ++v4 == v1 )
        break;
      v5 = v4[(_QWORD)v3];
      if ( !v4[(_QWORD)v3] )
        goto LABEL_13;
    }
    v6 = v1 - 1;
    ptr = nullptr;
    v13 = 0;
    if ( v4 > v6 )
      v4 = v6;
    v7 = v6 - v4;
    if ( v7 )
    {
      v11 = nullptr;
      if ( v7 != -1 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, v7 + 1, 1);
        v11 = ptr;
      }
      *(_QWORD *)&v13 = v7 + 1;
      memmove(v11, &v4[(_QWORD)v3], v7);
      *((_BYTE *)ptr + v7) = 0;
      v3 = *a1;
      v9 = (char *)ptr;
      v8 = *((char **)&v13 + 1);
      v7 = v13;
    }
    else
    {
      v8 = nullptr;
      v9 = nullptr;
    }
    *a1 = v9;
    a1[1] = (char *)v7;
    a1[2] = v8;
    if ( v3 )
      qfree(v3);
  }
  else
  {
LABEL_13:
    a1[1] = nullptr;
  }
  return v14 - __readfsqword(0x28u);
}

