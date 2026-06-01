__int64 __fastcall sub_D14CE0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v7; // eax
  unsigned int v8; // r15d
  unsigned int *v9; // r13
  int v10; // r15d
  unsigned int v12; // esi
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // eax
  void *v19; // rax
  __int64 v20; // [rsp-8h] [rbp-100h]
  __int64 v21; // [rsp+0h] [rbp-F8h]
  char v22; // [rsp+Fh] [rbp-E9h]
  void *v23; // [rsp+10h] [rbp-E8h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-E0h]
  char v25; // [rsp+1Ch] [rbp-DCh]
  void *v26; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-D0h]
  char v28; // [rsp+2Ch] [rbp-CCh]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  signed __int64 v30; // [rsp+38h] [rbp-C0h]
  __int64 v31; // [rsp+40h] [rbp-B8h]
  _BYTE v32[40]; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int8 *v33; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v34; // [rsp+78h] [rbp-80h]

  v7 = sub_DFDF30(a1);
  if ( (_BYTE)v7 || (v8 = v7, !(unsigned __int8)sub_DA3FF0(a3)) )
  {
    v9 = (unsigned int *)sub_CE9490(a3);
    *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = *v9;
    if ( *v9 == 0x7FFFFFFF && a4 )
    {
      v24 = 1;
      v12 = *v9;
      v25 = 0;
      v23 = nullptr;
      sub_CCCC90((__int64)&v33, v12, 33);
      BYTE4(v30) = 0;
      LODWORD(v30) = v34;
      ptr = v33;
      sub_21E1BC0(&ptr);
      sub_BFCC40((__int64)&v23, (__int64 *)&ptr);
      if ( (unsigned int)v30 > 0x40 && ptr )
        operator delete[](ptr);
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
      if ( (_BYTE)v8 )
      {
        v13 = sub_DFB220(*(_QWORD *)(a1 + 400));
        v14 = *(_QWORD *)(v13 + 8);
        v30 = 0;
        v31 = 32;
        v21 = v14;
        ptr = v32;
        v22 = v25;
        sub_21E2D00(&v33, &v23);
        v27 = v34;
        v28 = v22;
        v26 = v33;
        sub_21E7D50((unsigned int)&v26, (unsigned int)&ptr, 10, 1, 0, 1, 1);
        v17 = v20;
        if ( v27 > 0x40 && v26 )
          operator delete[](v26);
        v18 = sub_BDCD00(v13, (__int64)&ptr, v17, v15, v16);
        sub_E0E4C0(&v33, a1, v18, 2561);
        sub_AC84E0(&v33, ptr, v30);
        sub_AC60B0(&v33, v21, 8u);
        v19 = (void *)sub_EC8B80(v13);
        LOBYTE(v27) = 1;
        v26 = v19;
        sub_AC88D0((__int64 *)&v33, (__int64 *)&v26);
        sub_AC6300((__int64)&v33);
        if ( ptr != v32 )
          free(ptr);
      }
      else
      {
        v8 = sub_CD4D80(a1, a2, (__int64)&v23);
      }
      if ( v24 > 0x40 && v23 )
        operator delete[](v23);
    }
    else
    {
      v10 = *v9 + 1;
      *(_DWORD *)sub_CE9490(a3) = v10;
      return 1;
    }
  }
  return v8;
}

