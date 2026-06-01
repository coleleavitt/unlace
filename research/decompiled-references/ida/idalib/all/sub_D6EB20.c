__int64 __fastcall sub_D6EB20(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  int v10; // esi
  int v11; // edi
  bool v12; // al
  __int64 v13; // rdi
  _BYTE *v14; // rax
  unsigned __int8 v15; // si
  unsigned int v16; // ebx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned int v22; // eax
  void *v23; // rax
  _BYTE *v24; // rax
  __int64 v25; // [rsp-8h] [rbp-120h]
  unsigned __int64 v26; // [rsp+8h] [rbp-110h]
  __int64 v27; // [rsp+10h] [rbp-108h]
  char v28; // [rsp+1Fh] [rbp-F9h]
  char v29; // [rsp+2Fh] [rbp-E9h] BYREF
  void *v30; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-E0h]
  char v32; // [rsp+3Ch] [rbp-DCh]
  void *v33; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-D0h]
  char v35; // [rsp+4Ch] [rbp-CCh]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  signed __int64 v37; // [rsp+58h] [rbp-C0h]
  __int64 v38; // [rsp+60h] [rbp-B8h]
  _BYTE v39[40]; // [rsp+68h] [rbp-B0h] BYREF
  unsigned __int8 *v40; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v41; // [rsp+98h] [rbp-80h]

  v10 = (char)*a5;
  v11 = (char)*a4;
  v29 = 0;
  v12 = sub_D6E690(v11, v10, &v29);
  v13 = *(_QWORD *)(a1 + 176);
  if ( v12 )
  {
    v14 = (_BYTE *)sub_E216C0(v13, 8);
    *v14 = v29;
    sub_CF0950((__int64)&v40, *a5, a3);
    v15 = *a4;
    BYTE4(v37) = 0;
    LODWORD(v37) = v41;
    ptr = v40;
    sub_CF0950((__int64)&v40, v15, a3);
    v35 = 0;
    v34 = v41;
    v33 = v40;
    sub_2209CE0(&v40, &v33, &ptr);
    v32 = 0;
    v31 = v41;
    v30 = v40;
    if ( v34 > 0x40 && v33 )
      operator delete[](v33);
    if ( (unsigned int)v37 > 0x40 && ptr )
      operator delete[](ptr);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24)) )
    {
      v26 = sub_E1EF60(*(_QWORD *)(a1 + 400));
      v18 = *(_QWORD *)(v26 + 8);
      v37 = 0;
      v27 = v18;
      ptr = v39;
      v38 = 32;
      v28 = v32;
      sub_2206A40(&v40, &v30);
      v35 = v28;
      v34 = v41;
      v33 = v40;
      sub_220BA90((unsigned int)&v33, (unsigned int)&ptr, 10, 1, 0, 1, 1);
      v21 = v25;
      if ( v34 > 0x40 && v33 )
        operator delete[](v33);
      v22 = sub_C00A40(v26, (__int64)&ptr, v21, v19, v20);
      sub_E32200(&v40, a1, v22, 2561);
      sub_AEC220(&v40, ptr, v37);
      sub_AE9DF0(&v40, v27, 8u);
      v23 = (void *)sub_EEC8C0(v26);
      LOBYTE(v34) = 1;
      v33 = v23;
      sub_AEC610((__int64 *)&v40, (__int64 *)&v33);
      sub_AEA040((__int64)&v40);
      if ( ptr != v39 )
        free(ptr);
    }
    v16 = sub_CF8AC0(a1, a2, (__int64)&v30);
    if ( !(_BYTE)v16 )
      sub_D22760(*(_QWORD *)(a1 + 176));
    if ( v31 > 0x40 && v30 )
      operator delete[](v30);
  }
  else
  {
    v24 = (_BYTE *)sub_E216C0(v13, 8);
    v16 = 1;
    *v24 = v29;
  }
  return v16;
}
