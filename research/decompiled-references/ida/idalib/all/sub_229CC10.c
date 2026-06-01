__int64 __fastcall sub_229CC10(_QWORD *a1, unsigned __int64 a2)
{
  char *v2; // rax
  unsigned __int64 v3; // rdx
  const char *v4; // rax
  __int64 v5; // rdx
  char *v6; // rax
  size_t v7; // rdx
  _UNKNOWN **v8; // rbx
  char *v9; // rbp
  size_t v10; // r13
  char *v11; // rdi
  _UNKNOWN **v12; // r14

  v2 = (char *)sub_229C150(a1, a2);
  v4 = sub_229C150(v2, v3);
  v6 = sub_229B8F0((__int64)v4, v5);
  if ( v7 )
  {
    v8 = &off_2BEC420;
    v9 = v6;
    v10 = v7;
    while ( 1 )
    {
      v11 = (char *)v8[1];
      v12 = v8;
      if ( v10 <= (unsigned __int64)v11 && !memcmp(&v11[(_QWORD)*v8 - v10], v9, v10) )
        break;
      v8 += 9;
      if ( v8 == (_UNKNOWN **)&unk_2BECFF0 )
        return 0;
    }
  }
  else
  {
    v12 = &off_2BEC420;
  }
  return (unsigned int)byte_26FBB40[*((unsigned int *)v12 + 16)];
}
