void *__fastcall sub_5B6BE0(__int64 a1, unsigned __int64 a2)
{
  char *v3; // r15
  __int64 v4; // rax
  char *v5; // r14
  __int64 v6; // r12
  char *v7; // rdi
  bool v8; // cf
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  char *v13; // rbp
  __int64 v14; // r12
  __int64 v15; // r13
  char *v16; // rdi
  char *v18; // [rsp+0h] [rbp-80h]
  __int64 v19; // [rsp+8h] [rbp-78h]
  _QWORD v20[2]; // [rsp+18h] [rbp-68h] BYREF
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v22; // [rsp+30h] [rbp-50h]
  unsigned __int64 v23; // [rsp+40h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v22 = 0;
  ptr = nullptr;
  if ( !a2 )
    return nullptr;
  v20[0] = 0xFFFFFFFFLL;
  v20[1] = 0;
  v3 = (char *)qvector_reserve(&ptr, 0, a2, 16);
  v4 = *((_QWORD *)&v22 + 1);
  *((_QWORD *)&v22 + 1) = 0;
  v5 = (char *)ptr;
  v19 = v4;
  v6 = v22 - 1;
  if ( (__int64)v22 - 1 >= 0 )
  {
    v18 = v3;
    do
    {
      sub_622000(v18, v5);
      v7 = v5;
      v5 += 16;
      sub_621FE0(v7);
      v18 += 16;
      v8 = v6-- == 0;
    }
    while ( !v8 );
    v5 = (char *)ptr;
  }
  qfree(v5);
  v9 = v22;
  ptr = v3;
  *((_QWORD *)&v22 + 1) = v19;
  if ( (unsigned __int64)v22 < a2 )
  {
    while ( 1 )
    {
      sub_622000(&v3[16 * v9++], v20);
      if ( a2 == v9 )
        break;
      v3 = (char *)ptr;
    }
  }
  *(_QWORD *)&v22 = a2;
  v10 = 0;
  sub_621FE0(v20);
  do
  {
    sub_622020((char *)ptr + 16 * v10++, a1);
    a1 += 16;
  }
  while ( a2 != v10 );
  v11 = (__int64)ptr;
  if ( (unsigned __int64)v22 < *((_QWORD *)&v22 + 1) && ptr && (_QWORD)v22 )
  {
    v12 = qalloc(16 * v22);
    v13 = (char *)ptr;
    v11 = v12;
    if ( v12 )
    {
      v14 = v22 - 1;
      if ( (__int64)v22 - 1 >= 0 )
      {
        v15 = v12;
        do
        {
          sub_622000(v15, v13);
          v16 = v13;
          v15 += 16;
          v13 += 16;
          sub_621FE0(v16);
          v8 = v14-- == 0;
        }
        while ( !v8 );
        v13 = (char *)ptr;
      }
      qfree(v13);
    }
    else
    {
      return ptr;
    }
  }
  return (void *)v11;
}

