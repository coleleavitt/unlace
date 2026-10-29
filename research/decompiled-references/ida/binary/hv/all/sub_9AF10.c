char **__fastcall sub_9AF10(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char **result; // rax
  char **v4; // rbx
  size_t v5; // r12
  char *v6; // rdi
  char *v7; // r13
  char *v8; // rax

  v2 = *(_QWORD *)(a1 + 8);
  result = (char **)sub_A7490(a2);
  v4 = result;
  if ( *(_QWORD *)(v2 + 32) > 1u )
    return sub_17D80((char **)v2);
  if ( result && (result = (char **)strlen((const char *)result), (v5 = (size_t)result) != 0) )
  {
    v6 = *(char **)v2;
    v7 = (char *)result + 1;
    if ( *(_QWORD *)(v2 + 16) < (unsigned __int64)result + 1 )
    {
      v8 = (char *)sub_96080(v2, *(void **)v2, (unsigned __int64)result + 1, 1u);
      *(_QWORD *)v2 = v8;
      v6 = v8;
    }
    *(_QWORD *)(v2 + 8) = v7;
    memmove(v6, v4, v5);
    result = *(char ***)v2;
    *(_BYTE *)(*(_QWORD *)v2 + v5) = 0;
  }
  else
  {
    *(_QWORD *)(v2 + 8) = 0;
  }
  return result;
}

