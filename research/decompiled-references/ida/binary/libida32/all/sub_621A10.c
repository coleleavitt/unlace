__int64 __fastcall sub_621A10(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  size_t v3; // rbp
  void *v5; // rax
  const void *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+8h] [rbp-50h] BYREF
  __int128 v10; // [rsp+10h] [rbp-48h]
  __int64 v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+28h] [rbp-30h]
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 16);
  v13 = __readfsqword(0x28u);
  v10 = 0;
  v8 = v2;
  ptr = nullptr;
  if ( v3 )
  {
    v5 = (void *)qalloc_or_throw(v3, a2);
    v6 = *(const void **)(a1 + 8);
    *((_QWORD *)&v10 + 1) = v3;
    ptr = v5;
    memcpy(v5, v6, v3);
    v7 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)&v10 = v3;
    v11 = v7;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 32);
  }
  v12 = *(_DWORD *)(a1 + 40);
  sub_3573A0((char **)&ptr);
  sub_621880(&v8, nullptr, 1000);
  sub_3573A0((char **)&ptr);
  sub_621880(&v8, nullptr, 2000);
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  return 0;
}

