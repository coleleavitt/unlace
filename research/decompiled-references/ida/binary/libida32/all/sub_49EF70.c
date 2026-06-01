__int64 __fastcall sub_49EF70(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // r13d
  unsigned int v4; // esi
  int v5; // ebx
  void **v6; // rbx
  void **v7; // rbp
  __int128 v9; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+10h] [rbp-48h]
  _BOOL4 v11; // [rsp+18h] [rbp-40h]
  char v12; // [rsp+1Ch] [rbp-3Ch]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v10 = a2;
  v2 = 0;
  v11 = a2 == 0;
  v3 = 0;
  v12 = 0;
  v9 = 0;
  do
  {
    v4 = v2;
    v5 = sub_49E940(a1, v2++, 1, (__int64)&v9, 0);
    v3 += sub_49E940(a1, v4, 1, (__int64)&v9, 1) + v5;
  }
  while ( v2 != 9 );
  v6 = (void **)a1[18];
  v7 = &v6[a1[19]];
  if ( v6 != v7 )
  {
    do
    {
      if ( *v6 )
        operator delete(*v6, 0x20u);
      ++v6;
    }
    while ( v7 != v6 );
    v7 = (void **)a1[18];
  }
  if ( v7 )
  {
    a1[19] = 0;
    qfree(v7);
    a1[18] = 0;
    a1[20] = 0;
  }
  return v3;
}

