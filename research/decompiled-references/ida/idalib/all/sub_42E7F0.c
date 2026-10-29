unsigned __int64 __fastcall sub_42E7F0(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 i; // rax
  __int64 v8; // rbp
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  char *v13; // rdi
  __int64 v14; // r15
  const char *v15; // rcx
  const char *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // [rsp+18h] [rbp-C0h] BYREF
  void *ptr; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+28h] [rbp-B0h]
  _QWORD *v24; // [rsp+40h] [rbp-98h]
  __int128 v25; // [rsp+48h] [rbp-90h] BYREF
  _OWORD v26[4]; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v27; // [rsp+98h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  netnode_check(&v21, "$ desktops", 0, 0);
  if ( v21 != -1 )
  {
    v6 = *(_QWORD **)(a2 + 1672);
    v25 = 0;
    v24 = v6;
    memset(v26, 0, sizeof(v26));
    sub_630CA0(*v6, 26, &v25, 16);
    ptr = nullptr;
    v23 = 0;
    for ( i = sub_7BF580(&v21, a2, &ptr, 72); i > 0; i = sub_7BF600(&v21, a2, &ptr, v15, 72) )
    {
      v16 = haystack;
      if ( (_QWORD)v23 )
        v16 = (const char *)ptr;
      v17 = sub_7BF490(&v21, a2, v16, 72);
      v18 = a3[1];
      v14 = v17;
      v19 = *a3;
      if ( a3[2] < (unsigned __int64)(v18 + 1) )
      {
        v20 = qvector_reserve(a3, v19, v18 + 1, 24);
        *a3 = v20;
        v18 = a3[1];
        v19 = v20;
      }
      v8 = v19 + 24 * v18;
      *(_QWORD *)v8 = 0;
      v9 = v24;
      *(_OWORD *)(v8 + 8) = 0;
      ++a3[1];
      v10 = sub_3BDE50(v9, v14);
      v13 = (char *)v26;
      if ( v10 >= (unsigned __int64)v25 && v10 < *((_QWORD *)&v25 + 1) )
      {
        LOBYTE(v26[0]) = 43;
        LODWORD(v14) = v14 - v25;
        v13 = (char *)v26 + 1;
      }
      qsnprintf((_DWORD)v13, 63, (unsigned int)"%a", v14, v11, v12);
      sub_35A790((char **)v8);
      v15 = haystack;
      if ( (_QWORD)v23 )
        v15 = (const char *)ptr;
    }
    if ( ptr )
    {
      *(_QWORD *)&v23 = 0;
      qfree(ptr);
    }
  }
  return v27 - __readfsqword(0x28u);
}
