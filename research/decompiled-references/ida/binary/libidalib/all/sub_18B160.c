__int64 __fastcall sub_18B160(__int64 a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v3; // r13d
  int v5; // eax
  int v7; // [rsp+4h] [rbp-34h]

  v5 = qsscanf();
  LOBYTE(v3) = v5 == 1;
  if ( v5 == 1 )
    *a2 = v7;
  else
    sub_94440(a3);
  return v3;
}

