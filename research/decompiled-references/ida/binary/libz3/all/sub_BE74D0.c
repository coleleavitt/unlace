__int64 __fastcall sub_BE74D0(__int64 *a1, unsigned int a2, unsigned int a3, double a4)
{
  __int64 v4; // rax
  unsigned int v6; // edx
  unsigned int v7; // r8d
  __int64 v8; // rsi
  unsigned int v10[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v4 = *a1;
  v6 = 0;
  v10[0] = a2;
  if ( *(_DWORD *)(v4 + 4152) < a3 )
  {
    v7 = *(_DWORD *)(v4 + 4156);
    if ( v7 != -2 )
    {
      v8 = a1[1];
      if ( *(_BYTE *)(*(_QWORD *)(v8 + 8848) + v7) == 1 && *(_DWORD *)(v8 + 9464) != *(_DWORD *)(v8 + 9468) )
      {
        sub_BC37F0(v4, 0, 1, v10, v7 ^ 1, a4);
        return 1;
      }
    }
  }
  return v6;
}

