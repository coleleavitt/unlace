__int64 __fastcall sub_922400(__int64 a1, __int64 a2)
{
  int v2; // r12d
  int v3; // eax
  void *v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+8h] [rbp-20h]

  v6 = *(_DWORD *)(a2 + 8);
  if ( v6 > 0x40 )
  {
    sub_2585B30(&v5);
    v2 = sub_2586820(a1, &v5);
    if ( v6 > 0x40 && v5 )
    {
      operator delete[](v5);
      if ( v2 >= 0 )
        goto LABEL_4;
      return 2;
    }
  }
  else
  {
    v5 = *(void **)a2;
    v2 = sub_2586820(a1, &v5);
  }
  if ( v2 >= 0 )
  {
LABEL_4:
    v3 = sub_2586820(a1, a2);
    LOBYTE(v3) = v3 > 0;
    return (unsigned int)(3 * v3);
  }
  return 2;
}

