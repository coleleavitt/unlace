__int64 __fastcall sub_294280(_QWORD *a1, unsigned int a2, __int64 a3)
{
  _QWORD **v3; // rbx
  __int64 v4; // rbp
  void *v5; // rdi
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-78h] BYREF
  int v8; // [rsp+10h] [rbp-68h] BYREF
  void *v9; // [rsp+18h] [rbp-60h]
  int *v10; // [rsp+20h] [rbp-58h]
  int *v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+30h] [rbp-48h]
  unsigned int v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h]
  __int64 v15; // [rsp+48h] [rbp-30h]
  unsigned __int64 v16; // [rsp+58h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v13 = a2;
  v10 = &v8;
  v11 = &v8;
  v8 = 0;
  v9 = nullptr;
  v12 = 0;
  v7 = drawable_graph_t::remove_reachable;
  v14 = 0;
  v15 = a3;
  sub_294080(a1, a2, &v7);
  v3 = (_QWORD **)v9;
  v4 = v14;
  v7 = graph_node_visitor_t___vtable;
  if ( v9 )
  {
    do
    {
      sub_292340(v3[3]);
      v5 = v3;
      v3 = (_QWORD **)v3[2];
      operator delete(v5, 0x28u);
    }
    while ( v3 );
  }
  return v4;
}
