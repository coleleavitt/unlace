__int64 __fastcall sub_D9B2F0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v4; // r12
  unsigned __int64 v5; // rdx
  void *v6; // rdi
  void *v7; // rbx
  void *v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-30h]
  void *v11; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-20h]

  v2 = sub_DFDA20(a1, 16);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(void **)v2;
  sub_DFDA50(a1, 16);
  v5 = ((unsigned __int64)(unsigned int)v3 + 63) >> 6;
  if ( v5 == 1 )
  {
    v10 = v3;
    if ( (unsigned int)v3 <= 0x40 )
    {
      v9 = v4;
      goto LABEL_4;
    }
    sub_21E1730(&v9, v4, 0);
  }
  else
  {
    sub_21E18D0(&v9, v3, v5, v4);
  }
  if ( v10 > 0x40 )
  {
    sub_21E2D00(&v11, &v9);
    v7 = v11;
    if ( v12 <= 0x40 )
      goto LABEL_7;
    v6 = v11;
    v7 = *(void **)v11;
    goto LABEL_6;
  }
LABEL_4:
  sub_21E2F90(&v11, &v9, 64);
  v6 = v11;
  v7 = v11;
  if ( v12 > 0x40 )
  {
    v7 = *(void **)v11;
    if ( v11 )
LABEL_6:
      operator delete[](v6);
  }
LABEL_7:
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  *(_QWORD *)sub_DFD980(a1, 8) = v7;
  return 1;
}

