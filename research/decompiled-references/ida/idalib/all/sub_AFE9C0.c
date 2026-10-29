__int64 __fastcall sub_AFE9C0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  char v9; // [rsp+7h] [rbp-41h] BYREF
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  void *v11; // [rsp+10h] [rbp-38h] BYREF
  __int64 v12; // [rsp+18h] [rbp-30h]
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v9 = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = v2 >> 4;
  if ( v3 )
  {
    sub_995540(a2, "[[clang::sycl_kernel_entry_point");
    sub_AFB8E0(a2, &v9);
    v7 = sub_995540(a2, &byte_22F0C30);
    v10 = **(_QWORD **)(a1 + 40);
    sub_F78400(&v11, &v10);
    v8 = sub_227BF10(v7, v11, v12);
    sub_995540(v8, &byte_22F0C30);
    if ( v11 != v13 )
      operator delete(v11);
    if ( !v9 )
      sub_995540(a2, ")");
    return sub_995540(a2, "]]");
  }
  else
  {
    sub_995540(a2, "__attribute__((sycl_kernel_entry_point");
    sub_AFB8E0(a2, &v9);
    v4 = sub_995540(a2, &byte_22F0C30);
    v10 = **(_QWORD **)(a1 + 40);
    sub_F78400(&v11, &v10);
    v5 = sub_227BF10(v4, v11, v12);
    sub_995540(v5, &byte_22F0C30);
    if ( v11 != v13 )
      operator delete(v11);
    if ( !v9 )
      sub_995540(a2, ")");
    return sub_995540(a2, "))");
  }
}
