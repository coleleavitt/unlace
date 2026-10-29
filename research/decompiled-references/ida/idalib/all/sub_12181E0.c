__int64 __fastcall sub_12181E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  _BYTE *v5; // rsi
  __int64 v6; // rdx
  _QWORD *v7; // r13
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // rbx
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  _QWORD *v13; // rdi
  void **v14; // rbx
  _QWORD v16[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v17; // [rsp+10h] [rbp-78h] BYREF
  char v18[32]; // [rsp+20h] [rbp-68h] BYREF
  char v19[32]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v20[40]; // [rsp+60h] [rbp-28h] BYREF

  v5 = (_BYTE *)*a3;
  v6 = *a3 + a3[1];
  v7 = v16;
  v16[0] = &v17;
  sub_1213B80(v16, v5, v6);
  sub_C05100((__int64)v18, "/../../../../riscv64-unknown-elf/lib", (__int64)a3);
  sub_C05100((__int64)v19, "/../../../../riscv32-unknown-elf/lib", (__int64)a3);
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  v8 = (_QWORD *)operator new(0x60u);
  v9 = v8 + 12;
  *(_QWORD *)a1 = v8;
  v10 = v8;
  *(_QWORD *)(a1 + 16) = v8 + 12;
  do
  {
    v11 = (_BYTE *)*v7;
    v12 = v7[1];
    v13 = v10;
    *v10 = v10 + 2;
    v7 += 4;
    v10 += 4;
    sub_1213B80(v13, v11, (__int64)&v11[v12]);
  }
  while ( v7 != (_QWORD *)v20 );
  *(_QWORD *)(a1 + 8) = v9;
  v14 = (void **)v20;
  do
  {
    while ( 1 )
    {
      v14 -= 4;
      if ( *v14 == v14 + 2 )
        break;
      operator delete(*v14);
      if ( v14 == v16 )
        return a1;
    }
  }
  while ( v14 != v16 );
  return a1;
}
