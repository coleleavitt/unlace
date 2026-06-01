bool __fastcall sub_8120D0(unsigned __int64 a1)
{
  __int16 v1; // dx
  __int64 v2; // rax
  __int16 v3; // dx

  v1 = *(_WORD *)a1 & 0x1FF;
  if ( v1 == 49 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    a1 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v2 & 4) != 0 )
      a1 = *(_QWORD *)(a1 + 40);
    v1 = *(_WORD *)a1 & 0x1FF;
  }
  if ( v1 != 80 )
    return v1 == 113;
  do
  {
    a1 = sub_80C4C0(a1);
    v3 = *(_WORD *)a1 & 0x1FF;
  }
  while ( v3 == 80 );
  return v3 == 113;
}

