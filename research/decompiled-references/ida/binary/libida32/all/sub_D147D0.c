__int64 __fastcall sub_D147D0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v6; // eax
  unsigned int v7; // r15d
  unsigned __int8 *v8; // r13
  char v9; // r15
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned int v16; // eax
  void *v17; // rax
  __int64 v18; // [rsp-8h] [rbp-100h]
  __int64 v19; // [rsp+0h] [rbp-F8h]
  char v20; // [rsp+Fh] [rbp-E9h]
  void *v21; // [rsp+10h] [rbp-E8h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-E0h]
  char v23; // [rsp+1Ch] [rbp-DCh]
  void *v24; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-D0h]
  char v26; // [rsp+2Ch] [rbp-CCh]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  signed __int64 v28; // [rsp+38h] [rbp-C0h]
  __int64 v29; // [rsp+40h] [rbp-B8h]
  _BYTE v30[40]; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int8 *v31; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v32; // [rsp+78h] [rbp-80h]

  v6 = sub_DFDF30(a1);
  if ( (_BYTE)v6 || (v7 = v6, !(unsigned __int8)sub_DA3FF0(a3)) )
  {
    v8 = (unsigned __int8 *)sub_CE8890(a3);
    *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = *v8;
    if ( *v8 == 127 && a4 )
    {
      v23 = 0;
      v22 = 1;
      v21 = nullptr;
      sub_CCCC10((__int64)&v31, *v8, 9);
      BYTE4(v28) = 0;
      LODWORD(v28) = v32;
      ptr = v31;
      sub_21E1BC0(&ptr);
      sub_BFCC40((__int64)&v21, (__int64 *)&ptr);
      if ( (unsigned int)v28 > 0x40 && ptr )
        operator delete[](ptr);
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
      if ( (_BYTE)v7 )
      {
        v11 = sub_DFB220(*(_QWORD *)(a1 + 400));
        v12 = *(_QWORD *)(v11 + 8);
        v28 = 0;
        v29 = 32;
        v19 = v12;
        ptr = v30;
        v20 = v23;
        sub_21E2D00(&v31, &v21);
        v25 = v32;
        v26 = v20;
        v24 = v31;
        sub_21E7D50((unsigned int)&v24, (unsigned int)&ptr, 10, 1, 0, 1, 1);
        v15 = v18;
        if ( v25 > 0x40 && v24 )
          operator delete[](v24);
        v16 = sub_BDCD00(v11, (__int64)&ptr, v15, v13, v14);
        sub_E0E4C0(&v31, a1, v16, 2561);
        sub_AC84E0(&v31, ptr, v28);
        sub_AC60B0(&v31, v19, 8u);
        v17 = (void *)sub_EC8B80(v11);
        LOBYTE(v25) = 1;
        v24 = v17;
        sub_AC88D0((__int64 *)&v31, (__int64 *)&v24);
        sub_AC6300((__int64)&v31);
        if ( ptr != v30 )
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
      v9 = *v8 + 1;
      *(_BYTE *)sub_CE8890(a3) = v9;
      return 1;
    }
  }
  return v7;
}

