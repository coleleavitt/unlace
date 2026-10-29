__int64 __fastcall sub_723580(_BYTE *a1)
{
  __int64 v1; // rax
  char v2; // dl
  __int64 v4; // [rsp+8h] [rbp-20h]

  v1 = sub_723360(a1);
  if ( v2 )
  {
    BYTE4(v4) = 1;
    LODWORD(v4) = *(_DWORD *)(v1 + 16);
  }
  else
  {
    BYTE4(v4) = 0;
  }
  return v4;
}

