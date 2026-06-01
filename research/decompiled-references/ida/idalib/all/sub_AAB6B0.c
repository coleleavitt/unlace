__int64 __fastcall sub_AAB6B0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 *a5, __int64 a6)
{
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  char v15; // al
  __int64 v16; // r15
  __int64 v17; // rax

  if ( a4 != a6 )
    return 0;
  v9 = a4;
  v10 = sub_BAE550(a2);
  if ( !v10 )
    return 0;
  if ( v9 )
  {
    v12 = v10 + 16;
    v13 = (__int64)&a3[(unsigned int)(v9 - 1) + 1];
    do
    {
      v14 = *(_QWORD *)&byte_8[*a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*a3 | (unsigned __int8)*(_QWORD *)&byte_8[*a3 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
      if ( v14 != (*(_QWORD *)&byte_8[*a5 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                 | ((unsigned __int8)*a5 | (unsigned __int8)*(_QWORD *)&byte_8[*a5 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
      {
        v15 = *(_BYTE *)(*(_QWORD *)v12 + 89LL) >> 6;
        if ( v15 == 1 )
        {
          if ( !sub_AAB400(a1, *a3, *a5, v14, v11) )
            return 0;
        }
        else if ( v15 )
        {
          if ( v15 == 2 && !sub_AAB400(a1, *a5, *a3, v14, v11) )
            return 0;
        }
        else
        {
          v16 = sub_F67120(a5, a1);
          v17 = sub_F67120(a3, a1);
          if ( (*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v17) & 7) != (*(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v16) & 7) )
            return 0;
        }
      }
      ++a3;
      ++a5;
      v12 += 8;
    }
    while ( (__int64 *)v13 != a3 );
  }
  return 1;
}
