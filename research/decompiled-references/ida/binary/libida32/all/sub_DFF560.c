void __fastcall sub_DFF560(__int64 a1)
{
  __int64 v1; // rbp

  if ( !*(_DWORD *)(a1 + 24) )
  {
    v1 = *(_QWORD *)(a1 + 32);
    if ( v1 )
    {
      sub_DFA620(*(_QWORD *)(a1 + 32), (_QWORD *)a1);
      *(_QWORD *)(a1 + 32) = 0;
      sub_DFA670(v1);
    }
  }
}

