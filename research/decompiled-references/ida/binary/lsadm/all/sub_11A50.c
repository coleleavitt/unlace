__int64 __fastcall sub_11A50(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rdi
  __int64 *v5; // r15
  __int64 v6; // rax
  const char *v7; // rdx
  const char *v8; // rdx
  void *v9; // rdi
  void *v11; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-50h] BYREF
  __int128 v14; // [rsp+28h] [rbp-48h]
  unsigned __int64 v15; // [rsp+38h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  v3 = sub_29E10(24);
  *(_OWORD *)(v3 + 8) = 0;
  v4 = (__int64 *)v3;
  v5 = (__int64 *)v3;
  *(_QWORD *)v3 = 0;
  v6 = *(int *)(a2 + 8);
  if ( (int)v6 >= 29 )
    v6 = 0;
  sub_10E50(v4, "type", off_7A460[v6]);
  v14 = 0;
  ptr = nullptr;
  sub_CF40((char **)&ptr);
  v7 = s1;
  if ( (_QWORD)v14 )
    v7 = (const char *)ptr;
  sub_10E50(v5, "license_id", v7);
  if ( ptr )
  {
    *(_QWORD *)&v14 = 0;
    j__free(ptr);
  }
  ptr = nullptr;
  v14 = 0;
  sub_CF40((char **)&ptr);
  v8 = s1;
  if ( (_QWORD)v14 )
    v8 = (const char *)ptr;
  sub_10E50(v5, "owner_id", v8);
  if ( ptr )
  {
    *(_QWORD *)&v14 = 0;
    j__free(ptr);
  }
  sub_11050((__int64)&v11, *(_QWORD *)(a2 + 24));
  if ( v12 > 1 )
    sub_10E50(v5, "start", (const char *)v11);
  sub_11050((__int64)&ptr, *(_QWORD *)(a2 + 32));
  if ( (unsigned __int64)v14 > 1 )
    sub_10E50(v5, "expiration", (const char *)ptr);
  v9 = ptr;
  *(_DWORD *)a1 = 3;
  *(_QWORD *)(a1 + 8) = v5;
  if ( v9 )
  {
    *(_QWORD *)&v14 = 0;
    j__free(v9);
  }
  if ( v11 )
  {
    v12 = 0;
    j__free(v11);
  }
  return a1;
}

