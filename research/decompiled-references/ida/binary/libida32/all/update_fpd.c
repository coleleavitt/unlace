__int64 __fastcall update_fpd(__int64 a1, int a2)
{
  __int64 v3; // rbp
  unsigned __int8 v4; // al
  unsigned __int8 v5; // [rsp+1h] [rbp-19h]

  if ( !a1 )
    return 0;
  if ( *(char *)(a1 + 9) < 0 )
    return 0;
  v3 = *(_QWORD *)(qword_2CA1698 + 1480);
  *(_DWORD *)(a1 + 32) = a2;
  v4 = sub_5ACD60(v3, a1, 0);
  if ( !v4 )
    return 0;
  v5 = v4;
  sub_5B18C0(v3, a1, 0, 0xFFFFFFFFLL, 0);
  return v5;
}

