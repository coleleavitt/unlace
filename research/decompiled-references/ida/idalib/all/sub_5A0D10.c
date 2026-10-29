unsigned __int64 __fastcall sub_5A0D10(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  _QWORD **v10; // rbx
  void *v11; // rdi
  _QWORD *v13; // [rsp+0h] [rbp-98h]
  __int64 v14; // [rsp+8h] [rbp-90h]
  char v15; // [rsp+17h] [rbp-81h] BYREF
  __int64 v16; // [rsp+18h] [rbp-80h] BYREF
  __int64 v17; // [rsp+20h] [rbp-78h] BYREF
  int v18; // [rsp+28h] [rbp-70h] BYREF
  void *v19; // [rsp+30h] [rbp-68h]
  int *v20; // [rsp+38h] [rbp-60h]
  int *v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v18 = 0;
  v19 = nullptr;
  v20 = &v18;
  v21 = &v18;
  v22 = 0;
  sub_5A0BA0(a1, a2, a4, &v17);
  v5 = (__int64)v20;
  v14 = a3 - a2;
  if ( v20 != &v18 )
  {
    v13 = a1 + 300;
    do
    {
      v6 = sub_3BDD60(a1, *(_QWORD *)(v5 + 32) + v14);
      v7 = *a1;
      v15 = 1;
      v8 = *(_QWORD *)(v5 + 40);
      v9 = v6;
      sub_7BE7C0(v13, v7, v6, &v15, 1, 80);
      v16 = v8;
      sub_7BE7C0(v13, v7, v9, &v16, 8, 65);
      v5 = std::_Rb_tree_increment(v5);
    }
    while ( (int *)v5 != &v18 );
  }
  v10 = (_QWORD **)v19;
  if ( v19 )
  {
    do
    {
      sub_599030(v10[3]);
      v11 = v10;
      v10 = (_QWORD **)v10[2];
      operator delete(v11, 0x30u);
    }
    while ( v10 );
  }
  return v23 - __readfsqword(0x28u);
}
