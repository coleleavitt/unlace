__int64 __fastcall sub_63EBB0(__int64 a1)
{
  __int64 v1; // rax
  size_t v2; // rbp
  void *v4; // rax
  const void *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+8h] [rbp-50h] BYREF
  __int128 v9; // [rsp+10h] [rbp-48h]
  __int64 v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+28h] [rbp-30h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 16);
  v12 = __readfsqword(0x28u);
  v9 = 0;
  v7 = v1;
  ptr = nullptr;
  if ( v2 )
  {
    v4 = (void *)qalloc_or_throw(v2);
    v5 = *(const void **)(a1 + 8);
    *((_QWORD *)&v9 + 1) = v2;
    ptr = v4;
    memcpy(v4, v5, v2);
    v6 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)&v9 = v2;
    v10 = v6;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 32);
  }
  v11 = *(_DWORD *)(a1 + 40);
  sub_35A790((char **)&ptr);
  sub_63EA20(&v7, 0, 1000);
  sub_35A790((char **)&ptr);
  sub_63EA20(&v7, 0, 2000);
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    qfree(ptr);
  }
  return 0;
}
