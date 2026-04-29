__int64 __fastcall sub_F1AD0(char *s1, _QWORD *a2, int a3)
{
  __int64 v4; // rdi
  int tinfo_property; // eax
  unsigned int v7; // eax
  __int64 v8; // rdi
  unsigned int v9; // r13d
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v4 = *a2;
  v18 = __readfsqword(0x28u);
  v17 = 0;
  v16 = 0;
  get_tinfo_attrs(v4, &v16, 1);
  tinfo_property = get_tinfo_property(*a2, 23);
  v7 = sub_EEB30(s1, a3, &v16, tinfo_property);
  v8 = v16;
  v9 = v7;
  if ( v16 )
  {
    v10 = v17;
    if ( (_QWORD)v17 )
    {
      v11 = 0;
      do
      {
        v12 = (__int64 *)(v8 + 48 * v11);
        v13 = v12[3];
        if ( v13 )
        {
          v12[4] = 0;
          qfree(v13);
        }
        v14 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v14);
        }
        ++v11;
        v8 = v16;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v17 = 0;
    qfree(v8);
  }
  return v9;
}
