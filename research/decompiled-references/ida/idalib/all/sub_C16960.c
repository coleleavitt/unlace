__int64 __fastcall sub_C16960(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  char v3; // bp
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-20h]

  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(_BYTE *)(a2 + 12);
  v9 = v2;
  if ( v2 > 0x40 )
  {
    sub_2205510(&v8);
    v2 = v9;
    if ( v9 > 0x40 )
    {
      sub_2205FC0(&v8, a2);
      goto LABEL_6;
    }
    v4 = v8;
  }
  else
  {
    v4 = *(_QWORD *)a2;
  }
  v5 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v2) & ~v4;
  if ( !v2 )
    v5 = 0;
  v8 = v5;
LABEL_6:
  sub_2205900(&v8);
  v6 = v9;
  *(_BYTE *)(a1 + 12) = v3;
  *(_DWORD *)(a1 + 8) = v6;
  *(_QWORD *)a1 = v8;
  return a1;
}
