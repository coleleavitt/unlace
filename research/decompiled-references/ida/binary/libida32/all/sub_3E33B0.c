__int64 __fastcall sub_3E33B0(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // edx
  __int64 v12; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+10h] [rbp-D8h] BYREF
  void *v14; // [rsp+20h] [rbp-C8h]
  __int128 v15; // [rsp+28h] [rbp-C0h]
  void *ptr; // [rsp+38h] [rbp-B0h]
  __int128 v17; // [rsp+40h] [rbp-A8h]
  __int128 v18; // [rsp+50h] [rbp-98h] BYREF
  int v19; // [rsp+60h] [rbp-88h]
  __int64 v20; // [rsp+70h] [rbp-78h]
  int v21; // [rsp+78h] [rbp-70h]
  __int64 v22; // [rsp+80h] [rbp-68h]
  char v23; // [rsp+88h] [rbp-60h]
  unsigned __int8 v24[40]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+B8h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  *(_WORD *)a2 = 0;
  *(_OWORD *)(a2 + 2) = -1;
  v6 = *a1;
  *(_QWORD *)&v13 = 0;
  sub_6141A0(v6, 26, &v13, 8);
  if ( a3 < (unsigned int)v13 || a3 >= DWORD1(v13) )
    goto LABEL_11;
  v13 = 0;
  v12 = 0;
  v14 = nullptr;
  ptr = nullptr;
  v20 = 1;
  v21 = -1;
  v22 = 0;
  v23 = 0;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  if ( get_udm_by_tid(&v12, &v13, a3) == -1 || (BYTE8(v18) & 0xF) != 0xC )
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
LABEL_11:
    v7 = sub_3B90A0(a1, a3);
    v8 = *a1;
    LODWORD(v13) = v7;
    v9 = sub_79B5C0(&v13, v8, 28, v24, 26, 83);
    v10 = v9;
    if ( v9 > 0 )
    {
      sub_3E3300(a2, v24, v9);
      return 18;
    }
    return v10;
  }
  *(_DWORD *)a2 = v19;
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
  return 18;
}

