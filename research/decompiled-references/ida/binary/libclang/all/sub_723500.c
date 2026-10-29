__int64 __fastcall sub_723500(_BYTE *a1)
{
  char v1; // al
  char v2; // dl
  __int64 v4; // [rsp+8h] [rbp-20h]
  __int64 v5; // [rsp+10h] [rbp-18h]

  v5 = sub_723360(a1);
  v1 = 0;
  if ( v2 )
  {
    LODWORD(v4) = *(_DWORD *)(v5 + 36);
    v1 = 1;
  }
  BYTE4(v4) = v1;
  return v4;
}

