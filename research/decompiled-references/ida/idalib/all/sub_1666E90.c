void __fastcall sub_1666E90(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // r13d
  _QWORD *v4; // rbx
  __int64 v5; // r12
  int v6; // eax
  __int64 v7; // rdx
  _DWORD *v8; // rax
  _DWORD *v9; // rdx
  _DWORD *v10; // rdx
  void **v11; // rbx
  _BYTE v12[200]; // [rsp+0h] [rbp-C8h] BYREF

  v3 = a3;
  v4 = *(_QWORD **)(a1 + 2008);
  if ( !v4 )
  {
    sub_168B9F0(v12, a1 + 8, a3, 4832, 0);
    sub_15F7200(v12);
    return;
  }
  v5 = v4[1];
  v6 = *(_DWORD *)(v5 - 8);
  v7 = v5 - 8;
  if ( v6 != -1 && a2 )
  {
    sub_168B9F0(v12, a1 + 8, *(unsigned int *)(v5 - 4), 4833, 0);
    sub_15F7200(v12);
    sub_168B9F0(v12, a1 + 8, v3, 6375, 0);
    sub_15F7200(v12);
    v8 = (_DWORD *)(v4[1] - 8LL);
    do
    {
      v9 = v8;
      v8 -= 2;
    }
    while ( *v8 != -1 );
    v10 = v9 - 2;
    v4[1] = v10;
    if ( (_DWORD *)*v4 != v10 )
      return;
    goto LABEL_11;
  }
  if ( v6 == -1 && a2 != 1 )
  {
    sub_168B9F0(v12, a1 + 8, v3, 4832, 0);
    sub_15F7200(v12);
    sub_168B9F0(v12, a1 + 8, *(unsigned int *)(v5 - 4), 6376, 0);
    sub_15F7200(v12);
    return;
  }
  v4[1] = v7;
  if ( *v4 == v7 )
  {
LABEL_11:
    v11 = *(void ***)(a1 + 2008);
    if ( v11 )
    {
      if ( *v11 )
        operator delete(*v11);
      operator delete(v11, 0x18u);
    }
    *(_QWORD *)(a1 + 2008) = 0;
  }
}
