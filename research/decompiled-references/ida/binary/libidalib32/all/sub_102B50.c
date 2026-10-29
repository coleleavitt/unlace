__int64 __fastcall sub_102B50(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  const char *v3; // rbp
  __int64 v5; // rax

  v3 = "Apply changes";
  sub_102AE0(a3);
  if ( !a3[1232] )
    v3 = "Edit...";
  v5 = sub_19D0F0("hexview:EditOrApplyChanges");
  if ( v5 )
    sub_19C000(v5, 1, v3);
  return 1;
}

