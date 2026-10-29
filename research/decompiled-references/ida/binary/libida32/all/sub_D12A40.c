__int64 __fastcall sub_D12A40(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v6; // eax
  unsigned int v7; // r15d
  __int64 *v8; // r12
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned int v16; // eax
  void *v17; // rax
  __int64 v18; // [rsp-8h] [rbp-120h]
  __int64 v19; // [rsp+0h] [rbp-118h]
  char v20; // [rsp+Fh] [rbp-109h]
  void *v21; // [rsp+10h] [rbp-108h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-100h]
  char v23; // [rsp+1Ch] [rbp-FCh]
  void *v24; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-F0h]
  char v26; // [rsp+2Ch] [rbp-ECh]
  void *v27; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-E0h]
  int v29; // [rsp+40h] [rbp-D8h]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  signed __int64 v31; // [rsp+58h] [rbp-C0h]
  __int64 v32; // [rsp+60h] [rbp-B8h]
  _BYTE v33[40]; // [rsp+68h] [rbp-B0h] BYREF
  void *v34; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v35; // [rsp+98h] [rbp-80h]

  v6 = sub_DFDF30(a1);
  if ( (_BYTE)v6 || (v7 = v6, !(unsigned __int8)sub_DA3FF0(a3)) )
  {
    v8 = (__int64 *)sub_CEB480(a3);
    sub_CDABE0((__int64)&v27);
    sub_D11F70(*(_QWORD *)(a1 + 176), (__int64)v8);
    if ( a4 )
    {
      v22 = 1;
      v23 = 0;
      v21 = nullptr;
      sub_CD4C20((__int64)&v34, v8);
      sub_21E1C10(&v34);
      sub_BFCC40((__int64)&v21, (__int64 *)&v34);
      if ( v35 > 0x40 && v34 )
        operator delete[](v34);
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
      if ( (_BYTE)v7 )
      {
        v11 = sub_DFB220(*(_QWORD *)(a1 + 400));
        v12 = *(_QWORD *)(v11 + 8);
        v31 = 0;
        v32 = 32;
        v19 = v12;
        ptr = v33;
        v20 = v23;
        sub_21E2D00(&v34, &v21);
        v26 = v20;
        v25 = v35;
        v24 = v34;
        sub_21E7D50((unsigned int)&v24, (unsigned int)&ptr, 10, (v29 & 0x20000000) != 0, 0, 1, 1);
        v15 = v18;
        if ( v25 > 0x40 && v24 )
          operator delete[](v24);
        v16 = sub_BDCD00(v11, (__int64)&ptr, v15, v13, v14);
        sub_E0E4C0(&v34, a1, v16, 2561);
        sub_AC84E0((unsigned __int8 **)&v34, ptr, v31);
        sub_AC60B0((unsigned __int8 **)&v34, v19, 8u);
        v17 = (void *)sub_EC8B80(v11);
        LOBYTE(v25) = 1;
        v24 = v17;
        sub_AC88D0((__int64 *)&v34, (__int64 *)&v24);
        sub_AC6300((__int64)&v34);
        if ( ptr != v33 )
          free(ptr);
      }
      else
      {
        v7 = sub_CD4D80(a1, a2, (__int64)&v21);
      }
      if ( v22 > 0x40 && v21 )
        operator delete[](v21);
    }
    else
    {
      v7 = 1;
      v10 = sub_CEB480(a3);
      sub_BFCC40(v10, (__int64 *)&v27);
      *(_DWORD *)(v10 + 16) = v29;
    }
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
  }
  return v7;
}

