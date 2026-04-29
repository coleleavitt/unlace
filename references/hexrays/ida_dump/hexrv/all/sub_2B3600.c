__int64 __fastcall sub_2B3600(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax

  if ( a2 == *(_QWORD *)(a1 + 1112) )
  {
    v3 = *(_QWORD *)(a1 + 1120);
  }
  else
  {
    v5 = sub_2B1480(a2, 0);
    v3 = v5;
    if ( v5 != -1 )
    {
      *(_QWORD *)(a1 + 1112) = a2;
      *(_QWORD *)(a1 + 1120) = v5;
    }
  }
  return netnode_delblob(v3, 0, 109);
}
