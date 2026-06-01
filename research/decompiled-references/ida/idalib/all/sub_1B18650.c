__int64 __fastcall sub_1B18650(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char v7; // al
  unsigned int v8; // edx
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v13[184]; // [rsp+10h] [rbp-B8h] BYREF

  v12 = a2;
  v11 = a4;
  v7 = sub_1E63CF0(a3, a1, a4, 1, 3968);
  v8 = 0;
  if ( !v7 )
  {
    if ( !(_BYTE)a5 || (unsigned __int8)sub_B8E180(*(_QWORD *)(a3 + 544)) || sub_F62A70(&v11, *(_QWORD *)(a3 + 248)) )
    {
      return 1;
    }
    else
    {
      sub_168B9F0((__int64)v13, (__int64 *)(a3 + 8), a1, 0x1C37u, 0);
      v10 = sub_1605D30((__int64)v13, &v11);
      sub_15884C0(v10, &v12);
      sub_15F7200(v13);
      return a5;
    }
  }
  return v8;
}
