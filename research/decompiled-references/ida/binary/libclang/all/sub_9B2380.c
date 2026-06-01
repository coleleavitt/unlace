void __fastcall sub_9B2380(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  unsigned int v4; // eax
  void *v5; // rdi
  __int64 v6; // rbp
  void *v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-30h]
  void *v9; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-20h]

  v2 = sub_A1A5A0(a1, 16);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v8 = v3;
  v7 = *(void **)v2;
  sub_A1A5E0(a1, 16);
  if ( v8 <= 0x40 )
  {
    sub_2587D60(&v9, &v7);
    v4 = v10;
    v5 = v9;
    if ( v10 <= 0x40 )
      goto LABEL_3;
    v6 = *(_QWORD *)v9;
    if ( !v9 )
      goto LABEL_5;
LABEL_11:
    operator delete[](v5);
    goto LABEL_5;
  }
  sub_25877E0(&v9, &v7, 64);
  v4 = v10;
  v5 = v9;
  if ( v10 > 0x40 )
  {
    v6 = *(_QWORD *)v9;
    goto LABEL_11;
  }
LABEL_3:
  v6 = 0;
  if ( v4 )
    v6 = (__int64)((_QWORD)v5 << (64 - (unsigned __int8)v4)) >> (64 - (unsigned __int8)v4);
LABEL_5:
  *(_QWORD *)sub_A1A4E0(a1, 8) = v6;
  if ( v8 > 0x40 )
  {
    if ( v7 )
      operator delete[](v7);
  }
}

