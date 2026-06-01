__int64 __fastcall sub_457210(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v7; // rdi
  unsigned __int16 v8; // ax
  _QWORD *v9; // rbp
  unsigned __int64 v11; // [rsp+8h] [rbp-70h] BYREF
  int v12; // [rsp+10h] [rbp-68h] BYREF
  void *v13; // [rsp+18h] [rbp-60h]
  __int128 v14; // [rsp+20h] [rbp-58h]
  void *ptr; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+38h] [rbp-40h]
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v5 = *(int *)(a1 + 4LL * a3 + 16);
  v17 = __readfsqword(0x28u);
  v12 = 0;
  v7 = *(_QWORD *)(switch_dbctx(v5) + 1480);
  v14 = 0;
  v13 = nullptr;
  ptr = nullptr;
  v16 = 0;
  v8 = sub_3B9AA0(v7, a4, 4);
  sub_456A50(&v12, a4, v8);
  v9 = *(_QWORD **)(switch_dbctx(*(int *)(a1 + 4LL * a2 + 16)) + 1480);
  v11 = sub_3B9AA0((__int64)v9, a4, 0);
  sub_456BF0(&v12, (__int64 *)&v11, a4);
  sub_3CAE70(v9, a4, v11);
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    qfree(ptr);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return 1;
}

