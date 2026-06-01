__int64 __fastcall sub_41AB50(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _BOOL4 v4; // r12d
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  unsigned int v12; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+14h] [rbp-24h] BYREF

  v4 = (a3 & 1) == 0;
  v7 = sub_48C160(a2, (unsigned int)(a3 - v4 - 1), a4 + 8, &v11, &v12, &v13);
  v8 = 1;
  if ( v7 != 1 )
  {
    v9 = sub_48BF90(a2, v12, v13, v11);
    v12 = v9;
    if ( v4 )
    {
      sub_48AFD0(a2, *(_QWORD *)(a4 + 8LL * a3 - 8));
      return v12;
    }
    return v9;
  }
  return v8;
}

