__int64 __fastcall sub_B0E710(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v4; // al
  int v5; // eax
  size_t v6; // rax
  size_t v7; // rax
  __int64 v8; // rbp
  size_t v9; // rax
  size_t v11; // rax
  size_t v12; // rax
  __int64 v13; // rbp
  size_t v14; // rax
  __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+8h] [rbp-50h]
  __int64 v18; // [rsp+8h] [rbp-50h]
  _BYTE v19[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v4 = *(_BYTE *)(a1 + 34);
  v19[0] = 1;
  if ( (v4 & 0xF0) == 0xF0 )
    v5 = sub_FA77D0(a1);
  else
    v5 = v4 >> 4;
  if ( v5 )
  {
    sub_995540(a2, "__declspec(__launch_bounds__");
    sub_AFB8E0(a2, v19);
    sub_995540(a2, &byte_22F0C30);
    v17 = *(_QWORD *)(a1 + 40);
    v11 = j__strlen("\n");
    sub_F07C00(v17, a2, 0, a3, 0, 0, (__int64)"\n", v11);
    sub_995540(a2, &byte_22F0C30);
    if ( *(_QWORD *)(a1 + 48) )
    {
      sub_AFB8E0(a2, v19);
      sub_995540(a2, &byte_22F0C30);
      v18 = *(_QWORD *)(a1 + 48);
      v12 = j__strlen("\n");
      sub_F07C00(v18, a2, 0, a3, 0, 0, (__int64)"\n", v12);
      sub_995540(a2, &byte_22F0C30);
    }
    if ( *(_QWORD *)(a1 + 56) )
    {
      sub_AFB8E0(a2, v19);
      sub_995540(a2, &byte_22F0C30);
      v13 = *(_QWORD *)(a1 + 56);
      v14 = j__strlen("\n");
      sub_F07C00(v13, a2, 0, a3, 0, 0, (__int64)"\n", v14);
      sub_995540(a2, &byte_22F0C30);
    }
    if ( !v19[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, ")");
  }
  else
  {
    sub_995540(a2, "__attribute__((launch_bounds");
    sub_AFB8E0(a2, v19);
    sub_995540(a2, &byte_22F0C30);
    v15 = *(_QWORD *)(a1 + 40);
    v6 = j__strlen("\n");
    sub_F07C00(v15, a2, 0, a3, 0, 0, (__int64)"\n", v6);
    sub_995540(a2, &byte_22F0C30);
    if ( *(_QWORD *)(a1 + 48) )
    {
      sub_AFB8E0(a2, v19);
      sub_995540(a2, &byte_22F0C30);
      v16 = *(_QWORD *)(a1 + 48);
      v7 = j__strlen("\n");
      sub_F07C00(v16, a2, 0, a3, 0, 0, (__int64)"\n", v7);
      sub_995540(a2, &byte_22F0C30);
    }
    if ( *(_QWORD *)(a1 + 56) )
    {
      sub_AFB8E0(a2, v19);
      sub_995540(a2, &byte_22F0C30);
      v8 = *(_QWORD *)(a1 + 56);
      v9 = j__strlen("\n");
      sub_F07C00(v8, a2, 0, a3, 0, 0, (__int64)"\n", v9);
      sub_995540(a2, &byte_22F0C30);
    }
    if ( !v19[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "))");
  }
}
