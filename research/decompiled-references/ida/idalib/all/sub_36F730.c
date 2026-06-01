__int64 __fastcall sub_36F730(__int64 a1, __int64 a2)
{
  char v2; // dl
  void *v3; // rdi
  __int64 v4; // rax
  int v6; // [rsp+Ch] [rbp-7Ch] BYREF
  __int64 (__fastcall **v7)(); // [rsp+10h] [rbp-78h] BYREF
  int v8; // [rsp+18h] [rbp-70h]
  __int64 v9; // [rsp+20h] [rbp-68h]
  __int128 v10; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-38h]
  void *ptr; // [rsp+58h] [rbp-30h]
  unsigned __int64 v15; // [rsp+68h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v7 = off_2B25850;
  ptr = &v7;
  v8 = 0;
  v9 = getinf(19);
  v11 = 0;
  v12 = -1;
  v13 = 0;
  v10 = 0;
  ptr = (void *)idaplace_t__clone();
  v6 = *(_QWORD *)(a1 + 8);
  v2 = bookmarks_t_get(&v10, 0, &v6, 0);
  v3 = ptr;
  v4 = -1;
  if ( v2 )
    v4 = *((_QWORD *)ptr + 2);
  *(_QWORD *)(a2 + 8) = v4;
  if ( v3 )
    qfree(v3);
  return 0;
}
