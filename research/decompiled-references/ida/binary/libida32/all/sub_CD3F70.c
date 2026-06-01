__int64 __fastcall sub_CD3F70(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  void *v3; // r12
  unsigned __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rbx
  void *v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-30h]
  void *v10; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+18h] [rbp-20h]

  v1 = sub_DFDA20(a1, 16);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(void **)v1;
  sub_DFDA50(a1, 16);
  v4 = ((unsigned __int64)(unsigned int)v2 + 63) >> 6;
  if ( v4 == 1 )
  {
    v9 = v2;
    if ( (unsigned int)v2 > 0x40 )
    {
      sub_21E1730(&v8, v3, 0);
      v5 = v9;
    }
    else
    {
      v8 = v3;
      v5 = v2;
    }
  }
  else
  {
    sub_21E18D0(&v8, v2, v4, v3);
    v5 = v9;
  }
  if ( v5 > 8 )
  {
    sub_21E2D00(&v10, &v8);
    if ( v11 > 0x40 )
    {
      LOBYTE(v6) = *(_BYTE *)v10;
      operator delete[](v10);
    }
    else
    {
      LOBYTE(v6) = 0;
      if ( v11 )
        v6 = (__int64)((_QWORD)v10 << (64 - (unsigned __int8)v11)) >> (64 - (unsigned __int8)v11);
    }
  }
  else
  {
    sub_21E2F90(&v10, &v8, 8);
    if ( v11 > 0x40 )
    {
      LOBYTE(v6) = *(_BYTE *)v10;
      if ( v10 )
        operator delete[](v10);
    }
    else
    {
      LOBYTE(v6) = 0;
      if ( v11 )
        LOBYTE(v6) = (__int64)((_QWORD)v10 << (64 - (unsigned __int8)v11)) >> (64 - (unsigned __int8)v11);
    }
  }
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  *(_BYTE *)sub_DFD980(a1, 8) = v6;
  return 1;
}

