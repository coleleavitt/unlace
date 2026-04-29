__int64 __fastcall sub_26550(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 range; // rax
  unsigned int v5; // edx
  int v6; // eax
  unsigned int v7; // [rsp+Ch] [rbp-Ch]

  if ( *(_QWORD *)(a1 + 32) )
  {
    v7 = a3;
    range = rangeset_t_find_range(a1 + 24);
    v5 = v7;
    if ( range )
    {
      v6 = sub_1DEC0(*(__int64 **)(a1 + 8), a2);
      v5 = 256;
      LOBYTE(v5) = *(_DWORD *)(a1 + 116) < v6;
    }
    else
    {
      BYTE1(v5) = 0;
    }
    return v5;
  }
  else
  {
    BYTE1(a3) = 0;
    return a3;
  }
}
