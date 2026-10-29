bool __fastcall sub_1B107F0(__int64 a1, unsigned int **a2, __int64 a3)
{
  unsigned int **v3; // rcx
  unsigned int *v4; // r8
  __int64 *v5; // rbx
  unsigned int *v6; // rdx
  unsigned int v7; // eax
  bool result; // al
  __int64 v9; // [rsp+0h] [rbp-B0h] BYREF
  _BYTE v10[168]; // [rsp+8h] [rbp-A8h] BYREF

  v3 = &a2[a3];
  if ( v3 == a2 )
    return 0;
  v4 = nullptr;
  v5 = nullptr;
  do
  {
    v6 = *a2;
    v7 = (*a2)[2];
    if ( v7 == 85 )
    {
      if ( v5 )
        goto LABEL_9;
      v4 = *a2;
    }
    else if ( v7 == 60 )
    {
      v5 = (__int64 *)*a2;
      if ( v4 )
        goto LABEL_11;
    }
    ++a2;
  }
  while ( v3 != a2 );
  result = v5 != nullptr && v4 != nullptr;
  if ( !result )
    return result;
LABEL_11:
  v6 = v4;
LABEL_9:
  sub_168B9F0((__int64)v10, (__int64 *)(a1 + 8), *v6, 0x11F3u, 0);
  v9 = *v5;
  sub_1587DB0((__int64)v10, &v9);
  sub_15F7200(v10);
  return 1;
}
