void __fastcall sub_3E430(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 *v5; // rbx
  __int64 i; // rbp
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx

  v3 = a2 - (_QWORD)a1;
  v5 = (__int64 *)a2;
  if ( a2 - (__int64)a1 > 8 )
  {
    for ( i = ((v3 >> 3) - 2) / 2; ; --i )
    {
      a2 = i;
      sub_3E280((__int64)a1, i, v3 >> 3, a1[i]);
      if ( !i )
        break;
    }
  }
  v7 = v3 >> 3;
  while ( (unsigned __int64)v5 < a3 )
  {
    while ( 1 )
    {
      v8 = *a1;
      v9 = sub_FE30(*v5, a2, a3);
      if ( v9 < (int)sub_FE30(v8, a2, v10) )
        break;
      if ( (unsigned __int64)++v5 >= a3 )
        return;
    }
    v11 = *v5;
    a2 = 0;
    *v5++ = *a1;
    sub_3E280((__int64)a1, 0, v7, v11);
  }
}
