__int64 __fastcall sub_2DD80(__int64 a1, int a2, double a3, double a4)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // rsi

  if ( *(_BYTE *)(a1 + 72) )
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( a2 == 2 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      if ( (unsigned __int64)(v8 + 10) > 0x14 )
      {
        sub_EAA0((__int64)"%a: Invalid GOT relocation (big addend 0x%a)\n", a3, a4);
        return 0;
      }
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 64) = v9 - v8;
    }
    else if ( v8 )
    {
      sub_EAA0((__int64)"%a: Invalid GOT relocation (addend 0x%a != 0)\n", a3, a4);
      return 0;
    }
    return 1;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 48) == 2 )
      return 1;
    v4 = *(_QWORD *)(a1 + 40);
    v5 = v4 + *(_QWORD *)(a1 + 32);
    if ( v4
      && ((v6 = *(_QWORD *)(*(_QWORD *)a1 + 232LL), !*(_BYTE *)(v6 + 24))
       || v5 < *(_QWORD *)v6
       || v5 >= (*(_QWORD *)(*(_QWORD *)(v6 + 64) + 456LL) & (*(_QWORD *)(v6 + 8) + *(_QWORD *)v6))) )
    {
      return 1;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v5;
      *(_QWORD *)(a1 + 40) = 0;
      return 1;
    }
  }
}

