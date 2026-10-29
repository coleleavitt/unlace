__int64 __fastcall sub_C168D0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // [rsp+0h] [rbp-18h] BYREF
  int v5; // [rsp+8h] [rbp-10h]

  if ( *(_BYTE *)(a2 + 12) )
  {
    sub_22078F0(&v4);
    v2 = v5;
    *(_BYTE *)(a1 + 12) = 1;
  }
  else
  {
    sub_2207BA0(&v4);
    v2 = v5;
    *(_BYTE *)(a1 + 12) = 0;
  }
  *(_DWORD *)(a1 + 8) = v2;
  *(_QWORD *)a1 = v4;
  return a1;
}
