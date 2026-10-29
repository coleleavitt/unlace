__int64 __fastcall sub_1218160(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  _BYTE *v5; // rsi
  _QWORD *v6; // r12
  void *v7; // rdx
  void **v8; // rdi
  void *vars0[7]; // [rsp+0h] [rbp+0h] BYREF

  sub_C05100((__int64)vars0, "/../../../../mips-img-linux-gnu/lib", a3);
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  v4 = (_QWORD *)operator new(0x20u);
  v5 = vars0[0];
  v6 = v4 + 4;
  *(_QWORD *)a1 = v4;
  *v4 = v4 + 2;
  v7 = vars0[1];
  *(_QWORD *)(a1 + 16) = v4 + 4;
  sub_1213B80(v4, v5, (__int64)v7 + (_QWORD)v5);
  v8 = (void **)vars0[0];
  *(_QWORD *)(a1 + 8) = v6;
  if ( v8 != vars0 )
    operator delete(v8);
  return a1;
}
