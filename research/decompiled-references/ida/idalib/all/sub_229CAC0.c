__int64 __fastcall sub_229CAC0(_QWORD *a1, unsigned __int64 a2)
{
  const char *v2; // rax
  __int64 v3; // rdx
  char *v4; // rax
  size_t v5; // rdx
  _UNKNOWN **v6; // rbx
  char *v7; // r12
  size_t v8; // rbp
  char *v9; // rdi
  _UNKNOWN **v10; // r13

  v2 = sub_229C150(a1, a2);
  v4 = sub_229B8F0((__int64)v2, v3);
  if ( v5 )
  {
    v6 = &off_2BEC420;
    v7 = v4;
    v8 = v5;
    while ( 1 )
    {
      v9 = (char *)v6[1];
      v10 = v6;
      if ( (unsigned __int64)v9 >= v8 && !memcmp(&v9[(_QWORD)*v6 - v8], v7, v8) )
        break;
      v6 += 9;
      if ( v6 == (_UNKNOWN **)&unk_2BECFF0 )
        return 0;
    }
  }
  else
  {
    v10 = &off_2BEC420;
  }
  return *((unsigned int *)v10 + 16);
}
