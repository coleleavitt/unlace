__int64 __fastcall sub_AFC570(__int64 a1, __int64 a2)
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
    sub_FA77D0(a1);
  sub_995540(a2, "__attribute__((vec_type_hint");
  sub_AFB8E0(a2, &v6);
  v3 = sub_995540(a2, &byte_22F0C30);
  v7 = **(_QWORD **)(a1 + 40);
  sub_F78400(v8, &v7);
  v4 = sub_227BF10(v3, v8[0], v8[1]);
  sub_995540(v4, &byte_22F0C30);
  if ( v8[0] != &v9 )
    operator delete(v8[0]);
  if ( !v6 )
    sub_995540(a2, ")");
  return sub_995540(a2, "))");
}
