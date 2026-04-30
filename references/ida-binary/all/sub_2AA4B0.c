__int64 __fastcall sub_2AA4B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi

  v1 = sub_17D870(a1);
  v2 = v1;
  if ( !v1 )
    goto LABEL_4;
  if ( *(_BYTE *)(v1 + 741) )
  {
    v2 = *(_QWORD *)(v1 + 896);
LABEL_4:
    sub_2BEB60(v2);
    return 1;
  }
  sub_2BEB60(0);
  return 1;
}
