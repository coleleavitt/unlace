__int64 __fastcall find_binary(unsigned __int64 a1, unsigned __int64 a2, char *a3, int a4, int a5, unsigned int a6)
{
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned int v11; // r8d
  __int64 not_tail; // rax
  __int64 v13; // rsi
  __int64 v14; // r13
  char *v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rbp
  char *v18; // rbx
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  __int64 v23; // rax
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v26; // [rsp+18h] [rbp-50h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( !a3 || !*a3 )
    return -1;
  v8 = a1;
  v9 = a2;
  v11 = a6;
  if ( a2 >= a1 )
  {
    v9 = a1;
    v8 = a2;
    if ( (a5 & 2) != 0 )
      goto LABEL_5;
LABEL_23:
    v13 = -1;
    goto LABEL_8;
  }
  if ( (a5 & 2) == 0 )
    goto LABEL_23;
LABEL_5:
  if ( (a5 & 1) != 0 )
  {
    not_tail = next_not_tail(v9);
    v13 = not_tail;
    if ( not_tail != -1 )
    {
      v11 = a6;
      v9 = not_tail;
      goto LABEL_8;
    }
    return -1;
  }
  v23 = prev_not_tail(v8);
  v13 = v23;
  if ( v23 == -1 )
    return -1;
  v11 = a6;
  v8 = v23;
LABEL_8:
  v26 = 0;
  ptr = nullptr;
  if ( (unsigned __int8)parse_binpat_str((__int64 *)&ptr, v13, a3, a4, v11, nullptr) )
    v14 = bin_search(v9, v8, &ptr, (16 * ((a5 & 1) == 0)) | (a5 >> 3) & 2 | (a5 >> 2) & 9u, 0);
  else
    v14 = -1;
  v15 = (char *)ptr;
  if ( ptr )
  {
    v16 = v26;
    if ( (_QWORD)v26 )
    {
      v17 = 0;
      do
      {
        v18 = &v15[80 * v17];
        v19 = *((void **)v18 + 6);
        if ( v19 )
        {
          *((_QWORD *)v18 + 7) = 0;
          qfree(v19);
        }
        v20 = *((void **)v18 + 3);
        if ( v20 )
        {
          *((_QWORD *)v18 + 4) = 0;
          qfree(v20);
        }
        v21 = *(void **)v18;
        if ( *(_QWORD *)v18 )
        {
          *((_QWORD *)v18 + 1) = 0;
          qfree(v21);
        }
        ++v17;
        v15 = (char *)ptr;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v26 = 0;
    qfree(v15);
  }
  return v14;
}
