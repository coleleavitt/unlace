void __fastcall sub_42E4D0(_QWORD *a1, __int64 *a2, char a3, __int64 *a4)
{
  unsigned __int64 v7; // r12
  const void *v8; // r15
  void *v9; // rdi
  __int64 v10; // rax

  if ( a4 == a2 )
  {
LABEL_4:
    if ( a3 )
      return;
LABEL_9:
    sub_42E200(a1, (const char *)a4);
    return;
  }
  v7 = a2[1];
  if ( v7 <= 1 )
  {
    a4[1] = 0;
    goto LABEL_4;
  }
  v8 = (const void *)*a2;
  v9 = (void *)*a4;
  if ( a4[2] < v7 )
  {
    v10 = qvector_reserve(a4, *a4, v7, 1);
    *a4 = v10;
    v9 = (void *)v10;
  }
  a4[1] = v7;
  memmove(v9, v8, v7 - 1);
  *(_BYTE *)(*a4 + v7 - 1) = 0;
  if ( !a3 )
    goto LABEL_9;
}
