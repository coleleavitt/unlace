unsigned __int64 __fastcall sub_488C00(int *a1, __int64 a2, unsigned __int64 *a3, int *a4)
{
  unsigned __int64 *v5; // rbx
  unsigned __int64 *v6; // r12
  unsigned __int64 *v7; // rbx
  char *v8; // r12
  void *v10; // [rsp+8h] [rbp-F8h] BYREF
  int v11[4]; // [rsp+10h] [rbp-F0h]
  int v12[2]; // [rsp+20h] [rbp-E0h]
  int v13; // [rsp+28h] [rbp-D8h]
  void *v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15[4]; // [rsp+40h] [rbp-C0h]
  int v16[2]; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  void *v18; // [rsp+68h] [rbp-98h] BYREF
  __int128 v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+88h] [rbp-78h]
  void *ptr; // [rsp+98h] [rbp-68h] BYREF
  __int128 v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+B0h] [rbp-50h]
  int v25; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v26; // [rsp+C0h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v10 = nullptr;
  *(_QWORD *)v12 = 0;
  v13 = -1;
  v14 = nullptr;
  *(_QWORD *)v16 = 0;
  LODWORD(v17) = -1;
  *(_OWORD *)v11 = 0;
  *(_OWORD *)v15 = 0;
  sub_486AE0(a4, (__int64)&v10, (__int64)&v14, a3);
  v19 = 0;
  v18 = nullptr;
  v20 = 0;
  v21 = -1;
  ptr = nullptr;
  v24 = 0;
  v25 = -1;
  v23 = 0;
  sub_486AE0(a1, (__int64)&v18, (__int64)&ptr, a3);
  rangeset_t_sub2((int)&v10);
  rangeset_t_sub2((int)&v14);
  v5 = (unsigned __int64 *)v10;
  v6 = (unsigned __int64 *)((char *)v10 + 16 * *(_QWORD *)v11);
  if ( v10 != v6 )
  {
    do
    {
      sub_3C0380(a2, v5, 0, 0);
      v5 += 2;
    }
    while ( v6 != v5 );
  }
  v7 = (unsigned __int64 *)v14;
  v8 = (char *)v14 + 16 * *(_QWORD *)v15;
  if ( v8 != v14 )
  {
    do
    {
      sub_3C0380(a2, v7, 1, 0);
      v7 += 2;
    }
    while ( v8 != (char *)v7 );
  }
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    qfree(ptr);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  if ( v14 )
  {
    *(_QWORD *)v15 = 0;
    qfree(v14);
  }
  if ( v10 )
  {
    *(_QWORD *)v11 = 0;
    qfree(v10);
  }
  return v26 - __readfsqword(0x28u);
}
