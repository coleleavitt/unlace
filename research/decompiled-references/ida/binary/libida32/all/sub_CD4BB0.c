__int64 __fastcall sub_CD4BB0(__int64 a1, __int64 *a2, __int64 a3)
{
  char v4; // r12
  unsigned int v5; // eax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-30h]

  v4 = *((_BYTE *)a2 + 12);
  v8 = *((_DWORD *)a2 + 2);
  if ( v8 > 0x40 )
    sub_21E17D0(&v7);
  else
    v7 = *a2;
  sub_21E1D30(&v7, a3);
  v5 = v8;
  *(_BYTE *)(a1 + 12) = v4;
  *(_DWORD *)(a1 + 8) = v5;
  *(_QWORD *)a1 = v7;
  return a1;
}

