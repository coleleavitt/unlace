__int64 __fastcall sub_AEBA80(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // [rsp+Fh] [rbp-59h] BYREF
  __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  int v19; // [rsp+18h] [rbp-50h]
  __int64 v20; // [rsp+20h] [rbp-48h]
  void *v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+38h] [rbp-30h]
  _BYTE v23[40]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v17 = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = v2 >> 4;
  if ( v3 )
  {
    sub_971800(a2, "[[gnu::cleanup");
    sub_AD7BA0(a2, &v17);
    v11 = sub_971800(a2, &byte_22CD811);
    v12 = *(_QWORD *)(a1 + 40);
    v13 = v11;
    v14 = *(_DWORD *)(v12 + 24);
    v15 = *(_QWORD *)(v12 + 160);
    v18 = *(_QWORD *)(v12 + 40);
    v19 = v14;
    v20 = v15;
    sub_B63910(&v21, &v18);
    v16 = sub_22581D0(v13, v21, v22);
    sub_971800(v16, &byte_22CD811);
    if ( v21 != v23 )
      operator delete(v21);
    if ( !v17 )
      sub_971800(a2, ")");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__attribute__((cleanup");
    sub_AD7BA0(a2, &v17);
    v4 = sub_971800(a2, &byte_22CD811);
    v5 = *(_QWORD *)(a1 + 40);
    v6 = v4;
    v7 = *(_DWORD *)(v5 + 24);
    v8 = *(_QWORD *)(v5 + 160);
    v18 = *(_QWORD *)(v5 + 40);
    v19 = v7;
    v20 = v8;
    sub_B63910(&v21, &v18);
    v9 = sub_22581D0(v6, v21, v22);
    sub_971800(v9, &byte_22CD811);
    if ( v21 != v23 )
      operator delete(v21);
    if ( !v17 )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
}

