void __fastcall sub_3C6FE0(__int64 a1)
{
  __int64 v1; // rax

  if ( !*(_BYTE *)(a1 + 112) )
  {
    v1 = *(_QWORD *)(a1 + 104);
    if ( v1 )
    {
      *(_BYTE *)(*(_QWORD *)(v1 + 1000) + 57LL) ^= 1u;
      sub_3C6D20(a1);
    }
  }
}
