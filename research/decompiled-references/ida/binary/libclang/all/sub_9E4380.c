__int64 __fastcall sub_9E4380(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // edx
  void *v7; // r13
  void *v8; // r14
  __int64 result; // rax
  unsigned __int8 v10; // [rsp+Fh] [rbp-49h]
  void *v11; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-40h]
  void *v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v12 = v6;
  v11 = *(void **)v5;
  sub_A1A5E0(v4, 16);
  if ( v12 > 0x40 )
  {
    sub_25877E0(&v13, &v11, 64);
    v7 = v13;
    if ( (unsigned int)v14 > 0x40 )
    {
      v7 = *(void **)v13;
      operator delete[](v13);
    }
  }
  else
  {
    sub_2587D60(&v13, &v11);
    v7 = v13;
    if ( (unsigned int)v14 > 0x40 )
    {
      v8 = *(void **)v13;
      if ( v13 )
        operator delete[](v13);
      v7 = v8;
    }
  }
  LOBYTE(v14) = 1;
  v13 = v7;
  result = sub_9E3ED0(a1, a2, a3, v7, 1);
  if ( v12 > 0x40 )
  {
    if ( v11 )
    {
      v10 = result;
      operator delete[](v11);
      return v10;
    }
  }
  return result;
}

