__int64 __fastcall sub_38B9A0(int a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  char *v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rbx
  char *v11; // rax
  void *v12; // rdi
  void *v14; // [rsp+0h] [rbp-98h] BYREF
  __int128 v15; // [rsp+8h] [rbp-90h]
  void *v16; // [rsp+30h] [rbp-68h]
  __int128 v17; // [rsp+38h] [rbp-60h]
  unsigned __int64 v18; // [rsp+58h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v14 = nullptr;
  v16 = nullptr;
  v15 = 0;
  v17 = 0;
  linearray_t_ctr(&v14, a4);
  linearray_t_set_place();
  if ( !(unsigned __int8)linearray_t_ending(&v14, a2) )
    callui(27, a2, (int)&callui, v5, v6, v7);
  linearray_t_dtr(&v14);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  v8 = (char *)v14;
  if ( v14 )
  {
    v9 = v15;
    if ( (_QWORD)v15 )
    {
      v10 = 0;
      do
      {
        v11 = &v8[24 * v10];
        v12 = *(void **)v11;
        if ( *(_QWORD *)v11 )
        {
          *((_QWORD *)v11 + 1) = 0;
          qfree(v12);
          v8 = (char *)v14;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v15 = 0;
    qfree(v8);
  }
  return 0;
}

