char __fastcall dirtree_change_rank(_QWORD *a1, __int64 a2, signed __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // r13d
  unsigned __int64 v6; // rax
  char v7; // edx^3
  unsigned __int64 v8; // rax
  int v10; // [rsp+6h] [rbp-42h] BYREF
  char v11; // [rsp+Ah] [rbp-3Eh]
  int v12; // [rsp+Bh] [rbp-3Dh]
  char v13; // [rsp+Fh] [rbp-39h]
  int v14[2]; // [rsp+10h] [rbp-38h] BYREF
  void *ptr; // [rsp+18h] [rbp-30h]

  ptr = (void *)__readfsqword(0x28u);
  *(_QWORD *)v14 = a2;
  v10 = -1;
  v11 = 0;
  v4 = sub_757F80((__int64)a1, (const char **)v14);
  if ( v4 == -1 )
    return 5;
  v5 = v4;
  v6 = sub_756AE0((__int64)a1, v4, *(char **)v14);
  LOWORD(v12) = v6;
  BYTE2(v12) = BYTE2(v6);
  v7 = BYTE3(v6);
  v8 = HIDWORD(v6);
  v13 = v8;
  HIBYTE(v12) = v7;
  if ( v12 == -1 )
    return ((_BYTE)v8 == 0) + 2;
  v11 = v8;
  v10 = v12;
  sub_7591B0(a1, v5, (__int64)&v10, a3, a2);
  return 0;
}

