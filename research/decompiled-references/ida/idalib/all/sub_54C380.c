__int64 __fastcall sub_54C380(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  unsigned int v4; // r13d
  char *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbp
  char *v8; // rbx
  void *v9; // rdi
  void *v10; // rdi
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v13; // [rsp+8h] [rbp-60h]
  __int128 v14; // [rsp+18h] [rbp-50h]
  __int64 v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+30h] [rbp-38h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  ptr = nullptr;
  v3 = sub_3BDD60(a1, a3);
  v15 = 0;
  v16 = 1;
  v13 = 0;
  v14 = 0;
  if ( (unsigned __int8)create_tinfo(a2, 13, 13, &ptr)
    && (unsigned __int8)sub_53E720((__int64)a1, a2, v3)
    && (unsigned __int8)sub_5B6F10(a1, a2, 0, 2) )
  {
    v4 = sub_54BE00(a1, a2, v3);
  }
  else
  {
    v4 = 0;
  }
  v5 = (char *)ptr;
  if ( ptr )
  {
    v6 = v13;
    if ( (_QWORD)v13 )
    {
      v7 = 0;
      do
      {
        v8 = &v5[144 * v7];
        clear_tinfo_t(v8 + 64);
        v9 = *((void **)v8 + 5);
        if ( v9 )
        {
          *((_QWORD *)v8 + 6) = 0;
          qfree(v9);
        }
        v10 = *((void **)v8 + 2);
        if ( v10 )
        {
          *((_QWORD *)v8 + 3) = 0;
          qfree(v10);
        }
        ++v7;
        v5 = (char *)ptr;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v13 = 0;
    qfree(v5);
  }
  return v4;
}
