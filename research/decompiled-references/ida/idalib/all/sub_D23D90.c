__int64 __fastcall sub_D23D90(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // eax
  void *v14; // rax
  __int64 v15; // [rsp-8h] [rbp-100h]
  __int64 v16; // [rsp+0h] [rbp-F8h]
  char v17; // [rsp+Fh] [rbp-E9h]
  void *v18; // [rsp+10h] [rbp-E8h] BYREF
  unsigned int v19; // [rsp+18h] [rbp-E0h]
  char v20; // [rsp+1Ch] [rbp-DCh]
  void *v21; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-D0h]
  char v23; // [rsp+2Ch] [rbp-CCh]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  signed __int64 v25; // [rsp+38h] [rbp-C0h]
  __int64 v26; // [rsp+40h] [rbp-B8h]
  _BYTE v27[40]; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int8 *v28; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v29; // [rsp+78h] [rbp-80h]

  v3 = sub_D23BA0(*(_QWORD *)(a1 + 176));
  v4 = *(_QWORD *)(a1 + 176);
  v5 = v3;
  if ( v3 == 0x80000000 )
  {
    *(_DWORD *)sub_E216C0(v4, 8) = 0;
    sub_CF09D0((__int64)&v28, v5, 33);
    BYTE4(v25) = 0;
    LODWORD(v25) = v29;
    ptr = v28;
    sub_C16960((__int64)&v18, (__int64)&ptr);
    if ( (unsigned int)v25 > 0x40 && ptr )
      operator delete[](ptr);
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v6 )
    {
      v8 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      v9 = *(_QWORD *)(v8 + 8);
      v25 = 0;
      v26 = 32;
      v16 = v9;
      ptr = v27;
      v17 = v20;
      sub_2206A40(&v28, &v18);
      v22 = v29;
      v23 = v17;
      v21 = v28;
      sub_220BA90((unsigned int)&v21, (unsigned int)&ptr, 10, 1, 0, 1, 1);
      v12 = v15;
      if ( v22 > 0x40 && v21 )
        operator delete[](v21);
      v13 = sub_C00A40(v8, (__int64)&ptr, v12, v10, v11);
      sub_E32200(&v28, a1, v13, 2561);
      sub_AEC220(&v28, ptr, v25);
      sub_AE9DF0(&v28, v16, 8u);
      v14 = (void *)sub_EEC8C0(v8);
      LOBYTE(v22) = 1;
      v21 = v14;
      sub_AEC610((__int64 *)&v28, (__int64 *)&v21);
      sub_AEA040((__int64)&v28);
      if ( ptr != v27 )
        free(ptr);
    }
    else
    {
      v6 = sub_CF8AC0(a1, a2, (__int64)&v18);
    }
    if ( v19 > 0x40 && v18 )
      operator delete[](v18);
  }
  else
  {
    v6 = 1;
    *(_DWORD *)sub_E216C0(v4, 8) = -v3;
  }
  return v6;
}
