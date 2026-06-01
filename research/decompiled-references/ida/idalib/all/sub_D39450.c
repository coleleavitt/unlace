__int64 __fastcall sub_D39450(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v6; // eax
  _WORD *v7; // rax
  unsigned int v8; // r15d
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // eax
  void *v16; // rax
  __int64 v17; // [rsp-8h] [rbp-100h]
  __int64 v18; // [rsp+0h] [rbp-F8h]
  char v19; // [rsp+Fh] [rbp-E9h]
  void *v20; // [rsp+10h] [rbp-E8h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-E0h]
  char v22; // [rsp+1Ch] [rbp-DCh]
  void *v23; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-D0h]
  char v25; // [rsp+2Ch] [rbp-CCh]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  signed __int64 v27; // [rsp+38h] [rbp-C0h]
  __int64 v28; // [rsp+40h] [rbp-B8h]
  _BYTE v29[40]; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int8 *v30; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v31; // [rsp+78h] [rbp-80h]

  v6 = sub_E21C70(a1);
  if ( (_BYTE)v6 || (v8 = v6, !(unsigned __int8)sub_DC7D30(a3)) )
  {
    v7 = (_WORD *)sub_D0CBD0(a3);
    if ( *v7 == 0x7FFF && a4 )
    {
      v21 = 1;
      v22 = 0;
      v20 = nullptr;
      sub_CF0990((__int64)&v30, 0x7FFFu, 17);
      BYTE4(v27) = 0;
      LODWORD(v27) = v31;
      ptr = v30;
      sub_2205900(&ptr);
      sub_C20980((__int64)&v20, (__int64 *)&ptr);
      if ( (unsigned int)v27 > 0x40 && ptr )
        operator delete[](ptr);
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
      if ( (_BYTE)v8 )
      {
        v10 = sub_E1EF60(*(_QWORD *)(a1 + 400));
        v11 = *(_QWORD *)(v10 + 8);
        v27 = 0;
        v28 = 32;
        v18 = v11;
        ptr = v29;
        v19 = v22;
        sub_2206A40(&v30, &v20);
        v24 = v31;
        v25 = v19;
        v23 = v30;
        sub_220BA90((unsigned int)&v23, (unsigned int)&ptr, 10, 1, 0, 1, 1);
        v14 = v17;
        if ( v24 > 0x40 && v23 )
          operator delete[](v23);
        v15 = sub_C00A40(v10, (__int64)&ptr, v14, v12, v13);
        sub_E32200(&v30, a1, v15, 2561);
        sub_AEC220(&v30, ptr, v27);
        sub_AE9DF0(&v30, v18, 8u);
        v16 = (void *)sub_EEC8C0(v10);
        LOBYTE(v24) = 1;
        v23 = v16;
        sub_AEC610((__int64 *)&v30, (__int64 *)&v23);
        sub_AEA040((__int64)&v30);
        if ( ptr != v29 )
          free(ptr);
      }
      else
      {
        v8 = sub_CF8AC0(a1, a2, (__int64)&v20);
      }
      if ( v21 > 0x40 && v20 )
        operator delete[](v20);
    }
    else
    {
      ++*v7;
      return 1;
    }
  }
  return v8;
}
