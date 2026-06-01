__int64 __fastcall sub_CD48C0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  void *v3; // r12
  unsigned __int64 v4; // rdx
  __int64 v5; // rbx
  void *v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-30h]
  void *v9; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-20h]

  v1 = sub_DFDA20(a1, 16);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(void **)v1;
  sub_DFDA50(a1, 16);
  v4 = ((unsigned __int64)(unsigned int)v2 + 63) >> 6;
  if ( v4 == 1 )
  {
    v8 = v2;
    if ( (unsigned int)v2 > 0x40 )
    {
      sub_21E1730(&v7, v3, 1);
    }
    else
    {
      v7 = v3;
      sub_CD43C0((unsigned __int64 *)&v7);
    }
  }
  else
  {
    sub_21E18D0(&v7, v2, v4, v3);
  }
  if ( v8 > 8 )
  {
    sub_21E2D00(&v9, &v7);
    if ( v10 > 0x40 )
    {
      LOBYTE(v5) = *(_BYTE *)v9;
      operator delete[](v9);
    }
    else
    {
      LOBYTE(v5) = 0;
      if ( v10 )
        v5 = (__int64)((_QWORD)v9 << (64 - (unsigned __int8)v10)) >> (64 - (unsigned __int8)v10);
    }
  }
  else
  {
    sub_21E2E30(&v9, &v7, 8);
    if ( v10 > 0x40 )
    {
      LOBYTE(v5) = *(_BYTE *)v9;
      if ( v9 )
        operator delete[](v9);
    }
    else
    {
      LOBYTE(v5) = 0;
      if ( v10 )
        LOBYTE(v5) = (__int64)((_QWORD)v9 << (64 - (unsigned __int8)v10)) >> (64 - (unsigned __int8)v10);
    }
  }
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  *(_BYTE *)sub_DFD980(a1, 8) = v5;
  return 1;
}

