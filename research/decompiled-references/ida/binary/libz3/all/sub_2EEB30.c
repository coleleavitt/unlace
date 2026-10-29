__int64 __fastcall sub_2EEB30(__int64 a1, __int64 a2, unsigned int a3)
{
  char **exception; // rbx
  __int64 v4; // rax
  int *v6; // rbp
  int v7; // eax
  __int64 v9; // rdi
  __int64 v10; // rax
  void *v11; // r15
  void *v12; // rdi
  void *v13; // rdi
  int v14[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+20h] [rbp-98h] BYREF
  __int64 v16; // [rsp+28h] [rbp-90h]
  __int64 v17; // [rsp+30h] [rbp-88h]
  __int64 v18; // [rsp+38h] [rbp-80h]
  _QWORD v19[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v20[13]; // [rsp+50h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a2 + 608);
  if ( !v4 || a3 >= *(_DWORD *)(v4 - 4) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_2EB560(&v15, "index out of bounds");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v15);
    sub_233E40((__int64)&v15);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v6 = (int *)(v4 + 104LL * a3);
  v7 = *v6;
  if ( *v6 == 1 )
  {
    sub_32FC40(&v15, a2 + 296, (unsigned int)v6[24]);
    sub_2FC600(a1, v6 + 12, &v15);
LABEL_10:
    sub_2A6060((__int64)&v15);
    return a1;
  }
  if ( v7 != 2 )
  {
    if ( v7 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1469);
    }
    sub_32FA40(&v15, a2 + 296, (unsigned int)v6[24]);
    sub_2FC600(a1, v6 + 12, &v15);
    goto LABEL_10;
  }
  v9 = *(_QWORD *)(a2 + 416);
  v16 = 0;
  v15 = *((_QWORD *)v6 + 11);
  v10 = sub_2EB230(v9, *(_DWORD *)(a2 + 424), (unsigned __int64 *)&v15);
  sub_2FFE00(v14, *(_QWORD *)(v10 + 16));
  v15 = 0;
  v16 = 0;
  v17 = 1;
  v18 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v15, v14);
  v11 = qword_1C7F2C0;
  v19[0] = 0;
  v19[1] = 0;
  v20[0] = 1;
  v20[1] = 0;
  sub_182CEF0(qword_1C7F2C0, v19);
  sub_182CBA0(v11, v20);
  *(_BYTE *)(a1 + 36) &= 0xFCu;
  v12 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 52) &= 0xFCu;
  *(_OWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)a1 = 0;
  BYTE4(v20[0]) &= ~1u;
  LODWORD(v20[0]) = 1;
  sub_27B950((__int64)v12, a1 + 32, (int *)&v15);
  *(_BYTE *)(a1 + 68) &= 0xFCu;
  v13 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 84) &= 0xFCu;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  sub_27B950((__int64)v13, a1 + 64, (int *)v19);
  sub_25A130((char *)v19);
  sub_25A130((char *)&v15);
  sub_25A130((char *)v14);
  return a1;
}

