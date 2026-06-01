__int64 __fastcall sub_BF2B30(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  int v6; // [rsp+8h] [rbp-10h]

  if ( *(_BYTE *)(a2 + 12) )
  {
    sub_21E3050(&v5, a2, a3);
    v3 = v6;
    *(_BYTE *)(a1 + 12) = 1;
  }
  else
  {
    sub_21E30A0(&v5, a2, a3);
    v3 = v6;
    *(_BYTE *)(a1 + 12) = 0;
  }
  *(_DWORD *)(a1 + 8) = v3;
  *(_QWORD *)a1 = v5;
  return a1;
}

