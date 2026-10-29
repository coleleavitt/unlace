__int64 __fastcall sub_B11E20(__int64 a1, __int64 a2, int a3)
{
  char v5; // al
  size_t v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  const char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // [rsp+8h] [rbp-50h]
  _BYTE v16[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v5 = *(_BYTE *)(a1 + 34);
  v16[0] = 1;
  if ( (v5 & 0xF0) == 0xF0 )
    sub_FA77D0(a1);
  sub_995540(a2, "__attribute__((diagnose_if");
  sub_AFB8E0(a2, v16);
  sub_995540(a2, &byte_22F0C30);
  v15 = *(_QWORD *)(a1 + 40);
  v6 = j__strlen("\n");
  sub_F07C00(v15, a2, 0, a3, 0, 0, (__int64)"\n", v6);
  sub_995540(a2, &byte_22F0C30);
  sub_AFB8E0(a2, v16);
  v7 = sub_995540(a2, "\"");
  v8 = sub_9954E0(v7, *(const void **)(a1 + 56), *(unsigned int *)(a1 + 48));
  sub_995540(v8, "\"");
  sub_AFB8E0(a2, v16);
  v9 = sub_995540(a2, "\"");
  v10 = "error";
  if ( *(_DWORD *)(a1 + 64) )
    v10 = "warning";
  v11 = sub_995540(v9, v10);
  sub_995540(v11, "\"");
  sub_AFB8E0(a2, v16);
  v12 = sub_995540(a2, "\"");
  v13 = sub_9954E0(v12, *(const void **)(a1 + 72), *(unsigned int *)(a1 + 68));
  sub_995540(v13, "\"");
  if ( !v16[0] )
    sub_995540(a2, ")");
  return sub_995540(a2, "))");
}
