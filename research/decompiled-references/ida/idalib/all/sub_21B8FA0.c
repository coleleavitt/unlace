void __fastcall sub_21B8FA0(__int64 a1, void *a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r12
  void **v6; // rbp
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  void **v9; // rdx
  void *v10; // rcx
  void *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdx
  void *v14[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *(unsigned int *)(a1 + 192);
  v4 = *(unsigned int *)(a1 + 196);
  v5 = *(_QWORD *)(a1 + 184);
  v14[0] = a2;
  v6 = v14;
  v7 = v3 + 1;
  LODWORD(v8) = v3;
  v9 = (void **)(v5 + 8 * v3);
  if ( v7 > v4 )
  {
    v12 = a1 + 184;
    if ( v5 > (unsigned __int64)v14 || v9 <= v14 )
    {
      sub_21B8920(v12, v7);
      v8 = *(unsigned int *)(a1 + 192);
      v9 = (void **)(*(_QWORD *)(a1 + 184) + 8 * v8);
    }
    else
    {
      sub_21B8920(v12, v7);
      v13 = *(_QWORD *)(a1 + 184);
      v6 = (void **)((char *)v14 + v13 - v5);
      v8 = *(unsigned int *)(a1 + 192);
      v9 = (void **)(v13 + 8 * v8);
    }
  }
  v10 = *v6;
  *v6 = nullptr;
  *v9 = v10;
  *(_DWORD *)(a1 + 192) = v8 + 1;
  v11 = v14[0];
  if ( v14[0] )
  {
    sub_21B59C0((__int64)v14[0]);
    operator delete(v11, 0x58u);
  }
}
