bool __fastcall sub_BDA2B0(__int64 a1)
{
  __int16 v1; // dx
  __int64 v2; // rax
  __int16 v3; // dx

  v1 = *(_WORD *)a1 & 0x1FF;
  if ( v1 == 48 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    a1 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v2 & 4) != 0 )
      a1 = *(_QWORD *)(a1 + 40);
    v1 = *(_WORD *)a1 & 0x1FF;
  }
  if ( v1 != 79 )
    return v1 == 112;
  do
  {
    a1 = sub_BD6670(a1);
    v3 = *(_WORD *)a1 & 0x1FF;
  }
  while ( v3 == 79 );
  return v3 == 112;
}

