void __fastcall sub_9B0470(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  void *v4; // rdi
  int v5; // ebp
  void *v6; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-30h]
  void *v8; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+18h] [rbp-20h]

  v2 = sub_A1A5A0(a1, 16);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v7 = v3;
  v6 = *(void **)v2;
  sub_A1A5E0(a1, 16);
  if ( v7 > 0x20 )
  {
    sub_25877E0(&v8, &v6, 32);
    v4 = v8;
    if ( v9 > 0x40 )
    {
      v5 = *(_DWORD *)v8;
      goto LABEL_7;
    }
LABEL_12:
    v5 = (int)v4;
    goto LABEL_8;
  }
  sub_2587D60(&v8, &v6);
  v4 = v8;
  if ( v9 <= 0x40 )
    goto LABEL_12;
  v5 = *(_DWORD *)v8;
  if ( v8 )
LABEL_7:
    operator delete[](v4);
LABEL_8:
  *(_DWORD *)sub_A1A4E0(a1, 8) = v5;
  if ( v7 > 0x40 )
  {
    if ( v6 )
      operator delete[](v6);
  }
}

