void __fastcall sub_DFF240(__int64 a1, unsigned __int8 a2)
{
  bool v2; // zf

  if ( *(_BYTE *)(a1 + 185) != a2 )
  {
    v2 = *(_QWORD *)(a1 + 296) == 0;
    *(_BYTE *)(a1 + 185) = a2;
    if ( !v2 )
    {
      sub_DFBCB0(a1);
      v2 = *(_QWORD *)(a1 + 856) == 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 296) + 712LL) = a2;
      if ( !v2 )
        sub_DFED30((_QWORD *)a1);
    }
  }
}

