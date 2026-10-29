char *__fastcall sub_552830(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, double a6, double a7)
{
  char *v7; // rax
  char *v8; // rdx
  char *v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rbx
  char *v12; // rax
  void *v13; // rdi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+18h] [rbp-40h]
  __int64 v18; // [rsp+20h] [rbp-38h]
  __int16 v19; // [rsp+28h] [rbp-30h]
  unsigned __int64 v20; // [rsp+38h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v17 = a1;
  ptr = nullptr;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v7 = sub_552700((__int64)&ptr, a2, 0.0, a7, a3, a4, a5);
  v8 = (char *)ptr;
  v9 = v7;
  if ( ptr )
  {
    v10 = v16;
    if ( (_QWORD)v16 )
    {
      v11 = 0;
      do
      {
        v12 = &v8[24 * v11];
        v13 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *((_QWORD *)v12 + 1) = 0;
          qfree(v13);
          v8 = (char *)ptr;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v16 = 0;
    qfree(v8);
  }
  return v9;
}

