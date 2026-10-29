__int64 __fastcall sub_ADC180(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // r12
  __int64 v4; // rax
  char v6; // [rsp+7h] [rbp-41h] BYREF
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  void *v8[2]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v6 = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    sub_F83A90(a1);
  sub_971800(a2, "[[gsl::Pointer");
  if ( *(_QWORD *)(a1 + 40) )
  {
    sub_AD7BA0(a2, &v6);
    v3 = sub_971800(a2, &byte_22CD811);
    v7 = **(_QWORD **)(a1 + 40);
    sub_F546C0(v8, &v7);
    v4 = sub_22581D0(v3, v8[0], v8[1]);
    sub_971800(v4, &byte_22CD811);
    if ( v8[0] != &v9 )
      operator delete(v8[0]);
  }
  if ( !v6 )
    sub_971800(a2, ")");
  return sub_971800(a2, "]]");
}

