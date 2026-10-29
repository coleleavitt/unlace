void __fastcall sub_16BBCC0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v12; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v13[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 *v14; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-90h] BYREF
  char v16; // [rsp+38h] [rbp-80h] BYREF
  __int64 v17; // [rsp+98h] [rbp-20h]

  v12 = a2;
  v4 = *a1;
  if ( !sub_BFD3B0(a2, *a1) )
  {
    v8 = v12;
    v9 = a1[1];
    v14 = a1;
    v15[0] = &v16;
    v15[1] = 0x400000000LL;
    v10 = a1[138];
    v13[0] = a1;
    v17 = v10;
    a1[138] = (__int64)v15;
    v13[1] = &v12;
    v11 = sub_C00A40(v8, v4, v5, v6, v7);
    sub_15F0FC0(v9, v11, (__int64 (__fastcall *)(__int64))sub_16C3D60, (__int64)v13);
    sub_16BB4C0((__int64 *)&v14);
  }
}
