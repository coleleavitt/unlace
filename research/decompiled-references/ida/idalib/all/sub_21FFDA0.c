void __fastcall sub_21FFDA0(_QWORD *a1, __int64 a2, void **a3)
{
  _QWORD *v4; // rax
  bool v5; // cc
  _QWORD *v6; // rbp
  __int64 v7; // r13
  void **v8; // rax
  void *v9; // rax
  void *v10; // rax
  void *v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-30h]

  *a1 = a2;
  v4 = (_QWORD *)operator new[](0x38u);
  v5 = *((_DWORD *)a3 + 2) <= 0x40u;
  v6 = v4;
  *v4 = 2;
  v7 = (__int64)(v4 + 1);
  v8 = a3;
  if ( !v5 )
    v8 = (void **)*a3;
  v9 = *v8;
  v12 = 64;
  v11 = v9;
  sub_21FBE00(v7, (__int64 *)&v11);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  if ( *((_DWORD *)a3 + 2) > 0x40u )
    a3 = (void **)*a3;
  v10 = a3[1];
  v12 = 64;
  v11 = v10;
  sub_21FBE00((__int64)(v6 + 4), (__int64 *)&v11);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  a1[1] = v7;
}
