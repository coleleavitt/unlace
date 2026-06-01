_QWORD *__fastcall sub_53AF00(_QWORD *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rax
  _QWORD v6[2]; // [rsp+0h] [rbp-A8h] BYREF
  void *v7; // [rsp+10h] [rbp-98h]
  __int128 v8; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+28h] [rbp-80h]
  __int128 v10; // [rsp+30h] [rbp-78h]
  __int128 v11; // [rsp+40h] [rbp-68h] BYREF
  __int64 v12; // [rsp+60h] [rbp-48h]
  int v13; // [rsp+68h] [rbp-40h]
  __int64 v14; // [rsp+70h] [rbp-38h]
  char v15; // [rsp+78h] [rbp-30h]
  unsigned __int64 v16; // [rsp+88h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v13 = -1;
  v6[1] = 0;
  v7 = nullptr;
  ptr = nullptr;
  v12 = 1;
  v14 = 0;
  v1 = a1[1];
  v15 = 0;
  v8 = 0;
  v6[0] = v1;
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)find_tinfo_udt_member((int)v6) == -1 )
  {
    v2 = nullptr;
  }
  else
  {
    v2 = a1 + 2;
    a1[3] = v6[0];
    copy_tinfo_t(a1 + 2);
    v3 = v11;
    a1[1] -= v6[0];
    v4 = a1[4];
    a1[4] = v3;
    *(_QWORD *)&v11 = v4;
  }
  clear_tinfo_t(&v11);
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v2;
}

