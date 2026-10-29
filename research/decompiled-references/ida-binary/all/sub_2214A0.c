void __fastcall sub_2214A0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  _BOOL4 v3; // ecx
  int v4; // eax
  char v5; // al

  if ( *(_BYTE *)(a1 + 152) )
  {
    if ( (*(_BYTE *)(a1 + 153) & 2) != 0 )
    {
      if ( !*(_BYTE *)(a1 + 232)
        || !get_func(a2)
        || (v5 = *(_BYTE *)(a1 + 232), *(_BYTE *)(a1 + 232) = 0, *(_BYTE *)(a1 + 153) = v5, (v5 & 2) != 0) )
      {
        v2 = *(_QWORD *)(a1 + 160);
        if ( (dword_8CB6A0 & 1) != 0 || a2 != v2 || v2 == -1 )
        {
          v3 = 0;
          if ( v2 != -1 )
          {
            v4 = 652835029 * dword_8CB538++;
            v3 = __ROR4__(v4, 3) > (unsigned int)byte_418937;
          }
          sub_2207E0((__m128i *)qword_8CBAA0, (signed int *)a1, v2, v3);
          *(_QWORD *)(a1 + 160) = a2;
        }
      }
    }
  }
}
