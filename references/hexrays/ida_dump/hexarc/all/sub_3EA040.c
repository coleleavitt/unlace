__int64 __fastcall sub_3EA040(double a1, __int64 a2, __int64 *a3, int a4, int a5)
{
  char **v6; // rbx
  char *v7; // rax
  unsigned int v8; // r12d
  const char *v9; // r15
  size_t v10; // rax
  size_t v11; // r14
  int v12; // ebp
  signed int v14; // edx
  int v15; // edx
  int v16; // r12d
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // edx
  void *v20; // rdi
  size_t v21; // rdx
  __int64 v22; // rax
  int v23; // [rsp+8h] [rbp-40h]
  size_t v24; // [rsp+8h] [rbp-40h]

  if ( a4 < 0 )
  {
    if ( !under_debugger )
      sub_37B760(0xCD1Au, (__int64)a3, a1);
    BUG();
  }
  v6 = &off_4B6260;
  do
  {
    if ( a4 == *((_DWORD *)v6 + 2) )
    {
      if ( *((char *)v6 + 12) <= a5 )
        a5 = *((char *)v6 + 12);
      v8 = a5;
      if ( a3 )
      {
        v9 = *v6;
        if ( *v6 && (v10 = strlen(*v6), (v11 = v10) != 0) )
        {
          v20 = (void *)*a3;
          v21 = v10 + 1;
          if ( a3[2] < v10 + 1 )
          {
            v24 = v10 + 1;
            v22 = qvector_reserve(a3, *a3, v21, 1);
            v21 = v24;
            *a3 = v22;
            v20 = (void *)v22;
          }
          a3[1] = v21;
          memmove(v20, v9, v11);
          *(_BYTE *)(*a3 + v11) = 0;
        }
        else
        {
          a3[1] = 0;
        }
        v12 = a4 - *((_DWORD *)v6 + 2);
LABEL_12:
        if ( v12 )
          sub_F4410(a3, (__int64)"^%d", v12);
        return v8;
      }
      return v8;
    }
    v7 = v6[2];
    v6 += 2;
  }
  while ( *v7 );
  v14 = (a4 & 0xFFFFFFFC) - 5;
  if ( (int)((a4 & 0xFFFFFFFC) - 8) >= 0 )
    v14 = (a4 & 0xFFFFFFFC) - 8;
  v15 = v14 >> 2;
  v16 = v15 & 1;
  if ( a3 )
  {
    v23 = a5;
    sub_652F0(a3, (__int64)"r%d", v15);
    v12 = a4 - (a4 & 0xFFFFFFFC);
    v17 = v16 == 0 ? 8 : 4;
    if ( v23 <= v17 )
      v17 = v23;
    v8 = v17;
    goto LABEL_12;
  }
  v18 = 8;
  v19 = 4;
  if ( a5 <= 8 )
    v18 = a5;
  if ( a5 <= 4 )
    v19 = a5;
  if ( v16 )
    return v19;
  return v18;
}
