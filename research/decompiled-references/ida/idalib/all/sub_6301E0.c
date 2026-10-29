__int64 __fastcall sub_6301E0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned int *v3; // rax

  v2 = *(_QWORD *)(a2 + 16);
  v3 = (unsigned int *)(*(_QWORD *)(a1 + 16) + *(_QWORD *)(a2 + 8));
  if ( v2 == 4 )
    return *v3;
  if ( v2 > 4 )
  {
    if ( v2 != 8 )
      goto LABEL_10;
    return *(_QWORD *)v3;
  }
  else
  {
    if ( v2 != 1 )
    {
      if ( v2 == 2 )
        return *(unsigned __int16 *)v3;
LABEL_10:
      if ( !under_debugger )
        interr(1748);
      BUG();
    }
    return *(unsigned __int8 *)v3;
  }
}
