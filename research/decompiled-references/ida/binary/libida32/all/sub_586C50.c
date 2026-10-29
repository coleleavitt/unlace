unsigned __int64 __fastcall sub_586C50(__int64 *a1, int a2, int a3, int a4)
{
  int *v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // r14
  int v8; // r13d
  unsigned int v9; // ebp
  __int64 v10; // rsi
  _QWORD **v11; // rbx
  void *v12; // rdi
  _QWORD *v14; // [rsp+0h] [rbp-98h]
  int v15; // [rsp+Ch] [rbp-8Ch]
  char v16; // [rsp+1Bh] [rbp-7Dh] BYREF
  int v17; // [rsp+1Ch] [rbp-7Ch] BYREF
  __int64 v18; // [rsp+20h] [rbp-78h] BYREF
  int v19; // [rsp+28h] [rbp-70h] BYREF
  void *v20; // [rsp+30h] [rbp-68h]
  int *v21; // [rsp+38h] [rbp-60h]
  int *v22; // [rsp+40h] [rbp-58h]
  __int64 v23; // [rsp+48h] [rbp-50h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v19 = 0;
  v20 = nullptr;
  v21 = &v19;
  v22 = &v19;
  v23 = 0;
  sub_586AE0(a1, a2, a4, &v18);
  v5 = v21;
  v15 = a3 - a2;
  if ( v21 != &v19 )
  {
    v14 = a1 + 289;
    do
    {
      v6 = sub_3B90A0(a1, v5[8] + v15);
      v7 = *a1;
      v8 = v5[9];
      v9 = v6;
      v10 = *a1;
      v16 = 1;
      sub_79B440(v14, v10, v6, &v16, 1, 80);
      v17 = v8;
      sub_79B440(v14, v7, v9, &v17, 4, 65);
      v5 = (int *)std::_Rb_tree_increment();
    }
    while ( v5 != &v19 );
  }
  v11 = (_QWORD **)v20;
  if ( v20 )
  {
    do
    {
      sub_57F5D0(v11[3]);
      v12 = v11;
      v11 = (_QWORD **)v11[2];
      operator delete(v12, 0x28u);
    }
    while ( v11 );
  }
  return v24 - __readfsqword(0x28u);
}

