__int64 __fastcall sub_8AE7F0(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 result; // rax
  int v8; // eax
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( !*a2
    || (*(_BYTE *)(a3 + 4) & 1) == 0
    && *(_DWORD *)a3 == 1
    && (*(_BYTE *)(a3 + 20) & 1) == 0
    && *(_DWORD *)(a3 + 16) == 1 )
  {
    return sub_8ADE80(a1, a4, a2);
  }
  if ( a3 == a4 )
  {
    v6 = a4 + 16;
    v9[0] = 0;
    v9[1] = 0;
    sub_1839230(a1, a2, a4 + 16, v9);
    sub_1839230(a1, a2 + 4, a4, a4 + 16);
    if ( (v9[0] & 0x100000000LL) != 0 )
    {
      sub_182EA00(a1, a4, v9);
    }
    else
    {
      v8 = v9[0];
      *(_BYTE *)(a4 + 4) &= ~1u;
      *(_DWORD *)a4 = v8;
    }
    sub_182EF00(a1, v9);
    if ( *(int *)(a4 + 16) >= 0 )
      goto LABEL_5;
    goto LABEL_15;
  }
  sub_1839230(a1, a2, a3 + 16, a4);
  v6 = a4 + 16;
  sub_1839230(a1, a2 + 4, a3, a4 + 16);
  if ( *(int *)(a4 + 16) < 0 )
  {
LABEL_15:
    sub_1839100(a1, a4);
    sub_1839100(a1, v6);
  }
LABEL_5:
  result = sub_183B0A0(a1, a4, v6, a1 + 600);
  if ( (*(_BYTE *)(a1 + 604) & 1) != 0 || *(_DWORD *)(a1 + 600) != 1 )
  {
    sub_183C300(a1, a4, a1 + 600, a4);
    return sub_183C300(a1, v6, a1 + 600, v6);
  }
  return result;
}

