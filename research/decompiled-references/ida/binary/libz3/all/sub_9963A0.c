__int64 __fastcall sub_9963A0(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdi
  __int64 v11; // rax
  void *v12; // rbp
  __int64 v13; // rbx
  _QWORD v14[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v15[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( a2 )
  {
    if ( a2 == 1 )
      return *(_QWORD *)a3;
    else
      return sub_15E1AF0(*(_QWORD *)(a1 + 408));
  }
  else
  {
    v14[0] = 0;
    v14[1] = 0;
    v15[0] = 1;
    v15[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v15);
    v10 = *(_QWORD *)(a1 + 416);
    BYTE4(v15[0]) &= ~1u;
    LODWORD(v15[0]) = 1;
    if ( !v10 )
    {
      sub_16669E0(a1 + 408);
      v10 = *(_QWORD *)(a1 + 416);
    }
    v11 = sub_166A700(v10, (unsigned int)v14, a4, v7, v8, v9);
    v12 = qword_1C7F2C0;
    v13 = v11;
    sub_182CBA0(qword_1C7F2C0, v14);
    sub_182CBA0(v12, v15);
    return v13;
  }
}

