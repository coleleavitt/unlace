void __fastcall sub_E232A0(__int64 a1)
{
  __int64 v1; // rbp

  if ( !*(_DWORD *)(a1 + 24) )
  {
    v1 = *(_QWORD *)(a1 + 32);
    if ( v1 )
    {
      sub_E1E360(*(_QWORD *)(a1 + 32), (_QWORD *)a1);
      *(_QWORD *)(a1 + 32) = 0;
      sub_E1E3B0(v1);
    }
  }
}
