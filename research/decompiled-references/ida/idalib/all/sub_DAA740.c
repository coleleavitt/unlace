__int64 __fastcall sub_DAA740(__int64 a1, __int64 a2)
{
  int v2; // edx

  v2 = *(_DWORD *)(a2 + 72);
  switch ( v2 )
  {
    case 2:
      goto LABEL_6;
    case 4:
      *(_BYTE *)(a1 + 4) &= ~1u;
      *(_DWORD *)a1 = 0;
      return a1;
    case 1:
      if ( *(_BYTE *)(a2 + 64) != 1 )
      {
        sub_D8A590(a1, a2 + 8);
        return a1;
      }
      sub_E25340(a1, a2 + 8, **(_QWORD **)a2);
      return a1;
    default:
LABEL_6:
      if ( *(_BYTE *)(a2 + 64) != 3 )
        abort();
      sub_A53C40(a1, (int *)(a2 + 8));
      return a1;
  }
}
