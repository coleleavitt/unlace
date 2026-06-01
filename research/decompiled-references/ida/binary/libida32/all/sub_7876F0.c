void __fastcall sub_7876F0(__int64 a1, int a2)
{
  __int64 v3; // rdi
  bool v4; // zf

  if ( a2 )
    sub_786EA0(a1, 0, 0);
  while ( *(_QWORD *)(a1 + 272) )
    sub_77E500(a1);
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
      sub_77EF90(a1);
    while ( *(_QWORD *)(a1 + 64) );
  }
}

