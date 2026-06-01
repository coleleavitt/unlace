__int64 __fastcall sub_CBFA60(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r13
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v10; // [rsp+Ch] [rbp-4Ch] BYREF
  void *v11; // [rsp+10h] [rbp-48h] BYREF
  size_t v12; // [rsp+18h] [rbp-40h]
  _BYTE v13[56]; // [rsp+20h] [rbp-38h] BYREF

  v2 = **(_QWORD ***)(a1 + 1264);
  v3 = *(unsigned __int64 **)(a2 + 16);
  v13[0] = 0;
  v11 = v13;
  v12 = 0;
  sub_A89F70(v2, *v3, &v11, 0, nullptr);
  v10 = *(_DWORD *)(a2 + 24);
  v4 = sub_BE5AD0(v2, v11, v12, 0, 0, *(_QWORD *)(a2 + 8), (__int64)&v10, 1);
  v8 = sub_CBBC10(a1, v4, v5, v6, v7);
  if ( v11 != v13 )
    operator delete(v11);
  return v8;
}

