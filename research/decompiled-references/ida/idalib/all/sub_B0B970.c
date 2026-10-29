__int64 __fastcall sub_B0B970(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v4; // al
  int v5; // eax
  size_t v6; // rax
  __int64 v7; // rbp
  size_t v8; // rax
  size_t v10; // rax
  __int64 v11; // rbp
  size_t v12; // rax
  size_t v13; // rax
  __int64 v14; // [rsp+8h] [rbp-50h]
  __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16; // [rsp+8h] [rbp-50h]
  _BYTE v17[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v4 = *(_BYTE *)(a1 + 34);
  v17[0] = 1;
  if ( (v4 & 0xF0) == 0xF0 )
    v5 = sub_FA77D0(a1);
  else
    v5 = v4 >> 4;
  if ( v5 == 1 )
  {
    sub_995540(a2, "[[gnu::assume_aligned");
    sub_AFB8E0(a2, v17);
    sub_995540(a2, &byte_22F0C30);
    v16 = *(_QWORD *)(a1 + 40);
    v13 = j__strlen("\n");
    sub_F07C00(v16, a2, 0, a3, 0, 0, (__int64)"\n", v13);
    sub_995540(a2, &byte_22F0C30);
    if ( !*(_QWORD *)(a1 + 48) )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( !v5 )
  {
    sub_995540(a2, "__attribute__((assume_aligned");
    sub_AFB8E0(a2, v17);
    sub_995540(a2, &byte_22F0C30);
    v14 = *(_QWORD *)(a1 + 40);
    v6 = j__strlen("\n");
    sub_F07C00(v14, a2, 0, a3, 0, 0, (__int64)"\n", v6);
    sub_995540(a2, &byte_22F0C30);
    if ( *(_QWORD *)(a1 + 48) )
    {
      sub_AFB8E0(a2, v17);
      sub_995540(a2, &byte_22F0C30);
      v7 = *(_QWORD *)(a1 + 48);
      v8 = j__strlen("\n");
      sub_F07C00(v7, a2, 0, a3, 0, 0, (__int64)"\n", v8);
      sub_995540(a2, &byte_22F0C30);
    }
    if ( !v17[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "))");
  }
  sub_995540(a2, "[[gnu::assume_aligned");
  sub_AFB8E0(a2, v17);
  sub_995540(a2, &byte_22F0C30);
  v15 = *(_QWORD *)(a1 + 40);
  v10 = j__strlen("\n");
  sub_F07C00(v15, a2, 0, a3, 0, 0, (__int64)"\n", v10);
  sub_995540(a2, &byte_22F0C30);
  if ( *(_QWORD *)(a1 + 48) )
  {
LABEL_11:
    sub_AFB8E0(a2, v17);
    sub_995540(a2, &byte_22F0C30);
    v11 = *(_QWORD *)(a1 + 48);
    v12 = j__strlen("\n");
    sub_F07C00(v11, a2, 0, a3, 0, 0, (__int64)"\n", v12);
    sub_995540(a2, &byte_22F0C30);
  }
LABEL_12:
  if ( !v17[0] )
    sub_995540(a2, ")");
  return sub_995540(a2, "]]");
}
