__int64 __fastcall sub_CE37A0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r13
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rax
  unsigned int v5; // ebx
  int v7; // [rsp+Ch] [rbp-4Ch] BYREF
  void *v8; // [rsp+10h] [rbp-48h] BYREF
  size_t v9; // [rsp+18h] [rbp-40h]
  _BYTE v10[56]; // [rsp+20h] [rbp-38h] BYREF

  v2 = **(_QWORD ***)(a1 + 1264);
  v3 = *(unsigned __int64 **)(a2 + 16);
  v10[0] = 0;
  v8 = v10;
  v9 = 0;
  sub_AADCB0(v2, *v3, &v8, 0, nullptr);
  v7 = *(_DWORD *)(a2 + 24);
  v4 = sub_C09810(v2, v8, v9, 0, 0, *(_QWORD *)(a2 + 8), (__int64)&v7, 1);
  v5 = sub_CDF950(a1, v4);
  if ( v8 != v10 )
    operator delete(v8);
  return v5;
}
