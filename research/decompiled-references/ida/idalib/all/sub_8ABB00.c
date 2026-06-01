__int64 __fastcall sub_8ABB00(char **a1, __int64 *a2, __int64 a3, char a4, char **a5, __int64 a6)
{
  char v8; // al
  void **v9; // r14
  char *v10; // r12
  unsigned int v11; // r13d
  void **v12; // rbx
  char *v13; // rbp
  void *v14; // rdi
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  void *v17[2]; // [rsp+10h] [rbp-50h]
  int v18[2]; // [rsp+20h] [rbp-40h]

  *(_QWORD *)v18 = __readfsqword(0x28u);
  *(_OWORD *)v17 = 0;
  ptr = nullptr;
  v8 = sub_8A9360((__int64)&ptr, a3, a4, a5, a6);
  v9 = (void **)ptr;
  v10 = (char *)v17[0];
  if ( v8 )
    v11 = sub_8A9BC0(a1, a2, (__int64 *)&ptr, a4, 0, (__int64 *)a5);
  else
    v11 = 2;
  if ( v9 )
  {
    v12 = v9;
    v13 = nullptr;
    if ( v10 )
    {
      do
      {
        jvalue_t_clear(v12 + 3);
        v14 = *v12;
        if ( *v12 )
        {
          v12[1] = nullptr;
          qfree(v14);
        }
        ++v13;
        v12 += 5;
      }
      while ( v13 != v10 );
    }
    qfree(v9);
  }
  return v11;
}
