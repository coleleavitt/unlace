__int64 __fastcall sub_3C8BB0(__int64 a1, unsigned __int64 a2, __int64 *a3, __int64 *a4)
{
  unsigned __int8 *v6; // rdi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // [rsp+0h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+8h] [rbp-D8h] BYREF
  void *v14; // [rsp+18h] [rbp-C8h]
  __int128 v15; // [rsp+20h] [rbp-C0h]
  void *ptr; // [rsp+30h] [rbp-B0h]
  __int128 v17; // [rsp+38h] [rbp-A8h]
  __int128 v18; // [rsp+48h] [rbp-98h] BYREF
  __int64 v19; // [rsp+58h] [rbp-88h]
  int v20; // [rsp+60h] [rbp-80h]
  __int64 v21; // [rsp+78h] [rbp-68h]
  int v22; // [rsp+80h] [rbp-60h]
  __int64 v23; // [rsp+88h] [rbp-58h]
  char v24; // [rsp+90h] [rbp-50h]
  unsigned __int64 v25; // [rsp+A0h] [rbp-40h]

  v6 = *(unsigned __int8 **)a1;
  v25 = __readfsqword(0x28u);
  v13 = 0;
  sub_630CA0(v6, 26, &v13, 16);
  if ( a2 < (unsigned __int64)v13 || a2 >= *((_QWORD *)&v13 + 1) )
    return sub_3C8AA0((unsigned __int8 **)a1, (__int64)a3, a4, a2, 15);
  v13 = 0;
  v12 = 0;
  v14 = nullptr;
  ptr = nullptr;
  v21 = 1;
  v22 = -1;
  v23 = 0;
  v24 = 0;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  if ( get_udm_by_tid(&v12, &v13, a2) == -1 || (BYTE8(v18) & 0xF) != 0xB )
  {
    clear_tinfo_t(&v18);
    if ( ptr )
    {
      *(_QWORD *)&v17 = 0;
      qfree(ptr);
    }
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14);
    }
    clear_tinfo_t(&v12);
    return sub_3C8AA0((unsigned __int8 **)a1, (__int64)a3, a4, a2, 15);
  }
  if ( a3 )
    *a3 = sub_6BB440(a1, *(_QWORD *)(a1 + 8), v20, v8, v9, v10);
  if ( a4 )
    *a4 = v19;
  clear_tinfo_t(&v18);
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  clear_tinfo_t(&v12);
  return 1;
}
