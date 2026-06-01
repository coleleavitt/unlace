__int64 __fastcall sub_7D4020(__int64 a1)
{
  __int64 v1; // rax
  int v3; // eax

  v1 = *(_QWORD *)(a1 + 80);
  if ( *(_BYTE *)(v1 + 1394) )
  {
    if ( (unsigned __int8)sub_7ECF30((int)a1 + 400) )
      return 1;
    v1 = *(_QWORD *)(a1 + 80);
  }
  if ( !*(_BYTE *)(v1 + 1047) )
    return 2;
  v3 = sub_850330((int)a1 + 112);
  if ( v3 != -1 )
    return 2 * (unsigned int)(v3 != 1);
  return 1;
}

