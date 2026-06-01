unsigned __int64 __fastcall sub_47BE10(__int64 a1, __int64 *a2, int a3, int a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+0h] [rbp-A0h] BYREF
  _UNKNOWN **v14; // [rsp+8h] [rbp-98h] BYREF
  __int64 v15; // [rsp+10h] [rbp-90h]
  void *v16; // [rsp+18h] [rbp-88h]
  int v17; // [rsp+20h] [rbp-80h]
  __int64 v18; // [rsp+28h] [rbp-78h]
  int v19; // [rsp+30h] [rbp-70h]
  int v20; // [rsp+34h] [rbp-6Ch]
  __int64 v21; // [rsp+38h] [rbp-68h]
  void *v22; // [rsp+40h] [rbp-60h]
  __int128 v23; // [rsp+48h] [rbp-58h]
  void *ptr; // [rsp+58h] [rbp-48h]
  __int128 v25; // [rsp+60h] [rbp-40h]
  unsigned __int64 v26; // [rsp+70h] [rbp-30h]

  v5 = a4;
  v26 = __readfsqword(0x28u);
  v19 = a3;
  v18 = a1;
  v6 = *(int *)(a1 + 4LL * a3 + 16);
  v15 = 0;
  v17 = 2;
  v20 = a4;
  v16 = &unk_23ADD40;
  v14 = &off_2B29438;
  v21 = -1;
  v22 = nullptr;
  ptr = nullptr;
  v23 = 0;
  v25 = 0;
  v7 = switch_dbctx(v6);
  v8 = *(int *)(a1 + 4 * v5 + 16);
  v15 = v7;
  v9 = switch_dbctx(v8);
  v10 = sub_3BDD60(*(_QWORD **)(v9 + 1672), *a2);
  v11 = a2[1] - *a2;
  v13 = v10;
  sub_7BF7C0(&v13, v9, v10, v11, 0, &v14);
  sub_47BC20((__int64)&v14);
  v14 = &off_2B29438;
  if ( ptr )
  {
    *(_QWORD *)&v25 = 0;
    qfree(ptr);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  return v26 - __readfsqword(0x28u);
}
