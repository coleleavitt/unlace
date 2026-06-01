char __fastcall sub_3BF920(__int64 *a1, unsigned __int64 a2, __int64 a3, _DWORD *a4, char a5)
{
  char v5; // dh
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  __int64 v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( (v5 & 1) == 0 )
    return a5 ^ 1;
  v9 = nbits(a2);
  v10 = v9 + 14;
  v11 = v9 + 7;
  if ( v11 >= 0 )
    v10 = v11;
  v12 = v10 >> 3;
  if ( v12 == 3 )
  {
    *a4 &= 0xFFFFFFu;
LABEL_11:
    sub_3BEFF0(a1, v13, a2);
    return *a4 == v13[0];
  }
  if ( v11 > 31 )
  {
    if ( v12 != 4 )
      return a5 ^ 1;
    goto LABEL_11;
  }
  if ( v12 != 1 )
  {
    if ( v12 == 2 )
    {
      sub_3BEFF0(a1, v13, a2);
      return *(unsigned __int16 *)a4 == v13[0];
    }
    return a5 ^ 1;
  }
  sub_3BEB30(a1, v13, a2);
  return *(_BYTE *)a4 == LOBYTE(v13[0]);
}
