__int64 __fastcall sub_428890(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a3 + 8);
  if ( v5 )
  {
    v12 = 0;
    v13 = 0;
    v12 = qvector_reserve(&v12, 0, v5, 48);
    if ( (unsigned __int8)sub_4297C0(a1, &v12, a3) )
      sub_4369E0(&v12);
    v6 = v12;
    if ( v12 )
    {
      v7 = v13;
      if ( (_QWORD)v13 )
      {
        v8 = 0;
        do
        {
          v9 = (__int64 *)(v6 + 48 * v8);
          v10 = *v9;
          if ( *v9 )
          {
            v9[1] = 0;
            qfree(v10, (const char *)&v12);
            v6 = v12;
          }
          ++v8;
        }
        while ( v7 != v8 );
      }
      *(_QWORD *)&v13 = 0;
      qfree(v6, (const char *)&v12);
    }
  }
  sub_42D280(a1, a2, 0, 6);
  return 2;
}
