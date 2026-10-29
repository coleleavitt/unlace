void __fastcall sub_1FAAEE0(__int64 *a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 *v5; // rbx
  __int64 i; // r12
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // r8

  v3 = (char *)a2 - (char *)a1;
  v5 = a2;
  if ( (char *)a2 - (char *)a1 > 16 )
  {
    for ( i = ((v3 >> 4) - 2) / 2; ; --i )
    {
      sub_1F6ADE0((__int64)a1, i, v3 >> 4, a1[2 * i], a1[2 * i + 1]);
      if ( !i )
        break;
    }
  }
  if ( (unsigned __int64)a2 < a3 )
  {
    v7 = v3 >> 4;
    v8 = (unsigned __int64)a2 + ((a3 - 1 - (_QWORD)a2) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    do
    {
      while ( (int)sub_B84BB0(*v5, *a1) >= 0 )
      {
        v5 += 2;
        if ( (__int64 *)v8 == v5 )
          return;
      }
      v9 = *v5;
      v10 = v5[1];
      v5 += 2;
      *(v5 - 2) = *a1;
      *(v5 - 1) = a1[1];
      sub_1F6ADE0((__int64)a1, 0, v7, v9, v10);
    }
    while ( (__int64 *)v8 != v5 );
  }
}
