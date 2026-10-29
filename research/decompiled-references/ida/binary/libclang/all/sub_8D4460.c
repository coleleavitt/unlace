void __fastcall sub_8D4460(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // edx
  unsigned int v5; // eax
  void *v6; // rdi
  __int16 v7; // bp
  void *v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-30h]
  void *v10; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+18h] [rbp-20h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v9 = v4;
  v8 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  if ( v9 <= 0x10 )
  {
    sub_2587BE0(&v10, &v8, 16);
    v5 = v11;
    v6 = v10;
    if ( v11 <= 0x40 )
      goto LABEL_3;
    v7 = *(_WORD *)v10;
    if ( !v10 )
      goto LABEL_5;
LABEL_11:
    operator delete[](v6);
    goto LABEL_5;
  }
  sub_25877E0(&v10, &v8, 16);
  v5 = v11;
  v6 = v10;
  if ( v11 > 0x40 )
  {
    v7 = *(_WORD *)v10;
    goto LABEL_11;
  }
LABEL_3:
  v7 = 0;
  if ( v5 )
    v7 = (__int64)((_QWORD)v6 << (64 - (unsigned __int8)v5)) >> (64 - (unsigned __int8)v5);
LABEL_5:
  *(_WORD *)sub_A1A4E0(v2, 8) = v7;
  if ( v9 > 0x40 )
  {
    if ( v8 )
      operator delete[](v8);
  }
}

