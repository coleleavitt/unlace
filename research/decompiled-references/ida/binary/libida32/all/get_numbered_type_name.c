__int64 __fastcall get_numbered_type_name(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  if ( !a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1480) + 8LL);
  v2 = sub_630800(a1, a2);
  if ( !v2 )
    return 0;
  v3 = v2 + 4;
  if ( *(_BYTE *)(v2 + 4) != 35 || *(_BYTE *)(v2 + 5) )
    return v3;
  return v2 + 5;
}

