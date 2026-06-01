__int64 __fastcall sub_59CE00(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  __int64 v4; // [rsp+0h] [rbp-B0h] BYREF
  __int128 v5; // [rsp+8h] [rbp-A8h] BYREF
  void *v6; // [rsp+18h] [rbp-98h]
  __int128 v7; // [rsp+20h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-80h]
  __int128 v9; // [rsp+38h] [rbp-78h]
  __int128 v10; // [rsp+48h] [rbp-68h] BYREF
  __int64 v11; // [rsp+68h] [rbp-48h]
  int v12; // [rsp+70h] [rbp-40h]
  __int64 v13; // [rsp+78h] [rbp-38h]
  char v14; // [rsp+80h] [rbp-30h]
  unsigned __int64 v15; // [rsp+90h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v4 = 0;
  v6 = nullptr;
  ptr = nullptr;
  v11 = 1;
  v12 = -1;
  v13 = 0;
  v14 = 0;
  v5 = 0;
  v7 = 0;
  v9 = 0;
  v10 = 0;
  v2 = 0;
  if ( get_udm_by_tid(&v4, &v5, a2) != -1 )
    LOBYTE(v2) = (v13 & 0x300000000000LL) != 0;
  clear_tinfo_t(&v10);
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    qfree(ptr);
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  clear_tinfo_t(&v4);
  return v2;
}

