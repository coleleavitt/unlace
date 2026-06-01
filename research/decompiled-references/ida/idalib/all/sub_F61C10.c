_QWORD *__fastcall sub_F61C10(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *i; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v1 + 16) != 33 )
    BUG();
  v2 = sub_E900C0(*(_QWORD *)(v1 + 40));
  i = (_QWORD *)v2;
  if ( v2 )
  {
    for ( i = sub_7052B0((__int64 *)(*(_QWORD *)(v2 + 104) + 96LL), *(_QWORD *)(v2 + 104), v3, v4, v5, v6);
          sub_B97450((__int64)i);
          i = nullptr )
    {
      while ( (i[12] & 3) == 0 )
      {
        i = sub_7052B0(i + 12, (__int64)i, v8, v9, v10, v11);
        if ( !sub_B97450((__int64)i) )
          return i;
      }
    }
  }
  return i;
}
