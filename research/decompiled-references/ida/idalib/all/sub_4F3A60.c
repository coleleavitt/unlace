unsigned __int64 __fastcall sub_4F3A60(__int64 a1, __int64 a2, __int64 *a3)
{
  int v4; // ebp
  char **v5; // r14
  __int64 i; // rax
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v14; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v4 = 1;
  v17 = __readfsqword(0x28u);
  v5 = off_2B2D4D8;
  do
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a2 + 1672) + 8LL * v4 + 2616);
      if ( (unsigned __int8)sub_7BE6E0(a2, &v14) )
      {
        ptr = nullptr;
        v16 = 0;
        for ( i = sub_7BEB80(&v14, a2, 65); ; i = sub_7BEBF0(&v14, a2, v7, 65) )
        {
          v7 = i;
          if ( i == -1 )
            break;
          node2ea(i);
          sub_35A910((__int64 *)&ptr);
        }
        if ( (unsigned __int64)v16 > 1 )
        {
          v9 = a3[1];
          v10 = *a3;
          if ( a3[2] < (unsigned __int64)(v9 + 1) )
          {
            v12 = qvector_reserve(a3, v10, v9 + 1, 24);
            *a3 = v12;
            v9 = a3[1];
            v10 = v12;
          }
          v11 = v10 + 24 * v9;
          *(_QWORD *)v11 = 0;
          *(_OWORD *)(v11 + 8) = 0;
          ++a3[1];
          sub_35A790((char **)v11);
        }
        if ( ptr )
          break;
      }
      ++v4;
      v5 += 3;
      if ( v4 == 17 )
        return v17 - __readfsqword(0x28u);
    }
    *(_QWORD *)&v16 = 0;
    ++v4;
    v5 += 3;
    qfree(ptr);
  }
  while ( v4 != 17 );
  return v17 - __readfsqword(0x28u);
}
