void __fastcall sub_3C7010(__int64 a1)
{
  __int64 v1; // rax

  if ( !*(_BYTE *)(a1 + 112) )
  {
    v1 = *(_QWORD *)(a1 + 104);
    if ( v1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v1 + 1000) + 57LL) )
        sub_3C6D20(a1);
    }
  }
}
