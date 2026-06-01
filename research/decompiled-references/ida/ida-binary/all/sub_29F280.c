__int64 __fastcall sub_29F280(__int64 a1, double a2, __m128i a3)
{
  _QWORD **v3; // rbx
  void *v4; // rdi
  _QWORD **v5; // rbx
  void *v6; // rdi
  __int64 v8; // [rsp+0h] [rbp-98h] BYREF
  int v9; // [rsp+8h] [rbp-90h] BYREF
  void *v10; // [rsp+10h] [rbp-88h]
  int *v11; // [rsp+18h] [rbp-80h]
  int *v12; // [rsp+20h] [rbp-78h]
  __int64 v13; // [rsp+28h] [rbp-70h]
  __int64 (__fastcall **v14[2])(); // [rsp+30h] [rbp-68h] BYREF
  int v15; // [rsp+40h] [rbp-58h] BYREF
  void *v16; // [rsp+48h] [rbp-50h]
  int *v17; // [rsp+50h] [rbp-48h]
  int *v18; // [rsp+58h] [rbp-40h]
  __int64 v19; // [rsp+60h] [rbp-38h]
  unsigned __int64 v20; // [rsp+68h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v17 = &v15;
  v18 = &v15;
  v14[0] = simple_edge_typer_t___vtable;
  v15 = 0;
  v16 = nullptr;
  v11 = &v9;
  v19 = 0;
  v9 = 0;
  v10 = nullptr;
  v12 = &v9;
  v13 = 0;
  sub_29E840((__int64 (__fastcall **)())a1, v14, (__int64)&v8, 0, nullptr, nullptr);
  sub_299780(a1, (__int64)v14, (__int64)&v8, a2, a3);
  *(_DWORD *)(a1 + 36) = 2;
  v3 = (_QWORD **)v10;
  if ( v10 )
  {
    do
    {
      sub_292340(v3[3]);
      v4 = v3;
      v3 = (_QWORD **)v3[2];
      operator delete(v4, 0x28u);
    }
    while ( v3 );
  }
  v5 = (_QWORD **)v16;
  v14[0] = simple_edge_typer_t___vtable;
  if ( v16 )
  {
    do
    {
      sub_291150(v5[3]);
      v6 = v5;
      v5 = (_QWORD **)v5[2];
      operator delete(v6, 0x30u);
    }
    while ( v5 );
  }
  return 1;
}
