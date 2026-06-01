void __fastcall sub_F2A660(__int64 a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v4; // rdi

  v2 = *(__int64 **)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 1096);
  if ( v2 )
  {
    sub_995540(v4, "case ");
    sub_F2A610(a1, *v2);
  }
  else
  {
    sub_995540(v4, "default");
  }
  if ( *(_BYTE *)(a2 + 16) )
    sub_995540(*(_QWORD *)(a1 + 1096), " selected");
}
