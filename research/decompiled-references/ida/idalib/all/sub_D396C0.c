__int64 __fastcall sub_D396C0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v7; // eax
  unsigned int *v8; // rax
  unsigned int v9; // r15d
  unsigned int v11; // esi
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // eax
  void *v18; // rax
  __int64 v19; // [rsp-8h] [rbp-100h]
  __int64 v20; // [rsp+0h] [rbp-F8h]
  char v21; // [rsp+Fh] [rbp-E9h]
  void *v22; // [rsp+10h] [rbp-E8h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-E0h]
  char v24; // [rsp+1Ch] [rbp-DCh]
  void *v25; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-D0h]
  char v27; // [rsp+2Ch] [rbp-CCh]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  signed __int64 v29; // [rsp+38h] [rbp-C0h]
  __int64 v30; // [rsp+40h] [rbp-B8h]
  _BYTE v31[40]; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int8 *v32; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v33; // [rsp+78h] [rbp-80h]

  v7 = sub_E21C70(a1);
  if ( (_BYTE)v7 || (v9 = v7, !(unsigned __int8)sub_DC7D30(a3)) )
  {
    v8 = (unsigned int *)sub_D0D1D0(a3);
    if ( *v8 == 0x7FFFFFFF && a4 )
    {
      v23 = 1;
      v11 = *v8;
      v24 = 0;
      v22 = nullptr;
      sub_CF09D0((__int64)&v32, v11, 33);
      BYTE4(v29) = 0;
      LODWORD(v29) = v33;
      ptr = v32;
      sub_2205900(&ptr);
      sub_C20980((__int64)&v22, (__int64 *)&ptr);
      if ( (unsigned int)v29 > 0x40 && ptr )
        operator delete[](ptr);
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
      if ( (_BYTE)v9 )
      {
        v12 = sub_E1EF60(*(_QWORD *)(a1 + 400));
        v13 = *(_QWORD *)(v12 + 8);
        v29 = 0;
        v30 = 32;
        v20 = v13;
        ptr = v31;
        v21 = v24;
        sub_2206A40(&v32, &v22);
        v26 = v33;
        v27 = v21;
        v25 = v32;
        sub_220BA90((unsigned int)&v25, (unsigned int)&ptr, 10, 1, 0, 1, 1);
        v16 = v19;
        if ( v26 > 0x40 && v25 )
          operator delete[](v25);
        v17 = sub_C00A40(v12, (__int64)&ptr, v16, v14, v15);
        sub_E32200(&v32, a1, v17, 2561);
        sub_AEC220(&v32, ptr, v29);
        sub_AE9DF0(&v32, v20, 8u);
        v18 = (void *)sub_EEC8C0(v12);
        LOBYTE(v26) = 1;
        v25 = v18;
        sub_AEC610((__int64 *)&v32, (__int64 *)&v25);
        sub_AEA040((__int64)&v32);
        if ( ptr != v31 )
          free(ptr);
      }
      else
      {
        v9 = sub_CF8AC0(a1, a2, (__int64)&v22);
      }
      if ( v23 > 0x40 && v22 )
        operator delete[](v22);
    }
    else
    {
      ++*v8;
      return 1;
    }
  }
  return v9;
}
