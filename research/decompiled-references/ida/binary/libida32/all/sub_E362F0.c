void __fastcall sub_E362F0(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const char *a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // rbx
  size_t v10; // rax
  size_t v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // [rsp+0h] [rbp-78h] BYREF
  __int64 v17; // [rsp+8h] [rbp-70h]
  __int64 v18; // [rsp+10h] [rbp-68h]
  _BYTE v19[88]; // [rsp+20h] [rbp-58h] BYREF

  if ( a7 )
  {
    v9 = a1 + 1048;
    v10 = j__strlen("includedFrom");
    sub_2206E30(a1 + 1048, "includedFrom", v10);
    sub_2205CB0(a1 + 1048);
    if ( !a2 )
    {
      sub_FFEBC0(&v16, *(_QWORD *)(a1 + 1224), HIDWORD(a9), 1);
      sub_E362F0(a1, 0, v12, v13, v14, v15, v16, v17, v18);
    }
    sub_E35B80((__int64)v19, a7);
    v11 = j__strlen("file");
    sub_2206E30(v9, "file", v11);
    sub_2208D80(v9, v19);
    sub_2205EB0(v9);
    sub_2207560(v19);
    sub_2205E20(v9);
    sub_2205EB0(v9);
  }
}

