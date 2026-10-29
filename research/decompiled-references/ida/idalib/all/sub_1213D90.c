__int64 __fastcall sub_1213D90(__int64 a1)
{
  size_t v2; // rax
  size_t v3; // rax
  _QWORD *v4; // rax
  _BYTE *v5; // rsi
  void *v6; // rdx
  _QWORD *v7; // r14
  _QWORD *v8; // rbx
  _BYTE *v9; // rsi
  char *v10; // rdx
  _BYTE *v11; // rdi
  void *vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  char vars10; // [rsp+10h] [rbp+10h] BYREF
  void *vars20[2]; // [rsp+20h] [rbp+20h] BYREF
  _BYTE vars30[56]; // [rsp+30h] [rbp+30h] BYREF

  vars0[0] = &vars10;
  v2 = j__strlen("/include");
  sub_1213C40(vars0, "/include", (__int64)&aUsrLocalInclud[v2 + 10]);
  vars20[0] = vars30;
  v3 = j__strlen("/../../../../sysroot/usr/include");
  sub_1213C40(vars20, "/../../../../sysroot/usr/include", (__int64)&aSysrootUsrIncl[v3]);
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  v4 = (_QWORD *)operator new(0x40u);
  v5 = vars0[0];
  v6 = vars0[1];
  v7 = v4 + 8;
  *(_QWORD *)a1 = v4;
  v8 = v4;
  *(_QWORD *)(a1 + 16) = v4 + 8;
  *v4 = v4 + 2;
  sub_1213B80(v4, v5, (__int64)v6 + (_QWORD)v5);
  v9 = vars20[0];
  v10 = (char *)vars20[0] + (unsigned __int64)vars20[1];
  v8[4] = v8 + 6;
  sub_1213B80(v8 + 4, v9, (__int64)v10);
  v11 = vars20[0];
  *(_QWORD *)(a1 + 8) = v7;
  if ( v11 != vars30 )
    operator delete(v11);
  if ( vars0[0] != vars0 )
    operator delete(vars0[0]);
  return a1;
}
