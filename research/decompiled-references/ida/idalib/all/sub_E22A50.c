__int64 __fastcall sub_E22A50(__int64 a1, __int64 *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rsi
  char v5; // cl
  int v6; // edx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-30h]

  v3 = *((_DWORD *)a2 + 2);
  v9 = v3;
  if ( v3 > 0x40 )
  {
    sub_2205510(&v8);
    v3 = v9;
    v4 = v8;
  }
  else
  {
    v4 = *a2;
  }
  v5 = *((_BYTE *)a2 + 12);
  v6 = *((_DWORD *)a2 + 4);
  *(_DWORD *)(a1 + 16) = v3;
  *(_BYTE *)(a1 + 4) &= ~1u;
  *(_QWORD *)(a1 + 8) = v4;
  *(_BYTE *)(a1 + 20) = v5;
  *(_DWORD *)(a1 + 24) = v6;
  *(_DWORD *)a1 = 4;
  return a1;
}
