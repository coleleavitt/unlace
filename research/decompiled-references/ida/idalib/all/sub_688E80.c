__int64 __fastcall sub_688E80(_QWORD *a1)
{
  _QWORD *v1; // r12
  __int64 v2; // rsi
  __int64 v3; // rsi
  const char *v4; // rcx
  __int64 v6; // rsi
  int v7; // r13d
  __int64 v8; // rbp
  __int64 v9; // rsi
  const char *v10; // rcx
  __int64 v11; // rsi
  unsigned __int8 v12; // al
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  _QWORD *v16; // [rsp+8h] [rbp-80h]
  unsigned __int8 v17; // [rsp+1Fh] [rbp-69h] BYREF
  void *v18; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+38h] [rbp-50h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v1 = a1 + 344;
  v2 = *a1;
  v22 = __readfsqword(0x28u);
  sub_7BF040(a1 + 344, v2, "$ signature names", 0);
  v16 = a1 + 345;
  sub_7BF040(a1 + 345, *a1, "$ libfuncs", 0);
  if ( (unsigned __int8)sub_7BEFD0(a1 + 344, *a1, &v18, -2, 65) )
  {
    v6 = *a1;
    ptr = v18;
    sub_7BE7C0(v1, v6, -2, &ptr, 8, 65);
    if ( v18 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        if ( (unsigned __int8)sub_7BEFD0(v1, *a1, &v19, v8, 65) )
        {
          v11 = *a1;
          ptr = (void *)v19;
          sub_7BE7C0(v1, v11, v8, &ptr, 8, 65);
        }
        v9 = *a1;
        v21 = 0;
        ptr = nullptr;
        if ( sub_7BEA80(v1, v9, &ptr, v8, 83) > 0 )
        {
          v10 = haystack;
          if ( (_QWORD)v21 )
            v10 = (const char *)ptr;
          sub_7BE7C0(v1, *a1, v8, v10, 0, 83);
        }
        if ( sub_7BE950(v1, *a1, v8, 0, 0, 80) == 1 )
        {
          v12 = sub_7BE710(v1, *a1, v8, 4176);
          v13 = *a1;
          v19 = v12;
          v17 = v12;
          sub_7BE7C0(v1, v13, v8, &v17, 1, 80);
        }
        if ( ptr )
        {
          *(_QWORD *)&v21 = 0;
          qfree(ptr);
        }
        v8 = ++v7;
      }
      while ( v7 < (unsigned __int64)v18 );
    }
  }
  if ( (unsigned __int8)sub_7BEFD0(v1, *a1, &v19, -1, 65) )
  {
    v15 = *a1;
    ptr = (void *)v19;
    sub_7BE7C0(v1, v15, -1, &ptr, 8, 65);
  }
  if ( (unsigned __int8)sub_7BEFD0(v16, *a1, &v19, 0, 65) )
  {
    v14 = *a1;
    ptr = (void *)v19;
    sub_7BE7C0(v16, v14, 0, &ptr, 8, 65);
  }
  v3 = *a1;
  v21 = 0;
  ptr = nullptr;
  if ( sub_7BEA80(v1, v3, &ptr, -1, 83) > 0 )
  {
    v4 = haystack;
    if ( (_QWORD)v21 )
      v4 = (const char *)ptr;
    sub_7BE7C0(v1, *a1, -1, v4, 0, 83);
  }
  if ( ptr )
  {
    *(_QWORD *)&v21 = 0;
    qfree(ptr);
  }
  return 1;
}
