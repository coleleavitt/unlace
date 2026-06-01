__int64 __fastcall sub_1AE6DA0(__int64 a1)
{
  void *v1; // r12
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp-30h]
  void *v9; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-20h]

  v1 = *(void **)(a1 + 8);
  v2 = sub_168B6C0(*(_QWORD *)a1);
  v10 = sub_AAC1F0(v2, *(_QWORD *)(a1 + 16), v3, v4, v5);
  if ( v10 > 0x40 )
    sub_2205470(&v9, v1, 0);
  else
    v9 = v1;
  v6 = (_QWORD *)sub_168B6C0(*(_QWORD *)a1);
  result = sub_C0C5D0(v6, (__int64)&v9, *(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 24));
  if ( v10 > 0x40 )
  {
    if ( v9 )
    {
      v8 = result;
      operator delete[](v9);
      return v8;
    }
  }
  return result;
}
