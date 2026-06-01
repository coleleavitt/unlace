__int64 __fastcall sub_616CE0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi

  v2 = (__int64)(a1 + 13);
  *(_QWORD *)(v2 - 104) = &off_1C528C0;
  result = sub_616AE0(v2);
  v4 = (void *)a1[13];
  if ( v4 )
    result = sub_186B220(v4);
  v5 = (void *)a1[10];
  if ( v5 )
    result = sub_186B220(v5);
  v6 = (void *)a1[7];
  if ( v6 )
    result = sub_186B220(v6);
  v7 = (__int64 *)a1[6];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      return sub_186B220(v7 - 1);
    do
    {
      v9 = *v7++;
      result = sub_62A410(a1[5], v9);
    }
    while ( v7 < v8 );
    v7 = (__int64 *)a1[6];
    if ( v7 )
      return sub_186B220(v7 - 1);
  }
  return result;
}

