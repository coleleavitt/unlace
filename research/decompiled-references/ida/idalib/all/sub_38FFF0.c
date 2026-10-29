__int64 __fastcall sub_38FFF0(__int64 a1)
{
  __int64 v1; // rax
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  char *v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rbx
  char *v9; // rax
  void *v10; // rdi
  int v12; // [rsp+1Ch] [rbp-BCh] BYREF
  __int64 (__fastcall **v13)(); // [rsp+20h] [rbp-B8h] BYREF
  int v14; // [rsp+28h] [rbp-B0h]
  __int64 v15; // [rsp+30h] [rbp-A8h]
  void *v16; // [rsp+40h] [rbp-98h] BYREF
  __int128 v17; // [rsp+48h] [rbp-90h]
  void *v18; // [rsp+70h] [rbp-68h]
  __int128 v19; // [rsp+78h] [rbp-60h]
  unsigned __int64 v20; // [rsp+98h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v12 = 0;
  v16 = nullptr;
  v18 = nullptr;
  v17 = 0;
  v19 = 0;
  linearray_t_ctr(&v16, &v12);
  v1 = *(_QWORD *)(a1 + 24);
  v14 = 0;
  v13 = off_2B25850;
  v15 = v1;
  linearray_t_set_place(&v16, &v13);
  if ( !(unsigned __int8)linearray_t_ending(&v16) )
    callui(27, (int)&v13, (int)&callui, v3, v4, v5);
  linearray_t_dtr(&v16);
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  v6 = (char *)v16;
  if ( v16 )
  {
    v7 = v17;
    if ( (_QWORD)v17 )
    {
      v8 = 0;
      do
      {
        v9 = &v6[24 * v8];
        v10 = *(void **)v9;
        if ( *(_QWORD *)v9 )
        {
          *((_QWORD *)v9 + 1) = 0;
          qfree(v10);
          v6 = (char *)v16;
        }
        ++v8;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)&v17 = 0;
    qfree(v6);
  }
  return 7;
}
