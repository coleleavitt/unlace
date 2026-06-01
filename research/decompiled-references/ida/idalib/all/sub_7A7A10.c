void __fastcall sub_7A7A10(__int64 a1, int a2)
{
  __int64 v3; // rdi
  bool v4; // zf

  if ( a2 )
    sub_7A71C0(a1, 0, 0);
  while ( *(_QWORD *)(a1 + 272) )
    sub_79E810(a1);
  qfree(*(void **)(a1 + 296));
  v3 = *(_QWORD *)(a1 + 288);
  *(_QWORD *)(a1 + 296) = 0;
  if ( v3 )
    qfclose(v3);
  v4 = *(_QWORD *)(a1 + 64) == 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 304) = -1;
  if ( !v4 )
  {
    do
      sub_79F2A0(a1);
    while ( *(_QWORD *)(a1 + 64) );
  }
}
