char *__fastcall sub_AC6690(_QWORD *a1, char *a2, __int64 *a3)
{
  char *result; // rax
  char *v6; // rbx
  char *v7; // r12
  char *v8; // rdx
  __int64 v9; // rax
  char *v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx

  result = a2;
  v6 = (char *)a1[1];
  v7 = &a2[-*a1];
  if ( v6 == (char *)a1[2] )
  {
    sub_9E1780((__int64)a1, a2, a3);
    return &v7[*a1];
  }
  v8 = v6 + 8;
  if ( v6 != a2 )
  {
    v9 = *((_QWORD *)v6 - 1);
    *((_QWORD *)v6 - 1) = 0;
    v10 = v6 - 8;
    *((_QWORD *)v10 + 1) = v9;
    a1[1] = v8;
    v11 = (v10 - a2) >> 3;
    if ( v10 - a2 > 0 )
    {
      while ( 1 )
      {
        v12 = *((_QWORD *)v10 - 1);
        v13 = *(_QWORD *)v10;
        *((_QWORD *)v10 - 1) = 0;
        *(_QWORD *)v10 = v12;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        if ( !--v11 )
          break;
        v10 -= 8;
      }
    }
    v14 = *a3;
    *a3 = 0;
    v15 = *(_QWORD *)a2;
    *(_QWORD *)a2 = v14;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    return &v7[*a1];
  }
  v16 = *a3;
  *a3 = 0;
  *(_QWORD *)a2 = v16;
  a1[1] = v8;
  return result;
}

