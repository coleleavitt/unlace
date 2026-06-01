__int64 __fastcall sub_AEE0E0(__int64 a1, __int64 a2, int a3)
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
    sub_F83A90(a1);
  sub_971800(a2, "__attribute__((diagnose_if");
  sub_AD7BA0(a2, v16);
  sub_971800(a2, &byte_22CD811);
  v15 = *(_QWORD *)(a1 + 40);
  v6 = j__strlen("\n");
  sub_EE3EC0(v15, a2, 0, a3, 0, 0, (__int64)"\n", v6);
  sub_971800(a2, &byte_22CD811);
  sub_AD7BA0(a2, v16);
  v7 = sub_971800(a2, "\"");
  v8 = sub_9717A0(v7, *(const void **)(a1 + 56), *(unsigned int *)(a1 + 48));
  sub_971800(v8, "\"");
  sub_AD7BA0(a2, v16);
  v9 = sub_971800(a2, "\"");
  v10 = "error";
  if ( *(_DWORD *)(a1 + 64) )
    v10 = "warning";
  v11 = sub_971800(v9, v10);
  sub_971800(v11, "\"");
  sub_AD7BA0(a2, v16);
  v12 = sub_971800(a2, "\"");
  v13 = sub_9717A0(v12, *(const void **)(a1 + 72), *(unsigned int *)(a1 + 68));
  sub_971800(v13, "\"");
  if ( !v16[0] )
    sub_971800(a2, ")");
  return sub_971800(a2, "))");
}

