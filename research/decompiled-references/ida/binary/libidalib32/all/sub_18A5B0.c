__int64 __fastcall sub_18A5B0(__int64 a1, _DWORD *a2, __int64 *a3)
{
  unsigned int v3; // r13d
  int v5; // eax
  int v7; // [rsp+4h] [rbp-34h]

  v5 = qsscanf();
  LOBYTE(v3) = v5 == 1;
  if ( v5 == 1 )
    *a2 = v7;
  else
    sub_94360(a3);
  return v3;
}

