__int64 __fastcall sub_F8190(char *s1, __int64 a2, int a3)
{
  int tinfo_property; // eax
  unsigned int v5; // eax
  __int64 v6; // rdi
  unsigned int v7; // r13d
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v15 = 0;
  v14 = 0;
  get_tinfo_attrs();
  tinfo_property = get_tinfo_property();
  v5 = sub_F51F0(s1, a3, &v14, tinfo_property);
  v6 = v14;
  v7 = v5;
  if ( v14 )
  {
    v8 = v15;
    if ( (_QWORD)v15 )
    {
      v9 = 0;
      do
      {
        v10 = (__int64 *)(v6 + 48 * v9);
        v11 = v10[3];
        if ( v11 )
        {
          v10[4] = 0;
          qfree(v11);
        }
        v12 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v12);
        }
        ++v9;
        v6 = v14;
      }
      while ( v8 != v9 );
    }
    *(_QWORD *)&v15 = 0;
    qfree(v6);
  }
  return v7;
}
