__int64 __fastcall sub_A14E40(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // zf
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 400);
  *(_QWORD *)(a1 + 1020) = 0;
  v2 = *(_DWORD *)(v1 + 40) == 1;
  *(_BYTE *)(a1 + 1028) = *(_BYTE *)(v1 + 91);
  if ( v2 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( v4 )
    {
      v5 = *(unsigned int *)(v4 - 4);
      if ( (int)v5 > 0 )
      {
        v6 = 4 * v5;
        v7 = 0;
        do
        {
          v8 = v7 + *(_QWORD *)(a1 + 656);
          if ( ((*(_BYTE *)(v8 + 3) >> 4) & 3) == 2 )
            sub_A13F70((_QWORD *)a1, *(_DWORD *)v8 & 0xFFFFFFF);
          v7 += 4;
        }
        while ( v6 != v7 );
      }
    }
  }
  sub_A05C00(a1);
  result = sub_8E1A40(a1 + 568);
  *(_BYTE *)(a1 + 1448) = 0;
  *(_DWORD *)(a1 + 1032) = 0;
  *(_DWORD *)(a1 + 1452) = 0;
  return result;
}

