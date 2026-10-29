__int64 __fastcall sub_F8190(char *s1, __int64 a2, int a3)
{
  int tinfo_property; // eax
  unsigned int v5; // eax
  __int64 v6; // rdi
  unsigned int v7; // r13d
  __int64 v8; // r12
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v13 = 0;
  v12 = 0;
  get_tinfo_attrs();
  tinfo_property = get_tinfo_property();
  v5 = sub_F51F0(s1, a3, &v12, tinfo_property);
  v6 = v12;
  v7 = v5;
  if ( v12 )
  {
    v8 = v13;
    if ( (_QWORD)v13 )
    {
      v9 = 0;
      do
      {
        v10 = (_QWORD *)(v6 + 48 * v9);
        if ( v10[3] )
        {
          v10[4] = 0;
          qfree();
        }
        if ( *v10 )
        {
          v10[1] = 0;
          qfree();
        }
        ++v9;
        v6 = v12;
      }
      while ( v8 != v9 );
    }
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v7;
}
