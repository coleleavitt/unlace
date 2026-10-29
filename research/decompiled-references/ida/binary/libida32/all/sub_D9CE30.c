__int64 __fastcall sub_D9CE30(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v4; // r12
  unsigned __int64 v5; // rdx
  void *v6; // rdi
  char v7; // bl
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
    if ( (unsigned int)v3 > 0x40 )
    {
      sub_21E1730(&v9, v4, 1);
    }
    else
    {
      v9 = v4;
      sub_CD43C0((unsigned __int64 *)&v9);
    }
  }
  else
  {
    sub_21E18D0(&v9, v3, v5, v4);
  }
  if ( v10 > 8 )
  {
    sub_21E2D00(&v11, &v9);
    v7 = (char)v11;
    if ( v12 <= 0x40 )
      goto LABEL_8;
    v6 = v11;
    v7 = *(_BYTE *)v11;
    goto LABEL_7;
  }
  sub_21E2E30(&v11, &v9, 8);
  v6 = v11;
  v7 = (char)v11;
  if ( v12 > 0x40 )
  {
    v7 = *(_BYTE *)v11;
    if ( v11 )
LABEL_7:
      operator delete[](v6);
  }
LABEL_8:
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  *(_BYTE *)sub_DFD980(a1, 8) = v7;
  return 1;
}

