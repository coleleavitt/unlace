unsigned __int64 __fastcall sub_7608A0(const char *a1, int *a2, __int64 a3)
{
  __int64 v5; // r13
  unsigned __int64 v6; // r15
  _BYTE *v7; // rsi
  int v8; // eax
  void *v10; // [rsp+0h] [rbp-78h] BYREF
  __int128 v11; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+28h] [rbp-50h]
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v10 = nullptr;
  v11 = 0;
  if ( !(unsigned __int8)qgetenv("PATH") )
  {
    v5 = v11;
    v6 = 2;
    if ( (_QWORD)v11 )
    {
      v6 = v11 + 1;
      v5 = v11 - 1;
    }
    v7 = v10;
    if ( *((_QWORD *)&v11 + 1) < v6 )
    {
      v10 = (void *)qvector_reserve(&v10, v10, v6, 1);
      v7 = v10;
    }
    *(_QWORD *)&v11 = v6;
    v7[v5] = 46;
    *((_BYTE *)v10 + v5 + 1) = 0;
  }
  idadir(0);
  ptr = nullptr;
  v13 = 0;
  sub_3573A0((char **)&ptr);
  v8 = sub_7605A0((__int64)ptr, a1, a2, a3, 0);
  if ( v8 )
    sub_7607E0(
      (__int64)"Can't initialize help system.\nFile name: '%s', Reason: %s.\nPress Enter to exit.\n",
      a1,
      *((const char **)&unk_2B0F6E0 - v8));
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return v14 - __readfsqword(0x28u);
}

