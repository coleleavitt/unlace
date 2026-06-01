__int64 __fastcall sub_53B660(__int64 *a1)
{
  __int64 v1; // rax
  __int64 (__fastcall *v2)(__int64 *); // rax
  __int64 v3; // rax
  _QWORD *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-A8h] BYREF
  void *v9; // [rsp+10h] [rbp-98h]
  __int128 v10; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+28h] [rbp-80h]
  __int128 v12; // [rsp+30h] [rbp-78h]
  __int128 v13; // [rsp+40h] [rbp-68h] BYREF
  __int64 v14; // [rsp+60h] [rbp-48h]
  int v15; // [rsp+68h] [rbp-40h]
  __int64 v16; // [rsp+70h] [rbp-38h]
  char v17; // [rsp+78h] [rbp-30h]
  unsigned __int64 v18; // [rsp+88h] [rbp-20h]

  v1 = *a1;
  v18 = __readfsqword(0x28u);
  v2 = *(__int64 (__fastcall **)(__int64 *))(v1 + 8);
  if ( (char *)v2 != (char *)sub_53AF00 )
    return v2(a1);
  v3 = a1[1];
  v17 = 0;
  v8[1] = 0;
  v9 = nullptr;
  ptr = nullptr;
  v14 = 1;
  v15 = -1;
  v16 = 0;
  v8[0] = v3;
  v10 = 0;
  v12 = 0;
  v13 = 0;
  if ( (unsigned int)find_tinfo_udt_member((int)v8) == -1 )
  {
    v4 = nullptr;
  }
  else
  {
    v4 = a1 + 2;
    a1[3] = v8[0];
    copy_tinfo_t(a1 + 2);
    v5 = v13;
    a1[1] -= v8[0];
    v6 = a1[4];
    a1[4] = v5;
    *(_QWORD *)&v13 = v6;
  }
  clear_tinfo_t(&v13);
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return (__int64)v4;
}

