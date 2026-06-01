void __fastcall sub_457890(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 328);
    if ( !v2 )
      break;
    do
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v2 - 8);
    while ( !v5 );
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v3 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    delete_dirtree(*v3);
    operator delete(v3, 8u);
  }
  v4 = *(_QWORD *)(a1 + 240);
  *(_OWORD *)a1 = 0;
  if ( v4 )
  {
    qfclose(v4);
    *(_QWORD *)(a1 + 240) = 0;
  }
}
