void __fastcall sub_42290(__int64 a1)
{
  __int64 v1; // r12
  __int64 i; // rbx
  __int64 v3; // rax

  v1 = *(int *)(a1 + 104);
  if ( (int)v1 > 0 )
  {
    for ( i = 0; i != v1; ++i )
    {
      v3 = *(_QWORD *)(a1 + 184) + 80 * i;
      if ( (*(_BYTE *)(v3 + 77) & 4) != 0 )
      {
        if ( *(_QWORD *)(v3 + 8) )
          sub_41F00(a1, i, *(_QWORD *)(*(_QWORD *)v3 + 16LL));
      }
    }
  }
}
