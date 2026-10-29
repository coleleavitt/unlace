__int64 __fastcall sub_D15BF0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v7; // eax
  void **v8; // rax
  unsigned int v9; // r15d
  void *v11; // rsi
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

  v7 = sub_DFDF30(a1);
  if ( (_BYTE)v7 || (v9 = v7, !(unsigned __int8)sub_DA3FF0(a3)) )
  {
    v8 = (void **)sub_CE9C80(a3);
    if ( *v8 == (void *)0x7FFFFFFFFFFFFFFFLL && a4 )
    {
      v22 = nullptr;
      v11 = *v8;
      v24 = 0;
      v23 = 1;
      sub_CCCCD0((__int64)&v32, v11, 65);
      BYTE4(v29) = 0;
      LODWORD(v29) = v33;
      ptr = v32;
      sub_21E1BC0(&ptr);
      sub_BFCC40((__int64)&v22, (__int64 *)&ptr);
      if ( (unsigned int)v29 > 0x40 && ptr )
        operator delete[](ptr);
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
      if ( (_BYTE)v9 )
      {
        v12 = sub_DFB220(*(_QWORD *)(a1 + 400));
        v13 = *(_QWORD *)(v12 + 8);
        v29 = 0;
        v30 = 32;
        v20 = v13;
        ptr = v31;
        v21 = v24;
        sub_21E2D00(&v32, &v22);
        v26 = v33;
        v27 = v21;
        v25 = v32;
        sub_21E7D50((unsigned int)&v25, (unsigned int)&ptr, 10, 1, 0, 1, 1);
        v16 = v19;
        if ( v26 > 0x40 && v25 )
          operator delete[](v25);
        v17 = sub_BDCD00(v12, (__int64)&ptr, v16, v14, v15);
        sub_E0E4C0(&v32, a1, v17, 2561);
        sub_AC84E0(&v32, ptr, v29);
        sub_AC60B0(&v32, v20, 8u);
        v18 = (void *)sub_EC8B80(v12);
        LOBYTE(v26) = 1;
        v25 = v18;
        sub_AC88D0((__int64 *)&v32, (__int64 *)&v25);
        sub_AC6300((__int64)&v32);
        if ( ptr != v31 )
          free(ptr);
      }
      else
      {
        v9 = sub_CD4D80(a1, a2, (__int64)&v22);
      }
      if ( v23 > 0x40 && v22 )
        operator delete[](v22);
    }
    else
    {
      *v8 = (char *)*v8 + 1;
      return 1;
    }
  }
  return v9;
}

