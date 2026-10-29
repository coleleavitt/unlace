__int64 __fastcall sub_D245C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v5; // r15d
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // eax
  void *v13; // rax
  __int64 v14; // [rsp-8h] [rbp-100h]
  __int64 v15; // [rsp+0h] [rbp-F8h]
  char v16; // [rsp+Fh] [rbp-E9h]
  void *v17; // [rsp+10h] [rbp-E8h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-E0h]
  char v19; // [rsp+1Ch] [rbp-DCh]
  void *v20; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-D0h]
  char v22; // [rsp+2Ch] [rbp-CCh]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  signed __int64 v24; // [rsp+38h] [rbp-C0h]
  __int64 v25; // [rsp+40h] [rbp-B8h]
  _BYTE v26[40]; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int8 *v27; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v28; // [rsp+78h] [rbp-80h]

  v3 = sub_D243C0(*(_QWORD *)(a1 + 176));
  v4 = *(_QWORD *)(a1 + 176);
  if ( v3 == 0x8000000000000000LL )
  {
    *(_QWORD *)sub_E216C0(v4, 8) = 0;
    sub_CF0A10((__int64)&v27, (void *)0x8000000000000000LL, 65);
    BYTE4(v24) = 0;
    LODWORD(v24) = v28;
    ptr = v27;
    sub_C16960((__int64)&v17, (__int64)&ptr);
    if ( (unsigned int)v24 > 0x40 && ptr )
      operator delete[](ptr);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v5 )
    {
      v7 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      v8 = *(_QWORD *)(v7 + 8);
      v24 = 0;
      v25 = 32;
      v15 = v8;
      ptr = v26;
      v16 = v19;
      sub_2206A40(&v27, &v17);
      v21 = v28;
      v22 = v16;
      v20 = v27;
      sub_220BA90((unsigned int)&v20, (unsigned int)&ptr, 10, 1, 0, 1, 1);
      v11 = v14;
      if ( v21 > 0x40 && v20 )
        operator delete[](v20);
      v12 = sub_C00A40(v7, (__int64)&ptr, v11, v9, v10);
      sub_E32200(&v27, a1, v12, 2561);
      sub_AEC220(&v27, ptr, v24);
      sub_AE9DF0(&v27, v15, 8u);
      v13 = (void *)sub_EEC8C0(v7);
      LOBYTE(v21) = 1;
      v20 = v13;
      sub_AEC610((__int64 *)&v27, (__int64 *)&v20);
      sub_AEA040((__int64)&v27);
      if ( ptr != v26 )
        free(ptr);
    }
    else
    {
      v5 = sub_CF8AC0(a1, a2, (__int64)&v17);
    }
    if ( v18 > 0x40 && v17 )
      operator delete[](v17);
  }
  else
  {
    v5 = 1;
    *(_QWORD *)sub_E216C0(v4, 8) = -v3;
  }
  return v5;
}
