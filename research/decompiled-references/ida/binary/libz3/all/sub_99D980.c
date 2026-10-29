__int64 __fastcall sub_99D980(__int64 a1, int a2, __int64 a3)
{
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdi
  __int64 v9; // rax
  void *v10; // r13
  __int64 v11; // rbx
  _QWORD v12[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v13[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( a2 )
  {
    if ( a2 == 1 )
      return *(_QWORD *)a3;
    else
      return sub_15E1AF0(*(_QWORD *)(a1 + 344));
  }
  else
  {
    v12[0] = 0;
    v12[1] = 0;
    v13[0] = 1;
    v13[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v13);
    v8 = *(_QWORD *)(a1 + 352);
    BYTE4(v13[0]) &= ~1u;
    LODWORD(v13[0]) = 1;
    if ( !v8 )
    {
      sub_16669E0(a1 + 344);
      v8 = *(_QWORD *)(a1 + 352);
    }
    v9 = sub_166A700(v8, (unsigned int)v12, 0, v5, v6, v7);
    v10 = qword_1C7F2C0;
    v11 = v9;
    sub_182CBA0(qword_1C7F2C0, v12);
    sub_182CBA0(v10, v13);
    return v11;
  }
}

