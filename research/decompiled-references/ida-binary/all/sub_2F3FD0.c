__int64 *__fastcall sub_2F3FD0(__int64 *a1, __int64 **a2)
{
  unsigned __int64 v2; // rdx
  __int64 v4; // rsi
  const char *v5; // rsi
  const char *v6; // rdx
  bool v7; // cc
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v2 = (unsigned __int64)a2[1];
  v10 = __readfsqword(0x28u);
  if ( v2 == 1 )
  {
    v4 = **a2;
    v8 = 0;
    v9 = 0;
    get_ea_name(&v8, v4, 21, 0);
    if ( (_QWORD)v9 )
    {
      v5 = (const char *)v8;
      if ( (unsigned __int64)(v9 - 1) > 0x28 )
      {
        v7 = *((_QWORD *)&v9 + 1) <= 0x2Bu;
        *(_BYTE *)(v8 + 40) = 0;
        *(_QWORD *)&v9 = 41;
        if ( v7 )
        {
          v8 = qvector_reserve(&v8, v5, 44, 1);
          v5 = (const char *)v8;
        }
        *((_BYTE *)v5 + 43) = 0;
        *(_QWORD *)&v9 = 44;
        *((_WORD *)v5 + 20) = -32542;
        *((_BYTE *)v5 + 42) = -90;
      }
    }
    else
    {
      v5 = &s1;
    }
    sub_169A50(a1, (__int64)"function %s", v5);
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v8, "function %s", v6);
    }
    return (__int64 *)(v10 - __readfsqword(0x28u));
  }
  else if ( v2 > 0x63 )
  {
    return sub_169A50(a1, (__int64)"many functions");
  }
  else
  {
    return sub_169A50(a1, (__int64)"%zu functions", v2);
  }
}
