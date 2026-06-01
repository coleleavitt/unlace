__int64 __fastcall Z3_rcf_interval(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5, int a6, __int64 a7, _QWORD *a8)
{
  char v11; // al
  int v12; // eax
  __int64 result; // rax
  char v14; // [rsp+7h] [rbp-59h]
  __int64 v16; // [rsp+18h] [rbp-48h] BYREF
  __int64 v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+28h] [rbp-38h] BYREF

  v11 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v14 = v11;
  if ( v11 )
    sub_29FB00(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v16 = 0;
  v17 = 0;
  v12 = sub_24F090(a1);
  v18 = a2;
  result = (unsigned __int8)sub_16FC5F0(v12, (unsigned int)&v18, a3, a4, (unsigned int)&v16, a6, a7, (__int64)&v17);
  *a5 = v16;
  *a8 = v17;
  if ( v14 )
    byte_1C7EBA0 = 1;
  return result;
}

