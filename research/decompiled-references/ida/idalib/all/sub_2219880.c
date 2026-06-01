void __fastcall __spoils<> sub_2219880(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
      *(_QWORD *)(v2 + 24) = a2;
    *(_QWORD *)(a2 + 32) = v2;
    *(_QWORD *)(a1 + 8) = a2;
  }
}
