void __fastcall __spoils<> sub_E1E330(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( !*(_BYTE *)(a1 + 24) )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
      *(_QWORD *)(v2 + 8) = a2;
    *(_QWORD *)(a2 + 16) = v2;
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a1 + 8) = a2;
  }
}
