__int64 __fastcall sub_3C38F0(__int64 *a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v6; // rdi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+10h] [rbp-C8h] BYREF
  void *v14; // [rsp+20h] [rbp-B8h]
  __int128 v15; // [rsp+28h] [rbp-B0h]
  void *ptr; // [rsp+38h] [rbp-A0h]
  __int128 v17; // [rsp+40h] [rbp-98h]
  __int128 v18; // [rsp+50h] [rbp-88h] BYREF
  int v19; // [rsp+60h] [rbp-78h]
  int v20; // [rsp+64h] [rbp-74h]
  __int64 v21; // [rsp+70h] [rbp-68h]
  int v22; // [rsp+78h] [rbp-60h]
  __int64 v23; // [rsp+80h] [rbp-58h]
  char v24; // [rsp+88h] [rbp-50h]
  unsigned __int64 v25; // [rsp+98h] [rbp-40h]

  v6 = *a1;
  v25 = __readfsqword(0x28u);
  *(_QWORD *)&v13 = 0;
  sub_6141A0(v6, 26, &v13, 8);
  if ( a2 < (unsigned int)v13 || a2 >= DWORD1(v13) )
    return sub_3C37D0(a1, (__int64)a3, a4, a2, 0xFu);
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
    return sub_3C37D0(a1, (__int64)a3, a4, a2, 0xFu);
  }
  if ( a3 )
    *a3 = sub_69AA70((_DWORD)a1, a1[1], v20, v8, v9, v10);
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

