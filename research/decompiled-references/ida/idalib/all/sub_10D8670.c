__int64 __fastcall sub_10D8670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int v8; // eax
  int v9; // edx
  int v10; // r15d
  __int64 v11; // rbx
  __int64 v12; // rax
  int v14; // [rsp+0h] [rbp-48h]
  int v15; // [rsp+Ch] [rbp-3Ch]

  v8 = sub_21BB380(a2, 70);
  v14 = v9;
  v10 = v8;
  v15 = sub_21B6910(*(_QWORD *)(a1 + 176), a3, a4);
  v11 = operator new(0x58u);
  sub_21B5910(v11, v10, v14, a3, a4, v15, a3, 0);
  sub_21B8FA0(a1, v11);
  if ( a5 )
  {
    v12 = *(_QWORD *)(v11 + 16);
    if ( !v12 )
      v12 = v11;
    *(_BYTE *)(v12 + 44) |= 1u;
  }
  return v11;
}
