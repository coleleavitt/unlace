void __fastcall sub_1C27AC0(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = *(_BYTE **)(*(_QWORD *)(a1 + 8) + 784LL);
  if ( v1[8] && !*(_BYTE *)(a1 + 120) )
  {
    *(_BYTE *)(a1 + 120) = 1;
    sub_1C27020(a1, (unsigned __int8 *)&off_2BC8AA0, 2822, 0);
    v1 = *(_BYTE **)(*(_QWORD *)(a1 + 8) + 784LL);
  }
  if ( v1[9] && !*(_BYTE *)(a1 + 121) )
  {
    *(_BYTE *)(a1 + 121) = 1;
    sub_1C27020(a1, (unsigned __int8 *)off_2BC7D20, 86, 1);
    v1 = *(_BYTE **)(*(_QWORD *)(a1 + 8) + 784LL);
  }
  if ( v1[10] )
  {
    if ( !*(_BYTE *)(a1 + 122) )
    {
      *(_BYTE *)(a1 + 122) = 1;
      sub_1C27020(a1, (unsigned __int8 *)off_2BC7AC0, 15, 2);
    }
  }
}
