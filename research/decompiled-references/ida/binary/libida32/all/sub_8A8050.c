__int64 __fastcall sub_8A8050(_QWORD *a1)
{
  __int64 i; // rbx
  const char *v2; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  void *v5; // rdi
  __int64 v7; // [rsp+0h] [rbp-68h] BYREF
  int v8; // [rsp+8h] [rbp-60h] BYREF
  void *v9; // [rsp+10h] [rbp-58h]
  int *v10; // [rsp+18h] [rbp-50h]
  int *v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+28h] [rbp-40h]
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v8 = 0;
  v9 = nullptr;
  v10 = &v8;
  v11 = &v8;
  v12 = 0;
  sub_8A7C10(a1, &v7, a1 + 14, 0);
  sub_8A7C10(a1, &v7, a1 + 8, 1);
  for ( i = (__int64)v10; (int *)i != &v8; i = std::_Rb_tree_increment() )
  {
    v2 = haystack;
    if ( *(_QWORD *)(i + 40) )
      v2 = *(const char **)(i + 32);
    sub_8A52B0((__int64)a1, (int)v2, *(_QWORD *)(i + 56));
  }
  v3 = v9;
  if ( v9 )
  {
    do
    {
      v4 = v3;
      sub_8A46D0((_QWORD *)v3[3]);
      v5 = (void *)v3[4];
      v3 = (_QWORD *)v3[2];
      if ( v5 )
      {
        v4[5] = 0;
        qfree(v5);
      }
      operator delete(v4, 0x40u);
    }
    while ( v3 );
  }
  return 0;
}

